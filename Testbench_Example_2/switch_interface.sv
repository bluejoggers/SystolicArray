interface switch_if #(
    parameter int ADDR_WIDTH = 8,
    parameter int DATA_WIDTH = 16
)(
    input logic clock
);
    logic reset;
    logic valid;

    logic [ADDR_WIDTH-1:0] address;
    logic [DATA_WIDTH-1:0] data;

    logic [DATA_WIDTH-1:0] data_a;
    logic [DATA_WIDTH-1:0] data_b;
    logic [ADDR_WIDTH-1:0] address_a;
    logic [ADDR_WIDTH-1:0] address_b;
endinterface