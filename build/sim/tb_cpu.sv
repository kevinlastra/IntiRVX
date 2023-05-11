




module tb_cpu
(
  input logic clk,
  input logic rst_n
);
  parameter xlen = 32;
  // Debug
  //logic [32:0] counter;


  logic [xlen-1:0] adr;
  logic [xlen-1:0] resp_data = 32'h0;
  // MODULES:

  // CPU
  cpu cpu 
  (
    clk,
    rst_n,
    resp_data,
    adr
  );

  // memory
  basic_mem mem
  (
    clk,
    rst_n,
    adr,
    resp_data
  );
  integer i;
  integer j;
  initial begin
    $display("Loading memory.");
    
    $readmemh("../../software/tests/ihex", mem.data);      
  end


endmodule
