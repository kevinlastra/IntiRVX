



module decoder_PG
//import cpu_configuration::*;
(
  input logic[17:0] instruction,
  output logic[15:0] decode
);

// PARAMETERS
parameter xlen = 32;

logic[1:0] unit; //{alu, l/s, csr}
logic[2:0] sub_unit; 
logic[3:0] sel;
logic imm;

logic csr;
logic fence;
logic ecall;
logic ebreak;

logic illegal_instr;

logic calc_j;  // jalr and conditional branchs

// *-----------------------------------------------------------------------------------------------------*
// |                                          TABLE INSTR DECODE                                         |
// *---------*---------------------------------------------------------*--------------------*------------*
// | Unit    |                         0: ALU                          |      1: L/S        |   2: CSR   |
// *---------*------------*-----------*--------*------------*----------*---------*----------*------------*
// | subunit | 0: Special | 1: Branch | 2: Add | 3: logique | 4: shift | 0: load | 1: store |      0     |
// *---------*------------*-----------*--------*------------*----------*---------*----------*------------*
// | intrs   |0  lui      |0  beq     |0 add   |0  slt      |0  sll    |0  lb    |0   sb    |0   csrrw   |
// | intrs   |1  auipc    |1  bne     |1 sub   |1  sltu     |1  srl    |1  lh    |1   sh    |1   csrrs   |
// | intrs   |2  jal      |2  blt     |  addi  |2  xor      |2  sra    |2  lw    |2   sw    |2   csrrc   |
// | intrs   |3  jalr     |3  bge     |        |3  or       |   slli   |3  lbu   |          |    csrrwi  |
// | intrs   |            |4  bltu    |        |4  and      |   srli   |4  lhu   |          |    csrrsi  |
// | intrs   |            |5  bgeu    |        |   slti     |   srai   |         |          |    csrrci  |
// | intrs   |            |           |        |   sltiu    |          |         |          |            |
// | intrs   |            |           |        |   xori     |          |         |          |            |
// | intrs   |            |           |        |   ori      |          |         |          |            |
// | intrs   |            |           |        |   andi     |          |         |          |            |
// *---------*------------*-----------*--------*------------*----------*---------*----------*------------*


