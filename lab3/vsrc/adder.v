module adder(
    input Cin,
    input [3:0] A,
    input [3:0] B,
    output reg[3:0] Result,
    output reg Overflow,
    output reg Zero,
    output reg Carry
);

wire [3:0] B1;

assign B1 = {4{Cin}} ^ B;

assign {Carry, Result} = A + ( B1 + {3'b000, Cin});

assign Zero = (| Result);

assign Overflow = (A[3] == B[3]) && (Result[3] != A[3]);
endmodule