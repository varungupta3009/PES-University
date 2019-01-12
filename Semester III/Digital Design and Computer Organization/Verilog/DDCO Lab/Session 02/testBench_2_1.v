module TB;

wire yy;
reg [1:0]ii;
reg ss;

initial
begin
$dumpfile("dump.vcd");
$dumpvars(0, TB);
end

MUX newMUX(.i(ii), .s(ss), .y(yy));

initial
begin
ss = 1'b0;
ii = 2'b00;
#5
ii = 2'b01;
#5
ii = 2'b10;
#5
ii = 2'b11;
#5
ss = 1'b1;
ii = 2'b00;
#5
ii = 2'b01;
#5
ii = 2'b10;
#5
ii = 2'b11;
#5
ss = 1'b0;
ii = 2'b00;
end

endmodule
