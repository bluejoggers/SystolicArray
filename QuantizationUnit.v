module quantizer #(
    parameter BITS = 32,
    parameter INPUT_WIDTH = 8
)(
    input wire clock,
    input wire reset,

    input wire [(INPUT_WIDTH*BITS)-1:0] q_data_in_vector,
    input wire signed [15:0] inv_scale,
    input wire signed [7:0] zero_point,

    output wire [(INPUT_WIDTH*8)-1:0] q_data_out_vector
);

    genvar i;
    generate
        for (i=0; i<INPUT_WIDTH; i=i+1) begin : quantization_unit
            quantize #(
                .BITS(BITS)
            ) quantize_inst (
                .clock(clock),
                .reset(reset),

                .q_data_in(q_data_in_vector[(i+1)*BITS-1:i*BITS]),

                .inv_scale(inv_scale),
                .zero_point(zero_point),
                
                .q_data_out(q_data_out_vector[(i+1)*8-1:i*8])
            );
        end
endmodule