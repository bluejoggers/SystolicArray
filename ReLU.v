module relu #(
    parameter BITS = 32
)(
    input wire [BITS-1:0] data_in,
    output wire [BITS-1:0] data_out
);

    assign data_out = (data_in[BITS-1] == 1'b1) ? {BITS{1'b0}} : data_in;


endmodule 