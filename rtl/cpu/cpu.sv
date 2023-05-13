


module cpu
//import cpu_configuration::*;
(
  // Global inputs
  input logic clk,
  input logic rst_n,

  
  // system imem interface
  input logic [xlen-1:0] resp_instruction,
  output logic [xlen-1:0] adr_instruction,

  // system dmem interface
  output logic r_v,
  output logic w_v,
  output logic[xlen-1:0] data_adr,
  output logic[xlen-1:0] data_o,
  output logic[3:0] strobe,

  input logic[xlen-1:0] dmem_resp,
  input logic dmem_resp_v

);
  // PARAMETERS
  parameter xlen = 32;
  

  // ifetch
  logic[xlen-1:0] data_f2d;
  logic data_valid_f2d;

  // pc_gen
  logic ok_d2f;

  logic data_valid_pg2r;
  logic[39:0] data_pg2r;
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
  logic imm_o;
  logic[xlen-1:0] immediate_o;
  logic ok_r2p;

  // ALU
  logic alu_result_v;
  logic[xlen-1:0] alu_result;
  logic alu_branch;
  logic[4:0] alu_rd;

  logic ok_alu2r;

  // MEM
  logic mem_result_v;
  logic[xlen-1:0] mem_result;

  logic[4:0] mem_rd;

  logic ok_mem2r;

  // Write back
  logic ok_wb2alu;
  logic ok_wb2mem;

  logic[xlen-1:0] wb_res;
  logic wb_res_v;
  logic[4:0] wb_rd;

  // instruction fetch Unit
  ifetch ifetch
  (
    .clk(clk),
    .rst_n(rst_n),
    .target_address(adr_instruction),
    .resp(resp_instruction),
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
    .rs1_o(rs1),
    .rs2_o(rs2),
    .rd_o(rd),
    .imm_o(imm_o),
    .immediate_o(immediate_o),
    .jal_res_o(jal_res_o),
    .ok_i(1),
    .res_data(wb_res),
    .res_adr(wb_rd),
    .res_v(wb_res_v)
  );

  alu alu
  (
    .clk(clk),
    .rst_n(rst_n),
    .ok_o(ok_alu2r),
    .unit(unit_o),
    .sub_unit(sub_unit_o),
    .sel(sel_o),
    .rs1(rs1),
    .rs2(rs2),
    .rd_i(rd),
    .immediate(immediate_o),
    .imm(imm_o),
    .result_v(alu_result_v),
    .result(alu_result),
    .rd_o(alu_rd),
    .branch(alu_branch),
    .ok_i(ok_wb2alu)
  );

  mem mem
  (
    .clk(clk),
    .rst_n(rst_n),
    .ok_o(ok_mem2r),
    .unit(unit_o),
    .sub_unit(sub_unit_o),
    .sel(sel_o),
    .rs1(rs1),
    .rs2(rs2),
    .rd_i(rd),
    .immediate(immediate_o),
    .imm(imm_o),
    .r_v(r_v),
    .w_v(w_v),
    .req_adr(data_adr),
    .req_data(data_o),
    .req_strobe(strobe),
    .hit(dmem_resp_v),
    .mem_res(dmem_resp[15:0]),
    .result(mem_result),
    .rd_o(mem_rd),
    .result_v(mem_result_v),
    .ok_i(ok_wb2mem)
  );

  write_back write_back
  (
    .clk(clk),
    .rst_n(rst_n),
    .alu_res(alu_result),
    .alu_rd(alu_rd),
    .alu_res_v(alu_result_v),
    .alu_ok(ok_wb2alu),
    .mem_res(mem_result),
    .mem_rd(mem_rd),
    .mem_res_v(mem_result_v),
    .mem_ok(ok_wb2mem),
    .result(wb_res),
    .rd(wb_rd),
    .result_v(wb_res_v)
  );

endmodule
