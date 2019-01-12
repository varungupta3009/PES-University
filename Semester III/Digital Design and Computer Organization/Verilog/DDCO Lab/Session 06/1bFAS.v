`include "lib.v"

module FA(A, B, Cin, S, Cout);

input A;
input B;
input Cin;
output S;
output Cout;

wire W1, W2, W3;

xor2 X1(A, B, W1);
and2 A1(W1, Cin, W2);
and2 A2(A, B, W3);
xor2 X2(W1, Cin, S);
or2 O1(W2, W3, Cout);

endmodule


module FAS(M, A, B, Cin, D, Cout);

input M;
input A;
input B;
input Cin;
output D;
output Cout;

wire W4;

xor2 X3(B, M, W4);
FA d(A, W4, Cin, D, Cout);

endmodule
