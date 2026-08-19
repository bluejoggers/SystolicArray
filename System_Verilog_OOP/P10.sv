module cover_tb;
    bit [1:0] mode; 
    bit [2:0] cfg;

    bit clk;
    always #10 clk = ~clk;

    covergroup cg @(posedge clk);
        coverpoint mode;
        coverpoint cfg;
    endgroup

    cg cg_inst;

    initial begin 
        cg_inst = new();

        for (int i=0; i<20; i++) begin 
            @(negedge clk);
            mode = $random[1:0];
            cfg = $random[2:0];

            $display("[%0t] MODE: 0x%0h CONFIG: 0x%0h", $time, mode, cfg);
        end

        #500 $display("COVERAGE: %0.2f %%", cg_inst.get_inst_coverage());
        $finish;
    end
endmodule