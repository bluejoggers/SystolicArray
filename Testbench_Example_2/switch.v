module switch #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16,
    parameter ADDR_DIV = 8'h3f
)(
    input clock,
    input reset,
    input valid,

    input [ADDR_WIDTH-1:0] addr,
    input [DATA_WIDTH-1:0] data,

    output reg [DATA_WIDTH-1:0] data_a,
    output reg [ADDR_WIDTH-1:0] addr_a,

    output reg [DATA_WIDTH-1:0] data_b,
    output reg [ADDR_WIDTH-1:0] addr_b
);

    always @(posedge clock) begin
        if (reset) begin
            data_a <= 0;
            addr_a <= 0;
            data_b <= 0;
            addr_b <= 0;
        end else begin
            if (valid) begin
            if (addr >= 0 && addr <= ADDR_DIV) begin
                data_a <= data;
                addr_a <= addr;
                data_b <= 0;
                addr_b <= 0;
            end else begin
                data_a <= 0;
                addr_a <= 0;
                data_b <= data;
                addr_b <= addr;
            end
            end
        end
    end
endmodule 