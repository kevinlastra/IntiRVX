


module pc_gen
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // Ifetch interface
  input logic instr_valide,
  input logic[xlen-1:0] instruction,
  output logic ok_o,

  // Register interface
  output logic data_valid,
  output logic[34:0] data,
  input logic ok_i,

  // PC control interface
  output logic next_pc_valide,
  output logic[xlen-1:0] next_pc,
  output logic jal_instr
  );

// PARAMETERS

parameter xlen = 32;

// local variables

logic[9:0] decode;

logic[17:0] decode_parse_instr;
logic[24:0] reg_imm_parse_instr;

logic[34:0] data_i;

logic[xlen-1:0] start_address = 'h0;

logic[xlen-1:0] pc;

logic state_c;
logic init = 1;

logic INIT = 0;
logic NEXT = 1;
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

always begin
  jal_instr = decode == 'h60;
end

// calc new address
always begin
  if(rst_n) begin
    case (state_c)
      INIT : begin
        next_pc = start_address;
      end 
      NEXT : begin
        if(instr_valide) begin
          if (jal_instr) begin
            next_pc = pc + {{11{instruction[31]}}, instruction[19:12], instruction[11], instruction[30:21], 1'b0};
          end else begin
            next_pc = pc + 4;
          end
        end
      end
    endcase
  end
end
always @(posedge clk) begin
  if (rst_n) begin
    if(init) begin
      init <= 0;
    end else begin
      state_c <= NEXT;
    end
  end
end

    
always @(posedge clk) begin
  if(rst_n)begin
    pc <= next_pc;
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
  .flush(0),
  .data_valid(data_valid),
  .data_o(data),
  .ok(ok_i)
);

always begin
  next_pc_valide = ok_i;
end

always begin
  ok_o = 1;
end


endmodule