//UVM Testbench for Activator module

//Register8b: Generic parametrized combinational block module that performs the ReLU function via hardware


import uvm_pkg::*;
`include "uvm_macros.svh"

module relu #(
    parameter BITS = 32
)(
    input wire [BITS-1:0] data_in,
    output wire [BITS-1:0] data_out
);

    assign data_out = (data_in[BITS-1] == 1'b1) ? {BITS{1'b0}} : data_in;

endmodule 

interface act_if #(
    parameter int BITS = 32
)(
    input bit clock
);
    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;
endinterface

class act_txn #(
    parameter int BITS = 32
) extends uvm_sequence_item;
    rand logic [BITS-1:0] data_in;
    
    logic [BITS-1:0] data_out;

    `uvm_object_param_utils_begin(act_txn #(BITS))
        `uvm_field_int(data_in, UVM_ALL_ON)
        `uvm_field_int(data_out, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "act_txn");
        super.new(name);
    endfunction
endclass

class act_driver extends uvm_driver #(
    act_txn
);
    `uvm_component_utils(act_driver)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual act_if vif;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db #(virtual act_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_type_name(), "Virtual handle not found!");
        end
    endfunction

    virtual task run_phase (uvm_phase phase);
        act_txn txn;

        forever begin
            seq_item_port.get_next_item(txn);

            @(posedge vif.clock);
            vif.data_in <= txn.data_in;

            seq_item_port.item_done();
        end
    endtask
endclass

class act_monitor extends uvm_monitor;
    `uvm_component_utils(act_monitor)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual act_if vif;
    
    uvm_analysis_port #(act_txn) monitor_analysis_port;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        monitor_analysis_port = new("monitor_analysis_port", this);

        if (!uvm_config_db #(virtual act_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_type_name(), "Virtual Interface not found!")
        end
    endfunction

    virtual task run_phase(uvm_phase phase);
        act_txn txn;
        
        forever begin
            @(negedge vif.clock);

            txn = act_txn#(32)::type_id::create("txn");

            txn.data_in = vif.data_in;
            txn.data_out = vif.data_out;

            monitor_analysis_port.write(txn);
        end
    endtask
endclass

class act_coverage extends uvm_subscriber #(
    act_txn 
);
    `uvm_component_utils(act_coverage)

    act_txn txn;

    function new (string name, uvm_component parent);
        super.new(name, parent);

        act_cg = new();
    endfunction

    covergroup act_cg;
        option.per_instance = 1;

        cp_data_in : coverpoint txn.data_in {
            bins all_0s = {32'h00000000};
            bins min_pos = {32'h00000001};
            bins max_pos = {32'h7FFFFFFF};
            bins max_neg = {32'h80000000};
            bins all_1s = {32'hFFFFFFFF};
            bins typical_pos = {[32'h0000_0002 : 32'h7FFF_FFFE]};
            bins typical_neg = {[32'h8000_0001 : 32'hFFFF_FFFE]};
        }
    endgroup

    virtual function void write (T t);
        txn = t;

        act_cg.sample();
        `uvm_info(get_type_name(), $sformatf("[SAMPLED] %0h", txn.data_in), UVM_HIGH)
    endfunction

    virtual function void report_phase (uvm_phase phase);
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
        `uvm_info(get_type_name(), "       FUNCTIONAL COVERAGE REPORT       ", UVM_NONE)
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
        `uvm_info(get_type_name(), $sformatf(" Total Covergroup Hit: %0.2f%%", act_cg.get_inst_coverage()), UVM_NONE)
        `uvm_info(get_type_name(), "========================================", UVM_NONE)
    endfunction
endclass

class act_sequencer extends uvm_sequencer #(
    act_txn
);
    `uvm_component_utils(act_sequencer)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

