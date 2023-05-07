


module basic_mem
//import system_config::*;
(
    // Global inputs
    input logic clk,
    input logic rst_n,
    input logic[xlen-1:0] adr,

    // Outputs
    output logic[xlen-1:0] resp_data
);
parameter xlen = 32;
parameter CELL_SIZE = 8;
parameter NB_CELLS = 1024;


logic [CELL_SIZE-1:0] data[NB_CELLS-1:0];




always @(negedge clk) begin
  if(rst_n) begin
    resp_data <= {data[adr+3], data[adr+2], data[adr+1], data[adr]};
  end
end

endmodule