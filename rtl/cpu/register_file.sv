


module register_file
//import cpu_configuration::*;
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // Inputs
  input logic w_valid,
  input logic[4:0] w_ad,
  input logic[xlen-1:0] w_data,

  input logic r0_valid,
  input logic[4:0] r0_ad,

  input logic r1_valid,
  input logic[4:0] r1_ad,

  // Outputs
  output logic[xlen-1:0] r0_data,
  output logic[xlen-1:0] r1_data
);
// PARAMETERS
parameter xlen = 32;

logic[xlen-1:0] register[31:0];

always_latch begin
  if(r0_valid) begin
    r0_data = register[r0_ad];
  end else if(r1_valid) begin
    r1_data = register[r1_ad];
  end
end

always @(negedge clk) begin
  if(w_valid) begin
    register[w_ad] = w_data;
  end
end

endmodule
