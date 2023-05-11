




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
  input logic imm,

  // Result Output
  output logic[xlen-1:0] result,
  output logic branch
);



logic[xlen-1:0] opb;
logic[xlen-1:0] alu_res;

logic eq;
logic less_than;
logic less_than_u;
logic greater_eq;
logic greater_eq_u;
logic diff;

logic illegal_instr;
always begin
  if(imm)
    opb = immediate;
  else
    opb = rs2; 

  if((sub_unit == 3'h2 && sel == 5'h1) || 
    (sub_unit == 3'h3 && (sel == 5'h0 && sel == 5'h1)) || 
    (sub_unit == 3'h1))
    opb = !opb;

  diff = opb[31] ^ rs1[31];
end

always begin
  alu_res = rs1 + opb;
end

always begin
  illegal_instr = 0;
  if(sub_unit == 3'h0)
  {
    case (sel)
      6'h00: begin
        result = immediate;
      end
      6'h01: begin
        result = alu_res;
      end
      6'h02: begin
        result = alu_res + 4;
      end 
      6'h03: begin
        result = alu_res;
      end
      default: 
      illegal_instr = 1;
    endcase
  }
  else if(sub_unit == 3'h1)
  {
    case (sel)
      5'h0: begin
        branch = alu_res == 0;
      end
      5'h1: begin
        branch = alu_res != 0;
      end
      5'h2: begin
        branch = diff? rs1[31]: alu_res[31];
      end
      5'h3: begin
        branch = diff? rs2[31]: !alu_res[31];
      end
      5'h4: begin
        branch = diff? rs2[31]: alu_res[31];
      end
      5'h5: begin
        branch = diff? rs1[31]: !alu_res[31];
      end
      default: 
        illegal_instr = 1;
    endcase

    if(branch)
      result = immediate;
  }
  else if(sub_unit == 3'h2)
  {
    result = alu_res;
  }
  else if(sub_unit == 3'h3)
  {
    case (sel)
      5'h0 : begin
        result = diff? rs1[31]: alu_res[31];
      end
      5'h1 : begin
        result = diff? rs2[31]: alu_res[31];
      end
      5'h2 : begin
        result = rs1 ^ opb;
      end
      5'h3 : begin
        result = rs1 | opb;
      end 
      5'h4 : begin
        result = rs1 & opb;
      end
      default: 
      illegal_instr = 1;
    endcase
  }
  else if(sub_unit == 3'h4)
  {
    case (sel)
      5'h0 : begin
        result = rs1 << opb;
      end
      5'h1 : begin
        result = rs1 >> opb;
      end
      5'h2 : begin
        result = rs1 <<< opb;
      end 
      default: 
        illegal_instr = 1;
    endcase
  }
end

always begin
  ok_o = unit == 2'h0;
end

endmodule