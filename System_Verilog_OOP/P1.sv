class my_config;
    bit [7:0] a_width;
    bit [31:0] d_width;

    function new(bit [7:0] a_width = 8, bit [31:0] d_width = 32);
        this.a_width = a_width;
        this.d_width = d_width;
    endfunction

    function void display();
        $display("Address Width: %0d, Data Width: %0d", this.a_width, this.d_width);
    endfunction

endclass

module top;
    my_config config1, config2;

    initial begin
        config1 = new();
        config2 = new(16, 64);

        config1.display();
        config2.display();
    end
endmodule 