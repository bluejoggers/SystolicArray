module FA (
    input wire a, 
    input wire b, 
    input wire cin, 
    output wire sum, 
    output wire cout
    );

    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (cin & (a ^ b));

endmodule

module CSA #(
    parameter WIDTH = 16
)
(
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