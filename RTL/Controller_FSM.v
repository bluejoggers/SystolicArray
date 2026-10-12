/*
Controller_FSM.v  --  tpu_controller

Instruction-driven sequencer for tpu_datapath (TPU_Datapath.v). Drives every
control input the datapath exposes; the datapath itself is unchanged.

NOTE: ControllerDesign.txt was empty in the delivered project, so the
instruction set below is modelled on the TPU v1 instruction classes that the
datapath's own comments refer to (Read_Host_Memory, Read_Weights,
MatrixMultiply, Activate, Write_Host_Memory) plus two parameter-setting ops.

-------------------------------------------------------------------------------
INSTRUCTION PORT  (valid/ready, one 64-bit instruction at a time)
-------------------------------------------------------------------------------
  [63:60] opcode
  [59:56] flags        bit 56 = ACC (MATMUL: 1 = accumulate onto acc_addr)
  [55:40] ub_addr      start address in the Unified Buffer   (low UB_AW bits used)
  [39:24] acc_addr     start address in the Accumulator      (low ACC_AW bits used)
  [23:8]  count        number of N-lane vectors to process   (0 = no-op)
  [7:0]   reserved

  SET_NORM  : [52:48] norm_shift, [47:32] norm_gain, [31:0] norm_bias
  SET_QUANT : [23:8]  quant_inv_scale, [7:0] quant_zero_point

  op  name        action
  0   NOP         retire immediately
  1   LOAD_ACT    take `count` vectors from the activation fetcher and write
                  them to UB[ub_addr ...]
  2   LOAD_W      shift exactly N weight vectors from the weight fetcher into
                  the array. The FIRST vector lands in column N-1, the LAST
                  in column 0.
  3   MATMUL      stream UB[ub_addr ...] through the array; result i goes to
                  ACC[acc_addr + i], overwritten (ACC=0) or added (ACC=1).
                  Retires only after the last accumulator write.
  4   ACTIVATE    ACC[acc_addr ...] -> ReLU -> norm -> quant -> UB[ub_addr ...]
  5   STORE       read UB[ub_addr ...] out on host_out_* (valid/ready)
  6   SET_NORM    load batch-norm gain / bias / shift
  7   SET_QUANT   load quantizer inverse scale / zero point
  8   CLR_ARRAY   one-cycle synchronous clear of every PE register
  other           illegal: sets err_illegal_op and retires

Byte order on the host streams (set by the fetchers' shift registers): the
first byte of each N-byte group ends up in lane N-1, the last in lane 0.

-------------------------------------------------------------------------------
TIMING (all derived from the datapath RTL and checked in simulation)
-------------------------------------------------------------------------------
Let cycle c be the cycle ub_read_enable is high for vector i.
  c+1      ub_read_data = vector i  (stagger lane 0 / stagger_valid_in)
  c+N+1    array partial_sum lane 0 valid  -> array_valid_in
  c+2N-1   acc_read_enable / acc_read_address (only when ACC=1; the
           accumulator's reduction read is registered, so it must lead
           the write by one cycle)
  c+2N     deskew_valid_out (= accumulator write_enable), acc_write_address

ACTIVATE, with cycle c = acc_act_read_enable for vector i:
  c+1      acc_act_data_out valid (registered SRAM read)
  c+2      quantizer register valid -> norm_write_req / norm_write_address
  (TPU_Datapath.v's header says "one cycle after"; it is two, because both
  the accumulator drain read and the quantizer are registered.)

Every output to the datapath is a flop (or a flop ANDed with a quasi-static
mode flop), so there are no combinational paths from host pins into the
datapath's SRAM controls. Reset is synchronous, active high, like most of
the datapath.
*/

