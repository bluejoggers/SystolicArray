module switch #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16,
    parameter ADDR_DIV = 8'h3f
)(
    input clock,
    input reset,
    input valid,

    input [ADDR_WIDTH-1:0] addr,
    input [DATA_WIDTH-1:0] data,

    output reg [DATA_WIDTH-1:0] data_a,
    output reg [ADDR_WIDTH-1:0] addr_a,

    output reg [DATA_WIDTH-1:0] data_b,
    output reg [ADDR_WIDTH-1:0] addr_b
);

    always @(posedge clock) begin
        if (reset) begin
            data_a <= 0;
            addr_a <= 0;
            data_b <= 0;
            addr_b <= 0;
        end else begin
            if (valid) begin
            if (addr <= ADDR_DIV) begin
                data_a <= data;
                addr_a <= addr;
                data_b <= 0;
                addr_b <= 0;
            end else begin
                data_a <= 0;
                addr_a <= 0;
                data_b <= data;
                addr_b <= addr;
            end
            end
        end
    end
endmodule 

class txn_object #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    rand bit valid;

    rand logic [ADDR_WIDTH-1:0] address;
    rand logic [DATA_WIDTH-1:0] data;

    logic [DATA_WIDTH-1:0] data_a;
    logic [DATA_WIDTH-1:0] data_b;
    logic [ADDR_WIDTH-1:0] address_a;
    logic [ADDR_WIDTH-1:0] address_b;

    function void print(string tag = "txn_object");
        $display("T=%0t [%s] ADDR=0x%0h DATA=0x%0h ADDR_A=0x%0h DATA_A=0x%0h ADDR_B=0x%0h DATA_B=0x%0h",
              			$time, tag, address, data, address_a, data_a, address_b, data_b);
    endfunction
endclass

interface switch_if #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
)(
    input logic clock
);
    logic reset;
    logic valid;

    logic [ADDR_WIDTH-1:0] address;
    logic [DATA_WIDTH-1:0] data;

    logic [DATA_WIDTH-1:0] data_a;
    logic [DATA_WIDTH-1:0] data_b;
    logic [ADDR_WIDTH-1:0] address_a;
    logic [ADDR_WIDTH-1:0] address_b;
endinterface

class driver #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16
);
    virtual switch_if #(ADDR_WIDTH, DATA_WIDTH) virtual_if;
    event driver_done;

    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) driver_mbox;

    task run();
        $display("T=%0t [DRIVER] Running...", $time);
        
        @(posedge virtual_if.clock);
        forever begin
            txn_object #(ADDR_WIDTH, DATA_WIDTH)  txn;
            $display("T=%0t [DRIVER] Waiting for transaction from mailbox...", $time);

            driver_mbox.get(txn); // Get transaction from mailbox
            txn.print("DRIVER"); // Print transaction details

            virtual_if.valid <= txn.valid;

            virtual_if.address <= txn.address;
            virtual_if.data <= txn.data;

            @(posedge virtual_if.clock);
            ->driver_done; // Notify that the transaction has been driven
        end
    endtask
endclass

// The generator class is used to generate a random
// number of transactions with random addresses and data
// that can be driven to the design

class generator #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) generator_mbox;
    event generator_done;

    int num_txns = 50;

    task run();
        $display("T=%0t [GENERATOR] Running...", $time);
        for (int i=0; i<num_txns;i++) begin 
            txn_object #(ADDR_WIDTH, DATA_WIDTH) txn = new();
            assert(txn.randomize()==1) else $fatal("Randomization failed for transaction %0d", i);

            txn.print("GENERATOR"); // Print transaction details
            generator_mbox.put(txn);
            ->generator_done; // Notify that a transaction has been generated
        end

        $display("T=%0t [GENERATOR] Finished generating %0d transactions", $time, num_txns);
    endtask
endclass

