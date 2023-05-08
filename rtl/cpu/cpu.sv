


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
  logic data_valid_f2d;

  // pc_gen
  logic ok_d2f;

  logic data_valid_pg2r;
  logic[32:0] data_pg2r;
  logic ok_r2p;
  

  // PC control 
  logic[xlen-1:0] target;
  logic[xlen-1:0] pg_target;
  logic pg_target_valide;

  logic jal_instr;

  logic flush_if;

  // instruction fetch Unit
  ifetch ifetch
  (
    .clk(clk),
    .rst_n(rst_n),
    .target_address(adr),
    .resp(resp_data),
    .data_valid(data_valid_f2d),
    .data(data_f2d),
    .ok(ok_d2f),
    .target(target),
    .flush(flush_if)
  );

  pc_gen pc_gen
  (
    .clk(clk),
    .rst_n(rst_n),
    .instr_valide(data_valid_f2d),
    .instruction(data_f2d),
    .ok_o(ok_d2f),
    .data_valid(data_valid_pg2r),
    .data(data_pg2r),
    .ok_i(ok_r2p),
    .next_pc_valide(pg_target_valide),
    .next_pc(pg_target),
    .jal_instr(jal_instr)
  );

  pc_control pc_control
  (
    .clk(clk),
    .rst_n(rst_n),
    .target(target),
    .pg_target_valide(pg_target_valide),
    .pg_target(pg_target),
    .jal(jal_instr),
    .flush_if(flush_if),
    .alu_target_valide(0)
  );

  register_manager register_manager
  (
    .clk(clk),
    .rst_n(rst_n),
    .data(data_pg2r),
    .ok_o(ok_r2p)
  );

endmodule