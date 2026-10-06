import uvm_pkg::*;
`include "uvm_macros.svh"



// =====================================================================
// SECTION 1: DUTs
// =====================================================================



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



module FA (
    input wire a, 
    input wire b, 
    input wire cin, 
    output wire sum, 
    output wire cout
    );

    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (cin & (a ^ b));

endmodule

module CSA #(
    parameter WIDTH = 16
)(
    input wire [WIDTH-1:0] a, b, c,
    output wire [WIDTH-1:0] sum,
    output wire [WIDTH-1:0] cout
);
    genvar i;
    generate
        for (i=0;i<WIDTH;i=i+1) begin:gen_fa
            FA fa(
                .a(a[i]),
                .b(b[i]),
                .cin(c[i]),
                .sum(sum[i]),
                .cout(cout[i])
            );
        end
    endgenerate
endmodule 



module MAC(
    input wire clock,
    
    input wire signed [7:0] weight,      // 8-bit Input Weight
    input wire [7:0] activation,      // 8-bit Input Activation
    
    input wire [31:0] prevsum, prevcarry,      // 16-bit Multiplier Output (A*W)
    
    input wire resetA, resetW , resetS, resetC,      // Reset Signals for Activation, Weight, Sum-in and Carry-in Registers
    input wire enableA, enableW, enableS, enableC, // Enable Signals for Activation, Weight, Sum-in and Carry-in Registers
    
    output wire [31:0] nextsum,     // 16-bit Output A*W + PreviousSum
    output wire [31:0] nextcarry,   // 16-bit Output A*W + PreviousSum
    
    output wire signed [7:0] weight_pass,     // Output from Weight Register to feed into the next PE in the same row
    output wire[7:0] activation_pass  // Output from Activation Register to feed into the next PE in the same column
);


    wire signed [7:0] weight_out;
    wire [7:0] activation_out;
    wire signed [15:0] mult_out;
    wire signed [16:0] raw_product;
    wire [31:0] sumin_out, carryin_out, carryout_csa;


    // Instantiate Weight and Activation Registers
    register weightreg(
        .clk(clock),
        .rst(resetW),
        .en(enableW),
        .data_in(weight),
        .data_out(weight_out)
    );

    register activationreg(
        .clk(clock),
        .rst(resetA),
        .en(enableA),
        .data_in(activation),
        .data_out(activation_out)
    );

    //Instantiate the Sum-in and Carry-in Registers to hold the Previous Sum and Carry for the next MAC operation
    register #(.BITS(32)) suminreg(
        .clk(clock),
        .rst(resetS),
        .en(enableS),
        .data_in(prevsum),
        .data_out(sumin_out)
    );

    register #(.BITS(32)) carryinreg(
        .clk(clock),
        .rst(resetC),
        .en(enableC),
        .data_in(prevcarry),
        .data_out(carryin_out)
    );

    //Signed multiplication of activation and weight to produce a 16 bit output
    assign raw_product = $signed({1'b0, activation_out}) * $signed( weight_out);
    assign mult_out = raw_product [15:0];

    //Instantiate the Carry Save Adder to compute A*W + PreviousSum
    CSA #(.WIDTH(32)) adder32b(
        .a({{16{mult_out[15]}},mult_out}),
        .b(sumin_out),
        .c(carryin_out),
        .sum(nextsum),
        .cout(carryout_csa)
    );

    assign nextcarry = {carryout_csa[30:0], 1'b0}; // Shift the carryout left by 1 to align with the next stage
    assign weight_pass = weight_out; // Pass the weight to the next PE in the same row
    assign activation_pass = activation_out; // Pass the activation to the next PE in the same row
endmodule



module deskew_buffer #(
    parameter NUM_LANES  = 8,   // Must match arraydatapath's N
    parameter DATA_WIDTH = 32   // partial_sum is 32 bits per column
)(
    input  wire clock,
    input  wire reset,

    input  wire                            valid_in,   // Pulses whenever partial_sum carries a meaningful diagonal wavefront sample
    input  wire [NUM_LANES*DATA_WIDTH-1:0] vector_in,  // arraydatapath's `partial_sum`, still diagonally skewed

    output wire                            valid_out,  // Single aligned pulse -- wire directly into Accumulator's mxu_write_enable
    output wire [NUM_LANES*DATA_WIDTH-1:0] vector_out  // Deskewed, clean horizontal wave for the Accumulator
);

    genvar r;
    generate
        for (r = 0; r < NUM_LANES; r = r + 1) begin : lane_deskew

            localparam DELAY = NUM_LANES - 1 - r;

            if (DELAY == 0) begin : lane_passthrough
                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = vector_in[r*DATA_WIDTH +: DATA_WIDTH];
            end
            else begin : lane_delayed
                reg [DATA_WIDTH-1:0] delay_chain [0:DELAY-1];
                integer i;

                always @(posedge clock or posedge reset) begin
                    if (reset) begin
                        for (i = 0; i < DELAY; i = i + 1) begin
                            delay_chain[i] <= {DATA_WIDTH{1'b0}};
                        end
                    end else begin
                        delay_chain[0] <= vector_in[r*DATA_WIDTH +: DATA_WIDTH];
                        for (i = 1; i < DELAY; i = i + 1) begin
                            delay_chain[i] <= delay_chain[i-1];
                        end
                    end
                end

                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = delay_chain[DELAY-1];
            end

        end
    endgenerate

    generate
        if (NUM_LANES <= 1) begin : no_deskew_needed
            assign valid_out = valid_in;
        end
        else begin : valid_delay
            reg [NUM_LANES-2:0] valid_chain;
            integer vi;

            always @(posedge clock or posedge reset) begin
                if (reset) begin
                    valid_chain <= {(NUM_LANES-1){1'b0}};
                end else begin
                    valid_chain[0] <= valid_in;
                    for (vi = 1; vi < NUM_LANES-1; vi = vi + 1) begin
                        valid_chain[vi] <= valid_chain[vi-1];
                    end
                end
            end

            assign valid_out = valid_chain[NUM_LANES-2];
        end
    endgenerate

endmodule 



// =====================================================================
// SECTION 2: Interfaces 
// =====================================================================



interface mac_if #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
)(
    input bit clock
); 
    logic signed [WA_BITS-1:0] weight;
    logic [WA_BITS-1:0] activation;

    logic [SC_BITS-1:0] prevsum;
    logic [SC_BITS-1:0] prevcarry;

    logic resetA, resetW , resetS, resetC;
    logic enableA, enableW, enableS, enableC;

    logic [SC_BITS-1:0] nextsum;
    logic [SC_BITS-1:0] nextcarry;

    logic signed [WA_BITS-1:0] weight_pass;
    logic[WA_BITS-1:0] activation_pass;
endinterface    //Use Modports maybe?



interface deskew_if #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 32
)(
    input bit clock
);
    logic reset;

    logic valid_in;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_in;

    logic valid_out;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_out;
endinterface



// =====================================================================
// SECTION 3: base_pkg — written once, reused by every DUT below.
// Each base class is `virtual` (abstract): it cannot be instantiated on
// its own, it only exists to be extended. The `pure virtual` methods are
// the ONLY thing a concrete subclass has to fill in.
// =====================================================================



virtual class base_driver #(
    type REQ = uvm_sequence_item
) extends uvm_driver #(REQ);
    
    function new(string name , uvm_component parent);
        super.new(name, parent);
    endfunction

    pure virtual task drive_item(REQ req);// This method must be implemented by subclasses

    virtual task run_phase (uvm_phase phase);
        forever begin
            REQ req;

            seq_item_port.get_next_item(req);
            drive_item(req);
            seq_item_port.item_done(); 
        end
    endtask
endclass


virtual class base_monitor #(
    type REQ = uvm_sequence_item
) extends uvm_monitor;

    uvm_analysis_port #(REQ) monitor_analysis_port;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        monitor_analysis_port = new("monitor_analysis_port", this);
    endfunction

    pure virtual task sample_item(output REQ item);    // This method must be implemented by subclasses

    virtual task run_phase (uvm_phase phase);
        REQ req;

        forever begin
            sample_item(req);
            monitor_analysis_port.write(req);
        end
    endtask
endclass


virtual class base_scoreboard #(
    type REQ = uvm_sequence_item
) extends uvm_scoreboard;

    uvm_analysis_imp #(REQ, base_scoreboard #(REQ)) scoreboard_analysis_imp;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        scoreboard_analysis_imp = new("scoreboard_analysis_imp", this);
    endfunction

    pure virtual function void check(REQ req); // This method must be implemented by subclasses

    virtual function void write(REQ item);
        check(item);
    endfunction
endclass


virtual class base_coverage #(
    type REQ = uvm_sequence_item
) extends uvm_subscriber #(REQ);

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    pure virtual function void sample_coverage(REQ req); // This method must be implemented by subclasses

    virtual function void write(REQ item);
        sample_coverage(item);
    endfunction
endclass


class base_sequencer #(
    type REQ = uvm_sequence_item
) extends uvm_sequencer #(REQ);

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass


class base_agent #(type DRIVER, type MONITOR, type COVERAGE, type SEQUENCER) extends uvm_agent;

    DRIVER driver_in_agent;
    MONITOR monitor_in_agent;
    COVERAGE coverage_in_agent;
    SEQUENCER sequencer_in_agent;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active()) begin
            driver_in_agent = new("driver_in_agent", this);
            sequencer_in_agent = new("sequencer_in_agent", this);
        end

        monitor_in_agent = new("monitor_in_agent", this);
        coverage_in_agent = new("coverage_in_agent", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        if (get_is_active()) begin
            driver_in_agent.seq_item_port.connect(sequencer_in_agent.seq_item_export);
        end

        monitor_in_agent.monitor_analysis_port.connect(coverage_in_agent.analysis_export);
    endfunction
endclass



class base_env #(
    type AGENT,
    type SCOREBOARD
) extends uvm_env;

    AGENT agent_in_env;
    SCOREBOARD scoreboard_in_env;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        agent_in_env = new("agent_in_env", this);
        scoreboard_in_env = SCOREBOARD::type_id::create("scoreboard_in_env", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        agent_in_env.monitor_in_agent.monitor_analysis_port.connect(scoreboard_in_env.scoreboard_analysis_imp);
    endfunction
endclass



class base_test #(
    type ENV,
    type SEQUENCE
) extends uvm_test;

    ENV env_in_test;
    
    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);    
        super.build_phase(phase);

        env_in_test = ENV::type_id::create("env_in_test", this);
    endfunction

    virtual task run_phase (uvm_phase phase);
        SEQUENCE seq = SEQUENCE::type_id::create("seq");

        phase.raise_objection(this);
        seq.start(env_in_test.agent_in_env.sequencer_in_agent);
        phase.drop_objection(this);
    endtask
endclass



// =====================================================================
// SECTION 4: Module-specific classes (everything base_pkg couldn't know)
// =====================================================================



class mac_txn #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
) extends uvm_sequence_item;
    rand logic signed [WA_BITS-1:0] weight;
    rand logic [WA_BITS-1:0] activation;

    rand logic [SC_BITS-1:0] prevsum;
    rand logic [SC_BITS-1:0] prevcarry;

    logic resetA, resetW , resetS, resetC;
    logic enableA, enableW, enableS, enableC;

    logic [SC_BITS-1:0] nextsum;
    logic [SC_BITS-1:0] nextcarry;

    logic signed [WA_BITS-1:0] weight_pass;
    logic [WA_BITS-1:0] activation_pass;

    `uvm_object_param_utils_begin(mac_txn #(WA_BITS, SC_BITS))
        `uvm_field_int(weight, UVM_ALL_ON)
        `uvm_field_int(activation, UVM_ALL_ON)
        `uvm_field_int(prevsum, UVM_ALL_ON)
        `uvm_field_int(prevcarry, UVM_ALL_ON)
        `uvm_field_int(resetA, UVM_ALL_ON)
        `uvm_field_int(resetW, UVM_ALL_ON)
        `uvm_field_int(resetS, UVM_ALL_ON)
        `uvm_field_int(resetC, UVM_ALL_ON)
        `uvm_field_int(enableA, UVM_ALL_ON)
        `uvm_field_int(enableW, UVM_ALL_ON)
        `uvm_field_int(enableS, UVM_ALL_ON)
        `uvm_field_int(enableC, UVM_ALL_ON)
        `uvm_field_int(nextsum, UVM_ALL_ON)
        `uvm_field_int(nextcarry, UVM_ALL_ON)
        `uvm_field_int(weight_pass, UVM_ALL_ON)
        `uvm_field_int(activation_pass, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "mac_txn");
        super.new(name);
    endfunction
endclass



class deskew_txn #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 32
) extends uvm_sequence_item;
    logic reset; 

    logic valid_in;
    rand logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_in;

    logic valid_out;
    logic [(NUM_LANES*DATA_WIDTH)-1:0] vector_out;

    `uvm_object_param_utils_begin(deskew_txn #(NUM_LANES, DATA_WIDTH))
        `uvm_field_int(reset, UVM_ALL_ON)
        `uvm_field_int(valid_in, UVM_ALL_ON)
        `uvm_field_int(vector_in, UVM_ALL_ON)
        `uvm_field_int(valid_out, UVM_ALL_ON)
        `uvm_field_int(vector_out, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "deskew_txn");
        super.new(name);
    endfunction
