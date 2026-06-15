module normalize #(
    parameter BITS = 32 // Bit width of the input and output data (32 bits per PE to accommodate the accumulated sums from the accumulator column)
)(
    input wire clock,
    input wire [BITS-1:0] data_in, // Input data from the accumulator column (32 bits per PE)
    input wire [15:0] gain, // Gain parameter for batch normalization (16 bits fixed-point representation)
    input wire [BITS-1:0] bias, // Bias parameter for batch normalization (32 bits fixed-point representation)
    input wire [4:0] shift, // Shift parameter for batch normalization (5 bits to allow for shifts up to 31)
    output wire [BITS-1:0] data_out // Output data after normalization (32 bits per PE)
);

    wire [BITS+16-1:0] multiplied_data; // Wire to hold the intermediate data multiplied by gain and shiftbefore applying bias

    assign multiplied_data = (data_in * gain) >>> shift; // Multiply the input data by the gain and apply the shift for scaling
    assign data_out = multiplied_data[BITS-1:0] + bias; // Add the bias to the scaled data to get the final normalized output

endmodule 