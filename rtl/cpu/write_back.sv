


module write_back
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // ALU interface
  input logic[xlen-1:0] alu_res,
  input logic[4:0] alu_rd,
  input logic alu_res_v,

  output logic alu_ok,

  // MEM interface
  input logic[xlen-1:0] mem_res,
  input logic[4:0] mem_rd,
  input logic mem_res_v,

  output logic mem_ok,

  // Regeister manager interface
  output logic[xlen-1:0] result,
  output logic[4:0] rd,
  output logic result_v
);

parameter xlen = 32;

logic[1:0] res_v;

always begin
  res_v =  {alu_res_v, mem_res_v};
end

always begin
  

  case (res_v)
    2'b01: begin
      result = mem_res;
      rd = mem_rd;
      result_v = 1;
    end
    2'b10: begin
      result = alu_res;
      rd = alu_rd;
      result_v = 1;
    end 
    default
      result_v = 0;
  endcase
end

always begin
  alu_ok = 1;
  mem_ok = 1;
end


endmodule
