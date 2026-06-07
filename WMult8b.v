
// 1. Primitive Support Blocks: Full Adder (FA) and Half Adder (HA)

module FA (
    input wire a,
    input wire b,
    input wire cin,
    output wire sum,
    output wire cout
);
    assign sum  = a ^ b ^ cin;
    assign cout = (a & b) | (cin & (a ^ b));
endmodule

module HA (
    input wire a,
    input wire b,
    output wire sum,
    output wire cout
);
    assign sum  = a ^ b;
    assign cout = a & b;
endmodule


// 2. Core 8x8 Wallace Tree Multiplier Architecture

module WallaceMultiplier8x8 (
    input  wire [7:0] A,      // 8-bit Multiplicand
    input  wire [7:0] B,      // 8-bit Multiplier
    output wire [15:0] Product // 16-bit Output Product
);

    // -------------------------------------------------------------
    // Phase 1: Generative Partial Product Array (64 elements)
    // -------------------------------------------------------------
    wire [7:0] p [0:7];
    genvar r, c;
    generate
        for (r = 0; r < 8; r = r + 1) begin : gen_rows
            for (c = 0; c < 8; c = c + 1) begin : gen_cols
                assign p[r][c] = A[c] & B[r];
            end
        end
    endgenerate

    // -------------------------------------------------------------
    // Phase 2: Systematic Reduction Stages
    // -------------------------------------------------------------
    
    // --- STAGE 1 WIRE ALLOCATIONS ---
    // Instantiating adders across columns with depth >= 3
    wire s1_c2_s,  s1_c2_c;
    wire s1_c3_s,  s1_c3_c;
    wire s1_c4_s1, s1_c4_c1, s1_c4_s2, s1_c4_c2;
    wire s1_c5_s1, s1_c5_c1, s1_c5_s2, s1_c5_c2;
    wire s1_c6_s1, s1_c6_c1, s1_c6_s2, s1_c6_c2;
    wire s1_c7_s1, s1_c7_c1, s1_c7_s2, s1_c7_c2;
    wire s1_c8_s1, s1_c8_c1, s1_c8_s2, s1_c8_c2;
    wire s1_c9_s1, s1_c9_c1, s1_c9_s2, s1_c9_c2;
    wire s1_c10_s, s1_c10_c;
    wire s1_c11_s, s1_c11_c;

    // Stage 1 Interconnect Logic
    // Col 0 & Col 1: Pass through directly (no reduction needed)
    
    // Col 2 (3 bits): 1 HA
    HA ha_s1_c2 (.a(p[2][0]), .b(p[1][1]), .sum(s1_c2_s), .cout(s1_c2_c));
    
    // Col 3 (4 bits): 1 FA
    FA fa_s1_c3 (.a(p[3][0]), .b(p[2][1]), .cin(p[1][2]), .sum(s1_c3_s), .cout(s1_c3_c));
    
    // Col 4 (5 bits): 1 FA, 1 HA
    FA fa_s1_c4 (.a(p[4][0]), .b(p[3][1]), .cin(p[2][2]), .sum(s1_c4_s1), .cout(s1_c4_c1));
    HA ha_s1_c4 (.a(p[1][3]), .b(p[0][4]), .sum(s1_c4_s2), .cout(s1_c4_c2));
    
    // Col 5 (6 bits): 2 FAs
    FA fa1_s1_c5 (.a(p[5][0]), .b(p[4][1]), .cin(p[3][2]), .sum(s1_c5_s1), .cout(s1_c5_c1));
    FA fa2_s1_c5 (.a(p[2][3]), .b(p[1][4]), .cin(p[0][5]), .sum(s1_c5_s2), .cout(s1_c5_c2));
    
    // Col 6 (7 bits): 2 FAs
    FA fa1_s1_c6 (.a(p[6][0]), .b(p[5][1]), .cin(p[4][2]), .sum(s1_c6_s1), .cout(s1_c6_c1));
    FA fa2_s1_c6 (.a(p[3][3]), .b(p[2][4]), .cin(p[1][5]), .sum(s1_c6_s2), .cout(s1_c6_c2));
    
    // Col 7 (8 bits): 2 FAs
    FA fa1_s1_c7 (.a(p[7][0]), .b(p[6][1]), .cin(p[5][2]), .sum(s1_c7_s1), .cout(s1_c7_c1));
    FA fa2_s1_c7 (.a(p[4][3]), .b(p[3][4]), .cin(p[2][5]), .sum(s1_c7_s2), .cout(s1_c7_c2));
    
    // Col 8 (7 bits): 2 FAs
    FA fa1_s1_c8 (.a(p[7][1]), .b(p[6][2]), .cin(p[5][3]), .sum(s1_c8_s1), .cout(s1_c8_c1));
    FA fa2_s1_c8 (.a(p[4][4]), .b(p[3][5]), .cin(p[2][6]), .sum(s1_c8_s2), .cout(s1_c8_c2));
    
    // Col 9 (6 bits): 2 FAs
    FA fa1_s1_c9 (.a(p[7][2]), .b(p[6][3]), .cin(p[5][4]), .sum(s1_c9_s1), .cout(s1_c9_c1));
    FA fa2_s1_c9 (.a(p[4][5]), .b(p[3][6]), .cin(p[2][7]), .sum(s1_c9_s2), .cout(s1_c9_c2));
    
    // Col 10 (5 bits): 1 FA
    FA fa_s1_c10 (.a(p[7][3]), .b(p[6][4]), .cin(p[5][5]), .sum(s1_c10_s), .cout(s1_c10_c));
    
    // Col 11 (4 bits): 1 FA
    FA fa_s1_c11 (.a(p[7][4]), .b(p[6][5]), .cin(p[5][6]), .sum(s1_c11_s), .cout(s1_c11_c));


    // --- STAGE 2 WIRE ALLOCATIONS ---
    wire s2_c3_s,  s2_c3_c;
    wire s2_c4_s,  s2_c4_c;
    wire s2_c5_s1, s2_c5_c1, s2_c5_s2, s2_c5_c2;
    wire s2_c6_s1, s2_c6_c1, s2_c6_s2, s2_c6_c2;
    wire s2_c7_s1, s2_c7_c1, s2_c7_s2, s2_c7_c2;
    wire s2_c8_s1, s2_c8_c1, s2_c8_s2, s2_c8_c2;
    wire s2_c9_s1, s2_c9_c1, s2_c9_s2, s2_c9_c2;
    wire s2_c10_s, s2_c10_c;
    wire s2_c11_s, s2_c11_c;
    wire s2_c12_s, s2_c12_c;

    // Stage 2 Interconnect Logic
    // Col 3: 1 HA (combining pass-through bit and carry from S1)
    HA ha_s2_c3 (.a(p[0][3]), .b(s1_c2_c), .sum(s2_c3_s), .cout(s2_c3_c));
    
    // Col 4: 1 FA
    FA fa_s2_c4 (.a(s1_c4_s1), .b(s1_c4_s2), .cin(s1_c3_c), .sum(s2_c4_s), .cout(s2_c4_c));
    
    // Col 5: 1 FA, 1 HA
    FA fa_s2_c5 (.a(s1_c5_s1), .b(s1_c5_s2), .cin(s1_c4_c1), .sum(s2_c5_s1), .cout(s2_c5_c1));
    HA ha_s2_c5 (.a(s1_c4_c2), .b(p[0][5]), .sum(s2_c5_s2), .cout(s2_c5_c2));
    
    // Col 6: 2 FAs
    FA fa1_s2_c6 (.a(s1_c6_s1), .b(s1_c6_s2), .cin(p[0][6]), .sum(s2_c6_s1), .cout(s2_c6_c1));
    FA fa2_s2_c6 (.a(s1_c5_c1), .b(s1_c5_c2), .cin(p[1][5]), .sum(s2_c6_s2), .cout(s2_c6_c2));
    
    // Col 7: 2 FAs
    FA fa1_s2_c7 (.a(s1_c7_s1), .b(s1_c7_s2), .cin(p[0][7]), .sum(s2_c7_s1), .cout(s2_c7_c1));
    FA fa2_s2_c7 (.a(s1_c6_c1), .b(s1_c6_c2), .cin(p[1][6]), .sum(s2_c7_s2), .cout(s2_c7_c2));
    
    // Col 8: 2 FAs
    FA fa1_s2_c8 (.a(s1_c8_s1), .b(s1_c8_s2), .cin(p[1][7]), .sum(s2_c8_s1), .cout(s2_c8_c1));
    FA fa2_s2_c8 (.a(s1_c7_c1), .b(s1_c7_c2), .cin(p[0][8]), .sum(s2_c8_s2), .cout(s2_c8_c2));
    
    // Col 9: 2 FAs
    FA fa1_s2_c9 (.a(s1_c9_s1), .b(s1_c9_s2), .cin(p[3][6]), .sum(s2_c9_s1), .cout(s2_c9_c1));
    FA fa2_s2_c9 (.a(s1_c8_c1), .b(s1_c8_c2), .cin(p[1][8]), .sum(s2_c9_s2), .cout(s2_c9_c2));
    
    // Col 10: 1 FA, 1 HA
    FA fa_s2_c10 (.a(s1_c10_s), .b(p[4][6]), .cin(s1_c9_c1), .sum(s2_c10_s), .cout(s2_c10_c));
    
    // Col 11: 1 FA
    FA fa_s2_c11 (.a(s1_c11_s), .b(p[4][7]), .cin(s1_c10_c), .sum(s2_c11_s), .cout(s2_c11_c));
    
    // Col 12: 1 FA (reducing remaining boundary signals)
    FA fa_s2_c12 (.a(p[7][5]), .b(p[6][6]), .cin(s1_c11_c), .sum(s2_c12_s), .cout(s2_c12_c));


    // --- STAGE 3 WIRE ALLOCATIONS (Final Layer Compression) ---
    wire s3_c4_s,  s3_c4_c;
    wire s3_c5_s,  s3_c5_c;
    wire s3_c6_s,  s3_c6_c;
    wire s3_c7_s,  s3_c7_c;
    wire s3_c8_s,  s3_c8_c;
    wire s3_c9_s,  s3_c9_c;
    wire s3_c10_s, s3_c10_c;
    wire s3_c11_s, s3_c11_c;
    wire s3_c12_s, s3_c12_c;
    wire s3_c13_s, s3_c13_c;

    // Stage 3 Interconnect Logic
    // Cols 0-3: Already reduced completely down to a 2-vector state boundary
    
    // Col 4: 1 HA
    HA ha_s3_c4 (.a(s2_c4_s), .b(s2_c3_c), .sum(s3_c4_s), .cout(s3_c4_c));
    
    // Col 5: 1 FA
    FA fa_s3_c5 (.a(s2_c5_s1), .b(s2_c5_s2), .cin(s2_c4_c), .sum(s3_c5_s), .cout(s3_c5_c));
    
    // Col 6: 1 FA
    FA fa_s3_c6 (.a(s2_c6_s1), .b(s2_c6_s2), .cin(s2_c5_c1), .sum(s3_c6_s), .cout(s3_c6_c));
    
    // Col 7: 1 FA
    FA fa_s3_c7 (.a(s2_c7_s1), .b(s2_c7_s2), .cin(s2_c6_c1), .sum(s3_c7_s), .cout(s3_c7_c));
    
    // Col 8: 1 FA
    FA fa_s3_c8 (.a(s2_c8_s1), .b(s2_c8_s2), .cin(s2_c7_c1), .sum(s3_c8_s), .cout(s3_c8_c));
    
    // Col 9: 1 FA
    FA fa_s3_c9 (.a(s2_c9_s1), .b(s2_c9_s2), .cin(s2_c8_c1), .sum(s3_c9_s), .cout(s3_c9_c));
    
    // Col 10: 1 FA
    FA fa_s3_c10 (.a(s2_c10_s), .b(s1_c10_c), .cin(s2_c9_c1), .sum(s3_c10_s), .cout(s3_c10_c));
    
    // Col 11: 1 FA
    FA fa_s3_c11 (.a(s2_c11_s), .b(p[3][7]), .cin(s2_c10_c), .sum(s3_c11_s), .cout(s3_c11_c));
    
    // Col 12: 1 FA
    FA fa_s3_c12 (.a(s2_c12_s), .b(p[5][7]), .cin(s2_c11_c), .sum(s3_c12_s), .cout(s3_c12_c));
    
    // Col 13: 1 FA
    FA fa_s3_c13 (.a(p[7][6]), .b(p[6][7]), .cin(s2_c12_c), .sum(s3_c13_s), .cout(s3_c13_c));

    // -------------------------------------------------------------
    // Phase 3: Final Vector Addition Generation
    // Map the compressed final layers into two unified 16-bit registers
    // -------------------------------------------------------------
    wire [15:0] vec_sum;
    wire [15:0] vec_carry;

    assign vec_sum[0]  = p[0][0];
    assign vec_sum[1]  = p[1][0];
    assign vec_sum[2]  = s1_c2_s;
    assign vec_sum[3]  = s2_c3_s;
    assign vec_sum[4]  = s3_c4_s;
    assign vec_sum[5]  = s3_c5_s;
    assign vec_sum[6]  = s3_c6_s;
    assign vec_sum[7]  = s3_c7_s;
    assign vec_sum[8]  = s3_c8_s;
    assign vec_sum[9]  = s3_c9_s;
    assign vec_sum[10] = s3_c10_s;
    assign vec_sum[11] = s3_c11_s;
    assign vec_sum[12] = s3_c12_s;
    assign vec_sum[13] = s3_c13_s;
    assign vec_sum[14] = p[7][7];
    assign vec_sum[15] = 1'b0;

    assign vec_carry[0]  = 1'b0;
    assign vec_carry[1]  = p[0][1];
    assign vec_carry[2]  = p[0][2];
    assign vec_carry[3]  = s1_c3_s;
    assign vec_carry[4]  = s3_c4_c;
    assign vec_carry[5]  = s3_c5_c;
    assign vec_carry[6]  = s3_c6_c;
    assign vec_carry[7]  = s3_c7_c;
    assign vec_carry[8]  = s3_c8_c;
    assign vec_carry[9]  = s3_c9_c;
    assign vec_carry[10] = s3_c10_c;
    assign vec_carry[11] = s3_c11_c;
    assign vec_carry[12] = s3_c12_c;
    assign vec_carry[13] = s3_c13_c;
    assign vec_carry[14] = s3_c13_c; // Boundary propagation carry
    assign vec_carry[15] = 1'b0;

    // Core Combinational Product Addition
    assign Product = vec_sum + (vec_carry << 1);

endmodule