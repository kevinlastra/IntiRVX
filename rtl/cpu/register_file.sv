


module register_file
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

parameter xlen = 32;

logic[xlen-1:0] register[31:0];

always begin
  if(r0_valid)
  {
    r0_data = register[r0_ad];
  }
  if(r1_valid)
  {
    r1_data = register[r1_ad];
  }
end

always @(negedge clk) begin
  if(w_valid)
  {
    register[w_ad] = w_ad;
  }
end

endmodule