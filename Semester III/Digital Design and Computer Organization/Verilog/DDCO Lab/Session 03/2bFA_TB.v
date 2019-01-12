`include "2bFAS.v"

module FA_2_TB();

  reg [1:0] t_a = 0;
  reg [1:0] t_b = 0;
  wire [2:0] t_o;

  FA_2 I1(.A(t_a), .B(t_b), .O(t_o));

  initial
    begin
      $dumpfile("FA_2.vcd");
      $dumpvars(0, FA_2_TB);
    end

  initial
    begin
      $monitor(t_a, t_b, t_o);
      t_a = 2'b00;
      t_b = 2'b01;
      #5;
      t_a = 2'b10;
      t_b = 2'b01;
      #5;
      t_a = 2'b01;
      t_b = 2'b11;
      #5;
      t_a = 2'b11;
      t_b = 2'b11;
      #5;
      t_a = 2'b00;
      t_b = 2'b01;
    end

endmodule