endclass



class mac_driver #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
)   extends base_driver #(
    mac_txn #(WA_BITS, SC_BITS)
);
    `uvm_component_param_utils(mac_driver #(WA_BITS, SC_BITS))

    virtual mac_if #(WA_BITS, SC_BITS) mac_vif;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if(!uvm_config_db #(virtual mac_if #(WA_BITS, SC_BITS))::get(this, "", "mac_vif", mac_vif))
            `uvm_fatal(get_type_name(), "Virtual interface not found!")
    endfunction

    virtual task drive_item(mac_txn #(WA_BITS, SC_BITS) txn);
        @(posedge mac_vif.clock);

        mac_vif.weight <= txn.weight;
        mac_vif.activation <= txn.activation;
        mac_vif.prevsum <= txn.prevsum;
        mac_vif.prevcarry <= txn.prevcarry;
        mac_vif.resetA <= txn.resetA;
        mac_vif.resetW <= txn.resetW;
        mac_vif.resetS <= txn.resetS;
        mac_vif.resetC <= txn.resetC;
        mac_vif.enableA <= txn.enableA;
        mac_vif.enableW <= txn.enableW;
        mac_vif.enableS <= txn.enableS;
        mac_vif.enableC <= txn.enableC;
    endtask
endclass



class deskew_driver #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 32
) extends base_driver #(
    deskew_txn #(NUM_LANES, DATA_WIDTH)
); 
    `uvm_component_param_utils(deskew_driver #(NUM_LANES, DATA_WIDTH))

    virtual deskew_if #(NUM_LANES, DATA_WIDTH) deskew_vif;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if(!uvm_config_db #(virtual deskew_if #(NUM_LANES, DATA_WIDTH))::get(this, "", "deskew_vif", deskew_vif))
            `uvm_fatal(get_type_name(), "Virtual Interface not found!")
    endfunction 

    virtual task drive_item (deskew_txn #(NUM_LANES, DATA_WIDTH) txn);
        @(posedge deskew_vif.clock);

        deskew_vif.reset <= txn.reset;
        deskew_vif.valid_in <= txn.valid_in;
        deskew_vif.vector_in <= txn.vector_in;
    endtask
endclass



class mac_monitor #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
)   extends base_monitor #(
    mac_txn #(WA_BITS, SC_BITS)
);
    `uvm_component_param_utils(mac_monitor #(WA_BITS, SC_BITS))

    virtual mac_if #(WA_BITS, SC_BITS) mac_vif;

    mac_txn #(WA_BITS, SC_BITS) txn_pipeline [$]; // Queue to hold transactions for pipelining

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if(!uvm_config_db #(virtual mac_if #(WA_BITS, SC_BITS))::get(this, "", "mac_vif", mac_vif))
            `uvm_fatal(get_type_name(), "Virtual interface not found!")
    endfunction

    virtual task sample_item(output mac_txn #(WA_BITS, SC_BITS) txn);

        mac_txn #(WA_BITS, SC_BITS) sample_txn;

        @(posedge mac_vif.clock);

        if (txn_pipeline.size() > 0) begin
            txn = txn_pipeline.pop_front();

            txn.nextsum = mac_vif.nextsum;
            txn.nextcarry = mac_vif.nextcarry;

            txn.weight_pass = mac_vif.weight_pass;
            txn.activation_pass = mac_vif.activation_pass;
        end else begin
            txn = null;
        end

        sample_txn = mac_txn #(WA_BITS, SC_BITS)::type_id::create("sample_txn");

        sample_txn.weight = mac_vif.weight;
        sample_txn.activation = mac_vif.activation;

        sample_txn.prevsum = mac_vif.prevsum;
        sample_txn.prevcarry = mac_vif.prevcarry;

        sample_txn.resetA = mac_vif.resetA;
        sample_txn.resetW = mac_vif.resetW;
        sample_txn.resetS = mac_vif.resetS;
        sample_txn.resetC = mac_vif.resetC;

        sample_txn.enableA = mac_vif.enableA;
        sample_txn.enableW = mac_vif.enableW;
        sample_txn.enableS = mac_vif.enableS;
        sample_txn.enableC = mac_vif.enableC;

        txn_pipeline.push_back(sample_txn);

        if (txn == null) begin  //Uses the Recursive Stalling method to stall the sending of packets until txn!=null
            sample_item(txn);
        end
    endtask
endclass



class deskew_monitor #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH =32
) extends base_monitor #(
    deskew_txn #(NUM_LANES, DATA_WIDTH)
);
    `uvm_component_param_utils(deskew_monitor #(NUM_LANES, DATA_WIDTH))

    virtual deskew_if #(NUM_LANES, DATA_WIDTH) deskew_vif;

    deskew_txn #(NUM_LANES, DATA_WIDTH) txn_pipeline [$];

    localparam int PIPE_DEPTH = (NUM_LANES>1) ? NUM_LANES-1 : 0;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if(!uvm_config_db #(virtual deskew_if #(NUM_LANES, DATA_WIDTH))::get(this, "", "deskew_vif", deskew_vif))
            `uvm_fatal(get_type_name(), "Virtual Interface not found!")
    endfunction

    //Non recursive stalling with run_phase override
    virtual task sample_item (output deskew_txn #(NUM_LANES, DATA_WIDTH) txn);
        deskew_txn #(NUM_LANES, DATA_WIDTH) sample_txn;

        @(posedge deskew_vif.clock);
        sample_txn = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("sample_txn");

        sample_txn.reset = deskew_vif.reset;
        sample_txn.valid_in = deskew_vif.valid_in;
        sample_txn.vector_in = deskew_vif.vector_in;

        txn_pipeline.push_back(sample_txn);

        if (txn_pipeline.size() > PIPE_DEPTH) begin
            txn = txn_pipeline.pop_front();

            txn.valid_out = deskew_vif.valid_out;
            txn.vector_out = deskew_vif.vector_out;
        end else begin
            txn = null;
        end
    endtask

    virtual task run_phase (uvm_phase phase);
        deskew_txn #(NUM_LANES, DATA_WIDTH) txn;

        forever begin
            sample_item(txn);

            if (txn != null) begin
                monitor_analysis_port.write(txn);
            end
        end
    endtask
endclass



class mac_coverage #(
    parameter int WA_BITS = 8, 
    parameter int SC_BITS = 32 
) extends base_coverage #(
    mac_txn #(WA_BITS, SC_BITS)
);
    `uvm_component_param_utils(mac_coverage #(WA_BITS, SC_BITS))

    // Decoupled covergroup using the 'with function sample' architecture
    covergroup mac_cg with function sample(
        logic signed [WA_BITS-1:0] weight,
        logic        [WA_BITS-1:0] activation,
        logic                      enableW,
        logic                      enableA
    );
        // 1. Signed Weight Bins (Dynamically scaled to WA_BITS)
        cp_weight: coverpoint weight {
            bins min_neg = { -(1 << (WA_BITS-1)) };       // e.g., -128
            bins max_pos = { (1 << (WA_BITS-1)) - 1 };    // e.g., +127
            bins zero    = { 0 };
            bins neg_val = { [-(1 << (WA_BITS-1)) : -1] };
            bins pos_val = { [1 : (1 << (WA_BITS-1)) - 1] };
        }

        // 2. Unsigned Activation Bins
        cp_activation: coverpoint activation {
            bins zero    = { 0 };
            bins max_val = { (1 << WA_BITS) - 1 };        // e.g., 255
            bins low     = { [1 : 85] };
            bins mid     = { [86 : 170] };
            bins high    = { [171 : 254] };
        }

        // 3. Control Signal Bins
        cp_en_weight: coverpoint enableW {
            bins disabled = {0};
            bins enabled  = {1};
            bins hold_transition = (1 => 0); // Proves the PE locks the weight register
        }
        
        cp_en_act: coverpoint enableA {
            bins disabled = {0};
            bins enabled  = {1};
        }

        // 4. Cross Coverage: Multiplier Stress Test
        cross_mult_stress: cross cp_weight, cp_activation, cp_en_weight, cp_en_act {
            // Filter out idle cycles to avoid artificially inflating coverage metrics
            ignore_bins inactive_compute = binsof(cp_en_act.disabled);
        }
    endgroup

    function new(string name, uvm_component parent);
        super.new(name, parent);
        mac_cg = new();
    endfunction

    virtual function void sample_coverage(mac_txn #(WA_BITS, SC_BITS) req);
        mac_cg.sample(req.weight, req.activation, req.enableW, req.enableA);
    endfunction
endclass



class deskew_coverage #(
    parameter int NUM_LANES  = 8,
    parameter int DATA_WIDTH = 32
) extends base_coverage #(
    deskew_txn #(NUM_LANES, DATA_WIDTH)
);
    `uvm_component_param_utils(deskew_coverage #(NUM_LANES, DATA_WIDTH))

    // Decoupled covergroup with explicit sampling signature
    covergroup deskew_cg with function sample(
        logic                            valid_in,
        logic                            valid_out,
        logic signed [DATA_WIDTH-1:0]    lane0_in,
        logic signed [DATA_WIDTH-1:0]    lanelast_in,
        logic signed [DATA_WIDTH-1:0]    lane0_out,
        logic signed [DATA_WIDTH-1:0]    lanelast_out
    );
        // -------------------------------------------------------------
        // 1. Control Signal Transitions & Streaming Bursts
        // -------------------------------------------------------------
        cp_valid_in: coverpoint valid_in {
            bins deasserted      = { 1'b0 };
            bins asserted        = { 1'b1 };
            bins idle_to_pulse   = (1'b0 => 1'b1); // Single pulse or burst start
            bins burst_streaming = (1'b1 => 1'b1); // Multi-cycle batch stream
            bins pulse_to_idle   = (1'b1 => 1'b0); // Burst drain
        }

        cp_valid_out: coverpoint valid_out {
            bins deasserted      = { 1'b0 };
            bins asserted        = { 1'b1 };
            bins idle_to_aligned = (1'b0 => 1'b1); // First aligned wave ready
            bins burst_aligned   = (1'b1 => 1'b1); // Sustained aligned throughput
            bins aligned_to_idle = (1'b1 => 1'b0); // Alignment drain complete
        }

        // -------------------------------------------------------------
        // 2. Deskew Pipeline Lifecycle Cross Coverage
        // -------------------------------------------------------------
        cross_pipeline_lifecycle: cross cp_valid_in, cp_valid_out {
            // Pipeline empty / between matrix batches
            bins idle_state    = binsof(cp_valid_in.deasserted) && binsof(cp_valid_out.deasserted);

            // Filling: array has begun outputting, but Lane 0 hasn't reached the end
            bins priming_phase = binsof(cp_valid_in.asserted)   && binsof(cp_valid_out.deasserted);

            // Full throughput: incoming skewed wave in parallel with outgoing aligned wave
            bins steady_state  = binsof(cp_valid_in.asserted)   && binsof(cp_valid_out.asserted);

            // Draining: array finished outputting, deskew buffer flushing remaining lanes
            bins draining_tail = binsof(cp_valid_in.deasserted) && binsof(cp_valid_out.asserted);
        }

        // -------------------------------------------------------------
        // 3. Lane 0 Data Coverage (Longest Delay Path: N-1 Stages)
        // -------------------------------------------------------------
        cp_lane0_in: coverpoint lane0_in iff (valid_in) {
            bins zero        = { {DATA_WIDTH{1'b0}} };
            bins max_pos     = { {1'b0, {(DATA_WIDTH-1){1'b1}}} }; // e.g., 32'h7FFF_FFFF
            bins min_neg     = { {1'b1, {(DATA_WIDTH-1){1'b0}}} }; // e.g., 32'h8000_0000
            bins pos_values  = { [1 : {1'b0, {(DATA_WIDTH-1){1'b1}}} - 1] };
            bins neg_values  = { [{1'b1, {(DATA_WIDTH-1){1'b0}}} + 1 : -1] };
        }

        cp_lane0_out: coverpoint lane0_out iff (valid_out) {
            bins zero        = { {DATA_WIDTH{1'b0}} };
            bins max_pos     = { {1'b0, {(DATA_WIDTH-1){1'b1}}} };
            bins min_neg     = { {1'b1, {(DATA_WIDTH-1){1'b0}}} };
            bins pos_values  = { [1 : {1'b0, {(DATA_WIDTH-1){1'b1}}} - 1] };
            bins neg_values  = { [{1'b1, {(DATA_WIDTH-1){1'b0}}} + 1 : -1] };
        }

        // -------------------------------------------------------------
        // 4. Lane N-1 Data Coverage (Passthrough Path: 0 Stages)
        // -------------------------------------------------------------
        cp_lanelast_out: coverpoint lanelast_out iff (valid_out) {
            bins zero        = { {DATA_WIDTH{1'b0}} };
            bins max_pos     = { {1'b0, {(DATA_WIDTH-1){1'b1}}} };
            bins min_neg     = { {1'b1, {(DATA_WIDTH-1){1'b0}}} };
            bins pos_values  = { [1 : {1'b0, {(DATA_WIDTH-1){1'b1}}} - 1] };
            bins neg_values  = { [{1'b1, {(DATA_WIDTH-1){1'b0}}} + 1 : -1] };
        }
    endgroup

    function new(string name, uvm_component parent);
        super.new(name, parent);
        deskew_cg = new();
    endfunction

    // Implement pure virtual hook from base_coverage
    virtual function void sample_coverage(deskew_txn #(NUM_LANES, DATA_WIDTH) req);
        logic signed [DATA_WIDTH-1:0] l0_in, lN_in;
        logic signed [DATA_WIDTH-1:0] l0_out, lN_out;

        // Slice boundary lanes from the flat vectors
        l0_in  = req.vector_in[0 +: DATA_WIDTH];
        lN_in  = req.vector_in[(NUM_LANES-1)*DATA_WIDTH +: DATA_WIDTH];

        l0_out = req.vector_out[0 +: DATA_WIDTH];
        lN_out = req.vector_out[(NUM_LANES-1)*DATA_WIDTH +: DATA_WIDTH];

        deskew_cg.sample(
            req.valid_in,
            req.valid_out,
            l0_in,
            lN_in,
            l0_out,
            lN_out
        );
    endfunction
endclass



class mac_scoreboard #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
)   extends base_scoreboard #(
    mac_txn #(WA_BITS, SC_BITS)
);
    `uvm_component_param_utils(mac_scoreboard #(WA_BITS, SC_BITS))

    logic signed [WA_BITS-1:0] current_weight;
    logic [WA_BITS-1:0] current_activation;

    logic [SC_BITS-1:0] current_prevsum;
    logic [SC_BITS-1:0] current_prevcarry;

    function new (string name, uvm_component parent);
        super.new(name, parent);

        current_weight = '0;
        current_activation = '0;

        current_prevsum = '0;
        current_prevcarry = '0;
    endfunction 

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
    endfunction

    virtual function void check(mac_txn #(WA_BITS, SC_BITS) txn);
        logic signed [2*WA_BITS-1:0] expected_product;
        
        logic [SC_BITS-1:0] expected_next_sum;
        logic [SC_BITS-1:0] expected_next_carry;

        logic signed [WA_BITS-1:0] expected_weight_pass;
        logic [WA_BITS-1:0] expected_activation_pass;

        logic [SC_BITS-1:0] a, b, c;

        if (txn.resetA) begin
            current_activation = '0;
        end else if (txn.enableA) begin
            current_activation = txn.activation;
        end

        if (txn.resetW) begin
            current_weight = '0;
        end else if (txn.enableW) begin
            current_weight = txn.weight;
        end

        if (txn.resetS) begin
            current_prevsum = '0;
        end else if (txn.enableS) begin
            current_prevsum = txn.prevsum;
        end

        if (txn.resetC) begin
            current_prevcarry = '0;
        end else if (txn.enableC) begin
            current_prevcarry = txn.prevcarry;
        end

        expected_weight_pass = current_weight;
        expected_activation_pass = current_activation;

        expected_product = $signed({1'b0, current_activation}) * current_weight;

        a = {{16{expected_product[15]}}, expected_product};
        b = current_prevsum;
        c = current_prevcarry;

        expected_next_sum = a ^ b ^ c;
        expected_next_carry = ((a & b) | (b & c) | (c & a)) << 1;

        if (txn.weight_pass !== expected_weight_pass) begin
            `uvm_error(get_type_name(), $sformatf("Weight Pass Mismatch: Expected %0d, Got %0d", expected_weight_pass, txn.weight_pass))
        end

        if (txn.activation_pass !== expected_activation_pass) begin
            `uvm_error(get_type_name(), $sformatf("Activation Pass Mismatch: Expected %0d, Got %0d", expected_activation_pass, txn.activation_pass))
        end

        if (txn.nextsum !== expected_next_sum) begin
            `uvm_error(get_type_name(), $sformatf("Next Sum Mismatch: Expected %0d, Got %0d", expected_next_sum, txn.nextsum))
        end

        if (txn.nextcarry !== expected_next_carry) begin
            `uvm_error(get_type_name(), $sformatf("Next Carry Mismatch: Expected %0d, Got %0d", expected_next_carry, txn.nextcarry))
        end

        if (txn.weight_pass == expected_weight_pass && txn.activation_pass == expected_activation_pass && txn.nextsum == expected_next_sum && txn.nextcarry == expected_next_carry) begin
            `uvm_info(get_type_name(), $sformatf("Transaction Passed: Weight Pass %0d, Activation Pass %0d, Next Sum %0d, Next Carry %0d", txn.weight_pass, txn.activation_pass, txn.nextsum, txn.nextcarry), UVM_LOW)
        end
    endfunction
