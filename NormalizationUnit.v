/*
    Normalizer.v instantiates the normalize module in BatchNormalizaton.v for each column of the Systolic Array.
*/

module normalizer #(
    parameter INPUT_WIDTH = 8, // Number of PEs in the column (i.e. number of inputs to the normalization block)
    parameter BITS = 32 // Bit width of the input and output data (32 bits per PE to accommodate the accumulated sums from the accumulator column)
)(
    input wire clock,
    input wire [0:INPUT_WIDTH*BITS-1] data_in, // Concatenated input data from the Activation block column (32 bits per PE)
    input wire [15:0] gain , // Gain parameters for batch normalization (16 bits fixed-point representation for each PE)
    input wire [BITS-1:0] bias, // Bias parameters for batch normalization (32 bits fixed-point representation for each PE)
    input wire [4:0] shift, // Shift parameters for batch normalization (5 bits to allow for shifts up to 31 for each PE)
    output wire [0:INPUT_WIDTH*BITS-1] data_out // Concatenated output data after normalization (32 bits per PE)
);

    reg [15:0] gain_reg; // Register to hold the gain value for each clock cycle
    reg [BITS-1:0] bias_reg; // Register to hold the bias value for each clock cycle
    reg [4:0] shift_reg; // Register to hold the shift value for each clock cycle

    always @(posedge clock) begin
        gain_reg <= gain; // Update the gain register on each clock cycle
        bias_reg <= bias; // Update the bias register on each clock cycle
        shift_reg <= shift; // Update the shift register on each clock cycle
    end

    genvar i;
    generate 
        for (i = 0; i < INPUT_WIDTH; i = i + 1) begin :normalization_units
            normalize normalize_inst ( 
                .data_in(data_in[i*BITS +: BITS]), // Slicing 32 bits of data from the bus for each column
                .gain(gain_reg), // Using the registered gain value for normalization
                .bias(bias_reg), // Using the registered bias value for normalization
                .shift(shift_reg), // Using the registered shift value for normalization
                .data_out(data_out[i*BITS +: BITS]) // Slicing 32 bits of output data for each column
            );
        end
    endgenerate

endmodule 