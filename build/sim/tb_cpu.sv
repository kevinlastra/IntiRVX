




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
  cache_32x4 #(.BASE_ADDRESSE(10000), .SIZE(2048)) imem
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

  cache_32x4 #(.BASE_ADDRESSE(20000), .SIZE(2048)) dmem
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

  parameter size = 8192;
  logic[7:0] data[size-1:0];

  int j = 0;
  initial begin
    $display("Loading memory.");
    
    $readmemh("../../software/tests/ihex", data);

    for(int i = 0; i < size; i++) begin
      imem.mem[i][7:0] = data[i+j];    
      imem.mem[i][15:8] = data[i+j+1]; 
      imem.mem[i][23:16] = data[i+j+2];
      imem.mem[i][31:24] = data[i+j+3];
      j = j + 3;
    end
    
    $readmemh("../../software/tests/dhex", data);      

    j = 0;
    for(int i = 0; i < size; i++) begin
      dmem.mem[i][7:0] = data[i+j];    
      dmem.mem[i][15:8] = data[i+j+1]; 
      dmem.mem[i][23:16] = data[i+j+2];
      dmem.mem[i][31:24] = data[i+j+3];
      j = j + 3;
    end
  end


  always begin
    if(cpu.mem.req_adr == 'h0 && cpu.mem.w_v) begin
      $display("Program exit with status %d", cpu.register_manager.register_file.register[10]);
      $finish;
    end
  end


endmodule
