


module pc_gen
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // Ifetch interface
  input logic[xlen-1:0] instruction,
  output logic ok_o,

  // Register interface
  output logic[32:0] data,
  input logic ok_i,

  // PC control interface
  output logic[xlen-1:0] pc
  );

// PARAMETERS

parameter xlen = 32;

// local variables

logic[7:0] decode;

logic[17:0] decode_parse_instr;
logic[24:0] reg_imm_parse_instr;

logic[32:0] data_i;

logic[xlen-1:0] start_address = 'h0;
logic[xlen-1:0] pc_next;

// Decode

always begin
  decode_parse_instr = {instruction[31:25], instruction[20], instruction[14:12], instruction[6:0]};
  reg_imm_parse_instr = instruction[31:7];
end

decoder_PG decoder
(
  .instruction(decode_parse_instr),
  .decode(decode)
);

// calc new address
initial begin
  pc = start_address;
end

always begin
  if(rst_n)begin
    if (decode == 'h7) begin
      pc_next = pc + {11'h0 , instruction[20], instruction[10:1], instruction[11], instruction[19:12]};
    end else begin
      pc_next = pc + 4;
    end
  end
end
always @(posedge clk) begin
  if(rst_n)begin
    pc <= pc_next;
  end
end


always begin
  data_i = {decode, reg_imm_parse_instr};
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_d2r
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .valide(1),
  .data_o(data),
  .ok(ok_i)
);

always begin
  ok_o = 1;
end

endmodule