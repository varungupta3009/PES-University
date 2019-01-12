module MUX(i, s, y);

input [3:0]i;
input [1:0]s;
output y;
reg y;

always@(s or i)
begin
case(s)
2'b00: y=i[0];
2'b01: y=i[1];
2'b10: y=i[2];
2'b11: y=i[3];
default: y=0;
endcase
end

endmodule
