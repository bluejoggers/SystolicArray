// This is the base transaction object that will be used
// in the environment to initiate new transactions and
// capture transactions at DUT interface

class txn_object #(
    parameter int BITS = 8
);

    rand logic [BITS-1:0] data;
    rand logic enable;
    rand logic reset;

    logic [BITS-1:0] data_out;

    function void print(string tag = "txn_object");
        $display("T=%0t [%s] DATA=0x%0h EN=%0d RESET=0x%0h",
              			$time, tag, data, enable, reset);
    endfunction
endclass 

// The interface allows verification components to access DUT signals
// using a virtual interface handle

interface reg_if #(
    parameter int BITS = 8
)(
    input bit clk
);
    logic reset;
    logic enable;
    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;
endinterface 

// The driver is responsible for driving transactions to the DUT
// All it does is to get a transaction from the mailbox if it is
// available and drive it out into the DUT interface.

class driver #(
    parameter int BITS = 8
);
    virtual reg_if virtual_if;
    event driver_done;

    mailbox #(txn_object #(BITS)) driver_mbox;

    task run();
        $display("T=%0t [DRIVER] Waiting for transaction from mailbox", $time);

        @(posedge virtual_if.clk);
        forever begin
            txn_object txn;

            $display("T=%0t [DRIVER] Waiting for transaction from mailbox", $time);
            driver_mbox.get(txn); // Get transaction from mailbox
            txn.print("DRIVER"); // Print transaction details

            virtual_if.reset <= txn.reset;
            virtual_if.enable <= txn.enable;
            virtual_if.data_in <= txn.data;

            @(posedge virtual_if.clk);
            ->driver_done; // Notify that the transaction has been driven
        end
    endtask
endclass 

// The monitor has a virtual interface handle with which it can monitor
// the events happening on the interface. It sees new transactions and then
// captures information into a packet and sends it to the scoreboard
// using another mailbox.

class monitor #(
    parameter int BITS = 8
);
    virtual reg_if virtual_if;
    mailbox #(txn_object #(BITS)) monitor_mbox;

    function new();
        monitor_mbox = new();
    endfunction


    task run();
        $display("T=%0t [MONITOR] Starting to monitor DUT interface", $time);

        // Check forever at every clock edge to see if there is a
        // valid transaction and if yes, capture info into a class
        // object and send it to the scoreboard when the transaction
        // is over.

        forever begin
            @(posedge virtual_if.clk);
            if (virtual_if.enable) begin
                txn_object txn = new();
                
                txn.data = virtual_if.data_in;
                txn.data_out = virtual_if.data_out;
                txn.enable = virtual_if.enable;
                txn.reset = virtual_if.reset;

                txn.print("MONITOR");
                monitor_mbox.put(txn);
            end
        end
    endtask
endclass

// The scoreboard is responsible to check data integrity. Since the design
// stores data it receives for each address, scoreboard helps to check if the
// same data is received when the same address is read at any later point
// in time. So the scoreboard has a "memory" element which updates it
// internally for every write operation.

class scoreboard #(parameter int BITS = 8);

    mailbox #(txn_object #(BITS)) in_mon2scb;
    mailbox #(txn_object #(BITS)) out_mon2scb;

    //Golden Reference Model for DUT
    local bit [BITS-1:0] expected_data = '0;
    local bit [BITS-1:0] expected_queue[$];

    //Diagnostic Counters
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
                expected_data_out = expected_queue.pop_front();
                if(txn.data_out == expected_data_out) begin 
                    $display("T=%0t [SCB PASS] Matches! Actual: 0x%0h | Expected: 0x%0h", 
                             $time, txn.data_out, expected_data_out);
                    match++;
                end
                else begin 
                    $error("T=%0t [SCB ERROR] Mismatch! Actual: 0x%0h | Expected: 0x%0h", 
                             $time, txn.data_out, expected_data_out);
                             mismatch++;
                end
            end
        end
    endtask

    function void report();
        $display("\n========================================");
        $display("        SCOREBOARD FINAL REPORT         ");
        $display("========================================");
        $display(" Matches:    %0d", match);
        $display(" Mismatches: %0d", mismatch);
        $display("========================================\n");
    endfunction

endclass

// The environment is a container object simply to hold all verification
// components together. This environment can then be reused later and all
// components in it would be automatically connected and available for use
// This is an environment without a generator.

class environment #(
    parameter int BITS = 8
);
    driver DRV;
    monitor MONITOR_in;
    monitor MONITOR_out;
    scoreboard #(BITS) SCB;

    virtual reg_if #(BITS) virtual_if;

    function new();
        DRV = new();
        MONITOR_in = new();
        MONITOR_out = new();
        SCB = new(MONITOR_in.monitor_mbox, MONITOR_out.monitor_mbox);
    endfunction 

    virtual task run();
        DRV.virtual_if = virtual_if;
        MONITOR_in.virtual_if = virtual_if;
        MONITOR_out.virtual_if = virtual_if;
        SCB.in_mon2scb = MONITOR_in.monitor_mbox;
        SCB.out_mon2scb = MONITOR_out.monitor_mbox;

        fork 
            DRV.run();
            MONITOR_in.run();
            MONITOR_out.run();
            SCB.run();
        join_none
    endtask

endclass

class test #(
    parameter int BITS = 8);
    environment #(BITS) ENV;
    mailbox #(txn_object #(BITS)) DRV_MBOX;

    function new();
        ENV = new();
        DRV_MBOX = new();
    endfunction

    virtual task run();
        ENV.DRV.driver_mbox = DRV_MBOX;

        fork 
            ENV.run();
        join_none

        apply_stim();
    endtask

    virtual task apply_stim();
        txn_object txn;
        $display("T=%0t [TEST] Starting stimulus application", $time);

        txn = new();
        txn.reset  = 1'b1;
        txn.enable = 1'b0;
        txn.data   = '0;
        DRV_MBOX.put(txn);

        // Step 2: Operational testing with reset held low (reset = 0)
        repeat (10) begin 
            txn = new();
            assert(txn.randomize() with {
                reset == 1'b0; // Force reset inactive during normal operations
            
                // Optional: Weight enable so 80% of transactions write, 20% hold state
                enable dist { 1 := 80, 0 := 20 };
            }) else $fatal("Randomization failed!");

        DRV_MBOX.put(txn);
        end
    endtask 

endclass

module tb;
    parameter int BITS = 8;
    reg clk;
    always #10 clk = ~clk;

    reg_if #(BITS) rif(.clk(clk));
    test #(BITS) T;

    register DUT(
        .clk(clk),
        .rst(rif.reset),
        .en(rif.enable),
        .data_in(rif.data_in),
        .data_out(rif.data_out)
    );

    initial begin 
        $dumpfile("Register8b_testbench.vcd");
        $dumpvars;
        T = new();
        clk = 0;

        rif.reset = 1; 
        T.ENV.virtual_if = rif;
        T.run();

        #200 $finish;
    end
endmodule 