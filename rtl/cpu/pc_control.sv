

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
  
  output logic flush_if,
  // ALU interface
  input logic alu_target_valide
);
parameter xlen = 32;


always begin
  flush_if = 0;
  if(alu_target_valide) begin
    // flush I2PG, PG2R and R2Calc pipelines
  end else if (pg_target_valide) begin
    target = pg_target;
  end
end


endmodule
