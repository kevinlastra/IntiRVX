




module alu
(
  // Global inputs
  input logic clk,
  input logic rst_n,

  // Register manager interface 
  output logic ok_o,

  input logic[1:0] unit,
  input logic[2:0] sub_unit,
  input logic[3:0] sel,

  input logic[xlen-1:0] rs1,
  input logic[xlen-1:0] rs2,
  input logic[4:0] rd_i,

  input logic[xlen-1:0] immediate,
  input logic imm,

  // Write back interface
  output logic result_valid,
  output logic[xlen-1:0] result,
  output logic[4:0] rd_o,

  output logic[xlen-1:0] target,
  output logic target_valid,

  input logic flush,
  input logic ok_i
);

parameter xlen = 32;

logic[xlen-1:0] opb;
logic[xlen-1:0] alu_res;

logic res_v;
logic branch;
logic[xlen-1:0] res;
logic[xlen-1:0] j_res;

logic[70:0] data_i;
logic[70:0] data_o;

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

  if((sub_unit == 3'h2 && sel == 4'h1) || 
    (sub_unit == 3'h3 && (sel == 4'h0 && sel == 4'h1)) || 
    (sub_unit == 3'h1))
    opb = ~opb;
end

always begin
  diff = opb[31] ^ rs1[31];
end

always begin
  alu_res = rs1 + opb;
end

always begin
  res = 32'h0;
  j_res = 32'h0;
  branch = 0;

  illegal_instr = 0;
  if(ok_o) begin
    if(sub_unit == 3'h0) begin
      case (sel)
        4'h00: begin
          res = rs2;
        end
        4'h01: begin
          res = alu_res;
        end
        4'h02: begin
          res = rs1 + 4;
        end 
        4'h03: begin
          res = alu_res + 4;
          j_res = alu_res & 0'hFFFFFFFE;
          branch = 1;
        end
        default: 
        illegal_instr = 1;
      endcase
    end else if(sub_unit == 3'h1) begin
      case (sel)
        4'h0: begin
          branch = alu_res == 0;
        end
        4'h1: begin
          branch = alu_res != 0;
        end
        4'h2: begin
          branch = diff? rs1[31]: alu_res[31];
        end
        4'h3: begin
          branch = diff? rs2[31]: !alu_res[31];
        end
        4'h4: begin
          branch = diff? rs2[31]: alu_res[31];
        end
        4'h5: begin
          branch = diff? rs1[31]: !alu_res[31];
        end
        default: 
          illegal_instr = 1;
      endcase

      if(branch) begin
        j_res = rs2;
      end

    end else if(sub_unit == 3'h2) begin
      res = alu_res;
    end else if(sub_unit == 3'h3) begin
      case (sel)
        4'h0 : begin
          res = {{xlen-1{1'b0}}, diff? rs1[31]: alu_res[31]};
        end
        4'h1 : begin
          res = {{xlen-1{1'b0}}, diff? rs2[31]: alu_res[31]};
        end
        4'h2 : begin
          res = rs1 ^ opb;
        end
        4'h3 : begin
          res = rs1 | opb;
        end 
        4'h4 : begin
          res = rs1 & opb;
        end
        default: 
        illegal_instr = 1;
      endcase
    end else if(sub_unit == 3'h4) begin
      case (sel)
        4'h0 : begin
          res = rs1 << opb;
        end
        4'h1 : begin
          res = rs1 >> opb;
        end
        4'h2 : begin
          res = rs1 <<< opb;
        end 
        default: 
          illegal_instr = 1;
      endcase
    end
  end
end

always begin
  res_v = ~illegal_instr && ok_o;
end


always begin
  data_i = 
  {
    branch,
    res_v,
    rd_i,
    res,
    j_res
  };
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_alu2wb
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .valide(ok_o),
  .flush(flush),
  .data_o(data_o),
  .ok(ok_i)
);

always begin
  {
    target_valid,
    result_valid,
    rd_o,
    result,
    target
  } = data_o;
end

always begin
  ok_o = unit == 2'h0;
end

endmodule
