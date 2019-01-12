module FS_TB;

wire t_s, t_cout, t_diff, t_cout1;
reg t_a, t_b, t_cin, t_d;

FS I1(.Dec(t_d), .A(t_a), .B(t_b), .Cin(t_cin), .Diff(t_diff), .Cout(t_cout1));

initial
begin
$dumpfile("FS.vcd");
$dumpvars(0,FS_TB);
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

end
endmodule
