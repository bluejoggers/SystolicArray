import uvm_pkg::*;
`include "uvm_macros.svh"

interface reg_if #(
    parameter int DEPTH = 16,
    parameter int ADDR_WIDTH = 4,
    parameter int DATA_WIDTH = 8
)(
    input bit clock
);
    logic reset;
    logic w_enable;
    logic r_enable;

    logic [ADDR_WIDTH-1:0] address;
    logic [DATA_WIDTH-1:0] w_data;

    logic [DATA_WIDTH-1:0] r_data;
endinterface

class reg_txn_base #(
    parameter int DEPTH = 16,
    parameter int ADDR_WIDTH = 4,
    parameter int DATA_WIDTH = 8
) extends uvm_sequence_item;
    rand bit w_enable;
    rand bit r_enable;

    rand bit [ADDR_WIDTH-1:0] address;
    rand bit [DATA_WIDTH-1:0] w_data;

    bit [DATA_WIDTH-1:0] r_data;

    constraint wr_xor_rd {
        w_enable != r_enable;
    }

    `uvm_object_utils_begin(reg_txn_base)
        `uvm_field_int(w_enable, UVM_ALL_ON)
        `uvm_field_int(r_enable, UVM_ALL_ON)
        `uvm_field_int(address, UVM_ALL_ON)
        `uvm_field_int(w_data, UVM_ALL_ON)
        `uvm_field_int(r_data, UVM_ALL_ON)
    `uvm_object_utils_end

    function new (string name = "reg_txn_base");
        super.new(name);
    endfunction
endclass

typedef reg_txn_base#() reg_txn;

//Building a uvm_driver happens in three stages 

    //Stage 1: Declaring the class and building the constructor function
class reg_driver extends uvm_driver #(  
    reg_txn
);
    `uvm_component_utils(reg_driver)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    //Stage 2: Getting hold of the interface 
    virtual reg_if vif;

    virtual function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db #(virtual reg_if)::get(this, "", "vif", vif)) begin
        `uvm_fatal(get_type_name(), "Virtual handle not found!")
    end
    endfunction

    //Drive the interface im the run phase 
    virtual task run_phase(uvm_phase phase);
        reg_txn txn;

        forever begin
            seq_item_port.get_next_item(txn); //Get the next item from sequencer's port

            @(posedge vif.clock);
            vif.w_enable <= txn.w_enable;
            vif.r_enable <= txn.r_enable;

            vif.address <= txn.address;
            vif.w_data <= txn.w_data;
            
            @(posedge vif.clock);
            if(txn.r_enable) begin
                @(posedge vif.clock);
                txn.r_data = vif.r_data;
            end

            seq_item_port.item_done();
        end 
    endtask

endclass

//Building a uvm_monitor happens in 4 stages

    //Stage 1: Class declaration and building the constructor function
class reg_monitor extends uvm_monitor;
    `uvm_component_utils(reg_monitor)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    //Stage 2: Getting the virtual interface to monitor and setting up the analysis port
    virtual reg_if vif;

    uvm_analysis_port #(reg_txn) monitor_analysis_port;

    //Stage 3: Build the monitor
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        monitor_analysis_port = new("monitor_analysis_port", this);

        if (!uvm_config_db #(virtual reg_if)::get(this, "", "vif", vif)) begin 
                `uvm_fatal(get_type_name(), "Virtual handle not found");
        end
    endfunction

    //Stage 4: Monitor's run phase
    virtual task run_phase(uvm_phase phase);
        reg_txn txn;

        forever begin
            @(posedge vif.clock);

            if (vif.w_enable) begin
                txn = reg_txn::type_id::create("txn");

                txn.w_enable = vif.w_enable;
                txn.address = vif.address;
                txn.w_data = vif.w_data;

                monitor_analysis_port.write(txn);
            end
            else if (vif.r_enable) begin
                txn = reg_txn::type_id::cre//ate("txn");

                txn.r_enable = vif.r_enable;
                txn.address = vif.address;

                @(posedge vif.clock);
                txn.r_data = vif.r_data;

                monitor_analysis_port.write(txn);
            end
        end
    endtask

    //Optional: Checking and Coverage
endclass

class reg_coverage extends uvm_subscriber #(
    reg_txn
);
    `uvm_component_utils(reg_coverage)

    reg_txn txn;

    covergroup reg_cg;
        option.per_instance = 1;
        cp_w_enable : coverpoint txn.w_enable;
        cp_r_enable : coverpoint txn.r_enable;
        cp_address: coverpoint txn.address;
    endgroup

    function new (string name, uvm_component parent);
        super.new(name, parent);
        reg_cg = new();
    endfunction

    virtual function void write (T t);
        txn = t;

        reg_cg.sample();
        `uvm_info(get_type_name(), $sformatf("Sampled Address: %0h", txn.address), UVM_HIGH)
    endfunction
