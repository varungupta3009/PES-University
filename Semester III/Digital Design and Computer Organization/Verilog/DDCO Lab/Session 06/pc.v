/*`include "reg_alu.v"
// Write code for modules you need here

module pc (input wire clk, reset, inc, add, sub, input wire [15:0] offset, output wire [15:0] pc);
// Declare wires here
wire cout;
// Instantiate modules here

reg_file rf1(clk, reset, wr, rd_addr_a, rd_addr_b, wr_addr, d_in_temp, d_out_a, d_out_b);
alu a1({add, sub}, offset, inc, pc, cout);
*/

// Write code for modules you need here

module fa(input a,input b,input c,output sum,output carry);

wire t_ab,t_bc,t_ca;

xor3 my_xor(a,b,c,sum);
and2 my_and1(a,b,t_ab);
and2 my_and2(b,c,t_bc);
and2 my_and3(c,a,t_ca);
or3 my_or(t_ab,t_bc,t_ca,carry);

endmodule


module cust_fa(input a,input b,input x,input c,output sum,output carry);

wire f_b;

xor2 my_xor2(b,x,f_b);
fa my_fa(a,f_b,c,sum,carry);

endmodule


module custom_and(input a,b,output y);

wire nb;

invert my_invert(b,nb);
and2  my_and(a,nb,y);

endmodule


module adder_16(input wire sub,input wire [15:0]i0,input wire [15:0]i1,output wire [15:0]o);

wire [16:0]w1;

assign w1[0]=1'b0;

cust_fa my_cust0(i0[0],i1[0],sub,sub,o[0],w1[1]);
cust_fa my_cust1(i0[1],i1[1],sub,w1[1],o[1],w1[2]);
cust_fa my_cust2(i0[2],i1[2],sub,w1[2],o[2],w1[3]);
cust_fa my_cust3(i0[3],i1[3],sub,w1[3],o[3],w1[4]);
cust_fa my_cust4(i0[4],i1[4],sub,w1[4],o[4],w1[5]);
cust_fa my_cust5(i0[5],i1[5],sub,w1[5],o[5],w1[6]);
cust_fa my_cust6(i0[6],i1[6],sub,w1[6],o[6],w1[7]);
cust_fa my_cust7(i0[7],i1[7],sub,w1[7],o[7],w1[8]);
cust_fa my_cust8(i0[8],i1[8],sub,w1[8],o[8],w1[9]);
cust_fa my_cust9(i0[9],i1[9],sub,w1[9],o[9],w1[10]);
cust_fa my_cust10(i0[10],i1[10],sub,w1[10],o[10],w1[11]);
cust_fa my_cust11(i0[11],i1[11],sub,w1[11],o[11],w1[12]);
cust_fa my_cust12(i0[12],i1[12],sub,w1[12],o[12],w1[13]);
cust_fa my_cust13(i0[13],i1[13],sub,w1[13],o[13],w1[14]);
cust_fa my_cust14(i0[14],i1[14],sub,w1[14],o[14],w1[15]);
cust_fa my_cust15(i0[15],i1[15],sub,w1[15],o[15],w1[16]);

endmodule


module reg_unit(input wire [15:0]in,input load,reset,clk,output wire [15:0]o);

dfrl reg0(clk, reset, load, in[0],o[0]);
dfrl reg1(clk, reset, load, in[1],o[1]);
dfrl reg2(clk, reset, load, in[2],o[2]);
dfrl reg3(clk, reset, load, in[3],o[3]);
dfrl reg4(clk, reset, load, in[4],o[4]);
dfrl reg5(clk, reset, load, in[5],o[5]);
dfrl reg6(clk, reset, load, in[6],o[6]);
dfrl reg7(clk, reset, load, in[7],o[7]);
dfrl reg8(clk, reset, load, in[8],o[8]);
dfrl reg9(clk, reset, load, in[9],o[9]);
dfrl reg10(clk, reset, load, in[10],o[10]);
dfrl reg11(clk, reset, load, in[11],o[11]);
dfrl reg12(clk, reset, load, in[12],o[12]);
dfrl reg13(clk, reset, load, in[13],o[13]);
dfrl reg14(clk, reset, load, in[14],o[14]);
dfrl reg15(clk, reset, load, in[15],o[15]);

endmodule


module pc (input wire clk, reset, inc, add, sub, input wire [15:0] offset, output wire [15:0] pc);

wire [15:0] temp_o;
wire [15:0] o_addsub;
wire [15:0]	o_reg;
wire load;

or3 my_or(add,sub,inc,load);
or2 a0(offset[0],inc,temp_o[0]);
custom_and a1(offset[1],inc,temp_o[1]);
custom_and a2(offset[2],inc,temp_o[2]);
custom_and a3(offset[3],inc,temp_o[3]);
custom_and a4(offset[4],inc,temp_o[4]);
custom_and a5(offset[5],inc,temp_o[5]);
custom_and a6(offset[6],inc,temp_o[6]);
custom_and a7(offset[7],inc,temp_o[7]);
custom_and a8(offset[8],inc,temp_o[8]);
custom_and a9(offset[9],inc,temp_o[9]);
custom_and a10(offset[10],inc,temp_o[10]);
custom_and a11(offset[11],inc,temp_o[11]);
custom_and a12(offset[12],inc,temp_o[12]);
custom_and a13(offset[13],inc,temp_o[13]);
custom_and a14(offset[14],inc,temp_o[14]);
custom_and a15(offset[15],inc,temp_o[15]);
adder_16 my_adder(sub,o_reg,temp_o,o_addsub);
reg_unit my_reg(o_addsub,load,reset,clk,o_reg);

assign pc=o_reg;

endmodule
