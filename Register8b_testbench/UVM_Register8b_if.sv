interface Register8b_if #(parameter BITS = 8) (input logic clk);

    logic reset;
    logic enable;
    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;

    //Driver Perspective
    modport driver (input clk, 
                    output reset, 
                    enable, 
                    data_in);
                    
    //Monitor Perspective 
    modport monitor (input clk,
                    reset,
                    enable,
                    data_in,
                    data_out);

endinterface