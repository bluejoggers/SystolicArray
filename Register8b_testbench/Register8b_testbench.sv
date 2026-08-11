module tb;
    reg clk;
    always #10 clk = ~clk;

    reg_if rif;
    rif = new(clk);

    Register8b DUT(
        .clk(clk),
        .rst(rif.reset),
        .en(rif.enable),
        .data_in(rif.data_in),
        .data_out(rif.data_out)
    )

    initial begin 
        test T = new();
        clk = 0;

        rif.reset = 1; 
        T.ENV.virtual_if = rif;
        T.run();

        #200 $finish;
    end

    $dumpvars;
    $dumpfile("Register8b_testbench.vcd");

endmodule 