



module ifetch
//import CPU_config::*;
(
	// Global interface
	input logic clk,
	input logic rst_n,

	// Decode interface
	
	// Memory interface
  output logic[xlen-1:0] target_address
);
parameter xlen = 32;

logic[xlen-1:0] start_address = 'h0;



// Target address
initial begin
  target_address = start_address;
end

always @(posedge clk or negedge rst_n) begin
  if(rst_n)begin
    target_address <= target_address + 4;
  end
end

endmodule