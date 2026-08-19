module regblock #(
    parameter DEPTH = 16,
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 8
)(
    input clock,
    input reset,
    
    input w_enable,
    input r_enable,

    input [ADDR_WIDTH-1:0] address,
    input [DATA_WIDTH-1:0] w_data,
    
    output reg [DATA_WIDTH-1:0] r_data
);

    reg [DATA_WIDTH-1:0] mem [DEPTH-1:0];

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            r_data <= 8'h00;
        end
        else begin
            if (w_enable) begin
                mem[address] <= w_data;
            end
            else if (r_enable) begin 
                r_data <= mem[address];
            end
        end
    end
endmodule 