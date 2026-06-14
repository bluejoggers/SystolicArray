module activator #(
    parameter INPUT_WIDTH = 8, // Number of PEs in the column (i.e. number of inputs to the activation block)
    parameter BITS = 32 // Bit width of the input and output data (32 bits per PE to accommodate the accumulated sums from the accumulator column)
)(
    input wire clock,
    input wire [INPUT_WIDTH*BITS-1:0] data_in, // Concatenated input data from the accumulator column (32 bits per PE)
    output wire [INPUT_WIDTH*BITS-1:0] data_out // Concatenated output data to be passed onto the next layer (32 bits per PE)
);

    reg [BITS-1:0] activation_out [0:INPUT_WIDTH-1]; // Array of registers to hold the ReLU output for each PE in the column

    genvar i;
    generate 
        for (i = 0; i < INPUT_WIDTH; i = i + 1) begin :relu_units
            relu relu_inst (
                .data_in(data_in[i*BITS +: BITS]),
                .data_out(activation_out[i])
            );
        end
    endgenerate

    assign data_out = {activation_out[INPUT_WIDTH-1], activation_out[INPUT_WIDTH-2], activation_out[INPUT_WIDTH-3], activation_out[INPUT_WIDTH-4],
                       activation_out[INPUT_WIDTH-5], activation_out[INPUT_WIDTH-6], activation_out[INPUT_WIDTH-7], activation_out[INPUT_WIDTH-8]}; // Concatenate the outputs for all PEs in the column

endmodule