module top(
    output reg[7:0] my_data,
    output reg my_ready,
    output reg my_overflow,
    input clk,
    input ps2_clk,
    input ps2_data,
    output my_clk_test,
    output reg sampling_check
);
ps2_keyboard my_keyboard(
    .clk(clk),
    .resetn(1'b1),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .sampling_check(sampling_check)
);


endmodule