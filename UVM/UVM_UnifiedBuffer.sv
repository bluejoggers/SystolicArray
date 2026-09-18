import uvm_pkg::*;
`include "uvm_macros.svh"



module unified_buffer #(
    parameter NUM_BANKS = 8,            // One bank per systolic array column
    parameter DEPTH     = 4096          // Words per bank => 4096*32b = 16KiB/bank, 128KiB total across 8 banks
)(
    input wire clock,
    input wire reset,

    // ---- WRITE PORT 1: from the on-chip Normalization/Quantization block ----
    input wire [NUM_BANKS-1:0]                  norm_write_req,     // Per-bank write request (NOT a single shared enable)
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  norm_write_address, // One write address per bank
    input wire [(NUM_BANKS*8)-1:0]               norm_write_data,    // Concatenated 32-bit words, one per bank

    // ---- WRITE PORT 2: from off-chip memory via the Host Interface / DMA ----
    input wire [NUM_BANKS-1:0]                  host_write_req,     // Per-bank write request
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  host_write_address, // One write address per bank
    input wire [(NUM_BANKS*8)-1:0]               host_write_data,    // Concatenated 32-bit words, one per bank

    // ---- READ PORT: toward MXU (next-layer activations) / Host Interface readback ----
    input wire read_enable,
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  read_address,       // One read address per bank
    output reg  [(NUM_BANKS*8)-1:0]               read_data,          // Concatenated 32-bit words, one per bank

    // ---- STATUS: flags which bank(s) had a NORM write dropped this cycle due to HOST priority ----
    output wire [NUM_BANKS-1:0]                  write_conflict
);

    localparam ADDR_WIDTH = $clog2(DEPTH);

    genvar bank;
    generate
        for (bank = 0; bank < NUM_BANKS; bank = bank + 1) begin : sram_banks

            // Per-bank address/data slices for both write sources
            wire [ADDR_WIDTH-1:0] norm_addr = norm_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [7:0]           norm_data = norm_write_data   [bank*8 +: 8];
            wire                  norm_req  = norm_write_req[bank];

            wire [ADDR_WIDTH-1:0] host_addr = host_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [7:0]           host_data = host_write_data   [bank*8 +: 8];
            wire                  host_req  = host_write_req[bank];

            wire [ADDR_WIDTH-1:0] rd_addr   = read_address[bank*ADDR_WIDTH +: ADDR_WIDTH];

            // ---- Arbiter: HOST wins on simultaneous request to this bank ----
            wire bank_write_en   = norm_req | host_req;
            wire [ADDR_WIDTH-1:0] bank_wr_addr = host_req ? host_addr : norm_addr;
            wire [7:0]           bank_wr_data = host_req ? host_data : norm_data;
            assign write_conflict[bank] = norm_req & host_req;   // NORM write dropped this cycle when this is 1

            // The memory array for this bank: 4096 words x 32 bits = 16 KiB
            reg [7:0] mem [0:DEPTH-1];

            integer i;

            always @(posedge clock) begin
                if (reset) begin
                    for (i = 0; i < DEPTH; i = i + 1) begin
                        mem[i] <= 8'sd0;
                    end
                    read_data[bank*8 +: 8] <= 8'sd0;
                end else begin
                    if (read_enable) begin
                        read_data[bank*8 +: 8] <= mem[rd_addr];
                    end
                    if (bank_write_en) begin
                        mem[bank_wr_addr] <= bank_wr_data;
                    end
                end
            end

        end
    endgenerate

endmodule



// ----------------------------------------------------
// 1. Interface
// ----------------------------------------------------



interface ub_if #(
    parameter int NUM_BANKS = 8, 
    parameter int DEPTH = 4096)(
    input bit clock
    );

    localparam int ADDR_WIDTH = $clog2(DEPTH);

    logic reset;
    
    // NORM Port
    logic [NUM_BANKS-1:0]                 norm_write_req;
    logic [(NUM_BANKS*ADDR_WIDTH)-1:0]    norm_write_address;
    logic [(NUM_BANKS*8)-1:0]             norm_write_data;

    // HOST Port
    logic [NUM_BANKS-1:0]                 host_write_req;
    logic [(NUM_BANKS*ADDR_WIDTH)-1:0]    host_write_address;
    logic [(NUM_BANKS*8)-1:0]             host_write_data;

    // READ Port
    logic                                 read_enable;
    logic [(NUM_BANKS*ADDR_WIDTH)-1:0]    read_address;
    logic [(NUM_BANKS*8)-1:0]             read_data;

    // STATUS
    logic [NUM_BANKS-1:0]                 write_conflict;
endinterface



// ----------------------------------------------------
// 2. Transaction Object
// ----------------------------------------------------



class ub_txn #(
    parameter int B = 8, 
    parameter int D = 4096
    ) extends uvm_sequence_item;

    localparam int AW = $clog2(D);

    rand logic [B-1:0]          norm_write_req;
    rand logic [(B*AW)-1:0]     norm_write_address;
    rand logic [(B*8)-1:0]      norm_write_data;

    rand logic [B-1:0]          host_write_req;
    rand logic [(B*AW)-1:0]     host_write_address;
    rand logic [(B*8)-1:0]      host_write_data;

    rand logic                  read_enable;
    rand logic [(B*AW)-1:0]     read_address;

    logic [(B*8)-1:0]           read_data;
    logic [B-1:0]               write_conflict;

    `uvm_object_param_utils_begin(ub_txn #(B, D))
        `uvm_field_int(norm_write_req,     UVM_ALL_ON)
        `uvm_field_int(norm_write_address, UVM_ALL_ON)
        `uvm_field_int(norm_write_data,    UVM_ALL_ON)
        `uvm_field_int(host_write_req,     UVM_ALL_ON)
        `uvm_field_int(host_write_address, UVM_ALL_ON)
        `uvm_field_int(host_write_data,    UVM_ALL_ON)
        `uvm_field_int(read_enable,        UVM_ALL_ON)
        `uvm_field_int(read_address,       UVM_ALL_ON)
        `uvm_field_int(read_data,          UVM_ALL_ON)
        `uvm_field_int(write_conflict,     UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "ub_txn");
        super.new(name);
    endfunction
endclass



// ----------------------------------------------------
// 3. Driver
// ----------------------------------------------------



class ub_driver #(
    parameter int B = 8, 
    parameter int D = 4096
    ) extends uvm_driver #(ub_txn #(B, D));

    `uvm_component_param_utils(ub_driver #(B, D))

    virtual ub_if #(B, D) vif;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db #(virtual ub_if #(B, D))::get(this, "", "vif", vif))
            `uvm_fatal(get_type_name(), "Virtual interface not found!")
    endfunction

    virtual task run_phase (uvm_phase phase);
        ub_txn #(B, D) txn;

        forever begin
            seq_item_port.get_next_item(txn);

            @(posedge vif.clock);
            vif.norm_write_req     <= txn.norm_write_req;
            vif.norm_write_address <= txn.norm_write_address;
            vif.norm_write_data    <= txn.norm_write_data;
            vif.host_write_req     <= txn.host_write_req;
            vif.host_write_address <= txn.host_write_address;
            vif.host_write_data    <= txn.host_write_data;
            vif.read_enable        <= txn.read_enable;
            vif.read_address       <= txn.read_address;

            seq_item_port.item_done();
        end
    endtask
