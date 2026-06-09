module arraydatapath #(
    parameter N = 8 //To generate an NxN Systolic Array
)(
    input wire clock,
    input wire [N-1:0] resetAreg,
    input wire [N-1:0] resetWreg,
    input wire [N-1:0] resetSreg,
    input wire [N-1:0] resetCreg, // Reset signals for Activation, Weight, Sumin, Carryin registers for all PEs in the array

    input wire [N-1:0] enableAreg,
    input wire [N-1:0] enableWreg,
    input wire [N-1:0] enableSreg,
    input wire [N-1:0] enableCreg, // Enable signals for Activation, Weight, Sumin, Carryin registers for all PEs in the array

    input wire [(N*8-1):0] activation_in, // 8-bit Input Activations for the first column of PEs
    input wire [(N*8-1):0] weight_in,     // 8-bit Input Weights for the first row of PEs

    output wire [N*32-1:0] accumulator_sum_out , // 32-bitx8 Output Accumulated Sums from the last row of PEs
    output wire [N*32-1:0] accumulator_carry_out  // 32-bitx8 Output Accumulated Carries from the last row of PEs
);

    // -------------------------------------------------------------
    // Structured Mesh Network Interconnects (Padded with +1 for out-of-bounds)
    // -------------------------------------------------------------
    wire [7:0]  w_mesh [0:N-1][0:N];   // Horizontal weight tracks
    wire [7:0]  a_mesh [0:N-1][0:N];   // Horizontal activation tracks
    
    wire [31:0] s_mesh [0:N][0:N-1];   // Vertical sum tracks
    wire [31:0] c_mesh [0:N][0:N-1];   // Vertical carry tracks

    // -------------------------------------------------------------
    // Parameterized Boundary Data Unpacking & Injection
    // -------------------------------------------------------------
    genvar idx;
    generate
        for (idx = 0; idx < N; idx = idx + 1) begin : boundary_unpack
            // Dynamically slice the flat input vectors based on parameter N
            assign w_mesh[idx][0] = weight_in[(idx*8)+:8];     // Ingests into Column 0
            assign a_mesh[idx][0] = activation_in[(idx*8)+:8]; // Ingests into Column 0
            
            // Initialize top edge vertical accumulators (Row 0) to zero
            assign s_mesh[0][idx] = 32'b0;
            assign c_mesh[0][idx] = 32'b0;
        end
    endgenerate

    // -------------------------------------------------------------
    // Homogeneous Clean Matrix Grid Generation
    // -------------------------------------------------------------
    genvar i, j;
    generate
        for (i = 0; i < N; i = i + 1) begin : gen_rows
            for (j = 0; j < N; j = j + 1) begin : gen_cols
                
                MAC pe (
                    .clock(clock),
                    
                    // Pull inputs from the current coordinate mesh location
                    .weight(w_mesh[i][j]),
                    .activation(a_mesh[i][j]),
                    .prevsum(s_mesh[i][j]),
                    .prevcarry(c_mesh[i][j]),
                    
                    // Control distribution lines
                    .resetA(resetAreg[i]),
                    .resetW(resetWreg[j]),
                    .resetS(resetSreg[j]),
                    .resetC(resetCreg[j]),
                    
                    .enableA(enableAreg[i]),
                    .enableW(enableWreg[j]),
                    .enableS(enableSreg[j]),
                    .enableC(enableCreg[j]),
                    
                    // Forward outputs cleanly into the NEXT adjacent tracking lanes
                    .weight_pass(w_mesh[i][j+1]),     // Passes right safely to j+1
                    .activation_pass(a_mesh[i][j+1]), // Passes right safely to j+1
                    .nextsum(s_mesh[i+1][j]),         // Passes down safely to i+1
                    .nextcarry(c_mesh[i+1][j])        // Passes down safely to i+1
                );
                
            end
        end
    endgenerate

    // -------------------------------------------------------------
    // Parameterized Boundary Packing to Flat Outputs
    // -------------------------------------------------------------
    generate
        for (idx = 0; idx < N; idx = idx + 1) begin : boundary_pack
            // Safely pack outputs from the absolute bottom edge (Row N) into flat ports
            assign accumulator_sum_out[(idx*32)+:32]   = s_mesh[N][idx];
            assign accumulator_carry_out[(idx*32)+:32] = c_mesh[N][idx];
        end
    endgenerate 

endmodule 

