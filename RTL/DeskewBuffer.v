/*
DeskewBuffer.v (pure Verilog)

Sits between arraydatapath's `partial_sum` output and the Accumulator block.

WHY THIS IS NEEDED (derived from the actual array timing, not assumed):

  systolic_stagger_block delays activation row r by r cycles before it
  enters the array (row 0 = 0 cycles, row r = r cycles -- see
  SystolicDataSetup.v). Tracing the propagation through arraydatapath:

    - activation shifts 1 cycle per column-hop (activation_pass is a
      registered output), so a_mesh[i][j] is valid at cycle (i + j).
    - the S/C chain shifts 1 cycle per row-hop (nextsum/nextcarry are
      combinational off already-registered inputs), so s_mesh[i][j] is
      valid at cycle (i + j) for i >= 1, with s_mesh[0][j] tied to a
      constant 0.

  Net result: accumulator_sum_out[j] / accumulator_carry_out[j] (and
  therefore partial_sum[j]) becomes valid at cycle (N + j) -- i.e. the
  SAME linear per-lane skew as the input stagger, carried through the
  array. Column 0 arrives first, column N-1 arrives last, one cycle apart.

WHAT THIS MODULE DOES:

  Mirrors systolic_stagger_block's own shift-register-chain structure,
  but with the delay assignment REVERSED: lane j gets (N-1-j) cycles of
  extra delay instead of j. That means:

    - lane (N-1) (the LAST column to arrive from the array) passes
      straight through with 0 extra delay.
    - lane 0 (the FIRST column to arrive) gets held the LONGEST, (N-1)
      cycles, so it lands on the exact same cycle as every other lane.

  All N lanes then land on cycle (N + (N-1)) = (2N-1), forming one clean,
  simultaneous horizontal wave for the Accumulator.

  valid_out is a single scalar (not per-lane) -- once deskewed, every
  lane is valid on the same cycle by construction, so one shared
  valid/enable signal is sufficient and directly wireable into
  Accumulator's mxu_write_enable.
*/

module deskew_buffer #(
    parameter NUM_LANES  = 8,   // Must match arraydatapath's N
    parameter DATA_WIDTH = 32   // partial_sum is 32 bits per column
)(
    input  wire clock,
    input  wire reset,

    input  wire                            valid_in,   // Pulses whenever partial_sum carries a meaningful diagonal wavefront sample
    input  wire [NUM_LANES*DATA_WIDTH-1:0] vector_in,  // arraydatapath's `partial_sum`, still diagonally skewed

    output wire                            valid_out,  // Single aligned pulse -- wire directly into Accumulator's mxu_write_enable
    output wire [NUM_LANES*DATA_WIDTH-1:0] vector_out  // Deskewed, clean horizontal wave for the Accumulator
);

    genvar r;
    generate
        for (r = 0; r < NUM_LANES; r = r + 1) begin : lane_deskew

            localparam DELAY = NUM_LANES - 1 - r;

            if (DELAY == 0) begin : lane_passthrough
                // The LAST column out of the array (lane N-1) is already
                // on the target cycle -- no delay needed.
                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = vector_in[r*DATA_WIDTH +: DATA_WIDTH];
            end
            else begin : lane_delayed
                // Shift register chain of depth DELAY, same structure as
                // systolic_stagger_block's lane_delayed block, just with
                // the depth mirrored (N-1-r instead of r).
                reg [DATA_WIDTH-1:0] delay_chain [0:DELAY-1];
                integer i;

                always @(posedge clock or posedge reset) begin
                    if (reset) begin
                        for (i = 0; i < DELAY; i = i + 1) begin
                            delay_chain[i] <= {DATA_WIDTH{1'b0}};
                        end
                    end else begin
                        delay_chain[0] <= vector_in[r*DATA_WIDTH +: DATA_WIDTH];
                        for (i = 1; i < DELAY; i = i + 1) begin
                            delay_chain[i] <= delay_chain[i-1];
                        end
                    end
                end

                assign vector_out[r*DATA_WIDTH +: DATA_WIDTH] = delay_chain[DELAY-1];
            end

        end
    endgenerate

    // -------------------------------------------------------------
    // Shared valid chain: depth (NUM_LANES-1), matching lane 0's data
    // chain (the longest one). Once this reaches its final tap, EVERY
    // lane's data chain has also reached its final tap by construction,
    // since every chain was fed from the same valid_in cycle.
    // -------------------------------------------------------------
    generate
        if (NUM_LANES <= 1) begin : no_deskew_needed
            assign valid_out = valid_in;
        end
        else begin : valid_delay
            reg [NUM_LANES-2:0] valid_chain;
            integer vi;

            always @(posedge clock or posedge reset) begin
                if (reset) begin
                    valid_chain <= {(NUM_LANES-1){1'b0}};
                end else begin
                    valid_chain[0] <= valid_in;
                    for (vi = 1; vi < NUM_LANES-1; vi = vi + 1) begin
                        valid_chain[vi] <= valid_chain[vi-1];
                    end
                end
            end

            assign valid_out = valid_chain[NUM_LANES-2];
        end
    endgenerate

endmodule 