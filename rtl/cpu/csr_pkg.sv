

package csr_pkg;
import cpu_parameters::*;

  localparam MCAUSE = 12'h342;
  localparam MCAUSE_MSK = 32'hFFFFFFFF;



  function logic[xlen-1:0] write_csr
  (
    // Value saved on the csr register
    logic[xlen-1:0] csr, 

    // Modifiable bits of the csr register
    logic[xlen-1:0] mask, 

    // Data to apply on the csr register
    logic[xlen-1:0] rs1, 

    // Selection mask 1
    logic[xlen-1:0] clear_mask1, 

    // Selection mask 2
    logic[xlen-1:0] clear_mask2
  );  
    return ((((csr & clear_mask1) | rs1) & clear_mask2) | ((csr & ~rs1) & ~clear_mask2)) & mask;
  endfunction

endpackage