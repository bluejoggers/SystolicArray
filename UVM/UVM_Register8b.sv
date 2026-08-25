//UVM Testbench for Register8b module

//Register8b: Generic parametrized register module with active high reset and synchronous enable


//Parameterized 8-bit register module for Activation, Weight and Sum-in Registers in PE_Datapath.v
//BITS = 8 for Activation and Weight Registers
//BITS = 16 for Sum-in Register

import uvm_pkg::*;
`include "uvm_macros.svh"


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

//Interface

interface reg_if #(
    parameter int BITS = 8
)(
    input bit clock
);
    logic reset;
    logic enable;

    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;
endinterface

//Transaaction object

class reg_txn #(
    parameter int BITS = 8
) extends uvm_sequence_item;
    rand bit enable;

    rand bit [BITS-1:0] data_in;
    bit [BITS-1:0] data_out;

    `uvm_object_param_utils_begin(reg_txn #(BITS))
        `uvm_field_int(enable, UVM_ALL_ON)
        `uvm_field_int(data_in, UVM_ALL_ON)
        `uvm_field_int(data_out, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "reg_txn");
        super.new(name);
    endfunction
endclass

//Driver

class reg_driver extends uvm_driver #(
    reg_txn
);
    `uvm_component_utils(reg_driver)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual reg_if vif;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db #(virtual reg_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_type_name(), "Virtual handle not found")
        end
    endfunction

    virtual task run_phase (uvm_phase phase);
        reg_txn txn;

        forever begin
            seq_item_port.get_next_item(txn);

            @(posedge vif.clock);
            vif.enable <= txn.enable;
            vif.data_in <= txn.data_in;

            @(posedge vif.clock);
            if(vif.enable) begin
                @(posedge vif.clock);
                txn.data_out = vif.data_out;
            end
            seq_item_port.item_done();
        end
    endtask
endclass

//Monitor

class reg_monitor extends uvm_monitor;
    `uvm_component_utils(reg_monitor)

    virtual reg_if vif;

    uvm_analysis_port #(reg_txn) monitor_analysis_port;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        monitor_analysis_port = new("monitor_analysis_port", this);

        if(!uvm_config_db #(virtual reg_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_type_name(), "Virtual Interface not found!")
        end
    endfunction

    virtual task run_phase (uvm_phase phase);
        reg_txn txn;

        forever begin
            @(posedge vif.clock);

            if (vif.enable) begin
                txn = reg_txn#(8)::type_id::create("txn");

                txn.enable = vif.enable;
                txn.data_in = vif.data_in;

                @(posedge vif.clock);

                txn.data_out = vif.data_out;

                monitor_analysis_port.write(txn);
            end
        end
    endtask
endclass

//Subscriber

class reg_coverage extends uvm_subscriber #(
    reg_txn
);
    `uvm_component_utils(reg_coverage)

    reg_txn txn;

    function new (string name, uvm_component parent);
        super.new(name, parent);
        reg_cg = new();
    endfunction     

    covergroup reg_cg;
        option.per_instance = 1;
        
        cp_enable : coverpoint txn.enable;
        cp_data_in : coverpoint txn.data_in {
            bins all_0s = {8'h00};
            bins all_1s = {8'hFF};
            bins max_pos = {8'h7F};
            bins max_neg = {8'h80};
            bins others = default;
        }
    endgroup

    virtual function void write (T t);
        txn = t;

        reg_cg.sample();
        `uvm_info(get_type_name(), $sformatf("[SAMPLED DATA] %0h", txn.data_in), UVM_HIGH)
    endfunction

    virtual function void report_phase (uvm_phase phase);
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
        `uvm_info(get_type_name(), "       FUNCTIONAL COVERAGE REPORT       ", UVM_NONE)
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
        `uvm_info(get_type_name(), $sformatf(" Total Covergroup Hit: %0.2f%%", reg_cg.get_inst_coverage()), UVM_NONE)
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
    endfunction
endclass

//Sequnecer 

class reg_sequencer extends uvm_sequencer #(
    reg_txn
); 
    `uvm_component_utils(reg_sequencer)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

//Sequence

class reg_sequence extends uvm_sequence #(
    reg_txn
);
    `uvm_object_utils(reg_sequence)

    function new (string name = "reg_sequence");
        super.new(name);
    endfunction

    virtual task body ();
        repeat (200) begin
            req = reg_txn#(8)::type_id::create("req");

            start_item(req);
            assert(req.randomize());
            finish_item(req);
        end
    endtask
endclass

//Scoreboard

class reg_scoreboard #(
    parameter int BITS = 8
) extends uvm_scoreboard;
    `uvm_component_param_utils(reg_scoreboard #(BITS))

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    uvm_analysis_imp #(reg_txn #(BITS), reg_scoreboard #(BITS)) scoreboard_imp;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        scoreboard_imp = new("scoreboard_imp", this);
    endfunction

    virtual function void write (reg_txn #(BITS) txn);
        if (txn.enable) begin
            if (txn.data_in == txn.data_out) begin
                `uvm_info(get_type_name(), $sformatf("(%0t): [PASS] Match! [DATA IN] %0h [DATA OUT] %0h", $time, txn.data_in, txn.data_out), UVM_LOW)
            end
            else begin
                `uvm_info(get_type_name(), $sformatf("(%0t): [FAIL] Mismatch! [DATA IN] %0h [DATA OUT] %0h", $time, txn.data_in, txn.data_out), UVM_LOW)
            end
        end
    endfunction    
endclass

class reg_agent extends uvm_agent;
    `uvm_component_utils(reg_agent)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    reg_monitor monitor_in_agent;
    reg_driver driver_in_agent;
    reg_coverage coverage_in_agent;
    reg_sequencer sequencer_in_agent;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active()) begin
            driver_in_agent = reg_driver::type_id::create("driver_in_agent", this);
            sequencer_in_agent = reg_sequencer::type_id::create("sequencer_in_agent", this);
        end

        monitor_in_agent = reg_monitor::type_id::create("monitor_in_agent", this);
        coverage_in_agent = reg_coverage::type_id::create("coverage_in_agent", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        if (get_is_active()) begin
            driver_in_agent.seq_item_port.connect(sequencer_in_agent.seq_item_export);
        end

        monitor_in_agent.monitor_analysis_port.connect(coverage_in_agent.analysis_export);
    endfunction
endclass

class reg_env extends uvm_env;
    `uvm_component_utils(reg_env)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    reg_agent agent_in_env;
    reg_scoreboard scoreboard_in_env;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        agent_in_env = reg_agent::type_id::create("agent_in_env", this);
        scoreboard_in_env = reg_scoreboard#(8)::type_id::create("scoreboard_in_env", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        agent_in_env.monitor_in_agent.monitor_analysis_port.connect(scoreboard_in_env.scoreboard_imp);
    endfunction
endclass

class reg_test extends uvm_test;
    `uvm_component_utils(reg_test)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    reg_env env_in_test;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        env_in_test = reg_env::type_id::create("reg_env", this);
    endfunction

    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction

    virtual task run_phase (uvm_phase phase);
        reg_sequence sequence_in_test = reg_sequence::type_id::create("sequence_in_test");

        phase.raise_objection(this);
        sequence_in_test.start(env_in_test.agent_in_env.sequencer_in_agent);
        phase.drop_objection(this);
    endtask
endclass

module UVM_Register8b;
    bit clock;
    always #5 clock = ~clock;

    reg_if rif(clock);

    register DUT(
        .clk(clock),

        .rst(rif.reset),
        .en(rif.enable),

        .data_in(rif.data_in),
        .data_out(rif.data_out)
    );

    initial begin
        $dumpfile("Register8b_dumpfile.vcd");
        $dumpvars;

        clock = 1'b0;
        rif.reset = 1'b1;

        #22 rif.reset = 1'b0;
    end

    initial begin
        uvm_config_db #(virtual reg_if)::set(null, "*", "vif", rif);
        run_test("reg_test");
    end
endmodule