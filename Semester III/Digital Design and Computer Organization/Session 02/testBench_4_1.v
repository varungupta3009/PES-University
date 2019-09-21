module TB;

wire yy;
reg [0:3]ii;
reg [0:1]ss;

initial
begin
$dumpfile("dump.vcd");
$dumpvars(0, TB);
end

MUX newMUX(.i(ii), .s(ss), .y(yy));

initial
begin
ii = 4'b0001;
ss = 2'b00;
#5
ii = 4'b1000;
#5
ii = 4'b0001;
ss = 2'b11;
#5
ii = 4'b0000;
ss = 2'b00;
end

endmodule
