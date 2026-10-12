/*
Accumulator.v (pure Verilog)

SIMPLIFIED ARCHITECTURE (replaces the previous mode[1:0] / dual-tiling-
read / direct_write_data design): per column, just ONE 2:1 MUX and ONE
adder.

    read_data (from this column's SRAM bank) ---\
                                                   MUX ---- adder_a --\
                              0 (ground) --------/                    +---- resolved_out ---- mem[write_address]
                                                                      /
    mxu_out (already-resolved value from the array) ---- adder_b ---/

  accumulate = 0  (plain write-through / store)
    MUX selects 0. adder_out = mxu_out + 0 = mxu_out.
    -> Used to commit a freshly computed value straight into SRAM.

  accumulate = 1  (reduction)
    MUX selects read_data (a previously stored partial sum, Partial_Sum_1).
    adder_out = read_data + mxu_out (Partial_Sum_2, this cycle's array
    output). -> Used to accumulate a new contribution on top of what
    was already stored, then write the combined result back.

CRITICAL TIMING NOTE -- read this before wiring this module up:

  The SRAM read is REGISTERED (synchronous), matching every other
  memory in this project -- read_data at cycle T reflects the address
  you presented at cycle T-1, NOT the current cycle. For a true
  "read old value at X, add this cycle's mxu_out, write result back
  to X" accumulate, the controller driving this module MUST present
  read_address = X one cycle BEFORE presenting write_address = X
  (with accumulate = 1 and write_enable = 1 on that later cycle).
  Getting this address sequencing wrong will silently combine
  mxu_out with the WRONG address's stored value instead of failing
  loudly -- there is no protection against this inside the module
  itself, by design, to keep it a simple, flexible building block
  rather than baking in a fixed read-then-write pipeline the caller
  might not want.

The pre-existing "drain to Activation Unit" read port (act_read_enable
/ act_read_address / act_data_out) is UNCHANGED and independent of all
of the above -- it was not part of this request, so it stays exactly
as it was.

Storage: 8 KiB total, split evenly across the 8 columns (unchanged).
  8 KiB = 65536 bits = 2048 words of 32 bits
  2048 words / 8 columns = 256 words per column -> DEPTH = 256, ADDR_WIDTH = 8
*/

module accumulator #(
    parameter INPUT_WIDTH = 8,          // Number of columns in the systolic array
    parameter DEPTH       = 256         // Words per column => 256*32b = 8Kb = 1KiB/col, 8KiB total across 8 cols
)(
    input wire clock,
    input wire reset,

    // ---- MXU side: one already-resolved value per column, every cycle ----
    input wire [INPUT_WIDTH*32-1:0] mxu_out,

    // ---- Reduction MUX control + its SRAM read port ----
    input wire accumulate,                                              // 0 = write-through (MUX=0), 1 = reduction (MUX=read_data). Shared across all columns.
    input wire read_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] read_address,          // One read address per column, feeds the reduction MUX

    // ---- Shared write port: commits the (muxed) adder's result ----
    input wire write_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] write_address,         // One write address per column

    // ---- Pre-existing, unrelated drain path: sunk to the Activation Unit, every cycle ----
    input wire act_read_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] act_read_address,      // One read address per column
    output reg  [INPUT_WIDTH*32-1:0] act_data_out                       // Concatenated 32-bit words, one per column, toward Activation Unit
);

    localparam ADDR_WIDTH = $clog2(DEPTH);

    genvar col;
    generate
        for (col = 0; col < INPUT_WIDTH; col = col + 1) begin : cols

            // -----------------------------------------------------------
            // Per-column address slices
            // -----------------------------------------------------------
            wire [ADDR_WIDTH-1:0] wr_addr     = write_address    [col*ADDR_WIDTH +: ADDR_WIDTH];
            wire [ADDR_WIDTH-1:0] rd_addr     = read_address     [col*ADDR_WIDTH +: ADDR_WIDTH];
            wire [ADDR_WIDTH-1:0] act_rd_addr = act_read_address [col*ADDR_WIDTH +: ADDR_WIDTH];

            // The memory array for this column: 256 words x 32 bits = 1 KiB.
            // 1 write port + 1 reduction read port + 1 drain read port,
            // all live in the same cycle -- see the physical-
            // implementation note at the bottom of this file re: SRAM
            // macro port counts.
            reg [31:0] mem [0:DEPTH-1];

            // Registered (synchronous) reduction read-port output
            reg [31:0] read_data;

            // -----------------------------------------------------------
            // The single 2:1 MUX + adder for this column.
            // -----------------------------------------------------------
            wire [31:0] adder_a = accumulate ? read_data : 32'd0;
            wire [31:0] adder_b = mxu_out[col*32 +: 32];
            wire [31:0] resolved_out = adder_a + adder_b;

            integer i;

            always @(posedge clock) begin
                if (reset) begin
                    for (i = 0; i < DEPTH; i = i + 1) begin
                        mem[i] <= 32'sd0;
                    end
                    read_data <= 32'sd0;
                    act_data_out[col*32 +: 32] <= 32'sd0;
                end else begin
                    // Both reads capture the OLD value ahead of this
                    // cycle's write -- old-data-on-collision, matching
                    // the rest of this project's memories.
                    if (read_enable) begin
                        read_data <= mem[rd_addr];
                    end
                    if (act_read_enable) begin
                        act_data_out[col*32 +: 32] <= mem[act_rd_addr];
                    end

                    if (write_enable) begin
                        mem[wr_addr] <= resolved_out;
                    end
                end
            end

        end
    endgenerate

endmodule

/*
PHYSICAL-IMPLEMENTATION NOTE: each column now needs 1 write port + 2
read ports (the reduction read port, plus the drain-to-Activation-Unit
port) live in the same cycle -- a real improvement over the previous
revision's 4-port design, and a more realistic ask of an SRAM macro
compiler (many 1W2R or 2R1W macros exist; true 1W3R+ macros are much
rarer). Still worth confirming against whatever memory compiler you
actually intend to target.

INTERFACE NOTE tying back to the deskew buffer: since arraydatapath's
`partial_sum` is already a single resolved value per column (its own
bottom_adders stage combines sum+carry before this module ever sees
it), DeskewBuffer's `vector_out` / `valid_out` map directly onto
`mxu_out` / an enable for this module -- no separate "direct write"
path is needed anymore, since mxu_out already IS that resolved value
by construction:

    mxu_out       <= deskew_buffer.vector_out;
    write_enable  <= deskew_buffer.valid_out;
    write_address <= <destination address for this pass>;
    accumulate    <= <0 for first pass into an address, 1 for later
                       passes reducing onto it -- see the read-before-
                       write timing note above>;
*/