/*
    We'll keep this testbench to two components:

    A test, which sets things up and decides what runs
    An environment, which does the actual  printing
*/

/*
class test extends uvm_test;    //test inherits all the properties of uvm_test
    `uvm_component_utils(test)  //Registering test with the uvm factory

    env top_env;    //Declaring an object top_env of class env (configured later)

    function new (string name, uvm_component parent = null);    //The constructor new() takes the standard name, parent arguments every uvm_component needs
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);    //The build_phase constructs the environment
        super.build_phase(phase);   //WE call the parent class's build_phase first, then we do our work

        top_env = env::type_id::create("top_env", this);
    endfunction

    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction

endclass 

class env extends uvm_env;
    `uvm_component_utils(env)

    function new (string name, uvm_component parent);  
        super.new(name, parent);
    endfunction

    function void build_phase (uvm_phase phase);
        super.build_phase(phase);
    endfunction

    task run_phase (uvm_phase phase);
        `uvm_info(get_name(), $sformatf("[UVM] Simulation has started!"), UVM_LOW);
    endtask
endclass

module hello_uvm_v1;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    initial begin 
        run_test(base_test);
    end
endmodule
*/

// 1. Import the UVM package and macros FIRST, outside of any module or class
import uvm_pkg::*;
`include "uvm_macros.svh"

// 2. Define 'env' BEFORE 'test' so the compiler knows it exists
class env extends uvm_env;
    `uvm_component_utils(env)

    function new (string name, uvm_component parent);  
        super.new(name, parent);
    endfunction

    function void build_phase (uvm_phase phase);
        super.build_phase(phase);
    endfunction

    task run_phase (uvm_phase phase);
        `uvm_info(get_name(), $sformatf("[UVM] Simulation has started!"), UVM_LOW);
    endtask
endclass

// 3. Define 'test' next, which can now safely instantiate 'env'
class test extends uvm_test;    
    `uvm_component_utils(test)  

    env top_env;    

    function new (string name, uvm_component parent = null);    
        super.new(name, parent);
    endfunction

    virtual function void build_phase (uvm_phase phase);    
        super.build_phase(phase);   
        top_env = env::type_id::create("top_env", this);
    endfunction

    virtual function void end_of_elaboration_phase (uvm_phase phase);
        uvm_top.print_topology();
    endfunction

endclass 

// 4. The top-level module
module hello_uvm_v1;

    initial begin 
        // 5. Pass the exact string name of your test class
        run_test("test");
    end
    
endmodule