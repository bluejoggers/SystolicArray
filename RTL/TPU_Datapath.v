/*
tpu_datapath.v

Top-level datapath wiring together every compute block in this project,
per the TPU v1 architecture diagram, with deskew_buffer inserted between
the MXU and the Accumulator (not shown in the diagram, but required --
see DeskewBuffer.v's own header for the full derivation of why).

This module compiles against the OTHER .v files in this directory as
separate, standalone source files -- compile it alongside:
  Accumulator.v ActivationUnit.v Activator.v Adder16b.v DeskewBuffer.v
  NormalizationUnit.v Normalizer.v PE_datapath.v QuantizationUnit.v
  Quantizer.v Register8b.v SystolicArrayDatapath.v SystolicDataSetup.v
  UnifiedBuffer.v

SCOPE: this is the DATAPATH only -- no controller/sequencer/instruction
decode exists anywhere in this project (the "Control" / "Instr" boxes
in the architecture diagram have no corresponding RTL). Every reset,
enable, address, and batch-norm/quantization parameter below is
exposed as a top-level input for a future controller to drive.

CRITICAL TIMING NOTE -- the write-back loop (quantizer -> Unified
Buffer) is NOT auto-timed:
  Latency from acc_act_data_out to the quantizer's registered output is
  exactly 1 cycle (activator is combinational, normalizer's DATA path
  is combinational -- only its gain/bias/shift coefficients are
  registered -- and quantize itself has one output register). So
  norm_write_req/norm_write_address must be asserted exactly ONE CYCLE
  AFTER the corresponding acc_act_read_enable/acc_act_read_address pulse
  that produced the data being written back. There is no internal valid
  chain enforcing this (unlike the deskew buffer's own valid_chain).

SIGNEDNESS, checked end-to-end against every module's actual current
port declarations:
  - weight_in is SIGNED (matches MAC's `input wire signed [7:0] weight`
    in PE_datapath.v).
  - Activations (unified_buffer / stagger / arraydatapath.activation_in)
    are UNSIGNED throughout -- correct, since they're post-ReLU values,
    always >= 0.
  - norm_gain / norm_bias are SIGNED (Qm.n fixed point, matching
    Normalizer.v's `normalize` leaf, which already declares these
    signed -- verified correct as currently written).
  - quant_inv_scale / quant_zero_point are SIGNED, matching Quantizer.v.
  - norm_shift is UNSIGNED (a shift amount, not a value).
  - Every per-lane bus in this pipeline now uses the SAME [WIDTH-1:0]
    descending convention throughout (ActivationUnit.v / NormalizationUnit.v
    were previously ascending [0:WIDTH-1]; both now match the rest of
    the project).
*/

