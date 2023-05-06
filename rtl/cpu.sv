


module cpu
//import CPU_config::*;
(
  // Global inputs
  input logic clk,
  input logic rst_n,

  
  // system inputs
  /* verilator lint_off UNUSED */
  input logic [xlen-1:0] resp_data,
  /* verilator lint_on UNUSED */
  // system outputs
  output logic [xlen-1:0] adr

);
  parameter xlen = 32;
  
  // instruction fetch Unit
  ifetch ifetch
  (
    .clk(clk),
    .rst_n(rst_n),
    .target_address(adr)
  );



endmodule