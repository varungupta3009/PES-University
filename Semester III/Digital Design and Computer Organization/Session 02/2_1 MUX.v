module MUX(i, s, y);

input [1:0]i;
input s;
output y;
reg y;

always@(s or i)
begin
case(s)
1'b0: y=i[00];
1'b1: y=i[01];
default: y=0;
endcase
end

endmodule
