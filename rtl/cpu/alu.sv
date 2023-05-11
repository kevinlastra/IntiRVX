




module alu
(
  // Global inputs
  input logic clk,
  input logic rst_n,

  // Register manager interface 
  output logic ok_o,

  input logic[1:0] unit,
  input logic[2:0] sub_unit,
  input logic[5:0] sel,

  input logic[xlen-1:0] rs1,
  input logic[xlen-1:0] rs2,
  input logic[4:0] rd,
  input logic[xlen-1:0] immediate,
  input logic imm
);



logic[xlen-1:0] opb;
logic[(xlen*2)-1:0] alu_res;
logic[xlen-1:0] res;

logic eq;

logic illegal_instr;
always begin
  if(imm)
    opb = immediate;
  else
    opb = rs2; 
end

always begin
  alu_res = rs1 + opb;
end

always begin
  eq = rs1 == opb;
  
end

always begin
  illegal_instr = 0;
  if(sub_unit == 3'h0)
  {
    case (sel)
      6'h00: begin
        res = immediate;
      end
      6'h01: begin
        res = alu_res;
      end
      6'h02: begin
        res = alu_res + 4;
      end 
      6'h03: begin
        res = alu_res;
      end
      default: 
      illegal_instr = 1;
    endcase
  }
  else if(sub_unit == 3'h1)
end

always begin
  ok_o = unit == 2'h0;
end

endmodule