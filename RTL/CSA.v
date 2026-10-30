module CSA #(
    parameter WIDTH = 16
)(
    input wire [WIDTH-1:0] a, b, c,
    output wire [WIDTH-1:0] sum,
    output wire [WIDTH-1:0] cout
);
    genvar i;
    generate
        for (i=0;i<WIDTH;i=i+1) begin:gen_fa
            FA fa(
                .a(a[i]),
                .b(b[i]),
                .cin(c[i]),
                .sum(sum[i]),
                .cout(cout[i])
            );
        end
    endgenerate
endmodule 


