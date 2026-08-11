//nstead of wiggling wires one by one, UVM generates "objects" containing randomized data and passes them around.

import uvm_package :: *;

`include "uvm_macros.svh"

class reg_txn extends uvm_sequence_item;   //Inputs to the register

    rand logic reset;
    rand logic enable;
    rand logic [7:0] data_in;

    logic [7:0] data_out;

    //Register with UVM factory
    `uvm_object_utils_begin(reg_txn)
        `uvm_field_int(reset, UVM_ALL_ON)
        `uvm_field_int(enable, UVM_ALL_ON)
        `uvm_field_int(data_in, UVM_ALL_ON)
        `uvm_field_int(data_out, UVM_ALL_ON)
    `uvm_object_utils_end

    //Constructor 
    function new(string name = "reg_txn");
        super.new(name);
    endfunction

    // Constraint to make reset rare during normal testing
  constraint reset_c {
    reset dist {1 := 1, 0 := 9}; // Reset is high 10% of the time, low 90%
  }
endclass