endclass

class reg_sequencer extends uvm_sequencer #(
    reg_txn
);
    `uvm_component_utils(reg_sequencer)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass

class reg_sequence extends uvm_sequence #(
    reg_txn
);
    `uvm_object_utils(reg_sequence)

    function new (string name = "reg_sequence");
        super.new(name);
    endfunction

    virtual task body ();

        repeat (100) begin
            req = reg_txn::type_id::create("req");

            start_item(req);
            assert(req.randomize());
            finish_item(req);
        end 

        //this entire thing can be done by simply using the macro `uvm_do(req)
    endtask
endclass

class reg_scoreboard #(
    parameter int DEPTH = 16,
    parameter int ADDR_WIDTH = 4,
    parameter int DATA_WIDTH = 8
) extends uvm_scoreboard;

    `uvm_component_utils(reg_scoreboard)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    uvm_analysis_imp #(reg_txn, reg_scoreboard) scoreboard_imp;

    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);
        scoreboard_imp = new("scoreboard_imp", this);
    endfunction

    //Reference Model for reg_bank

    bit [DATA_WIDTH-1:0] expected_mem [DEPTH];
    bit written [DEPTH];

    virtual function void write (reg_txn txn);
        if (txn.w_enable) begin
            expected_mem[txn.address] = txn.w_data;
            written[txn.address] = 1;
        end
        else if (txn.r_enable) begin 
            if(!written[txn.address]) begin
                `uvm_info(get_type_name(), $sformatf("[ADDRESS] %0h : Read before a write, skpping check!", txn.address), UVM_LOW)
            end
            else if (txn.r_data != expected_mem[txn.address]) begin 
                `uvm_info(get_type_name(), $sformatf("[ADDRESS] %0h : Mismatch! [EXPECTED] %0h | [FOUND] %0h", txn.address, expected_mem[txn.address], txn.r_data), UVM_LOW)
            end
            else begin
                `uvm_info(get_type_name(), $sformatf("[ADDRESS] %0h : Match! [EXPECTED] %0h | [FOUND] %0h", txn.address, expected_mem[txn.address], txn.r_data), UVM_LOW)
            end
        end
    endfunction
endclass

class reg_agent extends uvm_agent;
    `uvm_component_utils(reg_agent)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    //Declare handles for all the components that need to be inside an agent
    reg_monitor monitor_in_agent;
    reg_driver driver_in_agent;
    reg_sequencer sequencer_in_agent;
    reg_coverage coverage_in_agent;

    //Instantiate components in build_phase
    virtual function void build_phase (uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active()) begin  //Since driver and sequencer are the components that form the part of an active agent
            driver_in_agent = reg_driver::type_id::create("driver_in_agent", this);
            sequencer_in_agent = reg_sequencer::type_id::create("sequencer_in_agent", this);
        end

        //Monitor and Coverage are always a part of ana agent regardless of it being active or passive
        monitor_in_agent = reg_monitor::type_id::create("monitor_in_agent", this);
        coverage_in_agent = reg_coverage::type_id::create("coverage_in_agent", this);
    endfunction

    //Connect the components in connect phase

    virtual function void connect_phase (uvm_phase phase);
        super.connect_phase(phase);

        if(get_is_active()) begin
            driver_in_agent.seq_item_port.connect(sequencer_in_agent.seq_item_export);
            monitor_in_agent.monitor_analysis_port.connect(coverage_in_agent.analysis_export);
        end
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
        scoreboard_in_env = reg_scoreboard #()::type_id::create("scoreboard_in_env", this);
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

        env_in_test = reg_env::type_id::create("env_in_test", this);
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

    /*
    function void start_of_simulation_phase (uvem_phase phase);
        super.start_of_simulation_phase(phase);

        uvm_config_db #(uvm_object_wrapper)::set(this, "env_in_test.agent_in_env.sequencer_in_agent.run_phase", "default_sequnce", reg_sequence::type_id::get());

    endfunction
    */
endclass

module UVM_regblock;
    bit clock;
    always #5 clock = ~clock;

    reg_if rif (clock);
    regblock DUT (
        .clock(clock),
        .reset(rif.reset),

        .w_enable(rif.w_enable),
        .r_enable(rif.r_enable),

        .address(rif.address),
        .w_data(rif.w_data),

        .r_data(rif.r_data)
    );

    initial begin
        $dumpfile("regblock_testbench.vcd");
        $dumpvars;

        clock = 1'b0;
        rif.reset = 1'b1;

        #20 rif.reset = 1'b0;
    end

    initial begin
        uvm_config_db #(virtual reg_if)::set(null, "*", "vif", rif);
        run_test("reg_test");
    end
endmodule