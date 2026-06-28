/*
Accumulator.v

This module sits directly below the MXU and implements the Accumulator block
from the TPU v1 architecture diagram.

Each of the 8 columns of the systolic array produces TWO 32-bit numbers every
cycle -- a sum vector and a carry vector -- which are the two outputs of the
final 3:2 carry-save compression stage inside each PE's CSA. These have NOT
yet been resolved into a single number; the carry vector still needs to be
added to the sum vector to get the true accumulated value for that column.

This module does exactly that resolution, using one 32-bit adder per column
(8 adders total, arranged in parallel at the top of the block), and then
writes the resolved 32-bit result into an SRAM bank dedicated to that column.

Storage: 8 KiB total, split evenly across the 8 columns.
  8 KiB = 65536 bits = 2048 words of 32 bits
  2048 words / 8 columns = 256 words per column -> DEPTH = 256, ADDR_WIDTH = 8

Dataflow direction (this is fixed, not a side effect of how enables are
driven by some external controller):

    MXU (8 cols of sum/carry) --[write]--> SRAM --[read]--> Activation Unit

  - WRITE side: every cycle, the MXU's 8 columns of fresh sum/carry results
    are resolved by the 8 parallel adders and written into their respective
    column's SRAM bank. This is the "filling up" direction.

  - READ side: every cycle, the accumulator also reads out 8 words (one per
    column) toward the next block (Activation Unit). This is the "draining
    out" direction.

  Both directions use independent per-column SRAM banks, each with its own
  read port and write port, so all 8 columns can read AND write in the SAME
  clock cycle -- this is required because the systolic array produces (and
  the activation unit consumes) one full row of 8 column results every
  cycle in steady-state operation.

  Read/write collision behaviour: if a write and a read target the SAME
  address in the SAME column on the SAME cycle, this is a standard
  synchronous single-port-per-bank SRAM -- the read returns the OLD value
  (the value before this cycle's write takes effect), not the freshly
  written one. This is normal SRAM macro behaviour (old-data-on-collision)
  and was verified in simulation before finalizing this RTL.
*/

module accumulator #(
    parameter INPUT_WIDTH = 8,          // Number of columns in the systolic array
    parameter DEPTH       = 256         // Words per column => 256*32b = 8Kb = 1KiB/col, 8KiB total across 8 cols
)(
    input wire clock,
    input wire reset,

    // ---- WRITE SIDE: sourced from the MXU, every cycle ----
    input wire [INPUT_WIDTH*32-1:0] mxu_sum_in,    // Concatenated sum outputs from the MXU column CSA trees
    input wire [INPUT_WIDTH*32-1:0] mxu_carry_in,  // Concatenated carry outputs from the MXU column CSA trees
    input wire mxu_write_enable,                                       // Gates the write side only
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] mxu_write_address,     // One write address per column

    // ---- READ SIDE: sunk to the next block (Activation Unit), every cycle ----
    input wire act_read_enable,                                        // Gates the read side only
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] act_read_address,      // One read address per column
    output reg  [INPUT_WIDTH*32-1:0] act_data_out                       // Concatenated 32-bit words, one per column, toward Activation Unit
);

    localparam ADDR_WIDTH = $clog2(DEPTH);

    // -------------------------------------------------------------
    // Stage 1: 8 parallel 32-bit adders resolving each column's CSA
    //          sum/carry pair into a single 32-bit accumulated value.
    //          This is the carry-save -> binary resolution step, and
    //          it happens combinationally every cycle on whatever the
    //          MXU currently presents -- it is the WRITE-side source.
    // -------------------------------------------------------------
    wire [INPUT_WIDTH*32-1:0] resolved_sum;

    genvar col;
    generate
        for (col = 0; col < INPUT_WIDTH; col = col + 1) begin : col_adders
            assign resolved_sum[col*32 +: 32] =
                mxu_sum_in[col*32 +: 32] + mxu_carry_in[col*32 +: 32];
        end
    endgenerate

    // -------------------------------------------------------------
    // Stage 2: 8 independent SRAM banks, one per column, each
    //          DEPTH x 32 bits = 256 x 32b = 1 KiB -> 8 KiB total.
    //
    //          Each bank has its OWN read port and OWN write port,
    //          so write (from MXU) and read (to Activation Unit) can
    //          both happen on the SAME clock edge, for ALL 8 columns
    //          simultaneously -- this is what makes "8 words written
    //          and 8 words read in the same cycle" possible: it is 8
    //          independent single-port-write/single-port-read banks,
    //          not one shared memory with one address per cycle.
    // -------------------------------------------------------------
    generate
        for (col = 0; col < INPUT_WIDTH; col = col + 1) begin : sram_banks

            // Per-column address slices
            wire [ADDR_WIDTH-1:0] wr_addr = mxu_write_address[col*ADDR_WIDTH +: ADDR_WIDTH];
            wire [ADDR_WIDTH-1:0] rd_addr = act_read_address [col*ADDR_WIDTH +: ADDR_WIDTH];

            // The memory array for this column: 256 words x 32 bits = 1 KiB
            reg [31:0] mem [0:DEPTH-1];

            integer i;

            always @(posedge clock) begin
                if (reset) begin
                    // Synchronous reset clears this column's entire bank.
                    // (On a real SRAM macro this would instead be a power-on
                    //  state or an explicit clear pass; kept here for
                    //  simulation correctness.)
                    for (i = 0; i < DEPTH; i = i + 1) begin
                        mem[i] <= 32'sd0;
                    end
                    act_data_out[col*32 +: 32] <= 32'sd0;
                end else begin
                    // READ happens first in program order so it captures the
                    // OLD value ahead of this cycle's write -- matches the
                    // old-data-on-collision behaviour verified in simulation.
                    if (act_read_enable) begin
                        act_data_out[col*32 +: 32] <= mem[rd_addr];
                    end
                    if (mxu_write_enable) begin
                        mem[wr_addr] <= resolved_sum[col*32 +: 32];
                    end
                end
            end

        end
    endgenerate

endmodule