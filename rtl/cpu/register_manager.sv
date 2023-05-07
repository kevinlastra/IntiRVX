



module register_manager
(
  // Global interface
  input logic clk,
  input logic rst_n,

  // pc_gen interface
  input logic[32:0] data,
  output logic ok_o
  
  // calculations units interface
  
);




always begin
  ok_o = 1;
end


endmodule