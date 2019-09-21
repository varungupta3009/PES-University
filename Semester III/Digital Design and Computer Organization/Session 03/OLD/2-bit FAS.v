module FA(input A, B, Cin, output S, Cout);

wire T0, T1, T2;

xor3 X1(A, B, Cin, S);
and2 A1(A, B, T0);
and2 A2(B, Cin, T1);
and2 A3(Cin, A, T2);
or3 O1(T0, T1, T2, Cout);

endmodule


module FS(input Dec, input A, B, Cin, output Diff, Cout);

wire T0;

xor2 A4(B, Dec, T0);
FA d(A, T0, Cin, Diff, Cout);

endmodule