always  begin
  illegal_instr = 0;
  imm = 0;
  imm = 0;
  csr = 0;
  fence = 0;
  ecall = 0;
  ebreak = 0;
  calc_j = 0;

  casez (instruction)
    18'b???????????0110111: // LUI
    begin
      unit = 'h0;
      sub_unit = 'h0;
      sel = 'h0;
      imm = 1;
    end
    18'b???????????0010111: // AUIPC
    begin
      unit = 'h0;
      sub_unit = 'h0;
      sel = 'h1;
      imm = 1;
    end
    18'b???????????1101111: // JAL
    begin
      unit = 'h0;
      sub_unit = 'h0;
      sel = 'h2;
      imm = 1;
    end
    18'b????????0001100111: // JALR
    begin
      unit = 'h0;
      sub_unit = 'h0;
      sel = 'h3;
      imm = 1;
      calc_j = 1;
    end
    18'b????????0001100011: // BEQ
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h0;
      imm = 1;
      calc_j = 1;
    end
    18'b????????0011100011: // BNE
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h1;
      imm = 1;
      calc_j = 1;
    end
    18'b????????1001100011: // BLT
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h2;
      imm = 1;
      calc_j = 1;
    end
    18'b????????1011100011: // BGE
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h3;
      imm = 1;
      calc_j = 1;
    end
    18'b????????1101100011: // BLTU
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h4;
      imm = 1;
      calc_j = 1;
    end
    18'b????????1111100011: // BGEU
    begin
      unit = 'h0;
      sub_unit = 'h1;
      sel = 'h5;
      imm = 1;
      calc_j = 1;
    end
    18'b????????0000000011: // LB
    begin
      unit = 'h1;
      sub_unit = 'h0;
      sel = 'h0;
      imm = 1;
    end
    18'b????????0010000011: // LH
    begin
      unit = 'h1;
      sub_unit = 'h0;
      sel = 'h1;
      imm = 1;
    end
    18'b????????0100000011: // LW
    begin
      unit = 'h1;
      sub_unit = 'h0;
      sel = 'h2;
      imm = 1;
    end
    18'b????????1000000011: // LBU
    begin
      unit = 'h1;
      sub_unit = 'h0;
      sel = 'h3;
      imm = 1;
    end
    18'b????????1010000011: // LHU 
    begin
      unit = 'h1;
      sub_unit = 'h0;
      sel = 'h4;
      imm = 1;
    end
    18'b????????0000100011: // SB 
    begin
      unit = 'h1;
      sub_unit = 'h1;
      sel = 'h0;
      imm = 1;
    end
    18'b????????0010100011: // SH 
    begin
      unit = 'h1;
      sub_unit = 'h1;
      sel = 'h1;
      imm = 1;
    end
    18'b????????0100100011: // SW   
    begin
      unit = 'h1;
      sub_unit = 'h1;
      sel = 'h2;
      imm = 1;
    end
    18'b????????0000010011: // ADDI 
    begin
      unit = 'h0;
      sub_unit = 'h2;
      sel = 'h0;
      imm = 1;
    end
    18'b????????0100010011: // SLTI 
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h0;
      imm = 1;
    end
    18'b????????0110010011: // SLTIU 
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h1;
      imm = 1;
    end
    18'b????????1000010011: // XORI 
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h2;
      imm = 1;
    end
    18'b????????1100010011: // ORI   
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h3;
      imm = 1;
    end
    18'b????????1110010011: // ANDI 
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h4;
      imm = 1;
    end
    18'b0000000?0010010011: // SLLI
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h0;
      imm = 1;
    end
    18'b0000000?1010010011: // SRLI
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h1;
      imm = 1;
    end
    18'b0100000?1010010011: // SRAI
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h1;
      imm = 1;
    end
    18'b0000000?0000110011: // ADD
    begin
      unit = 'h0;
      sub_unit = 'h2;
      sel = 'h0;
    end
    18'b0100000?0000110011: // SUB
    begin
      unit = 'h0;
      sub_unit = 'h2;
      sel = 'h1;
    end
    18'b0000000?0010110011: // SLL
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h0;
    end
    18'b0000000?0100110011: // SLT
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h0;
    end
    18'b0000000?0110110011: // SLTU
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h1;
    end
    18'b0000000?1000110011: // XOR
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h2;
    end
    18'b0000000?1010110011: // SRL
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h1;
    end
    18'b0100000?1010110011: // SRA
    begin
      unit = 'h0;
      sub_unit = 'h4;
      sel = 'h2;
    end
    18'b0000000?1100110011: // OR
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h3;
    end
    18'b0000000?1110110011: // AND
    begin
      unit = 'h0;
      sub_unit = 'h3;
      sel = 'h4;
    end
    18'b0000????0000001111: // FENCE
    begin
      fence = 'b1;
    end
    18'b000000000010001111: // FENCE.I
    begin
      fence = 'b1;
      imm = 'b1;
    end
    18'b000000000001110011: // ECALL
    begin
      ecall = 'b1;
    end
    18'b000000010001110011: // EBREAK
    begin
      ebreak = 'b1;
    end
    18'b????????0011110011: // CSRRW
    begin
      csr = 'b1;
      sel = 'b0;
    end
    18'b????????0101110011: // CSRRS
    begin
      csr = 'b1;
      sel = 'b1;
    end
    18'b????????0111110011: // CSRRC
    begin
      csr = 'b1;
      sel = 'b10;
    end
    18'b????????1011110011: // CSRRWI
    begin
      csr = 'b1;
      sel = 'b0;
      imm = 1;
    end
    18'b????????1101110011: // CSRRSI
    begin
      csr = 'b1;
      sel = 'b1;
      imm = 1;
    end
    18'b????????1111110011: // CSRRCI
    begin
      csr = 'b1;
      sel = 'b10;
      imm = 1;
    end
    default:
      illegal_instr = 1;
  endcase
  decode = {unit, sub_unit, sel, imm, csr, fence, ecall, ebreak, illegal_instr, calc_j};
end

endmodule
