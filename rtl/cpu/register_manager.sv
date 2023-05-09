



module register_manager
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // pc_gen interface
  input logic[34:0] data,
  output logic ok_o
  
  // calculations units interface
  
);

logic[xlen-1:0] rs1;
logic[xlen-1:0] rs2;

logic[4:0] rs1_ad;
logic rs1_v;

logic[4:0] rs2_ad;
logic rs2_v;

logic[4:0] rd;

logic[11:0] s_imm;
logic s_imm_v;

logic[19:0] l_imm;
logic l_imm_v;


logic[5:0] instr_type;



always begin
  instr_type = data[34:29];
end

always begin
  rd = data[4:0];
  rs1_ad = data[12:8];
  rs2_ad = data[17:13];

  if(instr_type == 'b10)
    s_imm = data[31:20];
  else if(instr_type == 'b11)
    s_imm = {data[25:19], data[4,0]};
  l_imm = data[31:12];
end

always begin
  rs1_v = 0;
  rs2_v = 0;
  s_imm_v = 0;
  l_imm_v = 0;

  if(instr_type == 'b0001) begin
    rs1_v = 1;
    rs2_v = 1;
  end else if(instr_type == 'b0010 | instr_type == 'b0011) begin
    rs1_v = 1;
    s_imm_v = 1;
  end else if(instr_type == 'b0100) begin
    l_imm_v = 1;
  end
  
end


register_file register_file
(
  .clk,
  .rst_n,
  .w_valid,
  .w_ad,
  .w_data,
  .r0_valid(rs1_v),
  .r0_ad(rs1_ad),
  .r1_valid(rs2_v),
  .r1_ad(rs2_ad),
  .r0_data(rs1),
  .r1_data(rs2)
);


always begin
  ok_o = 1;
end


endmodule
