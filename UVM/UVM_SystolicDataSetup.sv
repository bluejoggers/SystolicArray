// UVM Testbench for Systolic Stagger Block


import uvm_pkg::*;
`include "uvm_macros.svh"



// ----------------------------------------------------
// 1. DUT (Systolic Stagger Block)
// ----------------------------------------------------



module systolic_stagger_block #(
    parameter NUM_LANES = 8,
    parameter DATA_WIDTH = 8 
)(
    input  logic clock,
    input  logic reset,
    input  logic valid_in,
    input  logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_in,
    
    output logic [NUM_LANES-1:0]              valid_out,
    output logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_out
);

    genvar r;
    generate
        for (r = 0; r < NUM_LANES; r = r + 1) begin : row_stagger
            if (r == 0) begin : lane_zero
                assign vector_out[0 +: DATA_WIDTH] = vector_in[0 +: DATA_WIDTH];
                assign valid_out[0]                = valid_in;
            end 
            else begin : lane_delayed
                logic [DATA_WIDTH-1:0] delay_chain [r-1:0];
                logic [r-1:0]          valid_chain;
                always_ff @(posedge clock or posedge reset) begin
                    if (reset) begin
                        valid_chain <= '0;
                        for (int i = 0; i < r; i = i + 1) begin
                            delay_chain[i] <= '0;
                        end
                    end else begin
                        delay_chain[0] <= vector_in[r*DATA_WIDTH +: DATA_WIDTH];
                        valid_chain[0] <= valid_in;
                        for (int i = 1; i < r; i = i + 1) begin
                            delay_chain[i] <= delay_chain[i-1];
                            valid_chain[i] <= valid_chain[i-1];
                        end
                    end
                end
                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = delay_chain[r-1];
                assign valid_out[r]                           = valid_chain[r-1];
            end
        end
    endgenerate
endmodule



// ----------------------------------------------------
// 2. Interface
// ----------------------------------------------------



interface stagger_if #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 8
)(
    input bit clock
);

    logic reset;
    logic valid_in;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_in;
    logic [NUM_LANES-1:0]              valid_out;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_out;
endinterface



// ----------------------------------------------------
// 3. Transaction Object
// ----------------------------------------------------




class stagger_txn #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 8
) extends uvm_sequence_item;
    
    // Stimulus (Randomized)
    rand logic valid_in;
    rand logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_in;

    // Observation (Ignored by Randomizer)
    logic [NUM_LANES-1:0]              valid_out;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_out;

    `uvm_object_param_utils_begin(stagger_txn #(NUM_LANES, DATA_WIDTH))
        `uvm_field_int(valid_in,   UVM_ALL_ON)
        `uvm_field_int(vector_in,  UVM_ALL_ON)
        `uvm_field_int(valid_out,  UVM_ALL_ON)
        `uvm_field_int(vector_out, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "stagger_txn");
        super.new(name);
    endfunction
endclass



// ----------------------------------------------------
// 4. Driver 
// ----------------------------------------------------



class stagger_driver #(
    parameter int L = 8,
    parameter int W = 8
) extends uvm_driver #(
    stagger_txn #(L, W)
);

    `uvm_component_param_utils(stagger_driver #(L, W))
    virtual stagger_if #(L, W) vif;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db #(virtual stagger_if #(L, W))::get(this, "", "vif", vif))
            `uvm_fatal(get_type_name(), "Virtual handle not found!");
    endfunction

    virtual task run_phase (uvm_phase phase);
        stagger_txn #(L, W) txn;

        forever begin
            seq_item_port.get_next_item(txn);

            @(posedge vif.clock);
            vif.valid_in  <= txn.valid_in;
            vif.vector_in <= txn.vector_in;

            seq_item_port.item_done();
        end
    endtask
endclass



// ----------------------------------------------------
// 5. Monitor
// ----------------------------------------------------



class stagger_monitor #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_monitor;

    `uvm_component_param_utils(stagger_monitor #(L, W))

    virtual stagger_if #(L, W) vif;
    uvm_analysis_port #(stagger_txn #(L, W)) monitor_analysis_port;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        monitor_analysis_port = new("monitor_analysis_port", this);

        if (!uvm_config_db #(virtual stagger_if #(L, W))::get(this, "", "vif", vif))
            `uvm_fatal(get_type_name(), "Virtual handle not found!")
    endfunction

    virtual task run_phase(uvm_phase phase);
        stagger_txn #(L, W) txn;
        
        forever begin
            @(posedge vif.clock);
            txn = stagger_txn#(L, W)::type_id::create("txn");

            // Capture entire state of the bus at this clock edge
            txn.valid_in   = vif.valid_in;
            txn.vector_in  = vif.vector_in;
            txn.valid_out  = vif.valid_out;
            txn.vector_out = vif.vector_out;

            monitor_analysis_port.write(txn);
        end
    endtask
