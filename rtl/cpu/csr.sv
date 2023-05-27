

module csr
import cpu_parameters::*;
import csr_pkg::*;
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // Register manager interface
  output logic ok_o,

  input logic[1:0] unit,
  input logic[3:0] sel,
  input logic imm,

  input logic[xlen-1:0] rs1,
  input logic[11:0] csr_adr,
  input logic[4:0] rd_i,

  // Write back interface
  output logic result_v,
  output logic[xlen-1:0] result,
  output logic[4:0] rd_o,
  output logic csr_exception,
  input logic ok_i
);

logic[xlen-1:0] clear_mask1, clear_mask2;
logic csr_fault;

logic result_valid;

logic[xlen-1:0] csr_value;

logic[38:0] data_i, data_o;

 // TODO: csr_q, csr_d

/* verilator lint_off UNOPTFLAT */
logic[xlen-1:0] mcause_q, mcause_d;

//mhartid, mtvec, medeleg, mideleg, mie, mstatus, mepc
/* verilator lint_on UNOPTFLAT */

always begin
  clear_mask1 = sel[0] ? 32'hFFFFFFFF : 'h0;
  clear_mask2 = sel[1] ? 32'hFFFFFFFF : 'h0;
end

always @(posedge clk && posedge rst_n) begin
  if(!rst_n) begin
    mcause_d = '0;
  end else begin
    mcause_d = mcause_q;
  end
end

// Write
always begin
  csr_fault = '0; 
  mcause_q = mcause_d;

  case (csr_adr)
    MCAUSE : 
      mcause_q = write_csr(mcause_d, MCAUSE_MSK, rs1, clear_mask1, clear_mask2);
    default: 
      csr_fault = '1;
  endcase
end

// Read
always begin
  case (csr_adr)
    MCAUSE : 
      csr_value = mcause_d;
    default: 
      csr_fault = '1;
  endcase
end

always begin
  data_i = 
  {
    csr_value,
    rd_i,
    result_valid,
    csr_fault
  };
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_csr2wb
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .flush(0),
  .ok(ok_i),
  .data_o(data_o)
);

always begin
  {
    result,
    rd_o,
    result_v,
    csr_exception
  } = data_o;
end

always begin
  ok_o = unit == 2'h0;
  result_valid = unit == 2'h0;
end

endmodule