// The scoreboard is responsible to check data integrity. Since the design
// stores data it receives for each address, scoreboard helps to check if the
// same data is received when the same address is read at any later point
// in time. So the scoreboard has a "memory" element which updates it
// internally for every write operation.

class scoreboard #(parameter int BITS = 8);

    mailbox #(txn_object #(BITS)) in_mon2scb;
    mailbox #(txn_object #(BITS)) out_mon2scb;

    //GOlden Reference Model for DUT
    local bit [BITS-1:0] expected_data = '0;
    local bit [BITS-1:0] expected_queue[$];

    //Dagnostic Counters
    int match = 0;
    int mismatch = 0;
        
    function new(mailbox #(txn_object #(BITS)) in_mon2scb,
                  mailbox #(txn_object #(BITS)) out_mon2scb);
        this.in_mon2scb = in_mon2scb;
        this.out_mon2scb = out_mon2scb;
    endfunction

    task run();
        $display("T=%0t [SOCREBOARD] Starting", $time);

        fork
            predict();
            check();
        join_none
    endtask

    local task predict();
        forever begin 
            txn_object txn;
            in_mon2scb.get(txn);

            if (txn.reset) begin 
                expected_data = '0;
            end
            else if (txn.enable) begin
                expected_data = txn.data;
            end

            expected_queue.push_back(expected_data);
        end
    endtask

    local task check();
        forever begin 
            txn_object txn;
            bit [BITS-1:0] expected_data_out;

            out_mon2scb.get(txn);

            if(expected_queue.size() == 0) begin 
                $error("T=%0t [SCB ERROR] Received DUT output but expected queue is empty!", $time);
            end 
            else begin
                expected = expected_queue.pop_front();
                if(txn.data_out == expected) begin 
                    display("T=%0t [SCB PASS] Matches! Actual: 0x%0h | Expected: 0x%0h", 
                             $time, out_tr.data_out, expected);
                    match_count++;
                end
                else begin 
                    $error("T=%0t [SCB ERROR] Mismatch! Actual: 0x%0h | Expected: 0x%0h", 
                             $time, out_tr.data_out, expected);
                             mismatch_count++;
                end
            end
        end
    endtask

    function void report();
        $display("\n========================================");
        $display("        SCOREBOARD FINAL REPORT         ");
        $display("========================================");
        $display(" Matches:    %0d", match_count);
        $display(" Mismatches: %0d", mismatch_count);
        $display("========================================\n");
    endfunction

endclass