module fa_test(a,b,c,sum, cout);
    input a, b, c;
    output sum, cout;

    assign sum = a ^ b ^ c;
    assign cout = (a & b) | (b & c) | (a & c);
endmodule 

module csa_test(a, b, c, sum, cout);
    input [2:0] a, b, c;
    output [4:0] sum;

    output cout;

    wire [2:0] int_sum, int_carry;

    fa_test fa0(.a(a[0]), .b(b[0]), .c(c[0]), .sum(int_sum[0]), .cout(int_carry[0]));
    fa_test fa1(.a(a[1]), .b(b[1]), .c(c[1]), .sum(int_sum[1]), .cout(int_carry[1]));
    fa_test fa2(.a(a[2]), .b(b[2]), .c(c[2]), .sum(int_sum[2]), .cout(int_carry[2]));

    assign sum = {1'b0, int_sum} + {int_carry, 1'b0};
endmodule 

module testbench;
endmodule 