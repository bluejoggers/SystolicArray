/*
UnifiedBuffer.v

Implements the Unified Buffer block from the TPU v1 architecture diagram --
the on-chip local activation storage that sits between the compute pipeline
(Activation/Normalization/Quantization) and the MXU.

Capacity: 128 KiB total.
  128 KiB = 131072 bytes = 1,048,576 bits = 32768 words of 32 bits

Organisation: 8 independent banks, matching the 8-word-wide parallelism of
the systolic array (one word per column).
  32768 words / 8 banks = 4096 words per bank
  4096 words x 32 bits  = 16384 bytes = 16 KiB per bank
  8 banks x 16 KiB       = 128 KiB total
  ADDR_WIDTH per bank = clog2(4096) = 12 bits

-------------------------------------------------------------------------
TWO INDEPENDENT WRITE SOURCES (this is the key spec for this version)
-------------------------------------------------------------------------
The Unified Buffer must accept activations from TWO genuinely independent
sources:

  1. NORM  -- the on-chip Normalization/Quantization block, writing this
              layer's freshly computed activations during steady-state
              pipeline operation.
  2. HOST  -- off-chip memory (DDR, via the Host Interface / PCIe DMA path),
              loading initial input data or weights-adjacent activation
              data from outside the chip.

Each source has its OWN per-bank write-request signal, address, and data --
NOT a single shared write-enable -- because on any given cycle, NORM and
HOST may be targeting completely different banks, the same bank at
different addresses, or (rarely, but must be handled) the same bank at the
same address.

Each physical SRAM bank only has ONE write port. When both NORM and HOST
request a write to the SAME bank on the SAME cycle, a priority arbiter
decides which one actually writes that cycle:

  ARBITRATION POLICY: HOST WINS ON CONFLICT.
  Rationale: HOST traffic represents bulk DMA loads from off-chip memory,
  which are comparatively rare, latency-sensitive bursts that are expensive
  to stall or retry (the PCIe/DDR pipeline behind them keeps moving). NORM
  traffic is the steady-state per-cycle compute pipeline output; dropping
  one NORM write for one cycle on conflict is a normal, anticipated event
  that the controller/compiler can schedule around (e.g. by re-issuing the
  write or routing that layer's activation to a different bank), whereas
  stalling an in-flight DMA burst is more disruptive system-wide.

  A `write_conflict` status output (one bit per bank) flags every cycle on
  which this arbitration actually occurred and a NORM write was dropped, so
  the controller can observe and react to it (e.g. retry NORM's write next
  cycle).

  This arbitration was verified in simulation before finalizing this RTL,
  including the case where only one source is active per bank (no false
  conflict reported) and the case where both sources target the same bank
  (conflict correctly flagged, HOST write wins, NORM write dropped).

-------------------------------------------------------------------------
READ PORT
-------------------------------------------------------------------------
One read port per bank, sunk toward the MXU (next-layer activation input)
or back out to the Host Interface if activations need to be read off-chip.
Read and write(s) can all happen on the same cycle, per bank, independent
of each other -- this is what makes the Unified Buffer behave as a true
multi-banked dual-port (now effectively 2-write/1-read "2.5-port") SRAM.

Collision behaviour (verified in simulation):
  - Read vs either write, SAME address, SAME cycle: read returns the OLD
    value (executes before the winning write takes effect that cycle).
  - Read vs write, DIFFERENT address, SAME bank, SAME cycle: both operate
    correctly and independently.
*/

module unified_buffer #(
    parameter NUM_BANKS = 8,            // One bank per systolic array column
    parameter DEPTH     = 4096          // Words per bank => 4096*32b = 16KiB/bank, 128KiB total across 8 banks
)(
    input wire clock,
    input wire reset,

    // ---- WRITE PORT 1: from the on-chip Normalization/Quantization block ----
    input wire [NUM_BANKS-1:0]                  norm_write_req,     // Per-bank write request (NOT a single shared enable)
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  norm_write_address, // One write address per bank
    input wire [NUM_BANKS*32-1:0]               norm_write_data,    // Concatenated 32-bit words, one per bank

    // ---- WRITE PORT 2: from off-chip memory via the Host Interface / DMA ----
    input wire [NUM_BANKS-1:0]                  host_write_req,     // Per-bank write request
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  host_write_address, // One write address per bank
    input wire [NUM_BANKS*32-1:0]               host_write_data,    // Concatenated 32-bit words, one per bank

    // ---- READ PORT: toward MXU (next-layer activations) / Host Interface readback ----
    input wire read_enable,
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  read_address,       // One read address per bank
    output reg  [NUM_BANKS*32-1:0]               read_data,          // Concatenated 32-bit words, one per bank

    // ---- STATUS: flags which bank(s) had a NORM write dropped this cycle due to HOST priority ----
    output wire [NUM_BANKS-1:0]                  write_conflict
);

    localparam ADDR_WIDTH = $clog2(DEPTH);

    // -------------------------------------------------------------
    // 8 independent SRAM banks. Each bank has ONE read port and ONE
    // physical write port; the write port is fed by a priority
    // arbiter resolving the two write REQUESTS (norm, host) down to
    // a single winning write per bank per cycle.
    // -------------------------------------------------------------
    genvar bank;
    generate
        for (bank = 0; bank < NUM_BANKS; bank = bank + 1) begin : sram_banks

            // Per-bank address/data slices for both write sources
            wire [ADDR_WIDTH-1:0] norm_addr = norm_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [31:0]           norm_data = norm_write_data   [bank*32 +: 32];
            wire                  norm_req  = norm_write_req[bank];

            wire [ADDR_WIDTH-1:0] host_addr = host_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [31:0]           host_data = host_write_data   [bank*32 +: 32];
            wire                  host_req  = host_write_req[bank];

            wire [ADDR_WIDTH-1:0] rd_addr   = read_address[bank*ADDR_WIDTH +: ADDR_WIDTH];

            // ---- Arbiter: HOST wins on simultaneous request to this bank ----
            wire bank_write_en   = norm_req | host_req;
            wire [ADDR_WIDTH-1:0] bank_wr_addr = host_req ? host_addr : norm_addr;
            wire [31:0]           bank_wr_data = host_req ? host_data : norm_data;
            assign write_conflict[bank] = norm_req & host_req;   // NORM write dropped this cycle when this is 1

            // The memory array for this bank: 4096 words x 32 bits = 16 KiB
            reg [31:0] mem [0:DEPTH-1];

            integer i;

            always @(posedge clock) begin
                if (reset) begin
                    for (i = 0; i < DEPTH; i = i + 1) begin
                        mem[i] <= 32'sd0;
                    end
                    read_data[bank*32 +: 32] <= 32'sd0;
                end else begin
                    // READ executes first in program order so it captures
                    // the OLD value ahead of this cycle's winning write --
                    // matches old-data-on-collision behaviour verified in
                    // simulation.
                    if (read_enable) begin
                        read_data[bank*32 +: 32] <= mem[rd_addr];
                    end
                    if (bank_write_en) begin
                        mem[bank_wr_addr] <= bank_wr_data;
                    end
                end
            end

        end
    endgenerate

endmodule