module accumulator #(
    parameter INPUT_WIDTH = 8,
    parameter DEPTH = 256, // Size of the accumulator column
)(
    input wire clock,

    input wire [INPUT_WIDTH*32-1:0] mxu_sum_in, // Concatenated sum outputs from the MXU column (32 bits per PE)
    input wire [INPUT_WIDTH*32-1:0] mxu_carry_in, // Concatenated carry outputs from the MXU column (32 bits per PE)

    input wire write_enable, read_enable, reset, // Control signals for the accumulator registers

    input wire [$clog2(DEPTH)-1:0] read_address [0:INPUT_WIDTH-1], // Address to read from the accumulator column
    input wire [$clog2(DEPTH)-1:0] write_address [0:INPUT_WIDTH-1], // Address to write to the accumulator column    

    output reg [INPUT_WIDTH*32-1:0] accumulator_data_out, // Registers that store valid data output to be passed onto the Activation Block
);

    wire [INPUT_WIDTH*32-1:0] accumulator_data_in; // Wires that connect the output of the CSA tree to the input of the accumulator registers
    
    genvar i;
    generate
        for (i = 0; i < INPUT_WIDTH; i = i + 1) begin : accum_adders
            assign accumulator_data_in[i*32 +: 32] = mxu_sum_in[i*32 +: 32] + mxu_carry_in[i*32 +: 32];
        end
    endgenerate

    reg [31:0] accumulator_reg [0:DEPTH-1][0:INPUT_WIDTH-1]; // 2D array of registers to hold the accumulated values for each PE in the column

    integer row, column;

    always @(posedge clock) begin
        if (reset) begin
            // Reset all registers to 0
            for (row = 0; row < DEPTH; row = row + 1) begin
                for (column = 0; column < INPUT_WIDTH; column = column + 1) begin
                    accumulator_reg[row][column] <= 32'b0;
                end
            end
        end else if (write_enable) begin
            // Write the new accumulated values into the registers at the specified write addresses
            for (column = 0; column < INPUT_WIDTH; column = column + 1) begin
                accumulator_reg[write_address[column]][column] <= accumulator_data_in[column*32 +: 32];
            end
        end else if (read_enable) begin
            // Read the accumulated values from the registers at the specified read addresses and concatenate them for output
            for (column = 0; column < INPUT_WIDTH; column = column + 1) begin
                accumulator_data_out[column*32 +: 32] <= accumulator_reg[read_address[column]][column];
            end
        end
    end

endmodule