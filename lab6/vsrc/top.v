module top(
    output reg out,
    output reg [7:0]internal_data,
    output reg clk_out,
    output reg [6:0] led1,
    output reg [6:0] led2,
    output reg [6:0] led_test
);
    wire in;
    wire value;

    // 内部时钟信号
    wire clk_internal;
    assign clk_out = clk_internal;
   
    // 实例化 clk 模块
    clk u_clk (
        .clk (clk_internal)  // 将 clk 模块的输出连接到内部信号 clk_internal
    );

    always @(posedge clk_internal) begin
        $display("[7~0] %b%b%b%b%b%b%b%b",
         internal_data[7], internal_data[6], internal_data[5], internal_data[4],
         internal_data[3], internal_data[2], internal_data[1], internal_data[0]);
 
        internal_data[7] <= internal_data[4] ^ internal_data[3] ^ internal_data[2] ^ internal_data[0];
        internal_data[6] <= internal_data[7];
        internal_data[5] <= internal_data[6];
        internal_data[4] <= internal_data[5];
        internal_data[3] <= internal_data[4];
        internal_data[2] <= internal_data[3];
        internal_data[1] <= internal_data[2];
        internal_data[0] <= internal_data[1];
    end

    assign in = internal_data[4] ^ internal_data[3] ^ internal_data[2] ^ internal_data[0];

    // output declaration of module bcd7seg
    
    bcd7seg u_bcd7seg(
        .b 	(internal_data[7:4]  ),
        .h 	(led1[6:0]  )
    );
    bcd7seg u_bcd7seg1(
        .b 	(internal_data[3:0]  ),
        .h 	(led2[6:0]  )
    );


    reg [3:0] in_test;
    always@(posedge clk_internal) begin
        in_test = in_test + 1;
    end
    bcd7seg u_bcd7seg2(
        .b 	(in_test  ),
        .h 	(led_test[6:0]  )
    );
// mydff u_mydff0 (  
//         .D   (in),
//         .clk (clk_internal),
//         .Q   (internal_data[0])
//     );

//     mydff u_mydff1 (
//         .D   (internal_data[0]),
//         .clk (clk_internal),
//         .Q   (internal_data[1])
//     );

//     mydff u_mydff2 (
//         .D   (internal_data[1]),
//         .clk (clk_internal),
//         .Q   (internal_data[2])
//     );

//     mydff u_mydff3 (
//         .D   (internal_data[2]),
//         .clk (clk_internal),
//         .Q   (internal_data[3])
//     );

//     mydff u_mydff4 (
//         .D   (internal_data[3]),
//         .clk (clk_internal),
//         .Q   (internal_data[4])
//     );

//     mydff u_mydff5 (
//         .D   (internal_data[4]),
//         .clk (clk_internal),
//         .Q   (internal_data[5])
//     );

//     mydff u_mydff6 (
//         .D   (internal_data[5]),
//         .clk (clk_internal),
//         .Q   (internal_data[6])
//     );

//     mydff u_mydff7 (
//         .D   (internal_data[6]),
//         .clk (clk_internal),
//         .Q   (internal_data[7])
//     );

//     assign out = internal_data[7];
endmodule //top
