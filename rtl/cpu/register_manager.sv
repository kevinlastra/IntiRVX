



module register_manager
//import cpu_configuration::*;
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // pc_gen interface
  input logic[14:0] decode,
  input logic[24:0] instruction,
  input logic[xlen-1:0] pc,
  output logic ok_o,
  input logic[xlen-1:0] jal_res_i,
  
  // calculations units interface
  output logic[1:0] unit_o,
  output logic[2:0] sub_unit_o,
  output logic[3:0] sel_o,
  output logic[xlen-1:0] rs1_o,
  output logic[xlen-1:0] rs2_o,
  output logic[4:0] rd_o,
  output logic imm_o,
  output logic[xlen-1:0] immediate_o,
  output logic[xlen-1:0] jal_res_o,

  input logic flush,
  input logic ok_i,

  // Answer from the calculation units
  input logic[xlen-1:0] res_data,
  input logic[4:0] res_adr,
  input logic res_v
);
// PARAMETERS
parameter xlen = 32;

logic[4:0] rs1_ad;
logic[4:0] rs2_ad;

logic[1:0] unit;
logic[2:0] sub_unit;
logic[3:0] sel;
logic imm;

//pipeline signals
logic[142:0] data_i;
logic[142:0] data_o;

logic[xlen-1:0] rs1;
logic rs1_v;
logic[xlen-1:0] rs2;
logic rs2_v;
logic[4:0] rd;
logic rd_v;

logic[xlen-1:0] immediate;

logic[11:0] s_imm;
logic s_imm_v;
logic[19:0] l_imm;
logic l_imm_v;
logic pc_instruction;

always begin
  unit = decode[14:13];
  sub_unit = decode[12:10];
  sel = decode[9:6];
  imm = decode[5];
end

always begin
  rd = instruction[4:0];
  rs1_ad = instruction[12:8];
  rs2_ad = instruction[17:13];

  if((unit == 2'h0 && sub_unit == 3'h1) || (unit == 2'h1 && sub_unit == 3'h1))
    s_imm = {instruction[24:18], instruction[4:0]};
  else
    s_imm = instruction[24:13];

  l_imm = instruction[24:5];

  pc_instruction = (unit == 2'h0) && (sub_unit == 3'h0); 
end

always_latch begin
  l_imm_v = 0;
  s_imm_v = 0;

  if (imm) begin
    if((unit == 2'h0) && (sub_unit == 3'h0) && (sel != 4'h3)) begin
      l_imm_v = 1;
    end else begin
      s_imm_v = 1;
    end
  end

  // if ALU sub 0 and not jarl then the rs1 is not used
  rs1_v = !l_imm_v;

  // if ALU and not sub 3 and not immediate
  if(unit == 2'h0)
    rs2_v = sub_unit != 3'h0 && !imm;
  else if(unit == 2'h1)
    rs2_v = sub_unit == 3'h1;  

  // if not branch conditional or store instruction
  rd_v = (unit == 2'h0 && sub_unit != 3'h1) || (unit == 2'h1 && sub_unit != 3'h1);

end

always_latch begin
  if(l_imm_v)
    if(sel != 4'h2)
      immediate = {l_imm, 12'h0};
    else
      immediate = {{12{instruction[24]}}, instruction[12:5], instruction[13], instruction[23:14], 1'b0};
  else if(s_imm_v)
    immediate =  {{20{s_imm[11]}} , s_imm};
end

register_file register_file
(
  .clk,
  .rst_n,
  .w_valid(res_v),
  .w_ad(res_adr),
  .w_data(res_data),
  .r0_valid(rs1_v),
  .r0_ad(rs1_ad),
  .r1_valid(rs2_v),
  .r1_ad(rs2_ad),
  .r0_data(rs1),
  .r1_data(rs2)
);

always_latch begin
  if(pc_instruction)
    rs1 = pc;
end

// push data on the pipeline
always begin
  data_i = {
            unit,
            sub_unit,
            sel,
            rs1, 
            rs2, 
            rd,
            imm,
            immediate,
            jal_res_i};
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_r2c
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .valide(1),
  .flush(flush),
  .data_o(data_o),
  .ok(ok_i)
);

// pull data from the pipeline
always begin
  {
    unit_o,
    sub_unit_o,
    sel_o,
    rs1_o,
    rs2_o,
    rd_o,
    imm_o,
    immediate_o,
    jal_res_o
  } = data_o;
end


always begin
  ok_o = 1;
end


endmodule