class monitor #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) monitor_mbox;
    virtual switch_if #(ADDR_WIDTH, DATA_WIDTH) virtual_if;

    txn_object #(ADDR_WIDTH, DATA_WIDTH) pipeline_queue[$];

    task run();
        $display("T=%0t [MONITOR] Running...", $time);
        sample_port();
    endtask

    task sample_port();
        forever begin
            @(posedge virtual_if.clock);

            if(pipeline_queue.size() > 0) begin
                txn_object #(ADDR_WIDTH, DATA_WIDTH) txn_out;
                txn_out = pipeline_queue.pop_front();

                txn_out.address_a = virtual_if.address_a;
                txn_out.data_a = virtual_if.data_a;
                txn_out.address_b = virtual_if.address_b;
                txn_out.data_b = virtual_if.data_b;

                monitor_mbox.put(txn_out);
                txn_out.print("MONTIOR");
            end

            if(!virtual_if.reset && virtual_if.valid) begin 
                txn_object #(ADDR_WIDTH, DATA_WIDTH) txn_in = new();

                txn_in.address = virtual_if.address;
                txn_in.data = virtual_if.data;

                pipeline_queue.push_back(txn_in);
            end
        end
    endtask
endclass

class scoreboard #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) scoreboard_mbox;

    task run();
        forever begin 
            txn_object #(ADDR_WIDTH, DATA_WIDTH) txn;
            scoreboard_mbox.get(txn);

            if(txn.address inside {[0:'h3f]}) begin 
                if(txn.address_a != txn.address || txn.data_a != txn.data) begin 
                    $display("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h", $time, txn.address, txn.data, txn.address_a, txn.data_a);
                end
                else begin
                    $display("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_A:0x%0h, Data_A:0x%0h", $time, txn.address, txn.data, txn.address_a, txn.data_a);
                end
                end
            else begin 
                if(txn.address_b != txn.address || txn.data_b != txn.data) begin 
                    $display("T=%0t [SCOREBOARD] ERROR! Address:0x%0h, Data:0x%0h | Address_B:0x%0h, Data_B:0x%0h", $time, txn.address, txn.data, txn.address_b, txn.data_b);
                end
                else begin
                    $display("T=%0t [SCOREBOARD] PASS! Address:0x%0h, Data:0x%0h | Address_B:0x%0h, Data_B:0x%0h", $time, txn.address, txn.data, txn.address_b, txn.data_b);
                end
                end
            end
    endtask
endclass

class environment #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
);
    driver #(ADDR_WIDTH, DATA_WIDTH) DRV;
    generator #(ADDR_WIDTH, DATA_WIDTH) GEN;
    monitor #(ADDR_WIDTH, DATA_WIDTH) MON;
    scoreboard #(ADDR_WIDTH, DATA_WIDTH) SCB;

    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) GEN_DRV_MBX;
    mailbox #(txn_object #(ADDR_WIDTH, DATA_WIDTH)) MON_SCB_MBX;

    event drv_done;

    virtual switch_if #(ADDR_WIDTH, DATA_WIDTH) vif;

    function new();
        DRV = new();
        GEN = new();
        MON = new();
        SCB = new();

        GEN_DRV_MBX = new();
        MON_SCB_MBX = new();

        DRV.driver_mbox = GEN_DRV_MBX;
        GEN.generator_mbox = GEN_DRV_MBX;

        MON.monitor_mbox = MON_SCB_MBX;
        SCB.scoreboard_mbox = MON_SCB_MBX;
    endfunction

    virtual task run();
        DRV.virtual_if = vif;
        MON.virtual_if = vif;

        fork
            DRV.run();
            GEN.run();
            MON.run();
            SCB.run();
        join_none
    endtask
endclass

class test;
    environment ENV;

    function new();
        ENV = new();
    endfunction

    task run();
        ENV.run();
    endtask
endclass

module tb #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16,
    parameter ADDR_DIV = 8'h3f
);
    reg clock;
    always #5 clock = ~clock;

    switch_if #(ADDR_WIDTH, DATA_WIDTH) sif(clock);
    test T;
    
    switch #(ADDR_WIDTH, DATA_WIDTH, ADDR_DIV) DUT (
        .clock(clock),
        .reset(sif.reset),
        .valid(sif.valid),
        .addr(sif.address),
        .data(sif.data),
        .addr_a(sif.address_a),
        .data_a(sif.data_a),
        .addr_b(sif.address_b),
        .data_b(sif.data_b)
    );

    initial begin 
        $dumpfile("switch_testbench.vcd");
        $dumpvars;

        T = new();
        clock = 1'b0;
        sif.reset <= 1'b1;

        #20 sif.reset <= 1'b0;
        T.ENV.vif = sif;
        T.run();

        #1000 $finish;
    end
endmodule