module reg16
(
  input wire
  clk,
  reset,
  load,
  input wire [15:0]
  d,
  output wire [15:0]
  q
);

dfrl d0(clk, reset, load, d[0], q[0]);
dfrl d1(clk, reset, load, d[1], q[1]);
dfrl d2(clk, reset, load, d[2], q[2]);
dfrl d3(clk, reset, load, d[3], q[3]);
dfrl d4(clk, reset, load, d[4], q[4]);
dfrl d5(clk, reset, load, d[5], q[5]);
dfrl d6(clk, reset, load, d[6], q[6]);
dfrl d7(clk, reset, load, d[7], q[7]);
dfrl d8(clk, reset, load, d[8], q[8]);
dfrl d9(clk, reset, load, d[9], q[9]);
dfrl d10(clk, reset, load, d[10], q[10]);
dfrl d11(clk, reset, load, d[11], q[11]);
dfrl d12(clk, reset, load, d[12], q[12]);
dfrl d13(clk, reset, load, d[13], q[13]);
dfrl d14(clk, reset, load, d[14], q[14]);
dfrl d15(clk, reset, load, d[15], q[15]);

endmodule


module reg16_8
(
  input wire
  clk,
  reset,
  input wire [7:0]
  load,
  input wire [15:0]
  d,
  output wire [15:0]
  q0,
  q1,
  q2,
  q3,
  q4,
  q5,
  q6,
  q7
);

reg16 rg0(clk, reset, load[0], d, q0);
reg16 rg1(clk, reset, load[1], d, q1);
reg16 rg2(clk, reset, load[2], d, q2);
reg16 rg3(clk, reset, load[3], d, q3);
reg16 rg4(clk, reset, load[4], d, q4);
reg16 rg5(clk, reset, load[5], d, q5);
reg16 rg6(clk, reset, load[6], d, q6);
reg16 rg7(clk, reset, load[7], d, q7);

endmodule


module mux8_16
(
  input wire [15:0]
  q0,
  q1,
  q2,
  q3,
  q4,
  q5,
  q6,
  q7,
  input wire [2:0]
  j,
  output wire [15:0]
  o
);

mux8 mx0({q0[0], q1[0], q2[0], q3[0], q4[0], q5[0], q6[0], q7[0]}, j[2], j[1], j[0], o[0]);
mux8 mx1({q0[1], q1[1], q2[1], q3[1], q4[1], q5[1], q6[1], q7[1]}, j[2], j[1], j[0], o[1]);
mux8 mx2({q0[2], q1[2], q2[2], q3[2], q4[2], q5[2], q6[2], q7[2]}, j[2], j[1], j[0], o[2]);
mux8 mx3({q0[3], q1[3], q2[3], q3[3], q4[3], q5[3], q6[3], q7[3]}, j[2], j[1], j[0], o[3]);
mux8 mx4({q0[4], q1[4], q2[4], q3[4], q4[4], q5[4], q6[4], q7[4]}, j[2], j[1], j[0], o[4]);
mux8 mx5({q0[5], q1[5], q2[5], q3[5], q4[5], q5[5], q6[5], q7[5]}, j[2], j[1], j[0], o[5]);
mux8 mx6({q0[6], q1[6], q2[6], q3[6], q4[6], q5[6], q6[6], q7[6]}, j[2], j[1], j[0], o[6]);
mux8 mx7({q0[7], q1[7], q2[7], q3[7], q4[7], q5[7], q6[7], q7[7]}, j[2], j[1], j[0], o[7]);
mux8 mx8({q0[8], q1[8], q2[8], q3[8], q4[8], q5[8], q6[8], q7[8]}, j[2], j[1], j[0], o[8]);
mux8 mx9({q0[9], q1[9], q2[9], q3[9], q4[9], q5[9], q6[9], q7[9]}, j[2], j[1], j[0], o[9]);
mux8 mx10({q0[10], q1[10], q2[10], q3[10], q4[10], q5[10], q6[10], q7[10]}, j[2], j[1], j[0], o[10]);
mux8 mx11({q0[11], q1[11], q2[11], q3[11], q4[11], q5[11], q6[11], q7[11]}, j[2], j[1], j[0], o[11]);
mux8 mx12({q0[12], q1[12], q2[12], q3[12], q4[12], q5[12], q6[12], q7[12]}, j[2], j[1], j[0], o[12]);
mux8 mx13({q0[13], q1[13], q2[13], q3[13], q4[13], q5[13], q6[13], q7[13]}, j[2], j[1], j[0], o[13]);
mux8 mx14({q0[14], q1[14], q2[14], q3[14], q4[14], q5[14], q6[14], q7[14]}, j[2], j[1], j[0], o[14]);
mux8 mx15({q0[15], q1[15], q2[15], q3[15], q4[15], q5[15], q6[15], q7[15]}, j[2], j[1], j[0], o[15]);

endmodule


module mux_2
(
input wire[0:15]
q0,
q1,
input wire
j,
output wire[0:15]
o
);

mux2 m0(q0[0], q1[0], j, o[0]);
mux2 m1(q0[1], q1[1], j, o[1]);
mux2 m2(q0[2], q1[2], j, o[2]);
mux2 m3(q0[3], q1[3], j, o[3]);
mux2 m4(q0[4], q1[4], j, o[4]);
mux2 m5(q0[5], q1[5], j, o[5]);
mux2 m6(q0[6], q1[6], j, o[6]);
mux2 m7(q0[7], q1[7], j, o[7]);
mux2 m8(q0[8], q1[8], j, o[8]);
mux2 m9(q0[9], q1[9], j, o[9]);
mux2 m10(q0[10], q1[10], j, o[10]);
mux2 m11(q0[11], q1[11], j, o[11]);
mux2 m12(q0[12], q1[12], j, o[12]);
mux2 m13(q0[13], q1[13], j, o[13]);
mux2 m14(q0[14], q1[14], j, o[14]);
mux2 m15(q0[15], q1[15], j, o[15]);

endmodule