/*
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
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[j]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j]),
                        .activation_pass(activation_systole_pass[i][j])
                    );
                end 
                
                else if (i == 0 && j != 0) begin   // First row PEs get weights from the left and activations from the top
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j]), // Get activation from the left PE
                        .prevsum(32'b0),
                        .prevcarry(32'b0),
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[j]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(accumulator_sum_out[j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(), // No need to pass weight from the first row
                        .activation_pass(activation_systole_pass[i][j]) // Pass activation down the column
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
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[j]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j]), // Pass weight to the right PE
                        .activation_pass(activation_systole_pass[i][j]) // Pass activation down the column
                    );
                end

                else begin  // All other PEs get activations and weights from the left and sums/carries from the top
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j-1]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j-1]), // Get activation from the left PE
                        .prevsum(accumulator_sum_out[i-1][j]), // Get previous sum from the PE above
                        .prevcarry(accumulator_carry_out[i-1][j]), // Get previous carry from the PE above
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[j]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(accumulator_sum_out[i][j]), // Output sum goes to the next row
                        .nextcarry(accumulator_carry_out[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j]), // Pass weight to the right PE
                        .activation_pass(activation_systole_pass[i][j]) // Pass activation down the column
                    );
                end
            end
        end
    endgenerate
*/



    /*
    wire [7:0] weight_systole_pass [0:N-1][0:N];   // Wires to pass weights horizontally across the array
    wire [7:0] activation_systole_pass [0:N-1][0:N];   // Wires to pass activations horizontally across the array

    wire [31:0] sum_systole_pass [0:N][0:N-1];   // Wires to pass sums vertically down the array
    wire [31:0] carry_systole_pass [0:N][0:N-1];   // Wires to pass carries vertically down the array

    assign weight_systole_pass[0][0] = weight_in[7:0];
    assign weight_systole_pass[0][1] = weight_in[15:8];
    assign weight_systole_pass[0][2] = weight_in[23:16];
    assign weight_systole_pass[0][3] = weight_in[31:24];
    assign weight_systole_pass[0][4] = weight_in[39:32];
    assign weight_systole_pass[0][5] = weight_in[47:40];
    assign weight_systole_pass[0][6] = weight_in[55:48];
    assign weight_systole_pass[0][7] = weight_in[63:56];

    assign activation_systole_pass[0][0] = activation_in[7:0];
    assign activation_systole_pass[1][0] = activation_in[15:8];
    assign activation_systole_pass[2][0] = activation_in[23:16];
    assign activation_systole_pass[3][0] = activation_in[31:24];
    assign activation_systole_pass[4][0] = activation_in[39:32];
    assign activation_systole_pass[5][0] = activation_in[47:40];
    assign activation_systole_pass[6][0] = activation_in[55:48];
    assign activation_systole_pass[7][0] = activation_in[63:56];

    genvar i, j;
    generate
        for (i=0; i<N; i=i+1) begin : gen_rows
            for (j=0; j<N; j=j+1) begin : gen_cols
                if (i == 0) begin    // 1st row of the MXU
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j]), // Get activation from the left PE
                        .prevsum(32'b0), // No previous sum for the first row
                        .prevcarry(32'b0), // No previous carry for the first row
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[i]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(sum_systole_pass[i][j]), // Output sum goes to the next row
                        .nextcarry(carry_systole_pass[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j+1]), // Pass weight to the right PE
                        .activation_pass(activation_systole_pass[i][j+1]) // Pass activation down the column
                    );
                end 
                
                else begin   // All other rows of the MXU
                    MAC pe(
                        .clock(clock),
                        .weight(weight_systole_pass[i][j]), // Get weight from the left PE
                        .activation(activation_systole_pass[i][j]), // Get activation from the left PE
                        .prevsum(sum_systole_pass[i-1][j]), // Get previous sum from the PE above
                        .prevcarry(carry_systole_pass[i-1][j]), // Get previous carry from the PE above
                        .resetA(resetAreg[i]),
                        .resetW(resetWreg[j]),
                        .resetS(resetSreg[j]),
                        .resetC(resetCreg[j]),
                        .enableA(enableAreg[i]),
                        .enableW(enableWreg[i]),
                        .enableS(enableSreg[j]),
                        .enableC(enableCreg[j]),
                        .nextsum(sum_systole_pass[i][j]), // Output sum goes to the next row
                        .nextcarry(carry_systole_pass[i][j]), // Output carry goes to the next row
                        .weight_pass(weight_systole_pass[i][j+1]), // Pass weight to the right PE
                        .activation_pass(activation_systole_pass[i][j+1]) // Pass activation down the column
                    );
                end
            end
        end
    endgenerate

    
    assign accumulator_sum_out = {sum_systole_pass[N-1][0], sum_systole_pass[N-1][1], sum_systole_pass[N-1][2], sum_systole_pass[N-1][3], sum_systole_pass[N-1][4], sum_systole_pass[N-1][5], sum_systole_pass[N-1][6], sum_systole_pass[N-1][7]};
    assign accumulator_carry_out = {carry_systole_pass[N-1][0], carry_systole_pass[N-1][1], carry_systole_pass[N-1][2], carry_systole_pass[N-1][3], carry_systole_pass[N-1][4], carry_systole_pass[N-1][5], carry_systole_pass[N-1][6], carry_systole_pass[N-1][7]};
    */