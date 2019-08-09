// http://www.asic-world.com/code/hdl_models/ram_sp_ar_sw.v
//-----------------------------------------------------
// Design Name : ram_sp_ar_sw
// File Name   : ram_sp_ar_sw.v
// Function    : Asynchronous read write RAM
// Coder       : Deepak Kumar Tala
//-----------------------------------------------------
module ram_sp_ar_sw #(
    parameter  DATA_WIDTH = 8,
    parameter  ADDR_WIDTH = 8,
    parameter  RAM_DEPTH = (1 << ADDR_WIDTH)
) (
    //--------------Input Ports-----------------------
    input clk,
    input [(ADDR_WIDTH - 1):0] address,
    //--------------Inout Ports-----------------------
    inout [(DATA_WIDTH - 1):0] data,
    input cs,
    input we,
    input oe
);
    //--------------Internal variables----------------
    reg [(DATA_WIDTH - 1):0]  data_out;
    reg [(DATA_WIDTH - 1):0]  mem [0:(RAM_DEPTH - 1)];
    //--------------Code Starts Here------------------
    // Tri-State Buffer control
    // output : When we = 0, oe = 1, cs = 1
    assign data = (((cs && oe) && !we)) ? (data_out) : (8'bz);
    always @(posedge clk)
        if ((cs && we))
            mem[address] = data;

    always @(address, cs, we, oe)
        if (((cs && !we) && oe))
            data_out = mem[address];

endmodule
