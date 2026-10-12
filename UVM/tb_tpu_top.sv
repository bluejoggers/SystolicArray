/*
tb_tpu_top.sv -- self-checking system test for tpu_controller + tpu_datapath.

Per iteration (random data, random post-processing parameters):
  SET_NORM, SET_QUANT
  LOAD_ACT  M vectors -> UB[ub_in]
  LOAD_W    W1
  MATMUL    UB[ub_in] -> ACC[acc_base], overwrite   (checked: ACC == X*W1)
  LOAD_W    W2
  MATMUL    UB[ub_in] -> ACC[acc_base], accumulate  (checked: ACC == X*W1 + X*W2)
  ACTIVATE  ACC[acc_base] -> UB[ub_out]
  STORE     UB[ub_out] -> host                      (checked: bit-exact vs golden)
Plus: zero-count ops, illegal opcode, CLR_ARRAY, back-to-back instructions.
Host byte streams have random valid gaps; readback has random ready gaps.

Run:  iverilog -g2012 -o sim.vvp <all rtl .v except test.v> tb_tpu_top.sv && vvp sim.vvp
*/
`timescale 1ns/1ps

module tb_tpu_top;

    localparam N = 8, ACC_DEPTH = 256, UB_DEPTH = 4096, MAXV = 64;
    localparam UB_AW = $clog2(UB_DEPTH), ACC_AW = $clog2(ACC_DEPTH);

    // opcodes
    localparam [3:0] NOP=0, LOAD_ACT=1, LOAD_W=2, MATMUL=3, ACTIVATE=4,
                     STORE=5, SET_NORM=6, SET_QUANT=7, CLR_ARRAY=8;

    reg clock = 0, reset = 1;
    always #5 clock = ~clock;

    reg         instr_valid = 0;
    wire        instr_ready, instr_done, busy;
    reg  [63:0] instr_data = 0;
    reg  [7:0]  activation_in = 0, weight_in = 0;
    reg         activation_valid = 0, weight_valid = 0;
    wire        activation_ready, weight_ready;
    wire        host_out_valid;
    reg         host_out_ready = 0;
    wire [N*8-1:0] host_out_data;
    wire err_illegal_op, err_ub_conflict, err_latency;

    tpu_top #(.N(N), .ACC_DEPTH(ACC_DEPTH), .UB_DEPTH(UB_DEPTH)) dut (
        .clock(clock), .reset(reset),
        .instr_valid(instr_valid), .instr_ready(instr_ready), .instr_data(instr_data),
        .instr_done(instr_done), .busy(busy),
        .activation_in(activation_in), .activation_valid(activation_valid), .activation_ready(activation_ready),
        .weight_in(weight_in), .weight_valid(weight_valid), .weight_ready(weight_ready),
        .host_out_valid(host_out_valid), .host_out_ready(host_out_ready), .host_out_data(host_out_data),
        .err_illegal_op(err_illegal_op), .err_ub_conflict(err_ub_conflict), .err_latency(err_latency)
    );

    // ---------------------------------------------------------------------
    // Accumulator peek (hierarchical, test only)
    // ---------------------------------------------------------------------
    reg  [ACC_AW-1:0] peek_addr = 0;
    wire [31:0]       acc_peek [0:N-1];
    genvar g;
    generate for (g = 0; g < N; g = g + 1) begin : peek
        assign acc_peek[g] = dut.u_dp.u_accumulator.cols[g].mem[peek_addr];
    end endgenerate

    // ---------------------------------------------------------------------
    // Test data
    // ---------------------------------------------------------------------
    reg        [7:0]  X  [0:MAXV-1][0:N-1];   // X[v][lane], unsigned
    reg signed [7:0]  W1 [0:N-1][0:N-1];      // W[row][col], signed
    reg signed [7:0]  W2 [0:N-1][0:N-1];
    reg        [31:0] ACCG [0:MAXV-1][0:N-1]; // golden accumulator
    reg        [7:0]  QG   [0:MAXV-1][0:N-1]; // golden quantized output

    reg signed [15:0] gain;  reg signed [31:0] bias;  reg [4:0] shift;
    reg signed [15:0] inv_scale;  reg signed [7:0] zp;

    integer errors = 0, checks = 0, seed = 1;
    integer stall_pct = 30;   // % of cycles a stream / ready is idle

    // ---------------------------------------------------------------------
    // Byte-stream drivers (queue based, random gaps)
    // ---------------------------------------------------------------------
    reg [7:0] aq [$];
    reg [7:0] wq [$];

    always @(posedge clock) begin
        if (activation_valid && activation_ready) void'(aq.pop_front());
        if (weight_valid && weight_ready)         void'(wq.pop_front());
    end
    always @(negedge clock) begin
        // re-evaluate after the pop at posedge
        activation_valid <= (aq.size() > 0) && (($urandom % 100) >= stall_pct);
        activation_in    <= (aq.size() > 0) ? aq[0] : 8'hxx;
        weight_valid     <= (wq.size() > 0) && (($urandom % 100) >= stall_pct);
        weight_in        <= (wq.size() > 0) ? wq[0] : 8'hxx;
        host_out_ready   <= (($urandom % 100) >= stall_pct);
    end

    // Readback collector
    reg [N*8-1:0] rq [$];
    always @(posedge clock)
        if (host_out_valid && host_out_ready) rq.push_back(host_out_data);

    // ---------------------------------------------------------------------
    // Helpers
    // ---------------------------------------------------------------------
    function [63:0] mk(input [3:0] op, input acc, input [15:0] ub, input [15:0] accA, input [15:0] cnt);
        mk = {op, 3'b000, acc, ub, accA, cnt, 8'h00};
    endfunction

    task issue(input [63:0] ins);
        begin
            @(negedge clock);
            instr_data  = ins;
            instr_valid = 1;
            @(posedge clock);
            while (!instr_ready) @(posedge clock);
            @(negedge clock);
            instr_valid = 0;
        end
    endtask

    task wait_done;
        begin
            @(posedge clock);
            while (!instr_done) @(posedge clock);
        end
    endtask

    task run(input [63:0] ins); begin issue(ins); wait_done(); end endtask

    task push_weights(input integer which);
        integer r, c;
        begin
            // First vector shifted in lands in column N-1; first byte of a
            // vector lands in lane (row) N-1.
            for (c = N-1; c >= 0; c = c - 1)
                for (r = N-1; r >= 0; r = r - 1)
                    wq.push_back(which == 1 ? W1[r][c] : W2[r][c]);
        end
    endtask

    task push_acts(input integer M);
        integer v, r;
        begin
            for (v = 0; v < M; v = v + 1)
                for (r = N-1; r >= 0; r = r - 1)
                    aq.push_back(X[v][r]);
        end
    endtask

    // Bit-accurate post-processing model (mirrors Activator/Normalizer/Quantizer)
    function [7:0] post(input [31:0] a);
        reg signed [31:0] relu_o, norm_o, scaled, biased;
        reg signed [47:0] m48;
        reg signed [48:0] m49;
        begin
            relu_o = a[31] ? 32'sd0 : a;
            m48    = (relu_o * gain) >>> shift;
            norm_o = m48[31:0] + bias;
            m49    = norm_o * inv_scale;
            m49    = m49 + 49'sd128;
            scaled = m49 >>> 8;
            biased = scaled + {{24{zp[7]}}, zp};
            if      (biased > 32'sd127)  post = 8'h7f;
            else if (biased < -32'sd128) post = 8'h80;
            else                         post = biased[7:0];
        end
    endfunction

    task check_acc(input integer M, input integer base, input [8*32-1:0] tag);
        integer v, c;
        begin
            for (v = 0; v < M; v = v + 1) begin
                peek_addr = base + v;
                #1;
                for (c = 0; c < N; c = c + 1) begin
                    checks = checks + 1;
                    if (acc_peek[c] !== ACCG[v][c]) begin
                        errors = errors + 1;
                        if (errors < 10)
                            $display("  [%0s] ACC v=%0d col=%0d got %0d exp %0d", tag, v, c,
                                     $signed(acc_peek[c]), $signed(ACCG[v][c]));
                    end
                end
            end
        end
    endtask

    // ---------------------------------------------------------------------
    // One full layer test
    // ---------------------------------------------------------------------
    task layer_test(input integer M, input integer ub_in, input integer ub_out,
                    input integer acc_base, input integer nice);
        integer v, r, c, t0, t_mm;
        reg [31:0] s;
        reg [N*8-1:0] ovec;
        reg signed [31:0] prod;
        begin
            for (v = 0; v < M; v = v + 1) for (r = 0; r < N; r = r + 1) X[v][r] = $urandom;
            for (r = 0; r < N; r = r + 1) for (c = 0; c < N; c = c + 1) begin
                W1[r][c] = $urandom; W2[r][c] = $urandom;
            end
            if (nice) begin   // in-range values: exercises non-saturated path
                gain = 16'sd1; shift = 5'd9; bias = -32'sd20; inv_scale = 16'sd256; zp = 8'sd0;
            end else begin
                gain = $urandom; shift = $urandom; bias = $urandom; inv_scale = $urandom; zp = $urandom;
            end

            run({SET_NORM, 7'd0, shift, gain, bias});
            run({SET_QUANT, 36'd0, inv_scale, zp});

            push_acts(M);
            run(mk(LOAD_ACT, 0, ub_in, 0, M));

            // X*W1, overwrite
            push_weights(1);
            run(mk(LOAD_W, 0, 0, 0, 0));
            @(negedge clock); t0 = $time;
            run(mk(MATMUL, 0, ub_in, acc_base, M));
            t_mm = ($time - t0) / 10;
            for (v = 0; v < M; v = v + 1) for (c = 0; c < N; c = c + 1) begin
                s = 0;
                for (r = 0; r < N; r = r + 1) begin prod = $signed({1'b0, X[v][r]}) * W1[r][c]; s = s + prod; end
                ACCG[v][c] = s;
            end
            check_acc(M, acc_base, "MM-overwrite");

            // + X*W2, accumulate
            push_weights(2);
            run(mk(LOAD_W, 0, 0, 0, 0));
            run(mk(MATMUL, 1, ub_in, acc_base, M));
            for (v = 0; v < M; v = v + 1) for (c = 0; c < N; c = c + 1) begin
                s = ACCG[v][c];
                for (r = 0; r < N; r = r + 1) begin prod = $signed({1'b0, X[v][r]}) * W2[r][c]; s = s + prod; end
                ACCG[v][c] = s;
            end
            check_acc(M, acc_base, "MM-accumulate");

            // Activate + store
            for (v = 0; v < M; v = v + 1) for (c = 0; c < N; c = c + 1) QG[v][c] = post(ACCG[v][c]);
            run(mk(ACTIVATE, 0, ub_out, acc_base, M));
            rq.delete();
            run(mk(STORE, 0, ub_out, 0, M));

            checks = checks + 1;
            if (rq.size() != M) begin
                errors = errors + 1;
                $display("  STORE returned %0d vectors, expected %0d", rq.size(), M);
            end
            for (v = 0; v < M && v < rq.size(); v = v + 1) begin
                ovec = rq[v];
                for (c = 0; c < N; c = c + 1) begin
                    checks = checks + 1;
                    if (ovec[c*8 +: 8] !== QG[v][c]) begin
                        errors = errors + 1;
                        if (errors < 10)
                            $display("  OUT v=%0d col=%0d got %0d exp %0d (acc=%0d)", v, c,
                                     $signed(ovec[c*8 +: 8]), $signed(QG[v][c]), $signed(ACCG[v][c]));
                    end
                end
            end
            $display("layer M=%0d ub_in=%0d ub_out=%0d acc=%0d nice=%0d stall=%0d%%  MATMUL cycles=%0d  errors so far=%0d",
                     M, ub_in, ub_out, acc_base, nice, stall_pct, t_mm, errors);
        end
    endtask

    // ---------------------------------------------------------------------
    // Main
    // ---------------------------------------------------------------------
    integer it, cyc0;
    initial begin
        if ($value$plusargs("seed=%d", seed)) ;
        void'($urandom(seed));
        repeat (4) @(posedge clock);
        @(negedge clock) reset = 0;

        // Directed corner cases
        run(mk(NOP, 0, 0, 0, 0));
        run(mk(LOAD_ACT, 0, 0, 0, 0));    // count 0
        run(mk(MATMUL,   0, 0, 0, 0));
        run(mk(ACTIVATE, 0, 0, 0, 0));
        run(mk(STORE,    0, 0, 0, 0));
        run(mk(CLR_ARRAY,0, 0, 0, 0));
        checks = checks + 1;
        if (err_illegal_op) begin errors = errors + 1; $display("  err_illegal_op set early"); end
        run(mk(4'hF, 0, 0, 0, 0));
        checks = checks + 1;
        if (!err_illegal_op) begin errors = errors + 1; $display("  illegal opcode not flagged"); end

        // Layer tests
        layer_test(1,  0,    100,  0,   1);
        layer_test(20, 5,    200,  3,   1);
        stall_pct = 0;
        layer_test(37, 4000, 4090, 240, 0);   // UB and ACC address wrap
        layer_test(64, 17,   1000, 100, 0);
        stall_pct = 60;
        for (it = 0; it < 6; it = it + 1)
            layer_test(1 + ($urandom % MAXV), $urandom % UB_DEPTH, $urandom % UB_DEPTH,
                       $urandom % ACC_DEPTH, it % 2);

        // STORE throughput with an always-ready host
        stall_pct = 0;
        rq.delete();
        @(negedge clock); cyc0 = $time;
        run(mk(STORE, 0, 0, 0, 64));
        $display("STORE 64 vectors, host always ready: %0d cycles", ($time - cyc0) / 10);

        checks = checks + 1;
        if (err_ub_conflict || err_latency) begin
            errors = errors + 1;
            $display("  sticky error: ub_conflict=%0b latency=%0b", err_ub_conflict, err_latency);
        end

        $display("==== %0s: %0d checks, %0d errors ====", errors ? "FAIL" : "PASS", checks, errors);
        $finish;
    end

    initial begin
        #20_000_000;
        $display("TIMEOUT");
        $finish;
    end

endmodule
