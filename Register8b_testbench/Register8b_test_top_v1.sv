// ============================================================================
// DUT: 8-bit Register
// ============================================================================
module register #(
    parameter BITS = 8
)(
    input wire clk,
    input wire rst,
    input wire en,
    input wire [BITS-1:0] data_in,
    output reg [BITS-1:0] data_out
);

    always @(posedge clk) begin 
        if (rst) data_out <= {BITS{1'b0}};
        else if (en) data_out <= data_in;
    end

endmodule 

// ============================================================================
// Transaction Object
// ============================================================================
class txn_object #(parameter int BITS = 8);
    rand logic [BITS-1:0] data;
    rand logic enable;
    rand logic reset;

    logic [BITS-1:0] data_out;

    function void print(string tag = "txn_object");
        $display("T=%0t [%s] DATA=0x%0h EN=%0b RESET=%0b DATA_OUT=0x%0h",
                 $time, tag, data, enable, reset, data_out);
    endfunction
endclass 

// ============================================================================
// Interface
// ============================================================================
interface reg_if #(parameter int BITS = 8)(input bit clk);
    logic reset;
    logic enable;
    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;
endinterface 

// ============================================================================
// Driver
// ============================================================================
class driver #(parameter int BITS = 8);
    virtual reg_if #(BITS) virtual_if;
    event driver_done;

    mailbox #(txn_object #(BITS)) driver_mbox;

    task run();
        $display("T=%0t [DRIVER] Starting", $time);
        forever begin
            txn_object #(BITS) txn; 
            driver_mbox.get(txn); 
            
            @(posedge virtual_if.clk); 
            virtual_if.reset   <= txn.reset;
            virtual_if.enable  <= txn.enable;
            virtual_if.data_in <= txn.data;

            txn.print("DRIVER");
            ->driver_done; 
        end
    endtask
endclass 

// ============================================================================
// Unified Monitor (Security Camera Snapshot Architecture)
// ============================================================================
class monitor #(parameter int BITS = 8);
    virtual reg_if #(BITS) virtual_if;
    mailbox #(txn_object #(BITS)) monitor_mbox;

    function new();
        monitor_mbox = new();
    endfunction

    task run();
        $display("T=%0t [MONITOR] Starting unified bus monitoring", $time);
        
        forever begin
            @(posedge virtual_if.clk);
            #1; // Wait 1 time-step for DUT non-blocking assignments to settle
            
            begin
                txn_object #(BITS) txn = new();
                
                // Grab the current inputs (For the next state prediction)
                txn.reset  = virtual_if.reset;
                txn.enable = virtual_if.enable;
                txn.data   = virtual_if.data_in;
                
                // Grab the current output (Result of the previous state)
                txn.data_out = virtual_if.data_out;

                txn.print("MONITOR");
                monitor_mbox.put(txn);
            end
        end
    endtask
endclass

// ============================================================================
// Scoreboard
// ============================================================================
class scoreboard #(parameter int BITS = 8);
    mailbox #(txn_object #(BITS)) mon2scb; 

    // State tracking
    local bit [BITS-1:0] current_state = '0; 
    local bit [BITS-1:0] expected_queue[$];

    int match = 0;
    int mismatch = 0;
        
    function new(mailbox #(txn_object #(BITS)) mon2scb);
        this.mon2scb = mon2scb;
    endfunction

    task run();
        $display("T=%0t [SCOREBOARD] Starting", $time);
        
        forever begin 
            txn_object #(BITS) txn;
            mon2scb.get(txn); 

            // PHASE 1: CHECK (Evaluate data_out from the previous cycle)
            if (expected_queue.size() > 0) begin 
                bit [BITS-1:0] expected_data_out = expected_queue.pop_front();
                
                if (txn.data_out == expected_data_out) begin 
                    $display("T=%0t [SCB PASS] Match! Actual: 0x%0h | Expected: 0x%0h", 
                             $time, txn.data_out, expected_data_out);
                    match++;
                end else begin 
                    $error("T=%0t [SCB ERROR] Mismatch! Actual: 0x%0h | Expected: 0x%0h", 
                           $time, txn.data_out, expected_data_out);
                    mismatch++;
                end
            end

            // PHASE 2: PREDICT (Calculate expected output for the next cycle)
            if (txn.reset) begin 
                current_state = '0;
            end else if (txn.enable) begin
                current_state = txn.data;
            end
            
            expected_queue.push_back(current_state);
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

// ============================================================================
// Environment
// ============================================================================
class environment #(parameter int BITS = 8);
    driver #(BITS) DRV;
    monitor #(BITS) MON;     
    scoreboard #(BITS) SCB;

    virtual reg_if #(BITS) virtual_if;

    function new();
        DRV = new();
        MON = new();
        SCB = new(MON.monitor_mbox); // Wire unified monitor to scoreboard
    endfunction 

    virtual task run();
        DRV.virtual_if = virtual_if;
        MON.virtual_if = virtual_if;

        fork 
            DRV.run();
            MON.run();
            SCB.run();
        join_none
    endtask
endclass

// ============================================================================
// Test
// ============================================================================
class test #(parameter int BITS = 8);
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
        
        #100; // Allow time for final packets to clear the scoreboard
        ENV.SCB.report();
    endtask

    virtual task apply_stim();
        txn_object #(BITS) txn; 
        $display("T=%0t [TEST] Starting stimulus application", $time);

        // Explicit Reset Setup
        txn = new();
        txn.reset  = 1'b1;
        txn.enable = 1'b0;
        txn.data   = '0;
        DRV_MBOX.put(txn);

        // Operational testing
        repeat (10) begin 
            txn = new();
            
            // Standard SV Randomization
            assert(txn.randomize() with {
                reset == 1'b0; 
                enable dist { 1 := 80, 0 := 20 };
            } == 1) else $fatal("Randomization failed!");
            
            DRV_MBOX.put(txn);
        end
    endtask 
endclass

// ============================================================================
// Top Module
// ============================================================================
module tb;
    parameter BITS = 8;
    bit clk;

    always #10 clk = ~clk;

    // Interface Instantiation
    reg_if #(BITS) rif(.clk(clk));

    // DUT Instantiation
    register #(
        .BITS(BITS)
    ) DUT (
        .clk(clk),
        .rst(rif.reset),
        .en(rif.enable),
        .data_in(rif.data_in),
        .data_out(rif.data_out)
    );

    test #(BITS) T;

    initial begin 
        T = new();
        
        $dumpfile("Register8b_testbench.vcd");
        $dumpvars(0, tb); 
        
        clk = 0;
        T.ENV.virtual_if = rif;
        T.run();

        #250 $finish;
    end
endmodule