module MAC(
    input wire clock,
    input wire [7:0] weight,      // 8-bit Input Weight
    input wire [7:0] activation,      // 8-bit Input Activation
    input wire [31:0] prevsum, prevcarry,      // 16-bit Multiplier Output (A*W)
    input wire resetA, resetW , resetS, resetC,      // Reset Signals for Activation, Weight, Sum-in and Carry-in Registers
    output wire [31:0] nextsum, nextcarry    // 16-bit Output A*W + PreviousSum
);


    wire [7:0] weight_out, activation_out;
    wire [15:0] mult_out;
    wire [31:0] sumin_out, carryin_out, carryout_csa;


    // Instantiate Weight and Activation Registers
    Register8b weightreg(
        .clk(clock),
        .rst(resetW),
        .data_in(weight),
        .data_out(weight_out)
    );

    Register8b activationreg(
        .clk(clock),
        .rst(resetA),
        .data_in(activation),
        .data_out(activation_out)
    );

    //Instantiate the Sum-in and Carry-in Registers to hold the Previous Sum and Carry for the next MAC operation
    Register8b #(.BITS(32)) suminreg(
        .clk(clock),
        .rst(resetS),
        .data_in(prevsum),
        .data_out(sumin_out)
    );

    Register8b #(.BITS(32)) carryinreg(
        .clk(clock),
        .rst(resetC),
        .data_in(prevcarry),
        .data_out(carryin_out)
    );

    // Instantiate the 8x8 Wallace Tree Multiplier to compute A*W
    WallaceMultiplier8x8 multiplier(
        .A(activation_out),
        .B(weight_out),
        .Product(mult_out)
    );

    //Instantiate the Carry Save Adder to compute A*W + PreviousSum
    CSA #(.WIDTH(32)) adder32b(
        .a({16'b0,mult_out}),
        .b(sumin_out),
        .c(carryin_out),
        .sum(nextsum),
        .cout(carryout_csa)
    );

    assign nextcarry = {carryout_csa[30:0], 1'b0}; // Shift the carryout left by 1 to align with the next stage

endmodule