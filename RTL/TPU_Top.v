/*
TPU_Top.v -- tpu_controller + tpu_datapath.

External interface: one instruction port, two byte-wide host streams
(activations, weights), one N-byte host readback port, status.
Compile with every .v in this directory except test.v.
*/

module tpu_top #(
    parameter N         = 8,
    parameter WA_BITS   = 8,
    parameter BITS      = 32,
    parameter ACC_DEPTH = 256,
    parameter UB_DEPTH  = 4096
)(
    input  wire clock,
    input  wire reset,

    // Instructions
    input  wire        instr_valid,
    output wire        instr_ready,
    input  wire [63:0] instr_data,
    output wire        instr_done,
    output wire        busy,

    // Activation byte stream
    input  wire [WA_BITS-1:0] activation_in,
    input  wire               activation_valid,
    output wire               activation_ready,

    // Weight byte stream
    input  wire [WA_BITS-1:0] weight_in,
    input  wire               weight_valid,
    output wire               weight_ready,

    // Readback
    output wire                 host_out_valid,
    input  wire                 host_out_ready,
    output wire [N*WA_BITS-1:0] host_out_data,

    // Status
    output wire err_illegal_op,
    output wire err_ub_conflict,
    output wire err_latency
);

    localparam UB_AW  = $clog2(UB_DEPTH);
    localparam ACC_AW = $clog2(ACC_DEPTH);

    wire [N-1:0]          host_write_req;
    wire [N*UB_AW-1:0]    host_write_address;
    wire [N-1:0]          ub_write_conflict;
    wire                  ub_read_enable;
    wire [N*UB_AW-1:0]    ub_read_address;
    wire [N*WA_BITS-1:0]  ub_read_data;
    wire                  activation_word_valid, activation_ack;
    wire                  weight_word_valid, weight_ack;
    wire                  stagger_valid_in;
    wire [N-1:0]          stagger_valid_out;
    wire [N-1:0]          resetAreg, resetWreg, resetSreg, resetCreg;
    wire [N-1:0]          enableAreg, enableWreg, enableSreg, enableCreg;
    wire                  array_valid_in, deskew_valid_out;
    wire                  acc_accumulate, acc_read_enable, acc_act_read_enable;
    wire [N*ACC_AW-1:0]   acc_read_address, acc_write_address, acc_act_read_address;
    wire signed [15:0]    norm_gain;
    wire signed [BITS-1:0] norm_bias;
    wire [4:0]            norm_shift;
    wire signed [15:0]    quant_inv_scale;
    wire signed [7:0]     quant_zero_point;
    wire [N-1:0]          norm_write_req;
    wire [N*UB_AW-1:0]    norm_write_address;

    tpu_controller #(
        .N(N), .WA_BITS(WA_BITS), .BITS(BITS),
        .ACC_DEPTH(ACC_DEPTH), .UB_DEPTH(UB_DEPTH)
    ) u_ctrl (
        .clock(clock), .reset(reset),
        .instr_valid(instr_valid), .instr_ready(instr_ready), .instr_data(instr_data),
        .instr_done(instr_done), .busy(busy),
        .err_illegal_op(err_illegal_op), .err_ub_conflict(err_ub_conflict), .err_latency(err_latency),
        .host_out_valid(host_out_valid), .host_out_ready(host_out_ready), .host_out_data(host_out_data),
        .activation_word_valid(activation_word_valid), .weight_word_valid(weight_word_valid),
        .deskew_valid_out(deskew_valid_out), .ub_write_conflict(ub_write_conflict),
        .ub_read_data(ub_read_data),
        .host_write_req(host_write_req), .host_write_address(host_write_address),
        .activation_ack(activation_ack), .weight_ack(weight_ack),
        .ub_read_enable(ub_read_enable), .ub_read_address(ub_read_address),
        .stagger_valid_in(stagger_valid_in),
        .resetAreg(resetAreg), .resetWreg(resetWreg), .resetSreg(resetSreg), .resetCreg(resetCreg),
        .enableAreg(enableAreg), .enableWreg(enableWreg), .enableSreg(enableSreg), .enableCreg(enableCreg),
        .array_valid_in(array_valid_in),
        .acc_accumulate(acc_accumulate), .acc_read_enable(acc_read_enable),
        .acc_read_address(acc_read_address), .acc_write_address(acc_write_address),
        .acc_act_read_enable(acc_act_read_enable), .acc_act_read_address(acc_act_read_address),
        .norm_gain(norm_gain), .norm_bias(norm_bias), .norm_shift(norm_shift),
        .quant_inv_scale(quant_inv_scale), .quant_zero_point(quant_zero_point),
        .norm_write_req(norm_write_req), .norm_write_address(norm_write_address)
    );

    tpu_datapath #(
        .N(N), .WA_BITS(WA_BITS), .BITS(BITS),
        .ACC_DEPTH(ACC_DEPTH), .UB_DEPTH(UB_DEPTH)
    ) u_dp (
        .clock(clock), .reset(reset),
        .host_write_req(host_write_req), .host_write_address(host_write_address),
        .ub_write_conflict(ub_write_conflict),
        .ub_read_enable(ub_read_enable), .ub_read_address(ub_read_address), .ub_read_data(ub_read_data),
        .activation_in(activation_in), .activation_valid(activation_valid), .activation_ready(activation_ready),
        .activation_word_valid(activation_word_valid), .activation_ack(activation_ack),
        .weight_in(weight_in), .weight_valid(weight_valid), .weight_ready(weight_ready),
        .weight_word_valid(weight_word_valid), .weight_ack(weight_ack),
        .stagger_valid_in(stagger_valid_in), .stagger_valid_out(stagger_valid_out),
        .resetAreg(resetAreg), .resetWreg(resetWreg), .resetSreg(resetSreg), .resetCreg(resetCreg),
        .enableAreg(enableAreg), .enableWreg(enableWreg), .enableSreg(enableSreg), .enableCreg(enableCreg),
        .array_valid_in(array_valid_in), .deskew_valid_out(deskew_valid_out),
        .acc_accumulate(acc_accumulate), .acc_read_enable(acc_read_enable),
        .acc_read_address(acc_read_address), .acc_write_address(acc_write_address),
        .acc_act_read_enable(acc_act_read_enable), .acc_act_read_address(acc_act_read_address),
        .norm_gain(norm_gain), .norm_bias(norm_bias), .norm_shift(norm_shift),
        .quant_inv_scale(quant_inv_scale), .quant_zero_point(quant_zero_point),
        .norm_write_req(norm_write_req), .norm_write_address(norm_write_address)
    );

endmodule
