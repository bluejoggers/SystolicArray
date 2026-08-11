module tb #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 16,
    parameter ADDR_DIV = 8'h3f
);
    reg clock;
    always #5 clock = ~clock;

    switch_if #(ADDR_WIDTH, DATA_WIDTH) sif(clock);
    test T;
    
    switch DUT #(ADDR_WIDTH, DATA_WIDTH, ADDR_DIV)(
        .clock(clock),
        .reset(sif.reset),
        .valid(sif.valid),
        .addr(sif.address),
        .data(sif.data),
        .addr_a(sif.address_a),
        .data_a(sif.data_a),
        .addr_b(sif.address_b),,
        .data_b(sif.data_b)
    );

    initial begin 
        $dumpfile("switch_testbench.vcd");
        $dumpvars;

        T = new();
        clock <= 1'b0;
        sif.reset <= 1'b1;

        #20 sif.reset <= 1'b0;
        T.ENV.virtual_if = sif;
        T.run();

        #200 $finish;
    end
endmodule