endclass



// ----------------------------------------------------
// 4. Monitor
// ----------------------------------------------------



class ub_monitor #(
    parameter int B = 8, 
    parameter int D = 4096
    ) extends uvm_monitor;

    `uvm_component_param_utils(ub_monitor #(B, D))

    virtual ub_if #(B, D) vif;
    uvm_analysis_port #(ub_txn #(B, D)) monitor_analysis_port;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        monitor_analysis_port = new("monitor_analysis_port", this);

        if (!uvm_config_db #(virtual ub_if #(B, D))::get(this, "", "vif", vif))
            `uvm_fatal("MON", "Virtual interface not found!")
    endfunction

    virtual task run_phase(uvm_phase phase);
        // Pipeline queue to hold transactions for 1 clock cycle
        ub_txn #(B, D) pipeline_q [$]; 
        
        forever begin
            @(posedge vif.clock);
            
            if (pipeline_q.size() > 0) begin
                ub_txn #(B, D) completed_txn = pipeline_q.pop_front();
                
                completed_txn.read_data = vif.read_data; 
                monitor_analysis_port.write(completed_txn);
            end
            
            if (vif.read_enable || vif.norm_write_req || vif.host_write_req) begin
                ub_txn #(B, D) new_txn = ub_txn#(B, D)::type_id::create("new_txn");
                
                // Capture inputs
                new_txn.norm_write_req     = vif.norm_write_req;
                new_txn.norm_write_address = vif.norm_write_address;
                new_txn.norm_write_data    = vif.norm_write_data;
                new_txn.host_write_req     = vif.host_write_req;
                new_txn.host_write_address = vif.host_write_address;
                new_txn.host_write_data    = vif.host_write_data;
                new_txn.read_enable        = vif.read_enable;
                new_txn.read_address       = vif.read_address;
                
                new_txn.write_conflict     = vif.write_conflict;
                
                pipeline_q.push_back(new_txn);
            end
        end
    endtask
