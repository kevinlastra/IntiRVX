



module
(
  // Global interface
  input logic clk,
	input logic rst_n,

	// Register manager interface
	input logic[1:0] unit,
	input logic[2:0] sub_unit,
	input logic[3:0] sel,

	input logic[xlen-1:0] rs1,
	input logic[xlen-1:0] rs2,
	input logic[4:0] rd,

	// Mememory interface 
	output logic r_v,
	output logic w_v,
	output logic[]

	// Result Output
	input logic[xlen-1:0] result
);

parameter xlen = 32;




endmodule