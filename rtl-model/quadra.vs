`include "quadra.vh"

module quadra
(
    input  a_t  a,
    input  b_t  b,
    input  c_t  c,
    input  x2_t x2,
    input  sq_t sq,
    output y_t  y
);

logic signed [63:0] sum;

always_comb
begin
    sum = $signed(a)
        + ($signed(b) * $signed({1'b0,x2})) >>> 10
        + ($signed(c) * sq) >>> 23;

    y = sum[24:0];
end


endmodule

