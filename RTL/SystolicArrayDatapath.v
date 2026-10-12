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

    input wire [(N*8)-1:0] activation_in, // 8-bit Input Activations for the first column of PEs
    input wire [(N*8)-1:0] weight_in,     // 8-bit Input Weights for the first row of PEs

    output wire [(N*32)-1:0] partial_sum
);
    wire signed [N*32-1:0] accumulator_sum_out; // 32-bitx8 Output Accumulated Sums from the last row of PEs
    wire signed [N*32-1:0] accumulator_carry_out; // 32-bitx8 Output Accumulated Carries from the last row of PEs

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

    // -------------------------------------------------------------
    // Parameterized Boundary Summing to generate Partial Sums for the Accumulator
    // -------------------------------------------------------------

    generate
        for (idx = 0; idx < N; idx = idx + 1) begin : bottom_adders
            assign partial_sum [(idx*32)+:32] = accumulator_sum_out [(idx*32)+:32] + accumulator_carry_out [(idx*32)+:32];
        end
    endgenerate
endmodule 
