module arraydatapath #(
    parameter N = 8 //To generate an NxN Systolic Array
)(
    input wire clock,
    input wire [7:0][7:0] resetAreg,
    input wire [7:0][7:0] resetWreg,
    input wire [7:0][7:0] resetSreg,
    input wire [7:0][7:0] resetCreg, // Reset signals for Activation, Weight, Sumin, Carryin registers for all PEs in the array

    input wire [7:0][7:0] enableAreg,
    input wire [7:0][7:0] enableWreg,
    input wire [7:0][7:0] enableSreg,
    input wire [7:0][7:0] enableCreg, // Enable signals for Activation, Weight, Sumin, Carryin registers for all PEs in the array

    input wire [7:0] activation_in [0:7], // 8-bit Input Activations for the first column of PEs
    input wire [7:0] weight_in [0:7],     // 8-bit Input Weights for the first row of PEs

    output wire [31:0] accumulator_sum_out [0:7][0:7], // 32-bit Output Accumulated Sums from the last row of PEs
    output wire [31:0] accumulator_carry_out [0:7][0:7] // 32-bit Output Accumulated Carries from the last row of PEs
);

    wire [7:0] weight_systole_pass [0:7][0:7]; // Wires to pass weights horizontally across the array
    wire [7:0] activation_systole_pass [0:7][0:7]; // Wires to pass activations horizontally across the array

    genvar i, j;
    generate
        for (i=0; i<N; i=i+1) begin : gen_rows
            for (j=0; j<N; j=j+1) begin : gen_cols
                if (i == 0 && j == 0) begin    // Top-left PE gets activation and weight inputs directly
                    MAC pe(
                        .clock(clock),
                        .weight(weight_in[j]),
                        .activation(activation_in[j]),
                        .prevsum(32'b0),
                        .prevcarry(32'b0),
                        .resetA(resetAreg[i][j]),
                        .resetW(resetWreg[i][j]),
                        .resetS(resetSreg[i][j]),
                        .resetC(resetCreg[i][j]),
                        .enableA(enableAreg[i][j]),
                        .enableW(enableWreg[i][j]),
                        .enableS(enableSreg[i][j]),
                        .enableC(enableCreg[i][j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j])
                    );
                end 
                
                else if (i == 0 && j != 0) begin   // First row PEs get weights from the left and activations from the top
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j]), // Get activation from the left PE
                        .prevsum(32'b0),
                        .prevcarry(32'b0),
                        .resetA(resetAreg[i][j]),
                        .resetW(resetWreg[i][j]),
                        .resetS(resetSreg[i][j]),
                        .resetC(resetCreg[i][j]),
                        .enableA(enableAreg[i][j]),
                        .enableW(enableWreg[i][j]),
                        .enableS(enableSreg[i][j]),
                        .enableC(enableCreg[i][j]),
                        .nextsum(accumulator_sum_out[j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass() // No need to pass weight from the first row
                    );
                end 
                
                else if (i != 0 && j == 0) begin
                    // First column PEs get activations and weights from Systolic Data Setup Unit
                    MAC pe(
                        .clock(clock),
                        .weight(weight_in[j]), // Get weight from the input
                        .activation(activation_in[i]), // Get activation from the input
                        .prevsum(accumulator_sum_out[i-1][j]), // Get previous sum from the PE above
                        .prevcarry(accumulator_carry_out[i-1][j]), // Get previous carry from the PE above
                        .resetA(resetAreg[i][j]),
                        .resetW(resetWreg[i][j]),
                        .resetS(resetSreg[i][j]),
                        .resetC(resetCreg[i][j]),
                        .enableA(enableAreg[i][j]),
                        .enableW(enableWreg[i][j]),
                        .enableS(enableSreg[i][j]),
                        .enableC(enableCreg[i][j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j]) // Pass weight to the right PE
                    );
                end

                else begin  // All other PEs get activations and weights from the left and sums/carries from the top
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j-1]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j-1]), // Get activation from the left PE
                        .prevsum(accumulator_sum_out[i-1][j]), // Get previous sum from the PE above
                        .prevcarry(accumulator_carry_out[i-1][j]), // Get previous carry from the PE above
                        .resetA(resetAreg[i][j]),
                        .resetW(resetWreg[i][j]),
                        .resetS(resetSreg[i][j]),
                        .resetC(resetCreg[i][j]),
                        .enableA(enableAreg[i][j]),
                        .enableW(enableWreg[i][j]),
                        .enableS(enableSreg[i][j]),
                        .enableC(enableCreg[i][j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j]) // Pass weight to the right PE
                    );
                end
            end
        end
    endgenerate


endmodule 