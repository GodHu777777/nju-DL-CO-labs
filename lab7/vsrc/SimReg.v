module SimReg #(
  parameter DATA_WIDTH = 4,
  parameter INIT_VALUE = 0
) (
  input  clk,
  input  reset,
  input  [DATA_WIDTH-1:0] data_in,
  output reg [DATA_WIDTH-1:0] data_out,
  input  enable
);

  always @(posedge clk) begin
    if (reset) begin
      data_out <= INIT_VALUE;
    end else if (enable) begin
      data_out <= data_in;
    end
  end

endmodule
