



module ifetch
//import CPU_config::*;
(
	// Global interface
	input logic clk,
	input logic rst_n,

  // Memory interface
  output logic[xlen-1:0] target_address,
  input logic[xlen-1:0] resp,

	// Pc_gen interface
	output logic[xlen-1:0] data,
  input logic ok,

  // PC Control interface
  input logic[xlen-1:0] target
);
parameter xlen = 32;


always begin
  target_address = target;
end


fifo #(.DATA_SIZE(xlen)) pipeline_f2d
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(resp),
  .valide(1),
  .data_o(data),
  .ok(ok)
);

endmodule