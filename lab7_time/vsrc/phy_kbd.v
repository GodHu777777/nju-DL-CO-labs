module phy_kbd(ps2_clk, ps2_data, nextdata_n, my_ps2_clk, my_ps2_data);
    input ps2_clk;
    input ps2_data;

    output reg my_ps2_clk;
    output reg my_ps2_data;

    assign my_ps2_clk = ps2_clk;
    assign my_ps2_data = ps2_data;

    output reg nextdata_n;

    reg [3:0] i; // to save how many bits ps2_data has sent

    always @(negedge ps2_clk) begin
        $display("[%b]: %b", i, ps2_data);
        if(i < 10) i <= i + 4'b1; // transmit bit if not done
        else begin
            i <= 4'b0; // reset as 0 when transmission done    
            #10 nextdata_n = 0;
            #10 nextdata_n = 1'b1;
        end
        
    end


endmodule //phy_kbd
