



module fifo 
#(parameter DATA_SIZE = 32)
(
  // Global interace
  input logic clk,
  input logic rst_n,

  // input
  input logic[DATA_SIZE-1:0] data_i,
  input logic valide,
  input logic flush,

  // output
  output logic[DATA_SIZE-1:0] data_o,
  input logic ok
);


// local variables
logic[DATA_SIZE-1:0] data;

// 

always_ff @(posedge clk) begin
  if(rst_n && ok) begin
    data_o <= data;
  end
end

always begin
  if(flush) begin
    data = 'h0;    // bubble
  end else if(valide) begin
    data = data_i;
  end
end

endmodule
