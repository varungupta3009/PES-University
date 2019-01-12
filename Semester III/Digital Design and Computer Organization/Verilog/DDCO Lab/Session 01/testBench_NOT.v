module TB;

wire yy;
reg aa;

initial
begin
$dumpfile("dump.vcd");
$dumpvars(0, TB);
end

gate newGate(.a(aa), .y(yy));

initial
begin
aa = 1'b0;
#5
aa = 1'b0;
#5
aa = 1'b1;
#5
aa = 1'b1;
#5
end

endmodule
