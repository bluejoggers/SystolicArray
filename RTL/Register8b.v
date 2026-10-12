//Parameterized 8-bit register module for Activation, Weight and Sum-in Registers in PE_Datapath.v
//BITS = 8 for Activation and Weight Registers
//BITS = 16 for Sum-in Register


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