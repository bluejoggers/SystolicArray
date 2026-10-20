/*
accumulator.v (Physical Macro Implementation)

Implements the 8 KiB Accumulator block across 8 systolic columns:
  - 8 independent columns x 256 words x 32 bits = 8 KiB total
  - Dual-Port Macro: sram_acc_256x4_1rw1r (Port 0: RW, Port 1: R)
  - Port 0 handles adder writeback and activation drain reads
  - Port 1 dedicated to the reduction feedback read loop
  - Behavioral memory arrays and reset loops removed for physical synthesis
*/

module accumulator #(
    parameter INPUT_WIDTH = 8,          // Number of columns in systolic array
    parameter DEPTH       = 256         // Words per column => 256 * 32b = 1 KiB/col (8 KiB total)
)(
    input wire clock,
    input wire reset,                   // Retained for interface compatibility

    // ---- MXU Output Stream ----
    input wire [INPUT_WIDTH*32-1:0]             mxu_out,

    // ---- Reduction Loop Control ----
    input wire                                  accumulate,
    input wire                                  read_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] read_address,

    // ---- Writeback Control ----
    input wire                                  write_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] write_address,

    // ---- Drain Path Toward Activation Unit ----
    input wire                                  act_read_enable,
    input wire [(INPUT_WIDTH*$clog2(DEPTH))-1:0] act_read_address,
    output wire [INPUT_WIDTH*32-1:0]            act_data_out
);

    localparam ADDR_WIDTH = $clog2(DEPTH); // 8 bits

    genvar col;
    generate
        for (col = 0; col < INPUT_WIDTH; col = col + 1) begin : cols

            // Per-column address slices
            wire [ADDR_WIDTH-1:0] wr_addr     = write_address    [col*ADDR_WIDTH +: ADDR_WIDTH];
            wire [ADDR_WIDTH-1:0] rd_addr     = read_address     [col*ADDR_WIDTH +: ADDR_WIDTH];
            wire [ADDR_WIDTH-1:0] act_rd_addr = act_read_address [col*ADDR_WIDTH +: ADDR_WIDTH];

            // Reduction read data from SRAM Port 1
            wire [31:0]           read_data;

            // Reduction MUX and 32-bit Adder
            wire [31:0] adder_a      = accumulate ? read_data : 32'd0;
            wire [31:0] adder_b      = mxu_out[col*32 +: 32];
            wire [31:0] resolved_out = adder_a + adder_b;

            // Port 0 Arbitration: Write takes priority over Drain Read
            wire                  port0_active = write_enable | act_read_enable;
            wire                  port0_web    = ~write_enable; // 0 = Write, 1 = Read
            wire [ADDR_WIDTH-1:0] port0_addr   = write_enable ? wr_addr : act_rd_addr;

            // Physical OpenRAM SRAM Instance: 256 words x 32 bits
            // Port 0: RW (Writeback or Activation Drain Read)
            // Port 1: R  (Dedicated Reduction Loop Read)
            sram_acc_256x4_1rw1r u_sram_col (
            `ifdef USE_POWER_PINS
                .vdd   (1'b1),
                .gnd   (1'b0),
            `endif
                // Port 0: Writeback / Drain Read
                .clk0  (clock),
                .csb0  (~port0_active),
                .web0  (port0_web),
                .addr0 (port0_addr),
                .din0  (resolved_out),
                .dout0 (act_data_out[col*32 +: 32]),

                // Port 1: Reduction Read
                .clk1  (clock),
                .csb1  (~read_enable),
                .addr1 (rd_addr),
                .dout1 (read_data)
            );

        end
    endgenerate

endmodule