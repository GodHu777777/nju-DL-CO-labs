module top(
    input [7:0]x,
    input en,
    output reg [2:0] y,
    output imply,
    output reg[6:0]h
);


    // output declaration of module encode83
    
    
    encode83 u_encode83(
        .x     	(x      ),
        .en    	(en     ),
        .y     	(y      ),
        .imply 	(imply  )
    );
    
    // output declaration of module bcd7seg
    // reg [6:0] h;
    
    bcd7seg u_bcd7seg(
        .b 	({1'b0, y} ),
        .h 	(h  )
    );
    
    
endmodule //top   