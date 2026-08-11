// The interface allows verification components to access DUT signals
// using a virtual interface handle

interface reg_if #(
    parameter int BITS = 8
)(
    input bit clk
);
    logic reset;
    logic enable;
    logic [BITS-1:0] data_in;
    logic [BITS-1:0] data_out;
endinterface 