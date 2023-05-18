



module register_manager
//import cpu_configuration::*;
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // Pc_gen interface
  input logic[15:0] decode,
  input logic[24:0] instruction,
  input logic[xlen-1:0] pc_i,
  output logic ok_o,
  input logic[xlen-1:0] jal_res_i,
  
  // Calculations units interface
  output logic[1:0] unit_o,
  output logic[2:0] sub_unit_o,
  output logic[3:0] sel_o,
  output logic[xlen-1:0] pc_o,
  output logic[xlen-1:0] rs1_o,
  output logic[xlen-1:0] rs2_o,
  output logic[4:0] rd_o,
  output logic imm_o,
  output logic[xlen-1:0] immediate_o,
  output logic[xlen-1:0] jal_res_o,
  output logic j_instr2alu,

  input logic flush,
  input logic ok_i,

  // PC control interface
  output logic j_instr,

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
logic[176:0] data_i;
logic[176:0] data_o;

logic[xlen-1:0] rs1;
logic rs1_v;
logic[xlen-1:0] rs2;
logic rs2_v;
logic[4:0] rd;
logic rd_v;
logic rd_v_o;

logic[xlen-1:0] immediate;

logic[11:0] s_imm;
logic s_imm_v;
logic[19:0] l_imm;
logic l_imm_v;

logic dispatch;

always begin
  unit = decode[15:14];
  sub_unit = decode[13:11];
  sel = decode[10:7];
  imm = decode[6];
  j_instr = decode[0];
end

always begin
  rd = instruction[4:0];
  rs1_ad = instruction[12:8];
  rs2_ad = instruction[17:13];

  if((unit == 2'h0 && sub_unit == 3'h1) || (unit == 2'h1 && sub_unit == 3'h1))
    s_imm = {instruction[24:18], instruction[4:0]};
  else
    s_imm = {instruction[24:13]};

  l_imm = instruction[24:5];
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
  if(unit == 2'h1)
    rs2_v = sub_unit == 3'h1;  

  // if not branch conditional or store instruction
  rd_v = (unit == 2'h0 && sub_unit != 3'h1) || (unit == 2'h1 && sub_unit != 3'h1);
end

always_latch begin
  if(l_imm_v) begin
    if(unit == 2'h0 && sub_unit == 3'h0 && sel == 4'h2) // jal
      immediate = {{12{l_imm[19]}}, l_imm[10:1], l_imm[11], l_imm[19:12], 1'b0};
    if(unit == 2'h0 && sub_unit == 3'h1) // b
      immediate = {{20{s_imm[11]}}, s_imm[0], s_imm[10:5], s_imm[4:1], 1'b0};
    else
      immediate = {l_imm, 12'h0};    
  end else if(s_imm_v)
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
  .block_rd(rd_v_o),
  .rd(rd_o),
  .r0_data(rs1),
  .r1_data(rs2),
  .r_v(dispatch)
);


// push data on the pipeline
always begin
  data_i = {
            unit,
            sub_unit,
            sel,
            pc_i,
            rs1, 
            rs2, 
            rd,
            rd_v,
            imm,
            immediate,
            jal_res_i,
            decode[0]};
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_r2c
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .flush(flush | !dispatch),
  .ok(ok_i),
  .data_o(data_o)
);

// pull data from the pipeline
always begin
  {
    unit_o,
    sub_unit_o,
    sel_o,
    pc_o,
    rs1_o,
    rs2_o,
    rd_o,
    rd_v_o,
    imm_o,
    immediate_o,
    jal_res_o,
    j_instr2alu
  } = data_o;
end


always begin
  ok_o = dispatch && ok_i;
end


endmodule
