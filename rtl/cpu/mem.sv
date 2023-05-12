



module mem
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
	input logic[4:0] rd,

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

	// Result Output
	output logic[xlen-1:0] result,
	output logic result_v
);

parameter xlen = 32;

logic IDLE = 1'h0;
logic READ = 1'h1;

logic state_c;
logic state_n;

logic[xlen-1:0] adr;
logic[3:0] strobe;
logic sign_ext;

always begin
	adr = rs1 + immediate;	
end

always begin
	sign_ext = !(sub_unit == 3'h0 && (sel == 4'h3 || sel == 4'h4));
end

always begin
	if(sel == 4'h0) begin
		casez (adr)
			32'h???????0: strobe = 4'b0001;
			32'h???????1: strobe = 4'b0010;
			32'h???????2: strobe = 4'b0100;
			32'h???????3: strobe = 4'b1000; 
		endcase
	end else if(sel == 4'h1) begin
		casez (adr)
			32'h???????0: strobe = 4'b0011;
			32'h???????1: strobe = 4'b0110;
			32'h???????2: strobe = 4'b1100; 
		endcase
	end else begin
		strobe = 4'b1111;
	end
end

always begin
	case (state_c)
		IDLE : begin
			req_adr = adr;
			req_strobe = strobe;
			req_data = rs2;
			r_v = sub_unit == 3'h0;
			w_v = sub_unit == 3'h1;
		end
		READ : begin
			if(sign_ext)
				result = {{16{mem_res[15]}}, mem_res};
			else
				result = {{16{1'b0}}, mem_res};
			result_v = hit;
		end
	endcase
end

always begin
	case (state_c)
		IDLE : begin 
			if(sub_unit == 3'h0) begin
				state_n = READ;
			end else begin 
				state_n = IDLE;
			end
		end
		READ : begin
			if(hit)
				state_n = IDLE;
			else
				state_n = READ;
		end
	endcase
end

always @(posedge clk) begin
	if(rst_n) begin
		state_c <= state_n;
	end else begin
		state_c <= IDLE;
	end
end

always begin
  ok_o = unit == 2'h1;
end

endmodule
