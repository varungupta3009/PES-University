/*
A 16-bit Barrel Shifter with 6 functions:
* Shift Left Logical
* Shift Right Logical
* Shift Right Arithmetic
* Rotate Left
* Rotate Right
* Set Less Than

Created by the Students of PES University for the department of Computer Science and Engineering
*/

`include "lib.v"


module shiftLeft
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  output wire[15:0]
  o
);

	wire [15:0] t0, t1, t2;

  mux2 m0_00(i[00], 1'b0, shamt[00], t0[00]);
  mux2 m0_01(i[01], i[00], shamt[00], t0[01]);
  mux2 m0_02(i[02], i[01], shamt[00], t0[02]);
  mux2 m0_03(i[03], i[02], shamt[00], t0[03]);
  mux2 m0_04(i[04], i[03], shamt[00], t0[04]);
  mux2 m0_05(i[05], i[04], shamt[00], t0[05]);
  mux2 m0_06(i[06], i[05], shamt[00], t0[06]);
  mux2 m0_07(i[07], i[06], shamt[00], t0[07]);
  mux2 m0_08(i[08], i[07], shamt[00], t0[08]);
  mux2 m0_09(i[09], i[08], shamt[00], t0[09]);
  mux2 m0_10(i[10], i[09], shamt[00], t0[10]);
  mux2 m0_11(i[11], i[10], shamt[00], t0[11]);
  mux2 m0_12(i[12], i[11], shamt[00], t0[12]);
  mux2 m0_13(i[13], i[12], shamt[00], t0[13]);
  mux2 m0_14(i[14], i[13], shamt[00], t0[14]);
  mux2 m0_15(i[15], i[14], shamt[00], t0[15]);

  mux2 m1_00(t0[00], 1'b0, shamt[01], t1[00]);
  mux2 m1_01(t0[01], 1'b0, shamt[01], t1[01]);
  mux2 m1_02(t0[02], t0[00], shamt[01], t1[02]);
  mux2 m1_03(t0[03], t0[01], shamt[01], t1[03]);
  mux2 m1_04(t0[04], t0[02], shamt[01], t1[04]);
  mux2 m1_05(t0[05], t0[03], shamt[01], t1[05]);
  mux2 m1_06(t0[06], t0[04], shamt[01], t1[06]);
  mux2 m1_07(t0[07], t0[05], shamt[01], t1[07]);
  mux2 m1_08(t0[08], t0[06], shamt[01], t1[08]);
  mux2 m1_09(t0[09], t0[07], shamt[01], t1[09]);
  mux2 m1_10(t0[10], t0[08], shamt[01], t1[10]);
  mux2 m1_11(t0[11], t0[09], shamt[01], t1[11]);
  mux2 m1_12(t0[12], t0[10], shamt[01], t1[12]);
  mux2 m1_13(t0[13], t0[11], shamt[01], t1[13]);
  mux2 m1_14(t0[14], t0[12], shamt[01], t1[14]);
  mux2 m1_15(t0[15], t0[13], shamt[01], t1[15]);

  mux2 m2_00(t1[00], 1'b0, shamt[02], t2[00]);
  mux2 m2_01(t1[01], 1'b0, shamt[02], t2[01]);
  mux2 m2_02(t1[02], 1'b0, shamt[02], t2[02]);
  mux2 m2_03(t1[03], 1'b0, shamt[02], t2[03]);
  mux2 m2_04(t1[04], t1[00], shamt[02], t2[04]);
  mux2 m2_05(t1[05], t1[01], shamt[02], t2[05]);
  mux2 m2_06(t1[06], t1[02], shamt[02], t2[06]);
  mux2 m2_07(t1[07], t1[03], shamt[02], t2[07]);
  mux2 m2_08(t1[08], t1[04], shamt[02], t2[08]);
  mux2 m2_09(t1[09], t1[05], shamt[02], t2[09]);
  mux2 m2_10(t1[10], t1[06], shamt[02], t2[10]);
  mux2 m2_11(t1[11], t1[07], shamt[02], t2[11]);
  mux2 m2_12(t1[12], t1[08], shamt[02], t2[12]);
  mux2 m2_13(t1[13], t1[09], shamt[02], t2[13]);
  mux2 m2_14(t1[14], t1[10], shamt[02], t2[14]);
  mux2 m2_15(t1[15], t1[11], shamt[02], t2[15]);

  mux2 m3_00(t2[00], 1'b0, shamt[03], o[00]);
  mux2 m3_01(t2[01], 1'b0, shamt[03], o[01]);
  mux2 m3_02(t2[02], 1'b0, shamt[03], o[02]);
  mux2 m3_03(t2[03], 1'b0, shamt[03], o[03]);
  mux2 m3_04(t2[04], 1'b0, shamt[03], o[04]);
  mux2 m3_05(t2[05], 1'b0, shamt[03], o[05]);
  mux2 m3_06(t2[06], 1'b0, shamt[03], o[06]);
  mux2 m3_07(t2[07], 1'b0, shamt[03], o[07]);
  mux2 m3_08(t2[08], t2[00], shamt[03], o[08]);
  mux2 m3_09(t2[09], t2[01], shamt[03], o[09]);
  mux2 m3_10(t2[10], t2[02], shamt[03], o[10]);
  mux2 m3_11(t2[11], t2[03], shamt[03], o[11]);
  mux2 m3_12(t2[12], t2[04], shamt[03], o[12]);
  mux2 m3_13(t2[13], t2[05], shamt[03], o[13]);
  mux2 m3_14(t2[14], t2[06], shamt[03], o[14]);
  mux2 m3_15(t2[15], t2[07], shamt[03], o[15]);

endmodule


module shiftRightLogical
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  output wire[15:0]
  o
);

	wire [15:0] t0, t1, t2;

  mux2 m0_00(i[00], i[01], shamt[00], t0[00]);
  mux2 m0_01(i[01], i[02], shamt[00], t0[01]);
  mux2 m0_02(i[02], i[03], shamt[00], t0[02]);
  mux2 m0_03(i[03], i[04], shamt[00], t0[03]);
  mux2 m0_04(i[04], i[05], shamt[00], t0[04]);
  mux2 m0_05(i[05], i[06], shamt[00], t0[05]);
  mux2 m0_06(i[06], i[07], shamt[00], t0[06]);
  mux2 m0_07(i[07], i[08], shamt[00], t0[07]);
  mux2 m0_08(i[08], i[09], shamt[00], t0[08]);
  mux2 m0_09(i[09], i[10], shamt[00], t0[09]);
  mux2 m0_10(i[10], i[11], shamt[00], t0[10]);
  mux2 m0_11(i[11], i[12], shamt[00], t0[11]);
  mux2 m0_12(i[12], i[13], shamt[00], t0[12]);
  mux2 m0_13(i[13], i[14], shamt[00], t0[13]);
  mux2 m0_14(i[14], i[15], shamt[00], t0[14]);
  mux2 m0_15(i[15], 1'b0, shamt[00], t0[15]);

  mux2 m1_00(t0[00], t0[02], shamt[01], t1[00]);
  mux2 m1_01(t0[01], t0[03], shamt[01], t1[01]);
  mux2 m1_02(t0[02], t0[04], shamt[01], t1[02]);
  mux2 m1_03(t0[03], t0[05], shamt[01], t1[03]);
  mux2 m1_04(t0[04], t0[06], shamt[01], t1[04]);
  mux2 m1_05(t0[05], t0[07], shamt[01], t1[05]);
  mux2 m1_06(t0[06], t0[08], shamt[01], t1[06]);
  mux2 m1_07(t0[07], t0[09], shamt[01], t1[07]);
  mux2 m1_08(t0[08], t0[10], shamt[01], t1[08]);
  mux2 m1_09(t0[09], t0[11], shamt[01], t1[09]);
  mux2 m1_10(t0[10], t0[12], shamt[01], t1[10]);
  mux2 m1_11(t0[11], t0[13], shamt[01], t1[11]);
  mux2 m1_12(t0[12], t0[14], shamt[01], t1[12]);
  mux2 m1_13(t0[13], t0[15], shamt[01], t1[13]);
  mux2 m1_14(t0[14], 1'b0, shamt[01], t1[14]);
  mux2 m1_15(t0[15], 1'b0, shamt[01], t1[15]);

  mux2 m2_00(t1[00], t1[04], shamt[02], t2[00]);
  mux2 m2_01(t1[01], t1[05], shamt[02], t2[01]);
  mux2 m2_02(t1[02], t1[06], shamt[02], t2[02]);
  mux2 m2_03(t1[03], t1[07], shamt[02], t2[03]);
  mux2 m2_04(t1[04], t1[08], shamt[02], t2[04]);
  mux2 m2_05(t1[05], t1[09], shamt[02], t2[05]);
  mux2 m2_06(t1[06], t1[10], shamt[02], t2[06]);
  mux2 m2_07(t1[07], t1[11], shamt[02], t2[07]);
  mux2 m2_08(t1[08], t1[12], shamt[02], t2[08]);
  mux2 m2_09(t1[09], t1[13], shamt[02], t2[09]);
  mux2 m2_10(t1[10], t1[14], shamt[02], t2[10]);
  mux2 m2_11(t1[11], t1[15], shamt[02], t2[11]);
  mux2 m2_12(t1[12], 1'b0, shamt[02], t2[12]);
  mux2 m2_13(t1[13], 1'b0, shamt[02], t2[13]);
  mux2 m2_14(t1[14], 1'b0, shamt[02], t2[14]);
  mux2 m2_15(t1[15], 1'b0, shamt[02], t2[15]);

  mux2 m3_00(t2[00], t2[08], shamt[03], o[00]);
  mux2 m3_01(t2[01], t2[09], shamt[03], o[01]);
  mux2 m3_02(t2[02], t2[10], shamt[03], o[02]);
  mux2 m3_03(t2[03], t2[11], shamt[03], o[03]);
  mux2 m3_04(t2[04], t2[12], shamt[03], o[04]);
  mux2 m3_05(t2[05], t2[13], shamt[03], o[05]);
  mux2 m3_06(t2[06], t2[14], shamt[03], o[06]);
  mux2 m3_07(t2[07], t2[15], shamt[03], o[07]);
  mux2 m3_08(t2[08], 1'b0, shamt[03], o[08]);
  mux2 m3_09(t2[09], 1'b0, shamt[03], o[09]);
  mux2 m3_10(t2[10], 1'b0, shamt[03], o[10]);
  mux2 m3_11(t2[11], 1'b0, shamt[03], o[11]);
  mux2 m3_12(t2[12], 1'b0, shamt[03], o[12]);
  mux2 m3_13(t2[13], 1'b0, shamt[03], o[13]);
  mux2 m3_14(t2[14], 1'b0, shamt[03], o[14]);
  mux2 m3_15(t2[15], 1'b0, shamt[03], o[15]);

endmodule


module shiftRightArithmetic
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  output wire[15:0]
  o
);

	wire [15:0] t0, t1, t2;

  mux2 m0_00(i[00], i[01], shamt[00], t0[00]);
  mux2 m0_01(i[01], i[02], shamt[00], t0[01]);
  mux2 m0_02(i[02], i[03], shamt[00], t0[02]);
  mux2 m0_03(i[03], i[04], shamt[00], t0[03]);
  mux2 m0_04(i[04], i[05], shamt[00], t0[04]);
  mux2 m0_05(i[05], i[06], shamt[00], t0[05]);
  mux2 m0_06(i[06], i[07], shamt[00], t0[06]);
  mux2 m0_07(i[07], i[08], shamt[00], t0[07]);
  mux2 m0_08(i[08], i[09], shamt[00], t0[08]);
  mux2 m0_09(i[09], i[10], shamt[00], t0[09]);
  mux2 m0_10(i[10], i[11], shamt[00], t0[10]);
  mux2 m0_11(i[11], i[12], shamt[00], t0[11]);
  mux2 m0_12(i[12], i[13], shamt[00], t0[12]);
  mux2 m0_13(i[13], i[14], shamt[00], t0[13]);
  mux2 m0_14(i[14], i[15], shamt[00], t0[14]);
  mux2 m0_15(i[15], i[15], shamt[00], t0[15]);

  mux2 m1_00(t0[00], t0[02], shamt[01], t1[00]);
  mux2 m1_01(t0[01], t0[03], shamt[01], t1[01]);
  mux2 m1_02(t0[02], t0[04], shamt[01], t1[02]);
  mux2 m1_03(t0[03], t0[05], shamt[01], t1[03]);
  mux2 m1_04(t0[04], t0[06], shamt[01], t1[04]);
  mux2 m1_05(t0[05], t0[07], shamt[01], t1[05]);
  mux2 m1_06(t0[06], t0[08], shamt[01], t1[06]);
  mux2 m1_07(t0[07], t0[09], shamt[01], t1[07]);
  mux2 m1_08(t0[08], t0[10], shamt[01], t1[08]);
  mux2 m1_09(t0[09], t0[11], shamt[01], t1[09]);
  mux2 m1_10(t0[10], t0[12], shamt[01], t1[10]);
  mux2 m1_11(t0[11], t0[13], shamt[01], t1[11]);
  mux2 m1_12(t0[12], t0[14], shamt[01], t1[12]);
  mux2 m1_13(t0[13], t0[15], shamt[01], t1[13]);
  mux2 m1_14(t0[14], i[15], shamt[01], t1[14]);
  mux2 m1_15(t0[15], i[15], shamt[01], t1[15]);

  mux2 m2_00(t1[00], t1[04], shamt[02], t2[00]);
  mux2 m2_01(t1[01], t1[05], shamt[02], t2[01]);
  mux2 m2_02(t1[02], t1[06], shamt[02], t2[02]);
  mux2 m2_03(t1[03], t1[07], shamt[02], t2[03]);
  mux2 m2_04(t1[04], t1[08], shamt[02], t2[04]);
  mux2 m2_05(t1[05], t1[09], shamt[02], t2[05]);
  mux2 m2_06(t1[06], t1[10], shamt[02], t2[06]);
  mux2 m2_07(t1[07], t1[11], shamt[02], t2[07]);
  mux2 m2_08(t1[08], t1[12], shamt[02], t2[08]);
  mux2 m2_09(t1[09], t1[13], shamt[02], t2[09]);
  mux2 m2_10(t1[10], t1[14], shamt[02], t2[10]);
  mux2 m2_11(t1[11], t1[15], shamt[02], t2[11]);
  mux2 m2_12(t1[12], i[15], shamt[02], t2[12]);
  mux2 m2_13(t1[13], i[15], shamt[02], t2[13]);
  mux2 m2_14(t1[14], i[15], shamt[02], t2[14]);
  mux2 m2_15(t1[15], i[15], shamt[02], t2[15]);

  mux2 m3_00(t2[00], t2[08], shamt[03], o[00]);
  mux2 m3_01(t2[01], t2[09], shamt[03], o[01]);
  mux2 m3_02(t2[02], t2[10], shamt[03], o[02]);
  mux2 m3_03(t2[03], t2[11], shamt[03], o[03]);
  mux2 m3_04(t2[04], t2[12], shamt[03], o[04]);
  mux2 m3_05(t2[05], t2[13], shamt[03], o[05]);
  mux2 m3_06(t2[06], t2[14], shamt[03], o[06]);
  mux2 m3_07(t2[07], t2[15], shamt[03], o[07]);
  mux2 m3_08(t2[08], i[15], shamt[03], o[08]);
  mux2 m3_09(t2[09], i[15], shamt[03], o[09]);
  mux2 m3_10(t2[10], i[15], shamt[03], o[10]);
  mux2 m3_11(t2[11], i[15], shamt[03], o[11]);
  mux2 m3_12(t2[12], i[15], shamt[03], o[12]);
  mux2 m3_13(t2[13], i[15], shamt[03], o[13]);
  mux2 m3_14(t2[14], i[15], shamt[03], o[14]);
  mux2 m3_15(t2[15], i[15], shamt[03], o[15]);

endmodule


module rotateLeft
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  output wire[15:0]
  o
);

  wire [15:0] t0, t1, t2;

  mux2 m0_00(i[00], i[15], shamt[00], t0[00]);
  mux2 m0_01(i[01], i[00], shamt[00], t0[01]);
  mux2 m0_02(i[02], i[01], shamt[00], t0[02]);
  mux2 m0_03(i[03], i[02], shamt[00], t0[03]);
  mux2 m0_04(i[04], i[03], shamt[00], t0[04]);
  mux2 m0_05(i[05], i[04], shamt[00], t0[05]);
  mux2 m0_06(i[06], i[05], shamt[00], t0[06]);
  mux2 m0_07(i[07], i[06], shamt[00], t0[07]);
  mux2 m0_08(i[08], i[07], shamt[00], t0[08]);
  mux2 m0_09(i[09], i[08], shamt[00], t0[09]);
  mux2 m0_10(i[10], i[09], shamt[00], t0[10]);
  mux2 m0_11(i[11], i[10], shamt[00], t0[11]);
  mux2 m0_12(i[12], i[11], shamt[00], t0[12]);
  mux2 m0_13(i[13], i[12], shamt[00], t0[13]);
  mux2 m0_14(i[14], i[13], shamt[00], t0[14]);
  mux2 m0_15(i[15], i[14], shamt[00], t0[15]);

  mux2 m1_00(t0[00], t0[14], shamt[01], t1[00]);
  mux2 m1_01(t0[01], t0[15], shamt[01], t1[01]);
  mux2 m1_02(t0[02], t0[00], shamt[01], t1[02]);
  mux2 m1_03(t0[03], t0[01], shamt[01], t1[03]);
  mux2 m1_04(t0[04], t0[02], shamt[01], t1[04]);
  mux2 m1_05(t0[05], t0[03], shamt[01], t1[05]);
  mux2 m1_06(t0[06], t0[04], shamt[01], t1[06]);
  mux2 m1_07(t0[07], t0[05], shamt[01], t1[07]);
  mux2 m1_08(t0[08], t0[06], shamt[01], t1[08]);
  mux2 m1_09(t0[09], t0[07], shamt[01], t1[09]);
  mux2 m1_10(t0[10], t0[08], shamt[01], t1[10]);
  mux2 m1_11(t0[11], t0[09], shamt[01], t1[11]);
  mux2 m1_12(t0[12], t0[10], shamt[01], t1[12]);
  mux2 m1_13(t0[13], t0[11], shamt[01], t1[13]);
  mux2 m1_14(t0[14], t0[12], shamt[01], t1[14]);
  mux2 m1_15(t0[15], t0[13], shamt[01], t1[15]);

  mux2 m2_00(t1[00], t1[12], shamt[02], t2[00]);
  mux2 m2_01(t1[01], t1[13], shamt[02], t2[01]);
  mux2 m2_02(t1[02], t1[14], shamt[02], t2[02]);
  mux2 m2_03(t1[03], t1[15], shamt[02], t2[03]);
  mux2 m2_04(t1[04], t1[00], shamt[02], t2[04]);
  mux2 m2_05(t1[05], t1[01], shamt[02], t2[05]);
  mux2 m2_06(t1[06], t1[02], shamt[02], t2[06]);
  mux2 m2_07(t1[07], t1[03], shamt[02], t2[07]);
  mux2 m2_08(t1[08], t1[04], shamt[02], t2[08]);
  mux2 m2_09(t1[09], t1[05], shamt[02], t2[09]);
  mux2 m2_10(t1[10], t1[06], shamt[02], t2[10]);
  mux2 m2_11(t1[11], t1[07], shamt[02], t2[11]);
  mux2 m2_12(t1[12], t1[08], shamt[02], t2[12]);
  mux2 m2_13(t1[13], t1[09], shamt[02], t2[13]);
  mux2 m2_14(t1[14], t1[10], shamt[02], t2[14]);
  mux2 m2_15(t1[15], t1[11], shamt[02], t2[15]);

  mux2 m3_00(t2[00], t2[08], shamt[03], o[00]);
  mux2 m3_01(t2[01], t2[09], shamt[03], o[01]);
  mux2 m3_02(t2[02], t2[10], shamt[03], o[02]);
  mux2 m3_03(t2[03], t2[11], shamt[03], o[03]);
  mux2 m3_04(t2[04], t2[12], shamt[03], o[04]);
  mux2 m3_05(t2[05], t2[13], shamt[03], o[05]);
  mux2 m3_06(t2[06], t2[14], shamt[03], o[06]);
  mux2 m3_07(t2[07], t2[15], shamt[03], o[07]);
  mux2 m3_08(t2[08], t2[00], shamt[03], o[08]);
  mux2 m3_09(t2[09], t2[01], shamt[03], o[09]);
  mux2 m3_10(t2[10], t2[02], shamt[03], o[10]);
  mux2 m3_11(t2[11], t2[03], shamt[03], o[11]);
  mux2 m3_12(t2[12], t2[04], shamt[03], o[12]);
  mux2 m3_13(t2[13], t2[05], shamt[03], o[13]);
  mux2 m3_14(t2[14], t2[06], shamt[03], o[14]);
  mux2 m3_15(t2[15], t2[07], shamt[03], o[15]);

endmodule


module rotateRight
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  output wire[15:0]
  o
);

  wire [15:0] t0, t1, t2;

  mux2 m0_00(i[00], i[01], shamt[00], t0[00]);
  mux2 m0_01(i[01], i[02], shamt[00], t0[01]);
  mux2 m0_02(i[02], i[03], shamt[00], t0[02]);
  mux2 m0_03(i[03], i[04], shamt[00], t0[03]);
  mux2 m0_04(i[04], i[05], shamt[00], t0[04]);
  mux2 m0_05(i[05], i[06], shamt[00], t0[05]);
  mux2 m0_06(i[06], i[07], shamt[00], t0[06]);
  mux2 m0_07(i[07], i[08], shamt[00], t0[07]);
  mux2 m0_08(i[08], i[09], shamt[00], t0[08]);
  mux2 m0_09(i[09], i[10], shamt[00], t0[09]);
  mux2 m0_10(i[10], i[11], shamt[00], t0[10]);
  mux2 m0_11(i[11], i[12], shamt[00], t0[11]);
  mux2 m0_12(i[12], i[13], shamt[00], t0[12]);
  mux2 m0_13(i[13], i[14], shamt[00], t0[13]);
  mux2 m0_14(i[14], i[15], shamt[00], t0[14]);
  mux2 m0_15(i[15], i[00], shamt[00], t0[15]);

  mux2 m1_00(t0[00], t0[02], shamt[01], t1[00]);
  mux2 m1_01(t0[01], t0[03], shamt[01], t1[01]);
  mux2 m1_02(t0[02], t0[04], shamt[01], t1[02]);
  mux2 m1_03(t0[03], t0[05], shamt[01], t1[03]);
  mux2 m1_04(t0[04], t0[06], shamt[01], t1[04]);
  mux2 m1_05(t0[05], t0[07], shamt[01], t1[05]);
  mux2 m1_06(t0[06], t0[08], shamt[01], t1[06]);
  mux2 m1_07(t0[07], t0[09], shamt[01], t1[07]);
  mux2 m1_08(t0[08], t0[10], shamt[01], t1[08]);
  mux2 m1_09(t0[09], t0[11], shamt[01], t1[09]);
  mux2 m1_10(t0[10], t0[12], shamt[01], t1[10]);
  mux2 m1_11(t0[11], t0[13], shamt[01], t1[11]);
  mux2 m1_12(t0[12], t0[14], shamt[01], t1[12]);
  mux2 m1_13(t0[13], t0[15], shamt[01], t1[13]);
  mux2 m1_14(t0[14], t0[00], shamt[01], t1[14]);
  mux2 m1_15(t0[15], t0[01], shamt[01], t1[15]);

  mux2 m2_00(t1[00], t1[04], shamt[02], t2[00]);
  mux2 m2_01(t1[01], t1[05], shamt[02], t2[01]);
  mux2 m2_02(t1[02], t1[06], shamt[02], t2[02]);
  mux2 m2_03(t1[03], t1[07], shamt[02], t2[03]);
  mux2 m2_04(t1[04], t1[08], shamt[02], t2[04]);
  mux2 m2_05(t1[05], t1[09], shamt[02], t2[05]);
  mux2 m2_06(t1[06], t1[10], shamt[02], t2[06]);
  mux2 m2_07(t1[07], t1[11], shamt[02], t2[07]);
  mux2 m2_08(t1[08], t1[12], shamt[02], t2[08]);
  mux2 m2_09(t1[09], t1[13], shamt[02], t2[09]);
  mux2 m2_10(t1[10], t1[14], shamt[02], t2[10]);
  mux2 m2_11(t1[11], t1[15], shamt[02], t2[11]);
  mux2 m2_12(t1[12], t1[00], shamt[02], t2[12]);
  mux2 m2_13(t1[13], t1[01], shamt[02], t2[13]);
  mux2 m2_14(t1[14], t1[02], shamt[02], t2[14]);
  mux2 m2_15(t1[15], t1[03], shamt[02], t2[15]);

  mux2 m3_00(t2[00], t2[08], shamt[03], o[00]);
  mux2 m3_01(t2[01], t2[09], shamt[03], o[01]);
  mux2 m3_02(t2[02], t2[10], shamt[03], o[02]);
  mux2 m3_03(t2[03], t2[11], shamt[03], o[03]);
  mux2 m3_04(t2[04], t2[12], shamt[03], o[04]);
  mux2 m3_05(t2[05], t2[13], shamt[03], o[05]);
  mux2 m3_06(t2[06], t2[14], shamt[03], o[06]);
  mux2 m3_07(t2[07], t2[15], shamt[03], o[07]);
  mux2 m3_08(t2[08], t2[00], shamt[03], o[08]);
  mux2 m3_09(t2[09], t2[01], shamt[03], o[09]);
  mux2 m3_10(t2[10], t2[02], shamt[03], o[10]);
  mux2 m3_11(t2[11], t2[03], shamt[03], o[11]);
  mux2 m3_12(t2[12], t2[04], shamt[03], o[12]);
  mux2 m3_13(t2[13], t2[05], shamt[03], o[13]);
  mux2 m3_14(t2[14], t2[06], shamt[03], o[14]);
  mux2 m3_15(t2[15], t2[07], shamt[03], o[15]);

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

  mux8 m00({q0[00], q1[00], q2[00], q3[00], q4[00], q5[00], q6[00], q7[00]}, j[02], j[01], j[00], o[00]);
  mux8 m01({q0[01], q1[01], q2[01], q3[01], q4[01], q5[01], q6[01], q7[01]}, j[02], j[01], j[00], o[01]);
  mux8 m02({q0[02], q1[02], q2[02], q3[02], q4[02], q5[02], q6[02], q7[02]}, j[02], j[01], j[00], o[02]);
  mux8 m03({q0[03], q1[03], q2[03], q3[03], q4[03], q5[03], q6[03], q7[03]}, j[02], j[01], j[00], o[03]);
  mux8 m04({q0[04], q1[04], q2[04], q3[04], q4[04], q5[04], q6[04], q7[04]}, j[02], j[01], j[00], o[04]);
  mux8 m05({q0[05], q1[05], q2[05], q3[05], q4[05], q5[05], q6[05], q7[05]}, j[02], j[01], j[00], o[05]);
  mux8 m06({q0[06], q1[06], q2[06], q3[06], q4[06], q5[06], q6[06], q7[06]}, j[02], j[01], j[00], o[06]);
  mux8 m07({q0[07], q1[07], q2[07], q3[07], q4[07], q5[07], q6[07], q7[07]}, j[02], j[01], j[00], o[07]);
  mux8 m08({q0[08], q1[08], q2[08], q3[08], q4[08], q5[08], q6[08], q7[08]}, j[02], j[01], j[00], o[08]);
  mux8 m09({q0[09], q1[09], q2[09], q3[09], q4[09], q5[09], q6[09], q7[09]}, j[02], j[01], j[00], o[09]);
  mux8 m10({q0[10], q1[10], q2[10], q3[10], q4[10], q5[10], q6[10], q7[10]}, j[02], j[01], j[00], o[10]);
  mux8 m11({q0[11], q1[11], q2[11], q3[11], q4[11], q5[11], q6[11], q7[11]}, j[02], j[01], j[00], o[11]);
  mux8 m12({q0[12], q1[12], q2[12], q3[12], q4[12], q5[12], q6[12], q7[12]}, j[02], j[01], j[00], o[12]);
  mux8 m13({q0[13], q1[13], q2[13], q3[13], q4[13], q5[13], q6[13], q7[13]}, j[02], j[01], j[00], o[13]);
  mux8 m14({q0[14], q1[14], q2[14], q3[14], q4[14], q5[14], q6[14], q7[14]}, j[02], j[01], j[00], o[14]);
  mux8 m15({q0[15], q1[15], q2[15], q3[15], q4[15], q5[15], q6[15], q7[15]}, j[02], j[01], j[00], o[15]);

endmodule


module barrelShifter
(
  input wire [15:0]
  i,
  input wire [3:0]
  shamt,
  input wire [2:0]
  op,
  output wire[15:0]
  o
);

  wire [15:0] SLL, SRL, SRA, RL, RR;

  shiftLeft i0(i, shamt, SLL);
  shiftRightLogical i1(i, shamt, SRL);
  shiftRightArithmetic i2(i, shamt, SRA);
  rotateLeft i3(i, shamt, RL);
  rotateRight i4(i, shamt, RR);

  mux8_16 fi(SLL, SRL, SRA, 16'b0, RR, 16'b0, RL, 16'b0, op, o);

endmodule
