/*
UnifiedBuffer.v (Physical Macro Implementation)

Implements the 32 KiB Unified Buffer using 8 physical OpenRAM macros:
  - 8 independent banks x 4096 words x 8 bits = 32 KiB total
  - Dual-Port Macro: sram_ub_4096x8_1w1r (Port 0: Write/Arbiter, Port 1: Read/MXU)
  - Synchronous 1-cycle read latency directly driven by SRAM Port 1
  - Behavioral memory arrays and reset for-loops removed for physical synthesis
*/

module unified_buffer #(
    parameter NUM_BANKS = 8,            // One bank per systolic array column
    parameter DEPTH     = 4096          // 4096 words x 8 bits per bank = 4 KiB/bank (32 KiB total)
)(
    input wire clock,
    input wire reset,                   // Retained for interface compatibility; SRAM bitcells do not reset

    // ---- WRITE PORT 1: Normalization/Quantization Pipeline ----
    input wire [NUM_BANKS-1:0]                  norm_write_req,
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  norm_write_address,
    input wire [(NUM_BANKS*8)-1:0]               norm_write_data,

    // ---- WRITE PORT 2: Host Interface / DMA ----
    input wire [NUM_BANKS-1:0]                  host_write_req,
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  host_write_address,
    input wire [(NUM_BANKS*8)-1:0]               host_write_data,

    // ---- READ PORT: Toward MXU / Host Readback ----
    input wire                                  read_enable,
    input wire [(NUM_BANKS*$clog2(DEPTH))-1:0]  read_address,
    output wire [(NUM_BANKS*8)-1:0]             read_data,

    // ---- STATUS: Flags dropped NORM writes due to HOST priority ----
    output wire [NUM_BANKS-1:0]                 write_conflict
);

    localparam ADDR_WIDTH = $clog2(DEPTH); // 12 bits

    genvar bank;
    generate
        for (bank = 0; bank < NUM_BANKS; bank = bank + 1) begin : sram_banks

            // Per-bank address and data bus slices
            wire [ADDR_WIDTH-1:0] norm_addr = norm_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [7:0]            norm_data = norm_write_data   [bank*8 +: 8];
            wire                  norm_req  = norm_write_req[bank];

            wire [ADDR_WIDTH-1:0] host_addr = host_write_address[bank*ADDR_WIDTH +: ADDR_WIDTH];
            wire [7:0]            host_data = host_write_data   [bank*8 +: 8];
            wire                  host_req  = host_write_req[bank];

            wire [ADDR_WIDTH-1:0] rd_addr   = read_address[bank*ADDR_WIDTH +: ADDR_WIDTH];

            // Priority Arbiter: HOST write wins on collision
            wire                  bank_write_en = norm_req | host_req;
            wire [ADDR_WIDTH-1:0] bank_wr_addr  = host_req ? host_addr : norm_addr;
            wire [7:0]            bank_wr_data  = host_req ? host_data : norm_data;
            assign write_conflict[bank]         = norm_req & host_req;

            // Physical OpenRAM SRAM Instance: 4096 words x 8 bits
            // Port 0: Write (web0=0 when active)
            // Port 1: Synchronous Read (csb1=0 when active)
            sram_ub_4096x8_1w1r u_sram_bank (
            `ifdef USE_POWER_PINS
                .vdd   (1'b1),
                .gnd   (1'b0),
            `endif
                // Port 0: Write Path
                .clk0  (clock),
                .csb0  (~bank_write_en),              // Active-low chip select
                .web0  (~bank_write_en),              // Active-low write control (0 = Write)
                .addr0 (bank_wr_addr),
                .din0  (bank_wr_data),
                .dout0 (),                            // Unused on Port 0

                // Port 1: Read Path
                .clk1  (clock),
                .csb1  (~read_enable),                // Active-low chip select
                .addr1 (rd_addr),
                .dout1 (read_data[bank*8 +: 8])       // Direct 1-cycle synchronous read
            );

        end
    endgenerate

endmodule