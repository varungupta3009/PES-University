`include "1bFAS.v"

module FA_TB();

wire t_s, t_cout;
reg t_a, t_b, t_cin;

FA I1(.A(t_a), .B(t_b), .Cin(t_cin), .S(t_s), .Cout(t_cout));

initial
begin
$dumpfile("FA.vcd");
$dumpvars(0,FA_TB);
end

initial
begin
$monitor(t_a, t_b, t_cin, t_s, t_cout);

t_a=1'b0;
t_b=1'b0;
t_cin=1'b0;
#5
t_a=1'b0;
t_b=1'b0;
t_cin=1'b1;
#5
t_a=1'b0;
t_b=1'b1;
t_cin=1'b0;
#5
t_a=1'b0;
t_b=1'b1;
t_cin=1'b1;
#5
t_a=1'b1;
t_b=1'b0;
t_cin=1'b0;
#5
t_a=1'b1;
t_b=1'b0;
t_cin=1'b1;
#5
t_a=1'b1;
t_b=1'b1;
t_cin=1'b0;
#5
t_a=1'b1;
t_b=1'b1;
t_cin=1'b1;
#5
t_a=1'b0;
t_b=1'b0;
t_cin=1'b0;

end
endmodule
