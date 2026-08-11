//Parameterised classes

class something #(parameter int BITWIDTH = 8);
    logic [BITWIDTH-1:0] data;
endclass 

module top;
    something #(.BITWIDTH(8)) obj1;
    something #(.BITWIDTH(16)) obj2;
endmodule 