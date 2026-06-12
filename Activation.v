module ReLU #(
    parameter INPUT_WIDTH = 8,
    parameter BITS = 32
)(
    input wire clock,
    input wire [INPUT_WIDTH*BITS-1:0] data_in, // Concatenated input data from the accumulator column (32 bits per PE)
    output wire [INPUT_WIDTH*BITS-1:0] data_out // Concatenated output data to be passed onto the next layer (32 bits per PE)
);

    reg [BITS-1:0] activation_out [0:INPUT_WIDTH-1]; // Array of registers to hold the ReLU output for each PE in the column

    always @(posedge clock) begin 
        integer i;
        for (i = 0; i < INPUT_WIDTH; i = i + 1) begin 
            if (data_in[i*BITS +: BITS][BITS-1] == 1'b1)
                activation_out[i] <= {BITS{1'b0}}; // If the input is negative, output 0
            else 
                activation_out[i] <= data_in[i*BITS +: BITS]; // If the input is non-negative, pass it through unchanged
        end 
    end

    assign data_out = {activation_out[INPUT_WIDTH-1], activation_out[INPUT_WIDTH-2], activation_out[INPUT_WIDTH-3], activation_out[INPUT_WIDTH-4],
                       activation_out[INPUT_WIDTH-5], activation_out[INPUT_WIDTH-6], activation_out[INPUT_WIDTH-7], activation_out[INPUT_WIDTH-8]}; // Concatenate the outputs for all PEs in the column

endmodule