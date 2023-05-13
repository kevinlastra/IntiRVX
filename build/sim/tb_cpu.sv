




module tb_cpu
(
  input logic clk,
  input logic rst_n
);
  parameter xlen = 32;


  // imem
  logic [xlen-1:0] imem_adr;
  logic [xlen-1:0] imem_resp;
  logic imem_ack;

  // dmem
  logic dmem_r_v;
  logic dmem_w_v;
  logic[xlen-1:0] dmem_data_adr;
  logic[xlen-1:0] dmem_data;
  logic[3:0] dmem_strobe;

  logic[xlen-1:0] dmem_resp;
  logic dmem_resp_v;
  // CPU
  cpu cpu 
  (
    .clk(clk),
    .rst_n(rst_n),
    .resp_instruction(imem_resp),
    .adr_instruction(imem_adr),
    .r_v(dmem_r_v),
    .w_v(dmem_w_v),
    .data_adr(dmem_data_adr),
    .data_o(dmem_data),
    .strobe(dmem_strobe),
    .dmem_resp(dmem_resp),
    .dmem_resp_v(dmem_resp_v)
  );

  // memory
  basic_mem imem
  (
    .clk(clk),
    .rst_n(rst_n),
    .r_v(1),
    .w_v(0),
    .adr(imem_adr),
    .data(32'h0),
    .strobe(0),
    .resp(imem_resp),
    .ack(imem_ack)
  );

  basic_mem dmem
  (
    .clk(clk),
    .rst_n(rst_n),
    .r_v(dmem_r_v),
    .w_v(dmem_w_v),
    .adr(dmem_data_adr),
    .data(dmem_data),
    .strobe(dmem_strobe),
    .resp(dmem_resp),
    .ack(dmem_resp_v)
  );


  initial begin
    $display("Loading memory.");
    
    $readmemh("../../software/tests/ihex", imem.mem);
    $readmemh("../../software/tests/dhex", dmem.mem);      
  end


  always begin
    if(cpu.mem.req_adr == 'h0 && cpu.mem.w_v) begin
      $display("Program exit with status %d", cpu.register_manager.register_file.register[10]);
      $finish();
    end
  end


endmodule
