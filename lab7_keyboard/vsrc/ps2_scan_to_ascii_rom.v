module ps2_scan_to_ascii_rom (
    input  [7:0] scan_code,
    output [7:0] ascii_code
);

    reg [7:0] rom_ascii_table [0:255]; // 定义一个 256 条目的 ROM，存储 ASCII 码

    initial begin
        // 小写字母 'a' 到 'z' (Set 2 Make Code)
        rom_ascii_table[8'h1C] = 8'h61; // 'a'
        rom_ascii_table[8'h32] = 8'h62; // 'b'
        rom_ascii_table[8'h21] = 8'h63; // 'c'
        rom_ascii_table[8'h23] = 8'h64; // 'd'
        rom_ascii_table[8'h24] = 8'h65; // 'e'
        rom_ascii_table[8'h2B] = 8'h66; // 'f'
        rom_ascii_table[8'h34] = 8'h67; // 'g'
        rom_ascii_table[8'h33] = 8'h68; // 'h'
        rom_ascii_table[8'h43] = 8'h69; // 'i'
        rom_ascii_table[8'h3B] = 8'h6A; // 'j'
        rom_ascii_table[8'h42] = 8'h6B; // 'k'
        rom_ascii_table[8'h4B] = 8'h6C; // 'l'
        rom_ascii_table[8'h3A] = 8'h6D; // 'm'
        rom_ascii_table[8'h31] = 8'h6E; // 'n'
        rom_ascii_table[8'h44] = 8'h6F; // 'o'
        rom_ascii_table[8'h4D] = 8'h70; // 'p'
        rom_ascii_table[8'h15] = 8'h71; // 'q'
        rom_ascii_table[8'h2D] = 8'h72; // 'r'
        rom_ascii_table[8'h1B] = 8'h73; // 's'
        rom_ascii_table[8'h2C] = 8'h74; // 't'
        rom_ascii_table[8'h3C] = 8'h75; // 'u'
        rom_ascii_table[8'h2A] = 8'h76; // 'v'
        rom_ascii_table[8'h1D] = 8'h77; // 'w'
        rom_ascii_table[8'h22] = 8'h78; // 'x'
        rom_ascii_table[8'h35] = 8'h79; // 'y'
        rom_ascii_table[8'h1A] = 8'h7A; // 'z'

        // 数字 '0' 到 '9' (Set 2 Make Code)
        rom_ascii_table[8'h45] = 8'h30; // '0'
        rom_ascii_table[8'h16] = 8'h31; // '1'
        rom_ascii_table[8'h1E] = 8'h32; // '2'
        rom_ascii_table[8'h26] = 8'h33; // '3'
        rom_ascii_table[8'h25] = 8'h34; // '4'
        rom_ascii_table[8'h2E] = 8'h35; // '5'
        rom_ascii_table[8'h36] = 8'h36; // '6'
        rom_ascii_table[8'h3D] = 8'h37; // '7'
        rom_ascii_table[8'h3E] = 8'h38; // '8'
        rom_ascii_table[8'h46] = 8'h39; // '9'

        // 空格 (Space) (Set 2 Make Code)
        rom_ascii_table[8'h29] = 8'h20; // ' ' (空格)

        // 回车 (Enter) (Set 2 Make Code)
        rom_ascii_table[8'h5A] = 8'h0D; // 回车 (CR - Carriage Return)
    end

    assign ascii_code = rom_ascii_table[scan_code];

endmodule