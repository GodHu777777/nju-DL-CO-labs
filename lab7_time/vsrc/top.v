module top(
    output reg[7:0] my_data,
    output reg my_ready,
    output reg my_overflow,
    input clk,
    input ps2_clk,
    input ps2_data,
    output my_nextdata,
    output sampling_check,
    output reg[6:0] led0,
    output reg[6:0] led1,
    output reg[6:0] led2,
    output reg[6:0] led3,
    output reg[6:0] led4,
    output reg[6:0] led5,
    output reg[7:0] ascii
);


/* parameter */
parameter [31:0] clock_period = 10;

reg clrn;

// wtf, I forget set clr, damn!!
always @(*) begin
    if(cache == 8'hf0) begin
        clrn = 0; 
        clrn = 1;    
    end
    
    else clrn = 1;
end



wire ps2_clk_internal;
wire ps2_data_internal;

reg nextdata_n;



wire [7:0] data;

wire ready, overflow;

/* @hgh:test: replace kbd_model with actual kbd*/
// ps2_keyboard_model model(
//     .ps2_clk(kbd_clk),
//     .ps2_data(kbd_data)
// );



phy_kbd u_phy_kbd(
    .ps2_clk     	(ps2_clk      ),
    .ps2_data    	(ps2_data     ),
    .my_ps2_clk  	(ps2_clk_internal   ),
    .my_ps2_data 	(ps2_data_internal  ),
    .nextdata_n  	(nextdata_n   )
);

reg is_leave;

ps2_keyboard inst(
    .clk(clk),
    .clrn(clrn),
    .ps2_clk(ps2_clk_internal),
    .ps2_data(ps2_data_internal),
    .data(data),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow),
    .sampling_check(sampling_check),
    .is_leave(is_leave)
);

assign my_data = is_leave ? 0 : data;

assign my_ready = ready;
assign my_overflow = overflow;


ps2_scan_to_ascii_rom u_ps2_scan_to_ascii_rom(
    .scan_code  	(my_data   ),
    .ascii_code 	(ascii )
);



bcd7seg u0_bcd7seg(
    .b 	(my_data[3:0]  ),
    .h 	(led0  )
);

bcd7seg u1_bcd7seg(
    .b 	(my_data[7:4]  ),
    .h 	(led1  )
);

bcd7seg u2_bcd7seg(
    .b 	(ascii[3:0]  ),
    .h 	(led2  )
);

always @(ascii) begin
    // $display("[DEBUG]: data: %x; ascii: %x, $$cnt: %d", my_data,ascii,cnt);
end

bcd7seg u3_bcd7seg(
    .b 	(ascii[7:4]  ),
    .h 	(led3  )
);

bcd7seg u4_bcd7seg(
    .b 	(cnt[3:0]  ),
    .h 	(led4  )
);
bcd7seg u5_bcd7seg(
    .b 	(cnt[7:4]  ),
    .h 	(led5  )
);

reg[7:0] cnt;

reg[7:0] cache;


always @(posedge ready) begin
    ascii = ascii;
    // $display("mydata: %x", my_data);
    // continuosly press, skip
    if(my_data == cache) begin
        
    end
    else if(cache == 8'hf0) begin
        cache <= 8'b0;
    end
    // f0H means leave the button
    // so just skip
    else if(my_data == 8'hf0) begin     
        cache <= my_data;
    end
    // new button pressed
    else begin 
        cache <= my_data; 
        cnt <= cnt + 1;
    end
    $display("cache: %x, cnt: %d, ascii: %x", cache, cnt, ascii);
    $display("------");
end

reg [3:0] i; // to save how many bits ps2_data has sent
always @(negedge ps2_clk_internal) begin
        $display("[%b]: %b", i, ps2_data);
        if(i < 10) i <= i + 4'b1; // transmit bit if not done
        else begin
            i <= 4'b0; // reset as 0 when transmission done    
            #20 nextdata_n = 0;
            #20 nextdata_n = 1'b1;
        end
        
    end



endmodule
