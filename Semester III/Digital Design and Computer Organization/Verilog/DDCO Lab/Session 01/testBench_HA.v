module TB;

wire ss, cc;
reg aa, bb;

initial
begin
$dumpfile("dump.vcd");
$dumpvars(0, TB);
end

gate newGate(.a(aa), .b(bb), .s(ss), .c(cc));

initial
begin
aa = 1'b0;
bb = 1'b0;
#5
aa = 1'b0;
bb = 1'b1;
#5
aa = 1'b1;
bb = 1'b0;
#5
aa = 1'b1;
bb = 1'b1;
end

endmodule
