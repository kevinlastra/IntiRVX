



module ifetch
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
  input logic[xlen-1:0] target,
  input logic flush
);

parameter xlen = 32;

logic[31:0] data_i;
logic[31:0] data_o;


always begin
  target_address = target;
end

always begin
  data_i = resp;
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_f2d
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .flush(!ok),
  .ok(ok),
  .data_o(data_o)
);

always begin
  data = data_o;
end



endmodule
