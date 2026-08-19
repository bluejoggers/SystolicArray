import uvm_pkg::*;
`include "uvm_macros.svh"

module hello_uvm;
    initial begin
        `uvm_info("UVM_SETUP", "SUCCESS! The UVM environment is ready and running with Verilator.", UVM_LOW);

        $finish;
    end
endmodule