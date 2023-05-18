

module pc_control
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // ifetch iterface
  output logic[xlen-1:0] target,

  // pc_gen interface
  input logic pg_target_valide,
  input logic[xlen-1:0] pg_target,
  input logic jal,
  
  output logic flush,

  // Register manager interface
  input logic j_instr_rm,

  // ALU interface
  input logic j_instr_alu,

  input logic alu_target_valide,
  input logic[xlen-1:0] alu_target

);

parameter xlen = 32;


always begin
  flush = 0;
  if(alu_target_valide) begin
    target = alu_target;
    flush = 1;
  end else if (pg_target_valide && !j_instr_alu && !j_instr_rm) begin
    target = pg_target;
  end
end


endmodule