endclass



class deskew_scoreboard #(
    parameter int NUM_LANES  = 8,
    parameter int DATA_WIDTH = 32
) extends base_scoreboard #(
    deskew_txn #(NUM_LANES, DATA_WIDTH)
);
    `uvm_component_param_utils(deskew_scoreboard #(NUM_LANES, DATA_WIDTH))

    // Per-lane queues to store captured vector_out until the matching vector_in arrives
    logic [DATA_WIDTH-1:0] out_data_queue  [NUM_LANES][$];
    logic                  out_valid_queue [NUM_LANES][$];

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction 

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction

    virtual function void check(deskew_txn #(NUM_LANES, DATA_WIDTH) txn);
        // =============================================================
        // 1. Reset Handling & Verification
        // =============================================================
        if (txn.reset) begin
            // Clear all reference queues so pre-reset data does not cause false mismatches
            for (int r = 0; r < NUM_LANES; r++) begin
                out_data_queue[r].delete();
                out_valid_queue[r].delete();
            end

            // Rule 1: valid_out MUST be de-asserted during reset
            if (txn.valid_out !== 1'b0) begin
                `uvm_error(get_type_name(), $sformatf(
                    "RESET FAULT: valid_out is %b during reset, expected 0", 
                    txn.valid_out
                ))
            end

            // Rule 2: Registered lanes (r < NUM_LANES - 1) must be cleared to 0
            for (int r = 0; r < NUM_LANES - 1; r++) begin
                logic [DATA_WIDTH-1:0] act_lane;
                act_lane = txn.vector_out[r*DATA_WIDTH +: DATA_WIDTH];
                if (act_lane !== '0) begin
                    `uvm_error(get_type_name(), $sformatf(
                        "RESET FAULT: Lane %0d output is 0x%08h during reset, expected 0", 
                        r, act_lane
                    ))
                end
            end

            // Skip data checking for reset cycles
            return;
        end

        // =============================================================
        // 2. Control Signal Check (1:1 Alignment)
        // =============================================================
        // Since the monitor buffered valid_in by (NUM_LANES - 1) cycles,
        // valid_out in this transaction must directly equal valid_in.
        if (txn.valid_out !== txn.valid_in) begin
            `uvm_error(get_type_name(), $sformatf(
                "VALID MISMATCH: [Expected %b (from valid_in)] | [Found %b]", 
                txn.valid_in, txn.valid_out
            ))
        end

        // =============================================================
        // 3. Lane-by-Lane Data Alignment Check
        // =============================================================
        for (int r = 0; r < NUM_LANES; r++) begin
            logic [DATA_WIDTH-1:0] cur_out_lane, cur_in_lane;
            cur_out_lane = txn.vector_out[r*DATA_WIDTH +: DATA_WIDTH];
            cur_in_lane  = txn.vector_in[r*DATA_WIDTH +: DATA_WIDTH];

            // Push the current transaction's output into the lane queue
            out_data_queue[r].push_back(cur_out_lane);
            out_valid_queue[r].push_back(txn.valid_out);

            // Lane r output was generated r transactions before the matching vector_in arrives.
            // Pop and compare only after r transactions have elapsed:
            if (out_data_queue[r].size() > r) begin
                logic [DATA_WIDTH-1:0] exp_lane;
                logic                  exp_valid;

                exp_lane  = out_data_queue[r].pop_front();
                exp_valid = out_valid_queue[r].pop_front();

                // Only check data integrity on cycles where the wavefront was valid
                if (exp_valid) begin
                    if (exp_lane !== cur_in_lane) begin
                        `uvm_error(get_type_name(), $sformatf(
                            "DATA MISMATCH [LANE %0d]: [Expected 0x%08h] | [Found 0x%08h]", 
                            r, cur_in_lane, exp_lane
                        ))
                    end else begin
                        `uvm_info(get_type_name(), $sformatf(
                            "Lane %0d Matched: 0x%08h", r, exp_lane
                        ), UVM_LOW)
                    end
                end
            end
        end
    endfunction
endclass



class mac_sequence #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32 // Width of Sum and Carry
) extends uvm_sequence #(
    mac_txn #(WA_BITS, SC_BITS)
    );
    `uvm_object_param_utils(mac_sequence #(WA_BITS, SC_BITS))

    function new (string name = "mac_sequence");
        super.new(name);
    endfunction

    virtual task body();
        // Reset System 
        `uvm_info(get_type_name(), "Resetting System", UVM_LOW)
        req = mac_txn #(WA_BITS, SC_BITS)::type_id::create("req");
        start_item(req);

        req.resetA = 1;
        req.resetW = 1;
        req.resetS = 1;
        req.resetC = 1;

        req.enableA = 0;
        req.enableW = 0;
        req.enableS = 0;
        req.enableC = 0;

        finish_item(req);

        `uvm_info(get_type_name(), "Weight Pre-load", UVM_LOW)
        req = mac_txn #(WA_BITS, SC_BITS)::type_id::create("req");
        start_item(req);

        req.resetA = 0;
        req.resetW = 0;
        req.resetS = 1;
        req.resetC = 1;

        req.enableA = 0;
        req.enableW = 1;
        req.enableS = 0;
        req.enableC = 0;

        assert(req.randomize() with {
            req.weight inside {[-128:127]};
        });

        finish_item(req);

        `uvm_info(get_type_name(), "Compute Phase", UVM_LOW)
        repeat (100) begin
            req = mac_txn #(WA_BITS, SC_BITS)::type_id::create("req");
            start_item(req);

            req.resetA = 0;
            req.resetW = 0;
            req.resetS = 0;
            req.resetC = 0;

            req.enableA = 1;
            req.enableW = 0;
            req.enableS = 1;
            req.enableC = 1;

            assert(req.randomize());

            finish_item(req);
        end       
    endtask
