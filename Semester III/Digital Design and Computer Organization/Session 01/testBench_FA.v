module TB;

wire ss, cy;
reg aa, bb, cc;

initial
begin
$dumpfile("dump.vcd");
$dumpvars(0, TB);
end

gate newGate(.a(aa), .b(bb), .c(cc), .s(ss), .ca(cy));

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
#5
aa = 1'b0;
bb = 1'b0;
end

endmodule