module tpu_controller #(
    parameter N         = 8,
    parameter WA_BITS   = 8,
    parameter BITS      = 32,
    parameter ACC_DEPTH = 256,
    parameter UB_DEPTH  = 4096
)(
    input  wire clock,
    input  wire reset,

    // ---------------------------------------------------------------------
    // Instruction interface
    // ---------------------------------------------------------------------
    input  wire        instr_valid,
    output wire        instr_ready,
    input  wire [63:0] instr_data,
    output reg         instr_done,       // 1-cycle pulse when an instruction retires
    output wire        busy,

    // Sticky error flags (cleared by reset)
    output reg         err_illegal_op,
    output reg         err_ub_conflict,  // a NORM write to the UB was dropped
    output reg         err_latency,      // deskew_valid_out disagreed with the expected write slot

    // ---------------------------------------------------------------------
    // Host readback (STORE)
    // ---------------------------------------------------------------------
    output wire                 host_out_valid,
    input  wire                 host_out_ready,
    output wire [N*WA_BITS-1:0] host_out_data,

    // ---------------------------------------------------------------------
    // Datapath status
    // ---------------------------------------------------------------------
    input  wire                 activation_word_valid,
    input  wire                 weight_word_valid,
    input  wire                 deskew_valid_out,
    input  wire [N-1:0]         ub_write_conflict,
    input  wire [N*WA_BITS-1:0] ub_read_data,

    // ---------------------------------------------------------------------
    // Datapath control
    // ---------------------------------------------------------------------
    output wire [N-1:0]                    host_write_req,
    output wire [N*$clog2(UB_DEPTH)-1:0]   host_write_address,
    output wire                            activation_ack,
    output wire                            weight_ack,

    output wire                            ub_read_enable,
    output wire [N*$clog2(UB_DEPTH)-1:0]   ub_read_address,

    output wire                            stagger_valid_in,

    output wire [N-1:0] resetAreg, resetWreg, resetSreg, resetCreg,
    output wire [N-1:0] enableAreg, enableWreg, enableSreg, enableCreg,

    output wire                            array_valid_in,

    output wire                            acc_accumulate,
    output wire                            acc_read_enable,
    output wire [N*$clog2(ACC_DEPTH)-1:0]  acc_read_address,
    output wire [N*$clog2(ACC_DEPTH)-1:0]  acc_write_address,
    output wire                            acc_act_read_enable,
    output wire [N*$clog2(ACC_DEPTH)-1:0]  acc_act_read_address,

    output reg  signed [15:0]              norm_gain,
    output reg  signed [BITS-1:0]          norm_bias,
    output reg  [4:0]                      norm_shift,
    output reg  signed [15:0]              quant_inv_scale,
    output reg  signed [7:0]               quant_zero_point,

    output wire [N-1:0]                    norm_write_req,
    output wire [N*$clog2(UB_DEPTH)-1:0]   norm_write_address
);

    localparam UB_AW  = $clog2(UB_DEPTH);
    localparam ACC_AW = $clog2(ACC_DEPTH);
    localparam MM_SR  = 2*N;   // MATMUL pipeline tracker length

    // ---------------------------------------------------------------------
    // Opcodes and states
    // ---------------------------------------------------------------------
    localparam [3:0] OP_NOP = 4'd0, OP_LOAD_ACT = 4'd1, OP_LOAD_W   = 4'd2,
                     OP_MATMUL = 4'd3, OP_ACTIVATE = 4'd4, OP_STORE = 4'd5,
                     OP_SET_NORM = 4'd6, OP_SET_QUANT = 4'd7, OP_CLR_ARRAY = 4'd8;

    localparam [3:0] S_IDLE = 4'd0, S_LOAD_ACT = 4'd1, S_LOAD_W = 4'd2,
                     S_MM_SETUP = 4'd3, S_MM = 4'd4, S_ACT = 4'd5,
                     S_STORE = 4'd6, S_DONE = 4'd7;

    reg [3:0] state;

    // Latched instruction operands / working pointers
    reg [15:0]       cnt;          // vectors left to issue
    reg [UB_AW-1:0]  ub_ptr;       // next UB address to issue (read or write)
    reg [ACC_AW-1:0] acc_ptr;      // next accumulator address to issue (ACTIVATE)
    reg              acc_mode;     // MATMUL accumulate flag

    // Registered datapath controls
    reg              host_wr_q;
    reg [UB_AW-1:0]  host_wr_addr_q;
    reg              act_ack_q;
    reg              w_ack_q;
    reg              ub_rd_q;
    reg [UB_AW-1:0]  ub_rd_addr_q;
    reg              mm_rd_q;      // ub_rd_q belongs to a MATMUL
    reg              st_rd_q;      // ub_rd_q belongs to a STORE
    reg              arr_en_q;     // A/S/C enables during MATMUL
    reg              arr_rst_q;
    reg              act_rd_q;
    reg [ACC_AW-1:0] act_rd_addr_q;

    // MATMUL tracker: mm_sr[k] is high k+1 cycles after a MATMUL UB read
    reg [MM_SR-1:0]  mm_sr;
    reg [ACC_AW-1:0] acc_rd_ptr;
    reg [ACC_AW-1:0] acc_wr_ptr;

    // ACTIVATE tracker: act_sr[k] is high k+1 cycles after an accumulator drain read
    reg [1:0]        act_sr;
    reg [UB_AW-1:0]  nw_ptr;

    // ---------------------------------------------------------------------
    // STORE readback FIFO (4 entries) -- lets the UB read port run at one
    // vector per cycle while every read enable stays registered.
    // ---------------------------------------------------------------------
    reg [N*WA_BITS-1:0] fifo_mem [0:3];
    reg [1:0]           fifo_wp, fifo_rp;
    reg [2:0]           fifo_cnt;
    reg                 st_dv;     // ub_read_data holds a STORE vector this cycle

    wire fifo_pop  = host_out_valid && host_out_ready;
    wire fifo_push = st_dv;
    // Queued entries plus reads already committed (st_rd_q, st_dv) must leave a slot
    wire st_can_issue = (fifo_cnt + {2'b0, st_rd_q} + {2'b0, st_dv}) < 3'd4;

    assign host_out_valid = (fifo_cnt != 3'd0);
    assign host_out_data  = fifo_mem[fifo_rp];

    // ---------------------------------------------------------------------
    // Instruction decode
    // ---------------------------------------------------------------------
    wire [3:0]  i_op    = instr_data[63:60];
    wire        i_acc   = instr_data[56];
    wire [15:0] i_ub    = instr_data[55:40];
    wire [15:0] i_acc_a = instr_data[39:24];
    wire [15:0] i_cnt   = instr_data[23:8];

    assign instr_ready = (state == S_IDLE);
    assign busy        = (state != S_IDLE);
    wire   accept      = instr_valid && instr_ready;

    // ---------------------------------------------------------------------
    // Main sequencer
    // ---------------------------------------------------------------------
    always @(posedge clock) begin
        if (reset) begin
            state            <= S_IDLE;
            cnt              <= 16'd0;
            ub_ptr           <= {UB_AW{1'b0}};
            acc_ptr          <= {ACC_AW{1'b0}};
            acc_mode         <= 1'b0;
            host_wr_q        <= 1'b0;
            host_wr_addr_q   <= {UB_AW{1'b0}};
            act_ack_q        <= 1'b0;
            w_ack_q          <= 1'b0;
            ub_rd_q          <= 1'b0;
            ub_rd_addr_q     <= {UB_AW{1'b0}};
            mm_rd_q          <= 1'b0;
            st_rd_q          <= 1'b0;
            arr_en_q         <= 1'b0;
            arr_rst_q        <= 1'b1;   // clears every PE register while reset is held
            act_rd_q         <= 1'b0;
            act_rd_addr_q    <= {ACC_AW{1'b0}};
            instr_done       <= 1'b0;
            err_illegal_op   <= 1'b0;
            norm_gain        <= 16'sd0;
            norm_bias        <= {BITS{1'b0}};
            norm_shift       <= 5'd0;
            quant_inv_scale  <= 16'sd0;
            quant_zero_point <= 8'sd0;
        end else begin
            // Single-cycle pulses default low
            host_wr_q  <= 1'b0;
            act_ack_q  <= 1'b0;
            w_ack_q    <= 1'b0;
            ub_rd_q    <= 1'b0;
            mm_rd_q    <= 1'b0;
            st_rd_q    <= 1'b0;
            act_rd_q   <= 1'b0;
            arr_rst_q  <= 1'b0;
            instr_done <= 1'b0;

            case (state)
            // -------------------------------------------------------------
            S_IDLE: if (accept) begin
                cnt      <= i_cnt;
                ub_ptr   <= i_ub[UB_AW-1:0];
                acc_ptr  <= i_acc_a[ACC_AW-1:0];
                acc_mode <= i_acc;
                case (i_op)
                    OP_NOP:       state <= S_DONE;
                    OP_LOAD_ACT:  state <= S_LOAD_ACT;
                    OP_LOAD_W: begin
                        cnt   <= N;
                        state <= S_LOAD_W;
                    end
                    OP_MATMUL:    state <= S_MM_SETUP;
                    OP_ACTIVATE:  state <= S_ACT;
                    OP_STORE:     state <= S_STORE;
                    OP_SET_NORM: begin
                        norm_shift <= instr_data[52:48];
                        norm_gain  <= instr_data[47:32];
                        norm_bias  <= instr_data[BITS-1:0];
                        state      <= S_DONE;
                    end
                    OP_SET_QUANT: begin
                        quant_inv_scale  <= instr_data[23:8];
                        quant_zero_point <= instr_data[7:0];
                        state            <= S_DONE;
                    end
                    OP_CLR_ARRAY: begin
                        arr_rst_q <= 1'b1;
                        state     <= S_DONE;
                    end
                    default: begin
                        err_illegal_op <= 1'b1;
                        state          <= S_DONE;
                    end
                endcase
            end

            // -------------------------------------------------------------
            // Read_Host_Memory: fetcher word -> UB. The !act_ack_q guard
            // stops a double commit: the fetcher's word_valid only falls
            // one cycle after it sees the ack.
            // -------------------------------------------------------------
            S_LOAD_ACT: begin
                if (cnt == 16'd0) begin
                    state <= S_DONE;
                end else if (activation_word_valid && !act_ack_q) begin
                    host_wr_q      <= 1'b1;
                    host_wr_addr_q <= ub_ptr;
                    act_ack_q      <= 1'b1;
                    ub_ptr         <= ub_ptr + 1'b1;
                    cnt            <= cnt - 1'b1;
                end
            end

            // -------------------------------------------------------------
            // Read_Weights: each accepted word shifts every column's weight
            // register one place right (enableWreg = all ones for 1 cycle).
            // -------------------------------------------------------------
            S_LOAD_W: begin
                if (cnt == 16'd0) begin
                    state <= S_DONE;
                end else if (weight_word_valid && !w_ack_q) begin
                    w_ack_q <= 1'b1;
                    cnt     <= cnt - 1'b1;
                end
            end

            // -------------------------------------------------------------
            // MatrixMultiply. One setup cycle turns the array's A/S/C
            // enables on before the first activation reaches column 0.
            // -------------------------------------------------------------
            S_MM_SETUP: begin
                arr_en_q <= 1'b1;
                state    <= S_MM;
            end

            S_MM: begin
                if (cnt != 16'd0) begin
                    ub_rd_q      <= 1'b1;
                    mm_rd_q      <= 1'b1;
                    ub_rd_addr_q <= ub_ptr;
                    ub_ptr       <= ub_ptr + 1'b1;
                    cnt          <= cnt - 1'b1;
                end else if (!mm_rd_q && (mm_sr == {MM_SR{1'b0}})) begin
                    // last accumulator write has completed
                    arr_en_q <= 1'b0;
                    state    <= S_DONE;
                end
            end

            // -------------------------------------------------------------
            // Activate: accumulator drain -> ReLU/norm/quant -> UB
            // -------------------------------------------------------------
            S_ACT: begin
                if (cnt != 16'd0) begin
                    act_rd_q      <= 1'b1;
                    act_rd_addr_q <= acc_ptr;
                    acc_ptr       <= acc_ptr + 1'b1;
                    cnt           <= cnt - 1'b1;
                end else if (!act_rd_q && (act_sr == 2'b00)) begin
                    state <= S_DONE;
                end
            end

            // -------------------------------------------------------------
            // Write_Host_Memory: UB -> readback FIFO -> host
            // -------------------------------------------------------------
            S_STORE: begin
                if (cnt != 16'd0) begin
                    if (st_can_issue) begin
                        ub_rd_q      <= 1'b1;
                        st_rd_q      <= 1'b1;
                        ub_rd_addr_q <= ub_ptr;
                        ub_ptr       <= ub_ptr + 1'b1;
                        cnt          <= cnt - 1'b1;
                    end
                end else if (!st_rd_q && !st_dv && (fifo_cnt == 3'd0)) begin
                    state <= S_DONE;
                end
            end

            // -------------------------------------------------------------
            S_DONE: begin
                instr_done <= 1'b1;
                state      <= S_IDLE;
            end

            default: state <= S_IDLE;
            endcase
        end
    end

    // ---------------------------------------------------------------------
    // MATMUL pipeline tracker and accumulator address generation
    // ---------------------------------------------------------------------
    always @(posedge clock) begin
        if (reset) begin
            mm_sr      <= {MM_SR{1'b0}};
            acc_rd_ptr <= {ACC_AW{1'b0}};
            acc_wr_ptr <= {ACC_AW{1'b0}};
        end else begin
            mm_sr <= {mm_sr[MM_SR-2:0], mm_rd_q};

            if (accept) begin
                acc_rd_ptr <= i_acc_a[ACC_AW-1:0];
                acc_wr_ptr <= i_acc_a[ACC_AW-1:0];
            end else begin
                if (mm_sr[2*N-2]) acc_rd_ptr <= acc_rd_ptr + 1'b1;
                if (mm_sr[2*N-1]) acc_wr_ptr <= acc_wr_ptr + 1'b1;
            end
        end
    end

    // ---------------------------------------------------------------------
    // ACTIVATE write-back tracker
    // ---------------------------------------------------------------------
    always @(posedge clock) begin
        if (reset) begin
            act_sr <= 2'b00;
            nw_ptr <= {UB_AW{1'b0}};
        end else begin
            act_sr <= {act_sr[0], act_rd_q};
            if (accept)
                nw_ptr <= i_ub[UB_AW-1:0];
            else if (act_sr[1])
                nw_ptr <= nw_ptr + 1'b1;
        end
    end

    // ---------------------------------------------------------------------
    // STORE readback FIFO
    // ---------------------------------------------------------------------
    always @(posedge clock) begin
        if (fifo_push)
            fifo_mem[fifo_wp] <= ub_read_data;   // no reset needed on storage
    end

    always @(posedge clock) begin
        if (reset) begin
            st_dv    <= 1'b0;
            fifo_wp  <= 2'd0;
            fifo_rp  <= 2'd0;
            fifo_cnt <= 3'd0;
        end else begin
            st_dv <= st_rd_q;
            if (fifo_push) fifo_wp <= fifo_wp + 1'b1;
            if (fifo_pop)  fifo_rp <= fifo_rp + 1'b1;
            case ({fifo_push, fifo_pop})
                2'b10:   fifo_cnt <= fifo_cnt + 1'b1;
                2'b01:   fifo_cnt <= fifo_cnt - 1'b1;
                default: fifo_cnt <= fifo_cnt;
            endcase
        end
    end

    // ---------------------------------------------------------------------
    // Sticky status checks
    // ---------------------------------------------------------------------
    always @(posedge clock) begin
        if (reset) begin
            err_ub_conflict <= 1'b0;
            err_latency     <= 1'b0;
        end else begin
            if (|ub_write_conflict)               err_ub_conflict <= 1'b1;
            if (deskew_valid_out != mm_sr[2*N-1]) err_latency     <= 1'b1;
        end
    end

    // ---------------------------------------------------------------------
    // Output mapping (addresses are broadcast to every bank / column)
    // ---------------------------------------------------------------------
    assign host_write_req       = {N{host_wr_q}};
    assign host_write_address   = {N{host_wr_addr_q}};
    assign activation_ack       = act_ack_q;
    assign weight_ack           = w_ack_q;

    assign ub_read_enable       = ub_rd_q;
    assign ub_read_address      = {N{ub_rd_addr_q}};

    assign stagger_valid_in     = mm_sr[0];
    assign array_valid_in       = mm_sr[N];

    assign resetAreg            = {N{arr_rst_q}};
    assign resetWreg            = {N{arr_rst_q}};
    assign resetSreg            = {N{arr_rst_q}};
    assign resetCreg            = {N{arr_rst_q}};
    assign enableAreg           = {N{arr_en_q}};
    assign enableSreg           = {N{arr_en_q}};
    assign enableCreg           = {N{arr_en_q}};
    assign enableWreg           = {N{w_ack_q}};

    assign acc_accumulate       = acc_mode;
    assign acc_read_enable      = mm_sr[2*N-2] & acc_mode;
    assign acc_read_address     = {N{acc_rd_ptr}};
    assign acc_write_address    = {N{acc_wr_ptr}};
    assign acc_act_read_enable  = act_rd_q;
    assign acc_act_read_address = {N{act_rd_addr_q}};

    assign norm_write_req       = {N{act_sr[1]}};
    assign norm_write_address   = {N{nw_ptr}};

    // ---------------------------------------------------------------------
    // Elaboration-time parameter checks (ignored by synthesis)
    // ---------------------------------------------------------------------
    `ifndef SYNTHESIS
    initial begin
        if (WA_BITS != 8)  $display("ERROR tpu_controller: WA_BITS must be 8 (MAC hardcodes 8-bit ports)");
        if (BITS != 32)    $display("ERROR tpu_controller: BITS must be 32 (MAC hardcodes 32-bit ports)");
        if (N < 2)         $display("ERROR tpu_controller: N must be >= 2");
        if (UB_AW > 16)    $display("ERROR tpu_controller: UB_DEPTH exceeds the 16-bit ub_addr field");
        if (ACC_AW > 16)   $display("ERROR tpu_controller: ACC_DEPTH exceeds the 16-bit acc_addr field");
    end
    `endif

endmodule
