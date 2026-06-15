/*
This module perfoms batch normalization on the data received from the activation block.

The formula for batch normalization is: Y = (X - mean / sqrt(variance + epsilon))
This can be thought of as a two step process: Scale and Shift using fixed point integers.
Gain is signed Qm.n fixed point representation, where m is the number of bits for the integer part + sign bit and n is the number of bits for the fractional part. 
For example, if we use a Q1.15 format, we can represent gain values in the range of -1 to 0.999969482421875 with a precision of 0.000030517578125.

Say data_in = 200 (a 32-bit accumulator output) and gain = 16384 (which represents 0.5 in Q1.15).
Step 1 — raw integer multiply (what the hardware does):
mult = 200 × 16384 = 3,276,800

Step 2 — arithmetic right shift by 15 (what >>> shift does):
shifted = 3,276,800 >>> 15
        = 3,276,800 / 32768
        = 100

True mathematical result:
data_in × gain_real = 200 × 0.5 = 100
*/


module normalize #(
    parameter BITS = 32 // Bit width of the input and output data (32 bits per PE to accommodate the accumulated sums from the accumulator column)
)(
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