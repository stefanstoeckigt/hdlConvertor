// https://opencores.org/websvn/filedetails?repname=aes_core&path=%2Faes_core%2Ftrunk%2Frtl%2Fverilog%2Faes_cipher_top.v
/////////////////////////////////////////////////////////////////////
////                                                             ////
////  AES Cipher Top Level                                       ////
////                                                             ////
////                                                             ////
////  Author: Rudolf Usselmann                                   ////
////          rudi@asics.ws                                      ////
////                                                             ////
////                                                             ////
////  Downloaded from: http://www.opencores.org/cores/aes_core/  ////
////                                                             ////
/////////////////////////////////////////////////////////////////////
////                                                             ////
//// Copyright (C) 2000-2002 Rudolf Usselmann                    ////
////                         www.asics.ws                        ////
////                         rudi@asics.ws                       ////
////                                                             ////
//// This source file may be used and distributed without        ////
//// restriction provided that this copyright statement is not   ////
//// removed from the file and that any derivative work contains ////
//// the original copyright notice and the associated disclaimer.////
////                                                             ////
////     THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY     ////
//// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   ////
//// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS   ////
//// FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR      ////
//// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,         ////
//// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES    ////
//// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE   ////
//// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR        ////
//// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  ////
//// LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT  ////
//// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  ////
//// OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE         ////
//// POSSIBILITY OF SUCH DAMAGE.                                 ////
////                                                             ////
/////////////////////////////////////////////////////////////////////
// CVS Log
//
// $Id: aes_cipher_top.v,v 1.1.1.1 2002-11-09 11:22:48 rudi Exp $
//
// $Date: 2002-11-09 11:22:48 $
// $Revision: 1.1.1.1 $
// $Author: rudi $
// $Locker:  $
// $State: Exp $
//
// Change History:
//              $Log: not supported by cvs2svn $
//
//
//
//
//
// https://opencores.org/websvn/filedetails?repname=aes_core&path=%2Faes_core%2Ftrunk%2Frtl%2Fverilog%2Ftimescale.v
module aes_cipher_top (
    input clk,
    input rst,
    input ld,
    output done,
    input [127:0] key,
    input [127:0] text_in,
    output [127:0] text_out
);
    ////////////////////////////////////////////////////////////////////
    //
    // Local Wires
    //
    wire [31:0]  w0;
    wire [31:0]  w1;
    wire [31:0]  w2;
    wire [31:0]  w3;
    reg [127:0]  text_in_r;
    reg [127:0]  text_out;
    reg [7:0]  sa00;
    reg [7:0]  sa01;
    reg [7:0]  sa02;
    reg [7:0]  sa03;
    reg [7:0]  sa10;
    reg [7:0]  sa11;
    reg [7:0]  sa12;
    reg [7:0]  sa13;
    reg [7:0]  sa20;
    reg [7:0]  sa21;
    reg [7:0]  sa22;
    reg [7:0]  sa23;
    reg [7:0]  sa30;
    reg [7:0]  sa31;
    reg [7:0]  sa32;
    reg [7:0]  sa33;
    wire [7:0]  sa00_next;
    wire [7:0]  sa01_next;
    wire [7:0]  sa02_next;
    wire [7:0]  sa03_next;
    wire [7:0]  sa10_next;
    wire [7:0]  sa11_next;
    wire [7:0]  sa12_next;
    wire [7:0]  sa13_next;
    wire [7:0]  sa20_next;
    wire [7:0]  sa21_next;
    wire [7:0]  sa22_next;
    wire [7:0]  sa23_next;
    wire [7:0]  sa30_next;
    wire [7:0]  sa31_next;
    wire [7:0]  sa32_next;
    wire [7:0]  sa33_next;
    wire [7:0]  sa00_sub;
    wire [7:0]  sa01_sub;
    wire [7:0]  sa02_sub;
    wire [7:0]  sa03_sub;
    wire [7:0]  sa10_sub;
    wire [7:0]  sa11_sub;
    wire [7:0]  sa12_sub;
    wire [7:0]  sa13_sub;
    wire [7:0]  sa20_sub;
    wire [7:0]  sa21_sub;
    wire [7:0]  sa22_sub;
    wire [7:0]  sa23_sub;
    wire [7:0]  sa30_sub;
    wire [7:0]  sa31_sub;
    wire [7:0]  sa32_sub;
    wire [7:0]  sa33_sub;
    wire [7:0]  sa00_sr;
    wire [7:0]  sa01_sr;
    wire [7:0]  sa02_sr;
    wire [7:0]  sa03_sr;
    wire [7:0]  sa10_sr;
    wire [7:0]  sa11_sr;
    wire [7:0]  sa12_sr;
    wire [7:0]  sa13_sr;
    wire [7:0]  sa20_sr;
    wire [7:0]  sa21_sr;
    wire [7:0]  sa22_sr;
    wire [7:0]  sa23_sr;
    wire [7:0]  sa30_sr;
    wire [7:0]  sa31_sr;
    wire [7:0]  sa32_sr;
    wire [7:0]  sa33_sr;
    wire [7:0]  sa00_mc;
    wire [7:0]  sa01_mc;
    wire [7:0]  sa02_mc;
    wire [7:0]  sa03_mc;
    wire [7:0]  sa10_mc;
    wire [7:0]  sa11_mc;
    wire [7:0]  sa12_mc;
    wire [7:0]  sa13_mc;
    wire [7:0]  sa20_mc;
    wire [7:0]  sa21_mc;
    wire [7:0]  sa22_mc;
    wire [7:0]  sa23_mc;
    wire [7:0]  sa30_mc;
    wire [7:0]  sa31_mc;
    wire [7:0]  sa32_mc;
    wire [7:0]  sa33_mc;
    reg done;
    reg ld_r;
    reg [3:0]  dcnt;
    always @(posedge clk)
        if (!rst)
            dcnt <= #1 4'h0;
        else if (ld)
            dcnt <= #1 4'hb;
        else if ((|dcnt))
            dcnt <= #1 (dcnt - 4'h1);

    always @(posedge clk)
        done <= #1 ((!(|dcnt[1:3]) & dcnt[0]) & !ld);
    always @(posedge clk)
        if (ld)
            text_in_r <= #1 text_in;

    always @(posedge clk)
        ld_r <= #1 ld;
    always @(posedge clk)
        sa33 <= #1 (ld_r) ? ((text_in_r[0:7] ^ w3[0:7])) : (sa33_next);
    always @(posedge clk)
        sa23 <= #1 (ld_r) ? ((text_in_r[8:15] ^ w3[8:15])) : (sa23_next);
    always @(posedge clk)
        sa13 <= #1 (ld_r) ? ((text_in_r[16:23] ^ w3[16:23])) : (sa13_next);
    always @(posedge clk)
        sa03 <= #1 (ld_r) ? ((text_in_r[24:31] ^ w3[24:31])) : (sa03_next);
    always @(posedge clk)
        sa32 <= #1 (ld_r) ? ((text_in_r[32:39] ^ w2[0:7])) : (sa32_next);
    always @(posedge clk)
        sa22 <= #1 (ld_r) ? ((text_in_r[40:47] ^ w2[8:15])) : (sa22_next);
    always @(posedge clk)
        sa12 <= #1 (ld_r) ? ((text_in_r[48:55] ^ w2[16:23])) : (sa12_next);
    always @(posedge clk)
        sa02 <= #1 (ld_r) ? ((text_in_r[56:63] ^ w2[24:31])) : (sa02_next);
    always @(posedge clk)
        sa31 <= #1 (ld_r) ? ((text_in_r[64:71] ^ w1[0:7])) : (sa31_next);
    always @(posedge clk)
        sa21 <= #1 (ld_r) ? ((text_in_r[72:79] ^ w1[8:15])) : (sa21_next);
    always @(posedge clk)
        sa11 <= #1 (ld_r) ? ((text_in_r[80:87] ^ w1[16:23])) : (sa11_next);
    always @(posedge clk)
        sa01 <= #1 (ld_r) ? ((text_in_r[88:95] ^ w1[24:31])) : (sa01_next);
    always @(posedge clk)
        sa30 <= #1 (ld_r) ? ((text_in_r[96:103] ^ w0[0:7])) : (sa30_next);
    always @(posedge clk)
        sa20 <= #1 (ld_r) ? ((text_in_r[104:111] ^ w0[8:15])) : (sa20_next);
    always @(posedge clk)
        sa10 <= #1 (ld_r) ? ((text_in_r[112:119] ^ w0[16:23])) : (sa10_next);
    always @(posedge clk)
        sa00 <= #1 (ld_r) ? ((text_in_r[120:127] ^ w0[24:31])) : (sa00_next);
    ////////////////////////////////////////////////////////////////////
    //
    // Round Permutations
    //
    assign sa00_sr = sa00_sub;
    assign sa01_sr = sa01_sub;
    assign sa02_sr = sa02_sub;
    assign sa03_sr = sa03_sub;
    assign sa10_sr = sa11_sub;
    assign sa11_sr = sa12_sub;
    assign sa12_sr = sa13_sub;
    assign sa13_sr = sa10_sub;
    assign sa20_sr = sa22_sub;
    assign sa21_sr = sa23_sub;
    assign sa22_sr = sa20_sub;
    assign sa23_sr = sa21_sub;
    assign sa30_sr = sa33_sub;
    assign sa31_sr = sa30_sub;
    assign sa32_sr = sa31_sub;
    assign sa33_sr = sa32_sub;
    assign {{{sa00_mc, sa10_mc}, sa20_mc}, sa30_mc} = mix_col(sa00_sr, sa10_sr, sa20_sr, sa30_sr);
    assign {{{sa01_mc, sa11_mc}, sa21_mc}, sa31_mc} = mix_col(sa01_sr, sa11_sr, sa21_sr, sa31_sr);
    assign {{{sa02_mc, sa12_mc}, sa22_mc}, sa32_mc} = mix_col(sa02_sr, sa12_sr, sa22_sr, sa32_sr);
    assign {{{sa03_mc, sa13_mc}, sa23_mc}, sa33_mc} = mix_col(sa03_sr, sa13_sr, sa23_sr, sa33_sr);
    assign sa00_next = (sa00_mc ^ w0[24:31]);
    assign sa01_next = (sa01_mc ^ w1[24:31]);
    assign sa02_next = (sa02_mc ^ w2[24:31]);
    assign sa03_next = (sa03_mc ^ w3[24:31]);
    assign sa10_next = (sa10_mc ^ w0[16:23]);
    assign sa11_next = (sa11_mc ^ w1[16:23]);
    assign sa12_next = (sa12_mc ^ w2[16:23]);
    assign sa13_next = (sa13_mc ^ w3[16:23]);
    assign sa20_next = (sa20_mc ^ w0[8:15]);
    assign sa21_next = (sa21_mc ^ w1[8:15]);
    assign sa22_next = (sa22_mc ^ w2[8:15]);
    assign sa23_next = (sa23_mc ^ w3[8:15]);
    assign sa30_next = (sa30_mc ^ w0[0:7]);
    assign sa31_next = (sa31_mc ^ w1[0:7]);
    assign sa32_next = (sa32_mc ^ w2[0:7]);
    assign sa33_next = (sa33_mc ^ w3[0:7]);
    always @(posedge clk)
        text_out[120:127] <= #1 (sa00_sr ^ w0[24:31]);
    always @(posedge clk)
        text_out[88:95] <= #1 (sa01_sr ^ w1[24:31]);
    always @(posedge clk)
        text_out[56:63] <= #1 (sa02_sr ^ w2[24:31]);
    always @(posedge clk)
        text_out[24:31] <= #1 (sa03_sr ^ w3[24:31]);
    always @(posedge clk)
        text_out[112:119] <= #1 (sa10_sr ^ w0[16:23]);
    always @(posedge clk)
        text_out[80:87] <= #1 (sa11_sr ^ w1[16:23]);
    always @(posedge clk)
        text_out[48:55] <= #1 (sa12_sr ^ w2[16:23]);
    always @(posedge clk)
        text_out[16:23] <= #1 (sa13_sr ^ w3[16:23]);
    always @(posedge clk)
        text_out[104:111] <= #1 (sa20_sr ^ w0[8:15]);
    always @(posedge clk)
        text_out[72:79] <= #1 (sa21_sr ^ w1[8:15]);
    always @(posedge clk)
        text_out[40:47] <= #1 (sa22_sr ^ w2[8:15]);
    always @(posedge clk)
        text_out[8:15] <= #1 (sa23_sr ^ w3[8:15]);
    always @(posedge clk)
        text_out[96:103] <= #1 (sa30_sr ^ w0[0:7]);
    always @(posedge clk)
        text_out[64:71] <= #1 (sa31_sr ^ w1[0:7]);
    always @(posedge clk)
        text_out[32:39] <= #1 (sa32_sr ^ w2[0:7]);
    always @(posedge clk)
        text_out[0:7] <= #1 (sa33_sr ^ w3[0:7]);
    aes_key_expand_128 u0 (
        .clk(clk),
        .kld(ld),
        .key(key),
        .wo_0(w0),
        .wo_1(w1),
        .wo_2(w2),
        .wo_3(w3)
    );

    aes_sbox us00 (
        .a(sa00),
        .d(sa00_sub)
    );

    aes_sbox us01 (
        .a(sa01),
        .d(sa01_sub)
    );

    aes_sbox us02 (
        .a(sa02),
        .d(sa02_sub)
    );

    aes_sbox us03 (
        .a(sa03),
        .d(sa03_sub)
    );

    aes_sbox us10 (
        .a(sa10),
        .d(sa10_sub)
    );

    aes_sbox us11 (
        .a(sa11),
        .d(sa11_sub)
    );

    aes_sbox us12 (
        .a(sa12),
        .d(sa12_sub)
    );

    aes_sbox us13 (
        .a(sa13),
        .d(sa13_sub)
    );

    aes_sbox us20 (
        .a(sa20),
        .d(sa20_sub)
    );

    aes_sbox us21 (
        .a(sa21),
        .d(sa21_sub)
    );

    aes_sbox us22 (
        .a(sa22),
        .d(sa22_sub)
    );

    aes_sbox us23 (
        .a(sa23),
        .d(sa23_sub)
    );

    aes_sbox us30 (
        .a(sa30),
        .d(sa30_sub)
    );

    aes_sbox us31 (
        .a(sa31),
        .d(sa31_sub)
    );

    aes_sbox us32 (
        .a(sa32),
        .d(sa32_sub)
    );

    aes_sbox us33 (
        .a(sa33),
        .d(sa33_sub)
    );

endmodule
