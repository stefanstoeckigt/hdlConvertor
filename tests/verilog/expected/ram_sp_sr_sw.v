// http://www.asic-world.com/code/hdl_models/ram_sp_sr_sw.v
//-----------------------------------------------------
// Design Name : ram_sp_sr_sw
// File Name   : ram_sp_sr_sw.v
// Function    : Synchronous read write RAM
// Coder       : Deepak Kumar Tala
//-----------------------------------------------------
module ram_sp_sr_sw #(
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
    reg oe_r;
    //--------------Code Starts Here------------------
    // Tri-State Buffer control
    // output : When we = 0, oe = 1, cs = 1
    assign data = (((cs && oe) && !we)) ? (data_out) : (8'bz);
    always @(posedge clk)
        if ((cs && we))
            mem[address] = data;

    always @(posedge clk)
        if (((cs && !we) && oe)) begin
            data_out = mem[address];
            oe_r = 1;
        end else
            oe_r = 0;

endmodule