endclass



class deskew_sequence #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 32
) extends uvm_sequence #(
    deskew_txn #(NUM_LANES, DATA_WIDTH)
);
    `uvm_object_param_utils(deskew_sequence #(NUM_LANES, DATA_WIDTH))

    function new (string name = "deskew_sequence");
        super.new(name);
    endfunction

    virtual task body();
        `uvm_info(get_type_name(), "Resetting System!", UVM_LOW)
        repeat(2) begin
            req = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("req");
            start_item(req);

            req.reset = 1'b1;
            req.valid_in = 1'b0;

            assert(req.randomize());
            finish_item(req);
        end

        `uvm_info(get_type_name(), "Draining the Deskew Buffers", UVM_LOW)
        repeat(NUM_LANES) begin 
            req = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("req");
            start_item(req);

            req.reset = 1'b0;
            req.valid_in = 1'b1;

            assert(req.randomize());
            finish_item(req);
        end

        `uvm_info(get_type_name(), "Stable Flow with all the buffers filled", UVM_LOW)
        repeat(200) begin 
            req = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("req");
            start_item(req);

            req.reset = 1'b0;
            req.valid_in = 1'b1;

            assert(req.randomize());
            finish_item(req);
        end

        `uvm_info(get_type_name(), "Freeing up the buffers", UVM_LOW)
        repeat(NUM_LANES+4) begin 
            req = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("req");
            start_item(req);

            req.reset = 1'b0;
            req.valid_in = 1'b0;

            assert(req.randomize());
            finish_item(req);
        end
    endtask
endclass



class mac_env #(
    parameter int WA_WIDTH = 8,
    parameter int SC_WIDTH = 32
) extends base_env #(
    base_agent #(mac_driver #(WA_WIDTH, SC_WIDTH),
    mac_monitor #(WA_WIDTH, SC_WIDTH),
    mac_coverage #(WA_WIDTH, SC_WIDTH),
    base_sequencer #(mac_txn #(WA_WIDTH, SC_WIDTH))),
    mac_scoreboard #(WA_WIDTH, SC_WIDTH)
);
    `uvm_component_param_utils(mac_env #(WA_WIDTH, SC_WIDTH))

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



class deskew_env #(
    parameter int NUM_LANES = 8,
    parameter int DATA_WIDTH = 32
) extends base_env #(
    base_agent #(deskew_driver #(NUM_LANES, DATA_WIDTH),
    deskew_monitor #(NUM_LANES, DATA_WIDTH),
    deskew_coverage #(NUM_LANES, DATA_WIDTH),
    base_sequencer #(deskew_txn #(NUM_LANES, DATA_WIDTH))),
    deskew_scoreboard #(NUM_LANES, DATA_WIDTH)
);
    `uvm_component_param_utils(deskew_env #(NUM_LANES, DATA_WIDTH))

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



class mac_test extends base_test #(
    mac_env,
    mac_sequence #(8,32)
);
    `uvm_component_utils(mac_test)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



