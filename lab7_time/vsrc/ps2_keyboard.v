module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,nextdata_n,overflow, sampling_check, is_leave);
    input clk,clrn,ps2_clk,ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;     // fifo overflow
    output reg is_leave;

    always @(*) begin
        if(fifo[w_ptr - 2] == 8'hf0) is_leave = 1;
        else is_leave = 0;
    end

    // @hgh:
    output reg sampling_check = sampling;
    
    // internal signal, for test
    reg [9:0] buffer;        // ps2_data bits
    reg [7:0] fifo[7:0];     // data fifo
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data

                /* @hgh: r_ptr can be regarded as the data
                    need to output, since there is a 8-Bytes
                    fifo, and, when comes a nextdata_n of 0,
                    r_ptr move forward, which macroly, means,
                    after one scan code sent, nextdata_n should
                    be set as 0 for a moment
                */
                if(nextdata_n == 1'b0) //read next data
                begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                        /*
                        @hgh: ready is set as 0 since fifo need data
                        */
                end
            end
            if (sampling) begin
              if (count == 4'd10) begin // @hgh: reading is done and save buffer into fifo
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    fifo[w_ptr] <= buffer[8:1];  // kbd scan code
                    w_ptr <= w_ptr+3'b1;
                    ready <= 1'b1; // @hgh: 'ready' signal is like ACK, sent to actual kbd 
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                    $display("receive %x", buffer[8:1]);
                end
                count <= 0;     // for next
              end else begin // @hgh: read data into buffer
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
    assign data = fifo[w_ptr - 1]; //always set output data


    always @(ready) begin
        $display("w_ptr: %x, fifo[w_ptr - 1]: %x", w_ptr, fifo[w_ptr - 1]);
    end

endmodule
