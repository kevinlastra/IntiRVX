



module mem
import cpu_parameters::*;
(
  // Global interface
  input logic clk,
	input logic rst_n,

	// Register manager interface
	output logic ok_o,

	input logic[1:0] unit,
	input logic[2:0] sub_unit,
	input logic[3:0] sel,

	input logic[xlen-1:0] rs1,
	input logic[xlen-1:0] rs2,
	input logic[4:0] rd_i,

	input logic[xlen-1:0] immediate,
  input logic imm,

	// Mememory interface 
	output logic r_v,
	output logic w_v,
	output logic[xlen-1:0] req_adr,
	output logic[xlen-1:0] req_data,
	output logic[3:0] req_strobe,

	input logic hit,
	input logic[15:0] mem_res,
  input logic mem_res_error,

	// Write back interface
	output logic[xlen-1:0] result,
	output logic[4:0] rd_o,
	output logic result_v,
	output logic exception,

	input logic ok_i
);

logic[3:0] strobe;

logic sign_ext_i;
logic sign_ext_o;

logic full;
logic pop;

logic data_on_pipe_valid;

logic[$bits(rd_i)+$bits(sign_ext_i)-1:0] pipe_in;
logic[$bits(rd_i)+$bits(sign_ext_i)-1:0] pipe_out;

logic[xlen-1:0] mem_result;
logic[4:0] rd_pipe;

logic[$bits(result)+
      $bits(rd_o)+
      $bits(exception)+
      $bits(result_v)-1:0] data_i, data_o;

always begin
  ok_o = unit == 2'h1;
end

// Request 
always begin
	req_adr = rs1 + immediate;	
	req_data = rs2;
	r_v = unit == 2'h1 && sub_unit == 3'h0;
	w_v = unit == 2'h1 && sub_unit == 3'h1;
	sign_ext_i = !(sub_unit == 3'h0 && (sel == 4'h3 || sel == 4'h4));
end

always begin
	if(sel == 4'h0) begin
		casez (req_adr)
			32'h???????0: req_strobe = 4'b0001;
			32'h???????1: req_strobe = 4'b0010;
			32'h???????2: req_strobe = 4'b0100;
			32'h???????3: req_strobe = 4'b1000; 
		endcase
	end else if(sel == 4'h1) begin
		casez (req_adr)
			32'h???????0: req_strobe = 4'b0011;
			32'h???????1: req_strobe = 4'b0110;
			32'h???????2: req_strobe = 4'b1100; 
		endcase
	end else begin
		req_strobe = 4'b1111;
	end
end


// Answer

always begin
	pipe_in = 
	{
		rd_i,
    sign_ext_i
	};
end

pipe 
  #(
    .DATA_SIZE($bits(pipe_in)),
    .DEPTH(1)
  ) 
answer_pipe
(
  .clk(clk),
  .rst_n(rst_n),
  .pop(pop),
  .full(full),
  .data_i(pipe_in),
  .valid_i(unit == 2'h1),
  .data_o(pipe_out),
  .valid_o(data_on_pipe_valid)
);

always begin
	{
    rd_pipe,
    sign_ext_o
	} = pipe_out;
end

always @(*) begin
  if(hit && data_on_pipe_valid) begin
    if(sign_ext_o)
	  	mem_result = {{16{mem_res[15]}}, mem_res};
	  else
	  	mem_result = {{16{1'b0}}, mem_res};
  end
end

always @(posedge clk) begin
  pop <= hit;
end

// pipeline

always @(*) begin
  data_i = 
  {
    mem_result,
    rd_pipe,
    mem_res_error,
    data_on_pipe_valid
  };
end

fifo #(.DATA_SIZE($bits(data_i))) pipeline_m2w
(
  .clk(clk),
  .rst_n(rst_n),
  .data_i(data_i),
  .flush(0),
  .ok(ok_i),
  .data_o(data_o)
);

always @(*) begin
  {
    result,
    rd_o,
    exception,
    result_v
  } = data_o;
end

endmodule
