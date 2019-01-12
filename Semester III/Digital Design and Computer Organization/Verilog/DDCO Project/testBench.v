`include "barrelShifter.v"
`timescale 1 ns/1 ps


module testBench;

 reg [15:0] i_tb;
 reg [3:0] shamt_tb;
 reg [2:0] op_tb;
 wire [15:0] o_tb;

  initial
  begin

    $dumpfile("barrelShifter.vcd");
    $dumpvars(0, testBench);

  end

  barrelShifter gfi(.i(i_tb), .shamt(shamt_tb), .op(op_tb), .o(o_tb));

  initial
  begin

      i_tb=16'b0;
      shamt_tb=3'b0;
      op_tb=3'b0;
    #5
    	i_tb=16'hABCD;
    	shamt_tb=3'd2;
    	op_tb=3'd0;
    #5
    	i_tb=16'hABCD;
    	shamt_tb=3'd2;
    	op_tb=3'd1;
    #5
    	i_tb=16'hABCD;
    	shamt_tb=3'd2;
    	op_tb=3'd2;
    #5
    	i_tb=16'hABCD;
    	shamt_tb=3'd2;
    	op_tb=3'd3;
    #5
    	i_tb=16'hABCD;
    	shamt_tb=3'd2;
    	op_tb=3'd4;
    #5
      i_tb=16'd32;
      shamt_tb=3'd3;
      op_tb=3'd3;
    #5
      i_tb=16'b0;
      shamt_tb=3'b0;
      op_tb=3'b0;
  end

endmodule
