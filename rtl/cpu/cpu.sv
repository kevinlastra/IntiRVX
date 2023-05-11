


module cpu
//import cpu_configuration::*;
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
  logic[39:0] data_pg2r;
  logic ok_r2p;
  logic[xlen-1:0] instr_pc;  
  logic[xlen-1:0] jal_res_i;
  logic[xlen-1:0] jal_res_o;

  // PC control 
  logic[xlen-1:0] target;
  logic[xlen-1:0] pg_target;
  logic pg_target_valide;

  logic jal_instr_pcc;

  logic flush_if;

  // Register manager
  logic data_valid_rm2c;

  logic[1:0] unit_o;
  logic[2:0] sub_unit_o;
  logic[3:0] sel_o;
  logic[xlen-1:0] rs1;
  logic[xlen-1:0] rs2;
  logic[4:0] rd;
  logic[xlen-1:0] immediate_o;
  logic imm_o; 

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
    .instr_pc(instr_pc),
    .next_pc_valide(pg_target_valide),
    .next_pc(pg_target),
    .jal_instr(jal_instr_pcc),
    .jal_res(jal_res_i)
  );

  pc_control pc_control
  (
    .clk(clk),
    .rst_n(rst_n),
    .target(target),
    .pg_target_valide(pg_target_valide),
    .pg_target(pg_target),
    .jal(jal_instr_pcc),
    .flush_if(flush_if),
    .alu_target_valide(0)
  );

  register_manager register_manager
  (
    .clk(clk),
    .rst_n(rst_n),
    .data(data_pg2r),
    .ok_o(ok_r2p),
    .instr_pc(instr_pc),
    .jal_res_i(jal_res_i),
    .unit_o(unit_o),
    .sub_unit_o(sub_unit_o),
    .sel_o(sel_o),
    .imm_o(imm_o),
    .rs1_o(rs1),
    .rs2_o(rs2),
    .rd_o(rd),
    .immediate_o(immediate_o),
    .jal_res_o(jal_res_o),
    .ok_i(1),
    .res_data(32'h0),
    .res_adr(5'h0),
    .res_v(0)
  );



endmodule
