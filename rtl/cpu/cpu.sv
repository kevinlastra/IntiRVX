


module cpu
//import CPU_config::*;
(
  // Global inputs
  input logic clk,
  input logic rst_n,

  
  // system inputs
  input logic [xlen-1:0] resp_data,

  // system outputs
  output logic [xlen-1:0] adr

);
  // PARAMETERS
  parameter xlen = 32;
  
  // local variables

  // ifetch
  logic[xlen-1:0] data_f2d;

  // pc_gen
  logic ok_d2f;
  logic[32:0] data_d2r;
  logic ok_r2p;

  // PC control 
  logic[xlen-1:0] target;

  // instruction fetch Unit
  ifetch ifetch
  (
    .clk(clk),
    .rst_n(rst_n),
    .target_address(adr),
    .resp(resp_data),
    .data(data_f2d),
    .ok(ok_d2f),
    .target(target)
  );

  pc_gen pc_gen
  (
    .clk(clk),
    .rst_n(rst_n),
    .instruction(data_f2d),
    .ok_o(ok_d2f),
    .data(data_d2r),
    .ok_i(ok_r2p),
    .pc(target)
  );

  register_manager register_manager
  (
    .clk(clk),
    .rst_n(rst_n),
    .data(data_d2r),
    .ok_o(ok_r2p)
  );

endmodule