endclass



// ----------------------------------------------------
// 5. Scoreboard (Arbitration & Memory Model)
// ----------------------------------------------------



class ub_scoreboard #(
    parameter int B = 8, 
    parameter int D = 4096
    ) extends uvm_scoreboard;

    localparam int AW = $clog2(D);
    `uvm_component_param_utils(ub_scoreboard #(B, D))
    
    uvm_analysis_imp #(ub_txn #(B, D), ub_scoreboard#(B, D)) scoreboard_analysis_imp;

    // Software replica of the SRAM banks
    logic [7:0] sw_mem [B][D];

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        scoreboard_analysis_imp = new("scoreboard_analysis_imp", this);

        for (int i = 0; i < B; i++) begin
            for (int j = 0; j < D; j++) sw_mem[i][j] = 8'h00;
        end
    endfunction

    virtual function void write (ub_txn #(B, D) txn);
        logic [7:0] expected_read [B];
        logic [B-1:0] expected_conflict;

        // 1. PREDICT READ (Occurs before writes take effect, per RTL spec)
        if (txn.read_enable) begin
            for (int i = 0; i < B; i++) begin
                logic [AW-1:0] r_addr = txn.read_address[i*AW +: AW];
                expected_read[i] = sw_mem[i][r_addr];
                
                if (txn.read_data[i*8 +: 8] !== expected_read[i]) begin
                    `uvm_error("SB_READ_FAIL", $sformatf("Bank %0d: Expected Read %0h, Got %0h", i, expected_read[i], txn.read_data[i*8 +: 8]))
                end
            end
        end

        // 2. CHECK CONFLICT FLAGS & APPLY WRITES TO SOFTWARE MEMORY
        for (int i = 0; i < B; i++) begin
            logic n_req = txn.norm_write_req[i];
            logic h_req = txn.host_write_req[i];
            logic [AW-1:0] n_addr = txn.norm_write_address[i*AW +: AW];
            logic [AW-1:0] h_addr = txn.host_write_address[i*AW +: AW];
            logic [7:0]    n_data = txn.norm_write_data[i*8 +: 8];
            logic [7:0]    h_data = txn.host_write_data[i*8 +: 8];

            // Evaluate Conflict
            expected_conflict[i] = n_req & h_req;
            if (txn.write_conflict[i] !== expected_conflict[i]) begin
                `uvm_error("SB_FLAG_FAIL", $sformatf("Bank %0d: Expected Conflict %0b, Got %0b", i, expected_conflict[i], txn.write_conflict[i]))
            end

            // Execute Arbitration in Software
            if (h_req) begin
                sw_mem[i][h_addr] = h_data; // HOST wins
            end else if (n_req) begin
                sw_mem[i][n_addr] = n_data; // NORM writes only if HOST is idle
            end
        end
    endfunction
endclass



// ----------------------------------------------------
// 6. Sequence (Targeted Arbitration Scenarios)
// ----------------------------------------------------



class ub_sequence #(
    parameter int B = 8, 
    parameter int D = 4096
) extends uvm_sequence #(
    ub_txn #(B, D)
);

    `uvm_object_param_utils(ub_sequence #(B, D))

    function new (string name = "ub_sequence");
        super.new(name);
    endfunction

    virtual task body ();
        // Phase 1: NORM Only (No conflicts)
        repeat(50) begin
            req = ub_txn#(B, D)::type_id::create("req");
            start_item(req);
            assert(req.randomize() with { host_write_req == '0; });
            finish_item(req);
        end

        // Phase 2: HOST Only (No conflicts)
        repeat(50) begin
            req = ub_txn#(B, D)::type_id::create("req");
            start_item(req);
            assert(req.randomize() with { norm_write_req == '0; });
            finish_item(req);
        end

        // Phase 3: Heavy Collisions (Verify HOST overrides NORM)
        repeat(100) begin
            req = ub_txn#(B, D)::type_id::create("req");
            start_item(req);
            // High probability of both requests being asserted simultaneously
            assert(req.randomize() with { 
                foreach(norm_write_req[i]) norm_write_req[i] dist {1:=80, 0:=20};
                foreach(host_write_req[i]) host_write_req[i] dist {1:=80, 0:=20};
                read_enable == 1'b1; 
            });
            finish_item(req);
        end
    endtask
endclass



// ----------------------------------------------------
// 7. Sequencer
// ----------------------------------------------------



class ub_sequencer #(
    parameter int B = 8, 
    parameter int D = 4096
) extends uvm_sequencer #(
    ub_txn #(B, D)
);

    `uvm_component_param_utils(ub_sequencer #(B, D))

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass



// ----------------------------------------------------
// 8. Coverage (Optional, for future extension)
// ----------------------------------------------------

class ub_coverage #(
    parameter int B = 8, 
    parameter int D = 4096
) extends uvm_subscriber #(ub_txn #(B, D));

    `uvm_component_param_utils(ub_coverage #(B, D))

    // ----------------------------------------------------
    // The Per-Bank Covergroup
    // ----------------------------------------------------
    covergroup ub_bank_cg with function sample(
        logic n_req, logic h_req, logic r_en,
        logic [11:0] w_addr, logic [11:0] r_addr,
        logic [7:0] w_data
    );
        
        // 1. Control Signals
        cp_norm: coverpoint n_req;
        cp_host: coverpoint h_req;
        cp_read: coverpoint r_en;

        // 2. Arbitration State (The most critical metric)
        cx_arbitration: cross cp_norm, cp_host {
            bins idle       = binsof(cp_norm) intersect {0} && binsof(cp_host) intersect {0};
            bins norm_only  = binsof(cp_norm) intersect {1} && binsof(cp_host) intersect {0};
            bins host_only  = binsof(cp_norm) intersect {0} && binsof(cp_host) intersect {1};
            bins conflict   = binsof(cp_norm) intersect {1} && binsof(cp_host) intersect {1};
        }

        // 3. Address Boundaries
        cp_w_addr: coverpoint w_addr iff (n_req || h_req) {
            bins first_addr = {12'h000};
            bins last_addr  = {12'hFFF};
            bins middle     = {[12'h001 : 12'hFFE]};
        }
        
        cp_r_addr: coverpoint r_addr iff (r_en) {
            bins first_addr = {12'h000};
            bins last_addr  = {12'hFFF};
            bins middle     = {[12'h001 : 12'hFFE]};
        }

        // 4. Same-Cycle Address Collision (Read-before-Write Corner Case)
        cp_rw_collision: coverpoint (w_addr == r_addr) iff ((n_req || h_req) && r_en) {
            bins same_address = {1};
            bins diff_address = {0};
        }

        // 5. Activation Data Extremes
        cp_w_data: coverpoint w_data iff (n_req || h_req) {
            bins zero       = {8'h00};
            bins saturated  = {8'hFF};
            bins typical    = {[8'h01 : 8'hFE]};
        }
        
    endgroup

    function new(string name, uvm_component parent);
        super.new(name, parent);
        ub_bank_cg = new();
        ub_bank_cg.set_inst_name("ub_bank_cg");
    endfunction

    virtual function void write(ub_txn #(B, D) t);
        logic [11:0] resolved_w_addr;
        logic [7:0]  resolved_w_data;

        // Loop through all 8 banks and sample them independently
        for (int i = 0; i < B; i++) begin
            
            // Replicate the RTL's arbitration to determine what actually wrote
            if (t.host_write_req[i]) begin
                resolved_w_addr = t.host_write_address[i*12 +: 12];
                resolved_w_data = t.host_write_data[i*8 +: 8];
            end else begin
                resolved_w_addr = t.norm_write_address[i*12 +: 12];
                resolved_w_data = t.norm_write_data[i*8 +: 8];
            end

            // Feed the single-bank data into the covergroup
            ub_bank_cg.sample(
                t.norm_write_req[i], 
                t.host_write_req[i], 
                t.read_enable, 
                resolved_w_addr, 
                t.read_address[i*12 +: 12], 
                resolved_w_data
            );
        end
    endfunction
endclass



// ----------------------------------------------------
// 9. Agent
// ----------------------------------------------------



class ub_agent #(
    parameter int B = 8, 
    parameter int D = 4096
) extends uvm_agent;

    `uvm_component_param_utils(ub_agent #(B, D))

    ub_coverage #(B, D) coverage_in_agent;
    ub_driver #(B, D) driver_in_agent;
    ub_monitor #(B, D) monitor_in_agent;
    ub_sequencer #(B, D) sequencer_in_agent;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active() == UVM_ACTIVE) begin
            driver_in_agent    = ub_driver#(B, D)::type_id::create("driver_in_agent", this);
            sequencer_in_agent = ub_sequencer#(B, D)::type_id::create("sequencer_in_agent", this);
        end

        monitor_in_agent  = ub_monitor#(B, D)::type_id::create("monitor_in_agent", this);
        coverage_in_agent = ub_coverage#(B, D)::type_id::create("coverage_in_agent", this);
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
// 10. Environment
// ----------------------------------------------------



class ub_env #(
    parameter int B = 8, 
    parameter int D = 4096
) extends uvm_env;

    `uvm_component_param_utils(ub_env #(B, D))

    ub_agent #(B, D) agent_in_env;
    ub_scoreboard #(B, D) scoreboard_in_env;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        agent_in_env = ub_agent#(B, D)::type_id::create("agent_in_env", this);
        scoreboard_in_env = ub_scoreboard#(B, D)::type_id::create("scoreboard_in_env", this);
    endfunction

    virtual function void connect_phase (uvm_phase phase);
        agent_in_env.monitor_in_agent.monitor_analysis_port.connect(scoreboard_in_env.scoreboard_analysis_imp);
    endfunction
endclass




// ----------------------------------------------------
// 11. Test
// ----------------------------------------------------


class ub_test extends uvm_test;

    `uvm_component_utils(ub_test)

    ub_env #(8, 4096) env_in_test;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        env_in_test = ub_env#(8, 4096)::type_id::create("env_in_test", this);
    endfunction

    virtual task run_phase (uvm_phase phase);
        ub_sequence #(8, 4096) seq = ub_sequence#(8, 4096)::type_id::create("seq");
        phase.raise_objection(this);
        seq.start(env_in_test.agent_in_env.sequencer_in_agent);
        phase.drop_objection(this);
    endtask
endclass



// ----------------------------------------------------
// 12. Top Module
// ----------------------------------------------------



module UVM_UnifiedBuffer #(
    parameter B = 8, 
    parameter D = 4096
);

    bit clock;
    bit reset; 

    always #5 clock = ~clock;

    ub_if #(B, D) uif (
        .clock(clock)
    );

    // 3. Reset Generation (Driven directly into the interface)
    initial begin
        uif.reset = 1'b1;
        #25; // Hold reset active for a few cycles
        uif.reset = 1'b0;
    end

    // 4. DUT Instantiation and Port Mapping
    unified_buffer #(
        .NUM_BANKS(B),
        .DEPTH(D)
    ) dut (
        .clock             (uif.clock),
        .reset             (uif.reset),
        
        // NORM Port
        .norm_write_req    (uif.norm_write_req),
        .norm_write_address(uif.norm_write_address),
        .norm_write_data   (uif.norm_write_data),
        
        // HOST Port
        .host_write_req    (uif.host_write_req),
        .host_write_address(uif.host_write_address),
        .host_write_data   (uif.host_write_data),
        
        // READ Port
        .read_enable       (uif.read_enable),
        .read_address      (uif.read_address),
        .read_data         (uif.read_data),
        
        // STATUS Port
        .write_conflict    (uif.write_conflict)
    );

    // 5. UVM Execution
    initial begin
        // Pass the virtual interface to the UVM Config DB
        uvm_config_db #(virtual ub_if #(8, 4096))::set(null, "*", "vif", uif);
        
        // Start the test (matches the string name in `uvm_component_utils`)
        run_test("ub_test");
    end

    // Optional: Dump waveforms for GTKWave/Verilator
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, UVM_UnifiedBuffer);
    end
endmodule