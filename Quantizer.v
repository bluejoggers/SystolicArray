module quantize #(
    parameter BITS = 32
)(
    input wire clock,
    input wire signed [BITS-1:0] q_data_in,
    input wire signed [15:0] inv_scale,
    input wire signed [7:0] zero_point,
    output wire signed [BITS-1:0] q_data_out
);
    reg [7:0] q_reg;

    wire signed [BITS+16:0] multiplied;
    wire signed [BITS+16:0] multiplied_rounded;
    wire signed [BITS-1:0] scaled;
    wire signed [BITS-1:0] biased;
    wire signed [BITS-1:0] zero_point_extended;

    assign multiplied = q_data_in * inv_scale;
    assign multiplied_rounded = multiplied + 48'sd128;

    assign scaled = multiplied_rounded >>> 8;

    assign zero_point_extended = {{24{zero_point[7]}}, zero_point};
    assign biased = scaled + zero_point_extended;

    always @(posedge clock) begin
        if (biased > 32'sd127)
            q_reg <= 8'sd127;
        else if (biased < -32'sd128)
            q_reg <= -8'sd128;
        else 
            q_reg <= biased[7:0];
    end 

    assign q_data_out = q_reg;

endmodule 