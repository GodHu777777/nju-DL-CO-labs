module top(
    input Cin,
    input [3:0] A,
    input [3:0] B,
    output reg[3:0] Result,
    output reg Overflow,
    output reg Zero,
    output reg Carry,
    input [2:0] ALU_sel,
    output reg out
);
wire [3:0] add_res;
reg  local_cin;
adder u_adder(
    .Cin      	(local_cin      ),
    .A        	(A         ),
    .B        	(B         ),
    .Result   	(add_res   ),
    .Overflow 	(Overflow  ),
    .Zero     	(Zero      ),
    .Carry    	(Carry     )
);
wire [3:0] B1;
assign B1 = {4{Cin}} ^ B;

wire[3:0] AndResult;
assign AndResult = A & B;
wire[3:0] OrResult;
assign OrResult = A | B;
wire[3:0] XorResult;
assign XorResult = A ^ B;

// Result = add_res;

always @(*) begin
    Result = add_res;
    local_cin = 1;
    out = 1;
    case (ALU_sel)
        3'b000: Result = add_res;
        3'b001: begin
           local_cin = 1; 
        end
        3'b010: Result = ~A;
        3'b011: Result = AndResult;
        3'b100: Result = A | B;
        3'b101: Result = A ^ B;
        3'b110: begin
            out = add_res[3] ^ Overflow;
        end
        3'b111: begin
            out = ~Zero;
        end
        default: assign Result = add_res;
    endcase
end
endmodule