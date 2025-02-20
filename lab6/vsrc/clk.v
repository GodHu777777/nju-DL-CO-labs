module clk(
    output reg clk
);

parameter PERIOD = 2e7; 

initial begin
    clk = 0;
    forever begin
        # (PERIOD / 2) clk = ~ clk;
    end
end

endmodule //top
