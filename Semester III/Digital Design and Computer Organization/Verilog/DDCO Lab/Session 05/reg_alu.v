// Write code for modules you need here
`include "alu.v"
`include "my_mods.v"


module reg_file (input wire clk, reset, wr, input wire [2:0] rd_addr_a, rd_addr_b, wr_addr, input wire [15:0] d_in, output wire [15:0] d_out_a, d_out_b);
// Declare wires here
wire [7:0] load;
wire [15:0] q0, q1, q2, q3, q4, q5, q6, q7;
// Instantiate modules here
demux8 dmx(wr, wr_addr[2], wr_addr[1], wr_addr[0], load);
reg16_8 rm16(clk, reset, load, d_in, q0, q1, q2, q3, q4, q5, q6, q7);
mux8_16 mx0(q0, q1, q2, q3, q4, q5, q6, q7, {rd_addr_a[2], rd_addr_a[1], rd_addr_a[0]}, d_out_a);
mux8_16 mx1(q0, q1, q2, q3, q4, q5, q6, q7, {rd_addr_b[2], rd_addr_b[1], rd_addr_b[0]}, d_out_b);

endmodule


module reg_alu (input wire clk, reset, sel, wr, input wire [1:0] op, input wire [2:0] rd_addr_a, rd_addr_b, wr_addr, input wire [15:0] d_in, output wire [15:0] d_out_a, d_out_b, output wire cout);
// Declare wires here
wire [15:0] o, d_in_temp;
wire alu_out;
// Instantiate modules here
reg_file rf1(clk, reset, wr, rd_addr_a, rd_addr_b, wr_addr, d_in_temp, d_out_a, d_out_b);
alu a1(op, d_out_a, d_out_b, o, alu_out);
dfr d1(clk, reset, alu_out, cout);
mux_2 m1(o, d_in_temp, sel, d_in);

endmodule
