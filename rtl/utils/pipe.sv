



module pipeline
#(
  parameter DATA_SIZE = 1,
  parameter DEPTH = 1
)
(
  // Global interface
  input logic clk,
  input logic rst_n,

  input logic[DATA_SIZE-1:0] data_i,
  input logic valid_i,
  output logic ready_o,

  output logic[DATA_SIZE-1:0] data_o,
  output logic valid_o,
  input logic ready_i

  input logic flush;
);

  initial begin
    assert (DEPTH < 1) $display("Pipe DEPTH shall be greater or equal than 1");
  end

generate if(DEPTH == 1) begin

  logic[DATA_SIZE-1:0] data;
  logic valid;
  logic ready;

  always @(*) begin
    if(valid_i) begin
      data = data_i;  
      valid = valid_i;
      ready = ready_i;
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if(rst_n or flush) begin
      data_o = '0;
      valid_o = 0;
      ready_o = 0;
    end else begin
      data_o = data;
      valid_o = valid;
      ready_o = ready;
    end
  end

end if(DEPTH > 1) begin

  logic[DATA_SIZE-1:0] data[DEPTH-1:0];
  logic valid[DEPTH-1:0];

  logic full;
  logic empty;

  always @(*) begin
    full = valid[DEPTH-1];
    empty = !valid[0];
  end

  always @(*) begin
    ready_o = !full;
  end

  // Input
  always @(*) begin
    if(!full && valid_i) begin
      data[DEPTH-1] = data_i;
      valid[DEPTH-1] = valid_i;
    end
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if(rst_n or flush) begin
      data_o = '0;
      valid_o = 0;
      ready_o = 0;
    end else begin
      for(int i = 0; i < DEPTH-1; i++) begin
        if(valid[i+1] && !valid[i]) begin
          data[i] = data[i+1];  
          valid[i] = valid[i+1];
          valid[i+1] = 0;
        end
      end

      data_o = data[0];
      valid_o = valid[0];
    end
  end

end endgenerate
  
endmodule