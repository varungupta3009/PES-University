module ir (input wire clk, reset, load, input wire [15:0] din, output wire [15:0] dout);
  dfrl dfrl_0 (clk, reset, load, din['h0], dout['h0]);
  dfrl dfrl_1 (clk, reset, load, din['h1], dout['h1]);
  dfrl dfrl_2 (clk, reset, load, din['h2], dout['h2]);
  dfrl dfrl_3 (clk, reset, load, din['h3], dout['h3]);
  dfrl dfrl_4 (clk, reset, load, din['h4], dout['h4]);
  dfrl dfrl_5 (clk, reset, load, din['h5], dout['h5]);
  dfrl dfrl_6 (clk, reset, load, din['h6], dout['h6]);
  dfrl dfrl_7 (clk, reset, load, din['h7], dout['h7]);
  dfrl dfrl_8 (clk, reset, load, din['h8], dout['h8]);
  dfrl dfrl_9 (clk, reset, load, din['h9], dout['h9]);
  dfrl dfrl_a (clk, reset, load, din['ha], dout['ha]);
  dfrl dfrl_b (clk, reset, load, din['hb], dout['hb]);
  dfrl dfrl_c (clk, reset, load, din['hc], dout['hc]);
  dfrl dfrl_d (clk, reset, load, din['hd], dout['hd]);
  dfrl dfrl_e (clk, reset, load, din['he], dout['he]);
  dfrl dfrl_f (clk, reset, load, din['hf], dout['hf]);
endmodule

module control_logic (input wire clk, reset, input wire [15:0] cur_ins, output wire [2:0] rd_addr_a, rd_addr_b, wr_addr, output wire [1:0] op, output wire pc_inc, load_ir, wr_reg);

//assignment 3 logic here

  wire noro;
  wire dfro;

  nor5 p(cur_ins[15], cur_ins[14], cur_ins[13], cur_ins[12], cur_ins[11], noro);
  dfs d(clk,reset, dfro, pc_inc);
  dfr d1(clk,reset, pc_inc, load_ir);
  dfr d2(clk,reset,load_ir, dfro);
  and2 a(noro, dfro, wr_reg);

  assign rd_addr_a = cur_ins[2:0];
  assign rd_addr_b = cur_ins[5:3];
  assign wr_addr = cur_ins[8:6];
  assign op = cur_ins[10:9];

endmodule


module nor5(input wire a, b, c, d, e, output wire w);

  wire x, y, z, p;

  or2 I1(a, b, x);
  or2 I2(x, c, y);
  or2 I3(y, d, z);
  or2 I4(z, e, p);
  invert I5(p, w);

endmodule

module mproc (input wire clk, reset, input wire [15:0] ins, output wire [15:0] addr);
  wire pc_inc, cout; wire [2:0] rd_addr_a, rd_addr_b, wr_addr; wire [1:0] op; wire [15:0] cur_ins, d_out_a, d_out_b;

  pc pc_0 (clk, reset, pc_inc, 1'b0, 1'b0, 16'b0, addr);
  ir ir_0 (clk, reset, load_ir, ins, cur_ins);
  control_logic control_logic_0 (clk, reset, cur_ins, rd_addr_a, rd_addr_b, wr_addr, op, pc_inc, load_ir, wr_reg);
  reg_alu reg_alu_0 (clk, reset, 1'b1, wr_reg, op, rd_addr_a, rd_addr_b, wr_addr, 16'b0, d_out_a, d_out_b, cout);
endmodule
