module activator #(
    parameter INPUT_WIDTH = 8, // Number of PEs in the column (i.e. number of inputs to the activation block)
    parameter BITS = 32 // Bit width of the input and output data (32 bits per PE to accommodate the accumulated sums from the accumulator column)
)(
    input wire [0:INPUT_WIDTH*BITS-1] data_in, // Concatenated input data from the accumulator column (32 bits per PE)
    output wire [0:INPUT_WIDTH*BITS-1] data_out // Concatenated output data to be passed onto the next layer (32 bits per PE)
);

    genvar i;
    generate 
        for (i = 0; i < INPUT_WIDTH; i = i + 1) begin :relu_units
            relu relu_inst (
                .data_in(data_in[i*BITS +: BITS]),
                .data_out(data_out[i*BITS +: BITS])
            );
        end
    endgenerate

endmodule