class act_sequence extends uvm_sequence #(
    act_txn
);
    `uvm_object_utils(act_sequence)

    function new (string name = "act_sequence");
        super.new(name);
    endfunction

    virtual task body ();
        repeat (200) begin
            req = act_txn#(32)::type_id::create("req");

            start_item(req);
            assert(req.randomize());
            finish_item(req);
        end
    endtask
endclass

class act_scoreboard #(
    parameter int BITS = 32
) extends uvm_scoreboard;
    `uvm_component_utils(act_scoreboard)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    uvm_analysis_imp #(act_txn #(BITS), act_scoreboard#(BITS)) scoreboard_analysis_imp;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        scoreboard_analysis_imp = new("scoreboard_analysis_imp", this);
    endfunction

    virtual function void write (act_txn #(BITS) txn);
        logic [BITS-1:0] expected_data;

        if (txn.data_in[BITS-1] == 1'b1) begin  //Golden Reference Model
            expected_data = {BITS{1'b0}};
        end
        else begin
            expected_data = txn.data_in;
        end

        if (expected_data === txn.data_out) begin
            if (expected_data === 0 && txn.data_in !== 0) begin
                `uvm_info(get_type_name(), $sformatf("[CLAMPED] Data_out : %0h Data_in : %0h", txn.data_out, txn.data_in), UVM_LOW)
        end
        else begin
                `uvm_info(get_type_name(), $sformatf("[PASSED] Data_out : %0h Data_in : %0h", txn.data_out, txn.data_in), UVM_LOW)
        end
        end
        else begin
            `uvm_error(get_type_name(), $sformatf("[FAIL] IN: %0h | ACTUAL OUT: %0h | EXPECTED: %0h", 
                                                   txn.data_in, txn.data_out, expected_data))
        end
    endfunction
endclass

class act_agent extends uvm_agent;
    `uvm_component_utils(act_agent)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    act_monitor monitor_in_agent;
    act_driver driver_in_agent;
    act_coverage coverage_in_agent;
    act_sequencer sequencer_in_agent;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if(get_is_active()) begin
            driver_in_agent = act_driver::type_id::create("driver_in_agent", this);
            sequencer_in_agent = act_sequencer::type_id::create("sequencer_in_agent", this);
        end

        monitor_in_agent = act_monitor::type_id::create("monitor_in_agent", this);
        coverage_in_agent = act_coverage::type_id::create("coverage_in_agent", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        if (get_is_active()) begin
            driver_in_agent.seq_item_port.connect(sequencer_in_agent.seq_item_export);
        end

        monitor_in_agent.monitor_analysis_port.connect(coverage_in_agent.analysis_export);
    endfunction
endclass

class act_env extends uvm_env;
    `uvm_component_utils(act_env)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    act_agent agent_in_env;
    act_scoreboard scoreboard_in_env;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        agent_in_env = act_agent::type_id::create("agent_in_env", this);
        scoreboard_in_env = act_scoreboard#(32)::type_id::create("scoreboard_in_env", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        agent_in_env.monitor_in_agent.monitor_analysis_port.connect(scoreboard_in_env.scoreboard_analysis_imp);
    endfunction
endclass

class act_test extends uvm_test;
    `uvm_component_utils(act_test)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    act_env env_in_test;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        env_in_test = act_env::type_id::create("act_env", this);
    endfunction

    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction

    virtual task run_phase (uvm_phase phase);
        act_sequence sequence_in_test = act_sequence::type_id::create("sequence_in_test");

        phase.raise_objection(this);
        sequence_in_test.start(env_in_test.agent_in_env.sequencer_in_agent);
        phase.drop_objection(this);
    endtask
endclass

module UVM_Activator;
    bit clock;
    always #5 clock = ~clock;

    act_if aif(clock);

    relu DUT(
        .data_in(aif.data_in),
        .data_out(aif.data_out)
    );

    initial begin
        $dumpfile("Activator_dumpfile.vcd");
        $dumpvars;

        clock = 1'b0;

        uvm_config_db #(virtual act_if)::set(null, "*", "vif", aif);
        run_test("act_test");
    end
endmodule