class deskew_test extends base_test #(
    deskew_env,
    deskew_sequence #(8, 32)
);
    `uvm_component_utils(deskew_test)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



// =====================================================================
// SECTION 6: Top Level Module instantiates the DUT and the UVM testbench.
// =====================================================================

module UVM_TPU #(
    parameter int WA_BITS = 8, // Width of Activation and Weight
    parameter int SC_BITS = 32, // Width of Sum and Carry
    parameter int NUM_LANES = 8, //Lanese in Deskew Buffer
    parameter int DATA_WIDTH = 32 //Data Width in the Deskew Buffer
);
    
    bit clock;

    always #5 clock = ~clock;

    mac_if #(WA_BITS, SC_BITS) mif(
        .clock(clock)
    );

    deskew_if #(NUM_LANES, DATA_WIDTH) dif(
        .clock(clock)
    );

    MAC DUT_MAC (
        .clock(clock),

        .weight(mif.weight),
        .activation(mif.activation),

        .prevsum(mif.prevsum),
        .prevcarry(mif.prevcarry),

        .resetA(mif.resetA),
        .resetW(mif.resetW),
        .resetS(mif.resetS),
        .resetC(mif.resetC),

        .enableA(mif.enableA),
        .enableW(mif.enableW),
        .enableS(mif.enableS),
        .enableC(mif.enableC),

        .nextsum(mif.nextsum),
        .nextcarry(mif.nextcarry),

        .weight_pass(mif.weight_pass),
        .activation_pass(mif.activation_pass)
    );

    deskew_buffer DUT_DESKEWBUFFER (
        .clock(clock),

        .reset(dif.reset),

        .valid_in(dif.valid_in),
        .vector_in(dif.vector_in),

        .valid_out(dif.valid_out),
        .vector_out(dif.vector_out)
    );

    initial begin
        uvm_config_db #(virtual mac_if #(WA_BITS, SC_BITS))::set(null, "*", "mac_vif", mif);
        //uvm_config_db #(virtual deskew_if #(NUM_LANES, DATA_WIDTH))::set(null, "*", "deskew_vif", dif);

        run_test("mac_test");
    end

    initial begin
        $dumpfile("UVM_TPU.vcd");
        $dumpvars(0, UVM_TPU);
    end
endmodule

/*
virtual task sample_item(output deskew_txn #(NUM_LANES, DATA_WIDTH) txn);
    localparam int PIPE_DEPTH = (NUM_LANES > 1) ? (NUM_LANES - 1) : 0;
    deskew_txn #(NUM_LANES, DATA_WIDTH) sample_txn;

    @(posedge deskew_vif.clock);

    // 1. Check if the pipeline has reached the target deskew latency
    if (PIPE_DEPTH == 0) begin
        // Corner case: N=1 (zero cycle latency)
        txn = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("txn");
        txn.valid_in   = deskew_vif.valid_in;
        txn.vector_in  = deskew_vif.vector_in;
        txn.valid_out  = deskew_vif.valid_out;
        txn.vector_out = deskew_vif.vector_out;
    end else begin
        if (txn_pipeline.size() >= PIPE_DEPTH) begin
            // Pop the transaction entered (NUM_LANES - 1) cycles ago
            txn = txn_pipeline.pop_front();
            txn.valid_out  = deskew_vif.valid_out;
            txn.vector_out = deskew_vif.vector_out;
        end else begin
            txn = null;
        end

        // 2. Capture current input stimuli
        sample_txn = deskew_txn #(NUM_LANES, DATA_WIDTH)::type_id::create("sample_txn");
        sample_txn.valid_in  = deskew_vif.valid_in;
        sample_txn.vector_in = deskew_vif.vector_in;

        txn_pipeline.push_back(sample_txn);

        // 3. Self-prime the pipeline: recurse until the queue fills to PIPE_DEPTH
        if (txn == null) begin
            sample_item(txn);
        end
    end
endtask
*/