endclass



// ----------------------------------------------------
// 6. Scoreboard (Software Pipeline Model)
// ----------------------------------------------------



class stagger_scoreboard #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_scoreboard;

    `uvm_component_param_utils(stagger_scoreboard #(L, W))

    uvm_analysis_imp #(stagger_txn #(L, W), stagger_scoreboard#(L, W)) scoreboard_analysis_imp;

    // Software Shift Registers to model the hardware delays
    logic [W-1:0] sw_delay_pipe [L][L]; 
    logic         sw_valid_pipe [L][L];

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        scoreboard_analysis_imp = new("scoreboard_analysis_imp", this);
        
        // Initialize software pipeline to zeros
        for (int r = 0; r < L; r++) begin
            for (int d = 0; d < L; d++) begin
                sw_delay_pipe[r][d] = '0;
                sw_valid_pipe[r][d] = 1'b0;
            end
        end
    endfunction

    virtual function void write (stagger_txn #(L, W) txn);
        logic [W-1:0] exp_vec_out [L];
        logic         exp_val_out [L];
        bit           passed = 1'b1;

        // 1. EXTRACT expected output for the CURRENT clock cycle
        for (int r = 0; r < L; r++) begin
            if (r == 0) begin
                exp_vec_out[0] = txn.vector_in[0 +: W];
                exp_val_out[0] = txn.valid_in;
            end else begin
                exp_vec_out[r] = sw_delay_pipe[r][r-1];
                exp_val_out[r] = sw_valid_pipe[r][r-1];
            end
        end

        // 2. CHECK actual hardware output against expected output
        for (int r = 0; r < L; r++) begin
            logic [W-1:0] actual_vec = txn.vector_out[r*W +: W];
            logic         actual_val = txn.valid_out[r];

            if (actual_vec !== exp_vec_out[r] || actual_val !== exp_val_out[r]) begin
                `uvm_error(get_type_name(), $sformatf("[FAIL] Lane %0d | VAL OUT: %0b (Exp %0b) | VEC OUT: %0h (Exp %0h)", 
                                                       r, actual_val, exp_val_out[r], actual_vec, exp_vec_out[r]))
                passed = 1'b0;
            end
        end

        if (passed && txn.valid_out !== '0) begin
            `uvm_info(get_type_name(), $sformatf("[PASS] Stagger Wavefront Verified (Valid Out: %b)", txn.valid_out), UVM_LOW)
        end

        // 3. SHIFT the software pipeline forward for the NEXT clock cycle
        for (int r = 1; r < L; r++) begin
            for (int d = r-1; d > 0; d--) begin
                sw_delay_pipe[r][d] = sw_delay_pipe[r][d-1];
                sw_valid_pipe[r][d] = sw_valid_pipe[r][d-1];
            end
            sw_delay_pipe[r][0] = txn.vector_in[r*W +: W];
            sw_valid_pipe[r][0] = txn.valid_in;
        end
    endfunction
endclass



// ----------------------------------------------------
// 7. Verilator-Safe Coverage
// ----------------------------------------------------



class stagger_coverage #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_subscriber #(
    stagger_txn #(L, W)
);
    
    `uvm_component_param_utils(stagger_coverage #(L, W))
    
    stagger_txn #(L, W) txn;

    function new (string name, uvm_component parent);
        super.new(name, parent);
        stagger_cg = new();
    endfunction

    covergroup stagger_cg with function sample(logic v_in, logic [(L*W)-1:0] data);
        option.per_instance = 1;
        cp_valid : coverpoint v_in {
            bins active = {1'b1};
            bins idle   = {1'b0};
        }
    endgroup

    virtual function void write (stagger_txn #(L, W) t);
        txn = t;
        stagger_cg.sample(txn.valid_in, txn.vector_in);
    endfunction
endclass



// ----------------------------------------------------
// 8. Sequencer
// ----------------------------------------------------



class stagger_sequencer #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_sequencer #(
    stagger_txn #(L, W)
);

    `uvm_component_param_utils(stagger_sequencer #(L, W))

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



// ----------------------------------------------------
// 9. Sequence
// ----------------------------------------------------



class stagger_sequence #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_sequence #(
    stagger_txn #(L, W)
);

    `uvm_object_param_utils(stagger_sequence #(L, W))

    function new (string name = "stagger_sequence");
        super.new(name);
    endfunction

    virtual task body ();
        repeat (100) begin
            req = stagger_txn#(L, W)::type_id::create("req");

            start_item(req);
            // 80% chance of valid data, 20% chance of bubble/stall
            assert(req.randomize() with { valid_in dist {1 := 80, 0 := 20}; });
            finish_item(req);
        end
        
        // Push 10 empty cycles at the end to drain the 7-deep pipeline
        repeat(10) begin
            req = stagger_txn#(L, W)::type_id::create("req");

            start_item(req);
            assert(req.randomize() with { valid_in == 1'b0; vector_in == '0; });
            finish_item(req);
        end
    endtask
endclass



// ----------------------------------------------------
// 7. Agent
// ----------------------------------------------------



class stagger_agent #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_agent;

    `uvm_component_param_utils(stagger_agent #(L, W))
    
    stagger_driver    #(L, W) driver_in_agent;
    stagger_sequencer #(L, W) sequencer_in_agent;
    stagger_monitor   #(L, W) monitor_in_agent;
    stagger_coverage  #(L, W) coverage_in_agent;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active() == UVM_ACTIVE) begin
            driver_in_agent    = stagger_driver#(L, W)::type_id::create("driver_in_agent", this);
            sequencer_in_agent = stagger_sequencer#(L, W)::type_id::create("sequencer_in_agent", this);
        end

        monitor_in_agent  = stagger_monitor#(L, W)::type_id::create("monitor_in_agent", this);
        coverage_in_agent = stagger_coverage#(L, W)::type_id::create("coverage_in_agent", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        if (get_is_active() == UVM_ACTIVE) begin
            driver_in_agent.seq_item_port.connect(sequencer_in_agent.seq_item_export);
        end
        monitor_in_agent.monitor_analysis_port.connect(coverage_in_agent.analysis_export);
    endfunction
endclass



// ----------------------------------------------------
// 7. Environment
// ----------------------------------------------------



class stagger_env #(
    parameter int L = 8, 
    parameter int W = 8
) extends uvm_env;

    `uvm_component_param_utils(stagger_env #(L, W))

    stagger_agent      #(L, W) agent_in_env;
    stagger_scoreboard #(L, W) scoreboard_in_env;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        agent_in_env      = stagger_agent#(L, W)::type_id::create("agent_in_env", this);
        scoreboard_in_env = stagger_scoreboard#(L, W)::type_id::create("scoreboard_in_env", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        agent_in_env.monitor_in_agent.monitor_analysis_port.connect(scoreboard_in_env.scoreboard_analysis_imp);
    endfunction
endclass



// ----------------------------------------------------
// 7. Test
// ----------------------------------------------------



class stagger_test extends uvm_test;

    `uvm_component_utils(stagger_test)

    stagger_env #(8, 8) env_in_test;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        env_in_test = stagger_env#(8, 8)::type_id::create("env_in_test", this);
    endfunction

    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction

    virtual task run_phase (uvm_phase phase);
        stagger_sequence #(8, 8) sequence_in_test = stagger_sequence#(8, 8)::type_id::create("sequence_in_test");

        phase.raise_objection(this);
        sequence_in_test.start(env_in_test.agent_in_env.sequencer_in_agent);
        phase.drop_objection(this);
    endtask
endclass



// ----------------------------------------------------
// 8. Top Module
// ----------------------------------------------------



module UVM_SystolicDataSetup;
    bit clock;
    bit reset;

    always #5 clock = ~clock;

    stagger_if #(8, 8) sif(clock);

    systolic_stagger_block #(8, 8) DUT(
        .clock(sif.clock),
        .reset(sif.reset),
        .valid_in(sif.valid_in),
        .vector_in(sif.vector_in),
        .valid_out(sif.valid_out),
        .vector_out(sif.vector_out)
    );

    initial begin
        $dumpfile("Stagger_dumpfile.vcd");
        $dumpvars;

        // Hardware Reset Sequence
        clock = 1'b0;
        sif.reset = 1'b1;
        #15 sif.reset = 1'b0;
    end

    initial begin
        uvm_config_db #(virtual stagger_if #(8, 8))::set(null, "*", "vif", sif);
        run_test("stagger_test");
    end
endmodule