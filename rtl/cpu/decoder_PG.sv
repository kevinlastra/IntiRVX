



module decoder_PG
(
  input logic[17:0] instruction,
  output logic[9:0] decode
);
parameter xlen = 32;

logic[3:0] instr_type;
logic[5:0] instr_code;

always  begin
  casez (instruction)
    18'b???????????0110111: // LUI
    begin
      instr_type = 'h5;
      instr_code = 'h0;
    end
    18'b???????????0010111: // AUIPC
    begin
      instr_type = 'h5;
      instr_code = 'h1;
    end
    18'b???????????1101111: // JAL
    begin
      instr_type = 'h6;
      instr_code = 'h0;
    end
    18'b????????0001100111: // JALR
    begin
      instr_type = 'h2;
      instr_code = 'h0;
    end
    18'b????????0001100011: // BEQ
    begin
      instr_type = 'h4;
      instr_code = 'h0;
    end
    18'b????????0011100011: // BNE
    begin
      instr_type = 'h4;
      instr_code = 'h1;
    end
    18'b????????1001100011: // BLT
    begin
      instr_type = 'h4;
      instr_code = 'h2;
    end
    18'b????????1011100011: // BGE
    begin
      instr_type = 'h4;
      instr_code = 'h3;
    end
    18'b????????1101100011: // BLTU
    begin
      instr_type = 'h4;
      instr_code = 'h4;
    end
    18'b????????1111100011: // BGEU
    begin
      instr_type = 'h4;
      instr_code = 'h5;
    end
    18'b????????0000000011: // LB
    begin
      instr_type = 'h2;
      instr_code = 'h1;
    end
    18'b????????0010000011: // LH
    begin
      instr_type = 'h2;
      instr_code = 'h2;
    end
    18'b????????0100000011: // LW
    begin
      instr_type = 'h2;
      instr_code = 'h3;
    end
    18'b????????1000000011: // LBU
    begin
      instr_type = 'h2;
      instr_code = 'h4;
    end
    18'b????????1010000011: // LHU 
    begin
      instr_type = 'h2;
      instr_code = 'h5;
    end
    18'b????????0000100011: // SB 
    begin
      instr_type = 'h3;
      instr_code = 'h0;
    end
    18'b????????0010100011: // SH 
    begin
      instr_type = 'h3;
      instr_code = 'h1;
    end
    18'b????????0100100011: // SW   
    begin
      instr_type = 'h3;
      instr_code = 'h2;
    end
    18'b????????0000010011: // ADDI 
    begin
      instr_type = 'h2;
      instr_code = 'h5;
    end
    18'b????????0100010011: // SLTI 
    begin
      instr_type = 'h2;
      instr_code = 'h6;
    end
    18'b????????0110010011: // SLTIU 
    begin
      instr_type = 'h2;
      instr_code = 'h7;
    end
    18'b????????1000010011: // XORI 
    begin
      instr_type = 'h2;
      instr_code = 'h8;
    end
    18'b????????1100010011: // ORI   
    begin
      instr_type = 'h2;
      instr_code = 'h9;
    end
    18'b????????1110010011: // ANDI 
    begin
      instr_type = 'h2;
      instr_code = 'ha;
    end
    18'b0000000?0010010011: // SLLI
    begin
      instr_type = 'h1;
      instr_code = 'h0;
    end
    18'b0000000?1010010011: // SRLI
    begin
      instr_type = 'h1;
      instr_code = 'h1;
    end
    18'b0100000?1010010011: // SRAI
    begin
      instr_type = 'h1;
      instr_code = 'h2;
    end
    18'b0000000?0000110011: // ADD
    begin
      instr_type = 'h1;
      instr_code = 'h3;
    end
    18'b0100000?0000110011: // SUB
    begin
      instr_type = 'h1;
      instr_code = 'h4;
    end
    18'b0000000?0010110011: // SLL
    begin
      instr_type = 'h1;
      instr_code = 'h5;
    end
    18'b0000000?0100110011: // SLT
    begin
      instr_type = 'h1;
      instr_code = 'h6;
    end
    18'b0000000?0110110011: // SLTU
    begin
      instr_type = 'h1;
      instr_code = 'h7;
    end
    18'b0000000?1000110011: // XOR
    begin
      instr_type = 'h1;
      instr_code = 'h8;
    end
    18'b0000000?1010110011: // SRL
    begin
      instr_type = 'h1;
      instr_code = 'h9;
    end
    18'b0100000?1010110011: // SRA
    begin
      instr_type = 'h1;
      instr_code = 'ha;
    end
    18'b0000000?1100110011: // OR
    begin
      instr_type = 'h1;
      instr_code = 'hb;
    end
    18'b0000000?1110110011: // AND
    begin
      instr_type = 'h1;
      instr_code = 'hc;
    end
    18'b0000????0000001111: // FENCE
    begin
      instr_type = 'h7;
      instr_code = 'h0;
    end
    18'b000000000010001111: // FENCE.I
    begin
      instr_type = 'h7;
      instr_code = 'h1;
    end
    18'b000000000001110011: // ECALL
    begin
      instr_type = 'h7;
      instr_code = 'h2;
    end
    18'b000000010001110011: // EBREAK
    begin
      instr_type = 'h7;
      instr_code = 'h3;
    end
    18'b????????0011110011: // CSRRW
    begin
      instr_type = 'h1;
      instr_code = 'hd;
    end
    18'b????????0101110011: // CSRRS
    begin
      instr_type = 'h1;
      instr_code = 'he;
    end
    18'b????????0111110011: // CSRRC
    begin
      instr_type = 'h1;
      instr_code = 'hf;
    end
    18'b????????1011110011: // CSRRWI
    begin
      instr_type = 'h1;
      instr_code = 'h10;
    end
    18'b????????1101110011: // CSRRSI
    begin
      instr_type = 'h1;
      instr_code = 'h11;
    end
    18'b????????1111110011: // CSRRCI
    begin
      instr_type = 'h1;
      instr_code = 'h12;
    end
    default: 
    begin
      instr_type = 'h0;
      instr_code = 'h0;
    end
  endcase
  decode = {instr_type, instr_code};
end

endmodule
