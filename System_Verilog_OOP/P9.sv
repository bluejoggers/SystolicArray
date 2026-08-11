//Coverage 
//covergroup and coverpoint

module top;
    bit [1:0] mode;
    bit [2:0] cfg;

    bit clk;
    always #5 clk = ~clk;

    covergroup cg @(posedge clk);
        coverpoint mode;
    endgroup

    initial begin 

    cg cg_inst = new();

    for (int i = 0; i < 10; i++) begin 
        @(negedge clk);
        mode = $random;
        cfg = $random;

        $display($time, "MODE: 0x%0h, CONFIG: 0x%0h", mode, cfg);
    end
    end 


    initial begin
        #500 $display ("Coverage = %0.2f %%", cg_inst.get_inst_coverage());
    $finish;
  end


endmodule 