module tpu_datapath #(
    parameter N        = 8,     // Systolic array size / lane count -- drives every per-column parallelism below
    parameter WA_BITS   = 8,    // Weight/activation bit width. MUST stay 8: MAC (PE_datapath.v) hardcodes 8-bit weight/activation ports.
    parameter BITS      = 32,   // Accumulator/sum/carry bit width. MUST stay 32: MAC hardcodes 32-bit sum/carry ports.
    parameter ACC_DEPTH = 256,  // Accumulator words per column (8 KiB total), matches Accumulator.v's own default
    parameter UB_DEPTH  = 4096  // Unified Buffer words per bank (128 KiB total), matches UnifiedBuffer.v's own default
)(
    input wire clock,
    input wire reset,

    // =====================================================================
    // DATA BUFFER: Unified Buffer's off-chip write port (Host Interface /
    // DDR3 / PCIe DMA path, per the diagram). NORM's write side is wired
    // internally below -- it's the quantizer's feedback loop, not external.
    // =====================================================================
    input  wire [N-1:0]                        host_write_req,
    input  wire [(N*$clog2(UB_DEPTH))-1:0]     host_write_address,
    output wire [N-1:0]                         ub_write_conflict,

    // =====================================================================
    // CONTROL: Unified Buffer read side (toward Systolic Data Setup)
    // =====================================================================
    input wire                                  ub_read_enable,
    input wire [(N*$clog2(UB_DEPTH))-1:0]      ub_read_address,
    output wire [(N*WA_BITS)-1:0]               ub_read_data,   // Registered UB read result (updates only when ub_read_enable=1, otherwise holds). Feeds the stagger block internally AND is exposed here so a WRITE_HOST sequencer can capture it for host readback. NOTE: this is ONE shared read port -- a MATMUL read and a WRITE_HOST read cannot happen in the same cycle (structural hazard for the controller to arbitrate).

    // =====================================================================
    // ACTIVATION FETCHER: Deserializes the byte-wide activation stream into
    // an (N*WA_BITS)-bit vector feeding the Unified Buffer's host write port
    // =====================================================================
    input wire [WA_BITS-1:0] activation_in,   // One unsigned activation byte per cycle from the host stream
    input wire activation_valid,              // Host pulses this when activation_in is valid this cycle
    output wire activation_ready,             // Activation Fetcher is ready to accept a byte (deasserts while a full word awaits ack)
    output wire activation_word_valid,        // Activation Fetcher pulses this when a full vector is ready on the UB host write port
    input wire activation_ack,                // Sequencer pulses this when it has committed the vector into the Unified Buffer (host_write_req)

    // =====================================================================
    // WEIGHT FETCHER: Deserializes the byte-wide weight stream into an
    // (N*WA_BITS)-bit vector feeding the MXU's weight_in port
    // =====================================================================
    input wire [WA_BITS-1:0] weight_in,       // One signed weight byte per cycle from the host stream
    input wire weight_valid,                  // Host pulses this when weight_in is valid this cycle
    output wire weight_ready,                 // Weight Fetcher is ready to accept a byte (deasserts while a full word awaits ack)
    output wire weight_word_valid,            // Weight Fetcher pulses this when a full vector is ready on the MXU weight input
    input wire weight_ack,                    // Controller pulses this when it has clocked the weight vector into the array (enableWreg)

    // =====================================================================
    // CONTROL: Systolic Data Setup (activation stagger)
    // =====================================================================
    input  wire         stagger_valid_in,
    output wire [N-1:0] stagger_valid_out,   // Per-lane, exposed for debug/sequencing -- nothing downstream consumes this; the MXU has no valid input at all, only the reset/enable arrays below.

    // =====================================================================
    // CONTROL: Matrix Multiply Unit (the NxN systolic array)
    // =====================================================================
    input wire [N-1:0] resetAreg, resetWreg, resetSreg, resetCreg,
    input wire [N-1:0] enableAreg, enableWreg, enableSreg, enableCreg,

    // =====================================================================
    // CONTROL: Deskew Buffer (sits between the MXU and the Accumulator --
    // the addition this request specifically asked for)
    // =====================================================================
    input wire array_valid_in,   // Pulses when arraydatapath.partial_sum carries a meaningful diagonal-wavefront sample this cycle
    output wire deskew_valid_out, // array_valid_in delayed by NUM_LANES-1 cycles: high exactly when the deskewed wave is aligned. Also wired internally to the accumulator's write_enable; exposed so a controller can tag/verify the datapath latency.

    // =====================================================================
    // CONTROL: Accumulator
    // =====================================================================
    input wire                                  acc_accumulate,
    input wire                                  acc_read_enable,
    input wire [(N*$clog2(ACC_DEPTH))-1:0]     acc_read_address,
    input wire [(N*$clog2(ACC_DEPTH))-1:0]     acc_write_address,
    input wire                                  acc_act_read_enable,
    input wire [(N*$clog2(ACC_DEPTH))-1:0]     acc_act_read_address,

    // =====================================================================
    // CONTROL: Normalization (batch-norm parameters). NormalizationUnit.v's
    // own interface broadcasts ONE shared gain/bias/shift to all N lanes --
    // not independent per-lane values.
    // =====================================================================
    input wire signed [15:0]      norm_gain,
    input wire signed [BITS-1:0]  norm_bias,
    input wire [4:0]              norm_shift,

    // =====================================================================
    // CONTROL: Quantization (QuantizationUnit.v's `quantizer` module).
    // Same shared-across-all-lanes convention as norm_* above.
    // =====================================================================
    input wire signed [15:0]     quant_inv_scale,
    input wire signed [7:0]      quant_zero_point,

    // =====================================================================
    // CONTROL: Unified Buffer write-back -- closes the loop, quantizer
    // output becomes next layer's activation data. See the CRITICAL TIMING
    // NOTE at the top of this file before driving these.
    // =====================================================================
    input wire [N-1:0]                      norm_write_req,
    input wire [(N*$clog2(UB_DEPTH))-1:0]  norm_write_address
);

    // =========================================================================
    // Internal wires -- one per inter-block connection
    // =========================================================================
    // ub_read_data (Unified Buffer -> Systolic Data Setup) is now a top-level output port, declared above
    wire [(N*WA_BITS)-1:0] stagger_vector_out;         // Systolic Data Setup -> MXU (activation_in)
    wire [(N*BITS)-1:0]    array_partial_sum;          // MXU -> Deskew Buffer
    // deskew_valid_out (Deskew Buffer -> Accumulator write_enable) is now a top-level output port, declared above
    wire [(N*BITS)-1:0]    deskew_vector_out;          // Deskew Buffer -> Accumulator (mxu_out)
    wire [(N*BITS)-1:0]    acc_act_data_out;           // Accumulator -> Activation Unit
    wire [(N*BITS)-1:0]    activator_data_out;         // Activation Unit -> Normalization Unit
    wire [(N*BITS)-1:0]    normalizer_data_out;        // Normalization Unit -> Quantizer
    wire [(N*WA_BITS)-1:0] quant_data_out_bus;         // Quantizer -> Unified Buffer (norm_write_data), closing the loop
    wire [(N*WA_BITS)-1:0] weight_fetcher_out;        // Weight Fetcher -> MXU (weight_in)
    wire [(N*WA_BITS)-1:0] activation_fetcher_out;    // Activation Fetcher -> Unified Buffer (host_write_data)

    // =========================================================================
    // Unified Buffer (Local Activation Storage)
    // =========================================================================
    unified_buffer #(
        .NUM_BANKS(N),
        .DEPTH(UB_DEPTH)
    ) u_unified_buffer (
        .clock(clock),
        .reset(reset),

        .norm_write_req(norm_write_req),
        .norm_write_address(norm_write_address),
        .norm_write_data(quant_data_out_bus),

        .host_write_req(host_write_req),
        .host_write_address(host_write_address),
        .host_write_data(activation_fetcher_out),

        .read_enable(ub_read_enable),
        .read_address(ub_read_address),
        .read_data(ub_read_data),

        .write_conflict(ub_write_conflict)
    );

    // =====================================================================
    // ACTIVATION FETCHER: Deserializes the byte-wide activation stream into
    // the vector driving the Unified Buffer's host write port
    // =====================================================================
    activation_fetcher #(
        .NUM_LANES(N),
        .DATA_WIDTH(WA_BITS)
    ) u_activation_fetcher (
        .clock(clock),
        .reset(reset),

        .act_valid(activation_valid),
        .act_ready(activation_ready),
        .act_data(activation_in),

        .word_valid(activation_word_valid),
        .word_ack(activation_ack),

        .act_out(activation_fetcher_out)
    );

    // =========================================================================
    // Systolic Data Setup (activation diagonal-wavefront stagger)
    // =========================================================================
    systolic_stagger_block #(
        .NUM_LANES(N),
        .DATA_WIDTH(WA_BITS)
    ) u_stagger (
        .clock(clock),
        .reset(reset),

        .valid_in(stagger_valid_in),
        .vector_in(ub_read_data),

        .valid_out(stagger_valid_out),
        .vector_out(stagger_vector_out)
    );

    // =====================================================================
    // WEIGHT FETCHER: Deserializes the weight stream into a 64-bit vector for the MXU
    // =====================================================================        
    weight_fetcher #(
        .NUM_LANES(N),
        .DATA_WIDTH(WA_BITS)
    ) u_weight_fetcher (
        .clock(clock),
        .reset(reset),

        .w_valid(weight_valid),
        .w_ready(weight_ready),
        .w_data(weight_in),

        .word_valid(weight_word_valid),
        .word_ack(weight_ack),

        .weight_out(weight_fetcher_out)
    );


    // =========================================================================
    // Matrix Multiply Unit (the NxN systolic array)
    // =========================================================================
    arraydatapath #(
        .N(N)
    ) u_array (
        .clock(clock),

        .resetAreg(resetAreg), .resetWreg(resetWreg),
        .resetSreg(resetSreg), .resetCreg(resetCreg),

        .enableAreg(enableAreg), .enableWreg(enableWreg),
        .enableSreg(enableSreg), .enableCreg(enableCreg),

        .activation_in(stagger_vector_out),
        .weight_in(weight_fetcher_out),

        .partial_sum(array_partial_sum)
    );

    // =========================================================================
    // Deskew Buffer -- de-skews the diagonal wavefront out of the MXU into
    // a clean horizontal wave before the Accumulator.
    // =========================================================================
    deskew_buffer #(
        .NUM_LANES(N),
        .DATA_WIDTH(BITS)
    ) u_deskew (
        .clock(clock),
        .reset(reset),

        .valid_in(array_valid_in),
        .vector_in(array_partial_sum),

        .valid_out(deskew_valid_out),
        .vector_out(deskew_vector_out)
    );

    // =========================================================================
    // Accumulator
    // =========================================================================
    accumulator #(
        .INPUT_WIDTH(N),
        .DEPTH(ACC_DEPTH)
    ) u_accumulator (
        .clock(clock),
        .reset(reset),

        .mxu_out(deskew_vector_out),

        .accumulate(acc_accumulate),
        .read_enable(acc_read_enable),
        .read_address(acc_read_address),

        .write_enable(deskew_valid_out),   // Wired directly per Accumulator.v's own integration note
        .write_address(acc_write_address),

        .act_read_enable(acc_act_read_enable),
        .act_read_address(acc_act_read_address),
        .act_data_out(acc_act_data_out)
    );

    // =========================================================================
    // Activation Unit (ReLU, per-lane)
    // =========================================================================
    activator #(
        .INPUT_WIDTH(N),
        .BITS(BITS)
    ) u_activator (
        .data_in(acc_act_data_out),
        .data_out(activator_data_out)
    );

    // =========================================================================
    // Normalization Unit (batch norm, per-lane)
    // =========================================================================
    normalizer #(
        .INPUT_WIDTH(N),
        .BITS(BITS)
    ) u_normalizer (
        .clock(clock),

        .data_in(activator_data_out),

        .gain(norm_gain),
        .bias(norm_bias),
        .shift(norm_shift),

        .data_out(normalizer_data_out)
    );

    // =========================================================================
    // Quantization Unit (QuantizationUnit.v's `quantizer` module).
    // Shares the same global `reset` net as every other block in this
    // pipeline.
    // =========================================================================
    quantizer #(
        .BITS(BITS),
        .INPUT_WIDTH(N)
    ) u_quantizer (
        .clock(clock),
        .reset(reset),

        .q_data_in_vector(normalizer_data_out),

        .inv_scale(quant_inv_scale),
        .zero_point(quant_zero_point),

        .q_data_out_vector(quant_data_out_bus)
    );

endmodule