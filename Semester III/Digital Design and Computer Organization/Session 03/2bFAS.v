`include "1bFAS.v"

module FA_2
  (
   input [1:0]  A,
   input [1:0]  B,
   output [2:0] O
   );

  wire [2:0]    Cout;
  wire [1:0]    S;

  assign Cout[0] = 1'b0;

  FA FA1
    (
      .A(A[0]),
      .B(B[0]),
      .Cin(Cout[0]),
      .S(S[0]),
      .Cout(Cout[1])
      );

  FA FA2
    (
      .A(A[1]),
      .B(B[1]),
      .Cin(Cout[1]),
      .S(S[1]),
      .Cout(Cout[2])
      );

  assign O = {Cout[2], S};

endmodule
