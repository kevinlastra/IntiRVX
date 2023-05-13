// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_cpu__Syms.h"


VL_ATTR_COLD void Vtb_cpu___024root__trace_init_sub__TOP__0(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->pushNamePrefix("tb_cpu ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+141,"imem_adr", false,-1, 31,0);
    tracep->declBus(c+98,"imem_resp", false,-1, 31,0);
    tracep->declBit(c+99,"imem_ack", false,-1);
    tracep->declBit(c+1,"dmem_r_v", false,-1);
    tracep->declBit(c+2,"dmem_w_v", false,-1);
    tracep->declBus(c+3,"dmem_data_adr", false,-1, 31,0);
    tracep->declBus(c+4,"dmem_data", false,-1, 31,0);
    tracep->declBus(c+5,"dmem_strobe", false,-1, 3,0);
    tracep->declBus(c+100,"dmem_resp", false,-1, 31,0);
    tracep->declBit(c+101,"dmem_resp_v", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+98,"resp_instruction", false,-1, 31,0);
    tracep->declBus(c+141,"adr_instruction", false,-1, 31,0);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"data_adr", false,-1, 31,0);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->declBus(c+5,"strobe", false,-1, 3,0);
    tracep->declBus(c+100,"dmem_resp", false,-1, 31,0);
    tracep->declBit(c+101,"dmem_resp_v", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+6,"data_f2d", false,-1, 31,0);
    tracep->declBit(c+144,"data_valid_f2d", false,-1);
    tracep->declBit(c+144,"ok_d2f", false,-1);
    tracep->declBit(c+144,"data_valid_pg2r", false,-1);
    tracep->declQuad(c+7,"data_pg2r", false,-1, 39,0);
    tracep->declBus(c+9,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+11,"jal_res_o", false,-1, 31,0);
    tracep->declBus(c+141,"target", false,-1, 31,0);
    tracep->declBus(c+141,"pg_target", false,-1, 31,0);
    tracep->declBit(c+144,"pg_target_valide", false,-1);
    tracep->declBit(c+12,"jal_instr_pcc", false,-1);
    tracep->declBit(c+145,"flush_if", false,-1);
    tracep->declBit(c+146,"data_valid_rm2c", false,-1);
    tracep->declBus(c+13,"unit_o", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+15,"sel_o", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBit(c+19,"imm_o", false,-1);
    tracep->declBus(c+20,"immediate_o", false,-1, 31,0);
    tracep->declBit(c+144,"ok_r2p", false,-1);
    tracep->declBit(c+21,"alu_result_v", false,-1);
    tracep->declBus(c+22,"alu_result", false,-1, 31,0);
    tracep->declBit(c+23,"alu_branch", false,-1);
    tracep->declBus(c+24,"alu_rd", false,-1, 4,0);
    tracep->declBit(c+25,"ok_alu2r", false,-1);
    tracep->declBit(c+26,"mem_result_v", false,-1);
    tracep->declBus(c+27,"mem_result", false,-1, 31,0);
    tracep->declBus(c+28,"mem_rd", false,-1, 4,0);
    tracep->declBit(c+29,"ok_mem2r", false,-1);
    tracep->declBit(c+144,"ok_wb2alu", false,-1);
    tracep->declBit(c+144,"ok_wb2mem", false,-1);
    tracep->declBus(c+30,"wb_res", false,-1, 31,0);
    tracep->declBit(c+31,"wb_res_v", false,-1);
    tracep->declBus(c+32,"wb_rd", false,-1, 4,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+25,"ok_o", false,-1);
    tracep->declBus(c+13,"unit", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+15,"sel", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd_i", false,-1, 4,0);
    tracep->declBus(c+20,"immediate", false,-1, 31,0);
    tracep->declBit(c+19,"imm", false,-1);
    tracep->declBit(c+21,"result_v", false,-1);
    tracep->declBus(c+22,"result", false,-1, 31,0);
    tracep->declBus(c+24,"rd_o", false,-1, 4,0);
    tracep->declBit(c+23,"branch", false,-1);
    tracep->declBit(c+144,"ok_i", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+33,"opb", false,-1, 31,0);
    tracep->declBus(c+34,"alu_res", false,-1, 31,0);
    tracep->declBit(c+35,"res_v", false,-1);
    tracep->declBit(c+36,"branch_v", false,-1);
    tracep->declBus(c+37,"res", false,-1, 31,0);
    tracep->declQuad(c+38,"data_i", false,-1, 38,0);
    tracep->declQuad(c+40,"data_o", false,-1, 38,0);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declBit(c+147,"eq", false,-1);
    tracep->declBit(c+148,"less_than", false,-1);
    tracep->declBit(c+149,"less_than_u", false,-1);
    tracep->declBit(c+150,"greater_eq", false,-1);
    tracep->declBit(c+151,"greater_eq_u", false,-1);
    tracep->declBit(c+42,"diff", false,-1);
    tracep->declBit(c+43,"illegal_instr", false,-1);
    tracep->pushNamePrefix("pipeline_alu2wb ");
    tracep->declBus(c+152,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declQuad(c+38,"data_i", false,-1, 38,0);
    tracep->declBit(c+144,"valide", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declQuad(c+40,"data_o", false,-1, 38,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declQuad(c+38,"data", false,-1, 38,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifetch ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+141,"target_address", false,-1, 31,0);
    tracep->declBus(c+98,"resp", false,-1, 31,0);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declBus(c+6,"data", false,-1, 31,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declBus(c+141,"target", false,-1, 31,0);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->pushNamePrefix("pipeline_f2d ");
    tracep->declBus(c+143,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+98,"data_i", false,-1, 31,0);
    tracep->declBit(c+144,"valide", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declBus(c+6,"data_o", false,-1, 31,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declBus(c+98,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+29,"ok_o", false,-1);
    tracep->declBus(c+13,"unit", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+15,"sel", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd_i", false,-1, 4,0);
    tracep->declBus(c+20,"immediate", false,-1, 31,0);
    tracep->declBit(c+19,"imm", false,-1);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"req_adr", false,-1, 31,0);
    tracep->declBus(c+4,"req_data", false,-1, 31,0);
    tracep->declBus(c+5,"req_strobe", false,-1, 3,0);
    tracep->declBit(c+101,"hit", false,-1);
    tracep->declBus(c+102,"mem_res", false,-1, 15,0);
    tracep->declBus(c+27,"result", false,-1, 31,0);
    tracep->declBus(c+28,"rd_o", false,-1, 4,0);
    tracep->declBit(c+26,"result_v", false,-1);
    tracep->declBit(c+144,"ok_i", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declQuad(c+90,"data_i", false,-1, 37,0);
    tracep->declQuad(c+44,"data_o", false,-1, 37,0);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declBit(c+145,"IDLE", false,-1);
    tracep->declBit(c+144,"READ", false,-1);
    tracep->declBit(c+46,"state_c", false,-1);
    tracep->declBit(c+135,"state_n", false,-1);
    tracep->declBus(c+47,"adr", false,-1, 31,0);
    tracep->declBus(c+48,"strobe", false,-1, 3,0);
    tracep->declBit(c+49,"sign_ext", false,-1);
    tracep->declBus(c+136,"mem_result", false,-1, 31,0);
    tracep->declBit(c+137,"mem_result_v", false,-1);
    tracep->pushNamePrefix("pipeline_pg2r ");
    tracep->declBus(c+153,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declQuad(c+90,"data_i", false,-1, 37,0);
    tracep->declBit(c+144,"valide", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declQuad(c+44,"data_o", false,-1, 37,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declQuad(c+90,"data", false,-1, 37,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_control ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+141,"target", false,-1, 31,0);
    tracep->declBit(c+144,"pg_target_valide", false,-1);
    tracep->declBus(c+141,"pg_target", false,-1, 31,0);
    tracep->declBit(c+12,"jal", false,-1);
    tracep->declBit(c+145,"flush_if", false,-1);
    tracep->declBit(c+145,"alu_target_valide", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_gen ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+144,"instr_valide", false,-1);
    tracep->declBus(c+6,"instruction", false,-1, 31,0);
    tracep->declBit(c+144,"ok_o", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declQuad(c+7,"data", false,-1, 39,0);
    tracep->declBit(c+144,"ok_i", false,-1);
    tracep->declBus(c+9,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_res", false,-1, 31,0);
    tracep->declBit(c+144,"next_pc_valide", false,-1);
    tracep->declBus(c+141,"next_pc", false,-1, 31,0);
    tracep->declBit(c+12,"jal_instr", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+50,"decode", false,-1, 14,0);
    tracep->declBus(c+51,"decode_parse_instr", false,-1, 17,0);
    tracep->declBus(c+52,"reg_imm_parse_instr", false,-1, 24,0);
    tracep->declBus(c+142,"jal_imm", false,-1, 31,0);
    tracep->declQuad(c+53,"data_i", false,-1, 39,0);
    tracep->declBus(c+154,"start_address", false,-1, 31,0);
    tracep->declBus(c+55,"pc", false,-1, 31,0);
    tracep->declBit(c+56,"state_c", false,-1);
    tracep->declBit(c+57,"init", false,-1);
    tracep->declBit(c+145,"INIT", false,-1);
    tracep->declBit(c+144,"NEXT", false,-1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+51,"instruction", false,-1, 17,0);
    tracep->declBus(c+50,"decode", false,-1, 14,0);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+58,"unit", false,-1, 1,0);
    tracep->declBus(c+59,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+60,"sel", false,-1, 3,0);
    tracep->declBit(c+61,"imm", false,-1);
    tracep->declBit(c+62,"csr", false,-1);
    tracep->declBit(c+63,"fence", false,-1);
    tracep->declBit(c+64,"ecall", false,-1);
    tracep->declBit(c+65,"ebreak", false,-1);
    tracep->declBit(c+66,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_pg2r ");
    tracep->declBus(c+155,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declQuad(c+53,"data_i", false,-1, 39,0);
    tracep->declBit(c+144,"valide", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declQuad(c+7,"data_o", false,-1, 39,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declQuad(c+53,"data", false,-1, 39,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_manager ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declQuad(c+7,"data", false,-1, 39,0);
    tracep->declBit(c+144,"ok_o", false,-1);
    tracep->declBus(c+9,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+13,"unit_o", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+15,"sel_o", false,-1, 3,0);
    tracep->declBus(c+16,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+17,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+18,"rd_o", false,-1, 4,0);
    tracep->declBit(c+19,"imm_o", false,-1);
    tracep->declBus(c+20,"immediate_o", false,-1, 31,0);
    tracep->declBus(c+11,"jal_res_o", false,-1, 31,0);
    tracep->declBit(c+144,"ok_i", false,-1);
    tracep->declBus(c+30,"res_data", false,-1, 31,0);
    tracep->declBus(c+32,"res_adr", false,-1, 4,0);
    tracep->declBit(c+31,"res_v", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+67,"rs1_ad", false,-1, 4,0);
    tracep->declBus(c+68,"rs2_ad", false,-1, 4,0);
    tracep->declBus(c+69,"unit", false,-1, 1,0);
    tracep->declBus(c+70,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+71,"sel", false,-1, 3,0);
    tracep->declBit(c+72,"imm", false,-1);
    tracep->declBus(c+73,"instruction", false,-1, 24,0);
    tracep->declArray(c+92,"data_i", false,-1, 142,0);
    tracep->declArray(c+74,"data_o", false,-1, 142,0);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declBus(c+97,"rs1", false,-1, 31,0);
    tracep->declBit(c+79,"rs1_v", false,-1);
    tracep->declBus(c+138,"rs2", false,-1, 31,0);
    tracep->declBit(c+80,"rs2_v", false,-1);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBit(c+82,"rd_v", false,-1);
    tracep->declBus(c+83,"immediate", false,-1, 31,0);
    tracep->declBus(c+84,"s_imm", false,-1, 11,0);
    tracep->declBit(c+85,"s_imm_v", false,-1);
    tracep->declBus(c+86,"l_imm", false,-1, 19,0);
    tracep->declBit(c+87,"l_imm_v", false,-1);
    tracep->declBit(c+88,"pc_instruction", false,-1);
    tracep->pushNamePrefix("pipeline_r2c ");
    tracep->declBus(c+156,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declArray(c+92,"data_i", false,-1, 142,0);
    tracep->declBit(c+144,"valide", false,-1);
    tracep->declBit(c+145,"flush", false,-1);
    tracep->declBit(c+144,"data_valid", false,-1);
    tracep->declArray(c+74,"data_o", false,-1, 142,0);
    tracep->declBit(c+144,"ok", false,-1);
    tracep->declArray(c+92,"data", false,-1, 142,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+31,"w_valid", false,-1);
    tracep->declBus(c+32,"w_ad", false,-1, 4,0);
    tracep->declBus(c+30,"w_data", false,-1, 31,0);
    tracep->declBit(c+79,"r0_valid", false,-1);
    tracep->declBus(c+67,"r0_ad", false,-1, 4,0);
    tracep->declBit(c+80,"r1_valid", false,-1);
    tracep->declBus(c+68,"r1_ad", false,-1, 4,0);
    tracep->declBus(c+97,"r0_data", false,-1, 31,0);
    tracep->declBus(c+138,"r1_data", false,-1, 31,0);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+103+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("write_back ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBus(c+22,"alu_res", false,-1, 31,0);
    tracep->declBus(c+24,"alu_rd", false,-1, 4,0);
    tracep->declBit(c+21,"alu_res_v", false,-1);
    tracep->declBit(c+144,"alu_ok", false,-1);
    tracep->declBus(c+27,"mem_res", false,-1, 31,0);
    tracep->declBus(c+28,"mem_rd", false,-1, 4,0);
    tracep->declBit(c+26,"mem_res_v", false,-1);
    tracep->declBit(c+144,"mem_ok", false,-1);
    tracep->declBus(c+30,"result", false,-1, 31,0);
    tracep->declBus(c+32,"rd", false,-1, 4,0);
    tracep->declBit(c+31,"result_v", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+89,"res_v", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"adr", false,-1, 31,0);
    tracep->declBus(c+4,"data", false,-1, 31,0);
    tracep->declBus(c+5,"strobe", false,-1, 3,0);
    tracep->declBus(c+100,"resp", false,-1, 31,0);
    tracep->declBit(c+101,"ack", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+157,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+158,"NB_CELLS", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+139,"clk", false,-1);
    tracep->declBit(c+140,"rst_n", false,-1);
    tracep->declBit(c+144,"r_v", false,-1);
    tracep->declBit(c+145,"w_v", false,-1);
    tracep->declBus(c+141,"adr", false,-1, 31,0);
    tracep->declBus(c+154,"data", false,-1, 31,0);
    tracep->declBus(c+159,"strobe", false,-1, 3,0);
    tracep->declBus(c+98,"resp", false,-1, 31,0);
    tracep->declBit(c+99,"ack", false,-1);
    tracep->declBus(c+143,"xlen", false,-1, 31,0);
    tracep->declBus(c+157,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+158,"NB_CELLS", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_init_top(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_init_top\n"); );
    // Body
    Vtb_cpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_cpu___024root__trace_register(Vtb_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_cpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_cpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_cpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_full_top_0\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_cpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cpu___024root__trace_full_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h65309a58__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_cpu__DOT__dmem_r_v));
    bufp->fullBit(oldp+2,(vlSelf->tb_cpu__DOT__dmem_w_v));
    bufp->fullIData(oldp+3,(vlSelf->tb_cpu__DOT__dmem_data_adr),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_cpu__DOT__dmem_data),32);
    bufp->fullCData(oldp+5,(vlSelf->tb_cpu__DOT__dmem_strobe),4);
    bufp->fullIData(oldp+6,(vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d),32);
    bufp->fullQData(oldp+7,(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r),40);
    bufp->fullIData(oldp+9,(vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc),32);
    bufp->fullIData(oldp+10,(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U]),32);
    bufp->fullBit(oldp+12,((0xa0U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
    bufp->fullCData(oldp+13,((3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                    >> 0xdU))),2);
    bufp->fullCData(oldp+14,((7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                    >> 0xaU))),3);
    bufp->fullCData(oldp+15,((0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 6U))),4);
    bufp->fullIData(oldp+16,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                               << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                            >> 6U))),32);
    bufp->fullIData(oldp+17,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                               << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                            >> 6U))),32);
    bufp->fullCData(oldp+18,((0x1fU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                       >> 1U))),5);
    bufp->fullBit(oldp+19,((1U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])));
    bufp->fullIData(oldp+20,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]),32);
    bufp->fullBit(oldp+21,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                          >> 0x25U)))));
    bufp->fullIData(oldp+22,((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o)),32);
    bufp->fullBit(oldp+23,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                          >> 0x26U)))));
    bufp->fullCData(oldp+24,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                               >> 0x20U)))),5);
    bufp->fullBit(oldp+25,((0U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 0xdU)))));
    bufp->fullBit(oldp+26,((1U & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o))));
    bufp->fullIData(oldp+27,((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                      >> 6U))),32);
    bufp->fullCData(oldp+28,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                               >> 1U)))),5);
    bufp->fullBit(oldp+29,((1U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 0xdU)))));
    bufp->fullIData(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_res),32);
    bufp->fullBit(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_res_v));
    bufp->fullCData(oldp+32,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_rd),5);
    bufp->fullIData(oldp+33,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res),32);
    bufp->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr)))));
    bufp->fullBit(oldp+36,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__branch_v));
    bufp->fullIData(oldp+37,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__res),32);
    bufp->fullQData(oldp+38,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__branch_v)) 
                               << 0x26U) | (((QData)((IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr))))) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                                    >> 1U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__res)))))),39);
    bufp->fullQData(oldp+40,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o),39);
    bufp->fullBit(oldp+42,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff));
    bufp->fullBit(oldp+43,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr));
    bufp->fullQData(oldp+44,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o),38);
    bufp->fullBit(oldp+46,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c));
    bufp->fullIData(oldp+47,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr),32);
    bufp->fullCData(oldp+48,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe),4);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(((0U == 
                                              (0x1c00U 
                                               & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) 
                                             & ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                     >> 6U))) 
                                                | (4U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                       >> 6U))))))))));
    bufp->fullSData(oldp+50,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
    bufp->fullIData(oldp+51,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
    bufp->fullIData(oldp+52,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                              >> 7U)),25);
    bufp->fullQData(oldp+53,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                               << 0x19U) | (QData)((IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                            >> 7U))))),40);
    bufp->fullIData(oldp+55,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
    bufp->fullBit(oldp+56,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
    bufp->fullBit(oldp+57,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
    bufp->fullCData(oldp+58,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
    bufp->fullCData(oldp+59,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
    bufp->fullCData(oldp+60,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
    bufp->fullBit(oldp+61,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
    bufp->fullBit(oldp+62,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
    bufp->fullBit(oldp+63,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
    bufp->fullBit(oldp+64,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
    bufp->fullBit(oldp+65,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
    bufp->fullBit(oldp+66,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
    bufp->fullCData(oldp+67,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 8U)))),5);
    bufp->fullCData(oldp+68,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0xdU)))),5);
    bufp->fullCData(oldp+69,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x26U)))),2);
    bufp->fullCData(oldp+70,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x23U)))),3);
    bufp->fullCData(oldp+71,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                              >> 0x1fU)))),4);
    bufp->fullBit(oldp+72,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                          >> 0x1eU)))));
    bufp->fullIData(oldp+73,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
    bufp->fullWData(oldp+74,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
    bufp->fullBit(oldp+79,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
    bufp->fullBit(oldp+80,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
    bufp->fullCData(oldp+81,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
    bufp->fullBit(oldp+82,(((IData)(((0ULL == (0xc000000000ULL 
                                               & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)) 
                                     & (1U != (7U & (IData)(
                                                            (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                             >> 0x23U)))))) 
                            | (IData)(((0x4000000000ULL 
                                        == (0xc000000000ULL 
                                            & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)) 
                                       & (1U != (7U 
                                                 & (IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                            >> 0x23U)))))))));
    bufp->fullIData(oldp+83,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
    bufp->fullSData(oldp+84,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm),12);
    bufp->fullBit(oldp+85,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
    bufp->fullIData(oldp+86,((0xfffffU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 5U)))),20);
    bufp->fullBit(oldp+87,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
    bufp->fullBit(oldp+88,((IData)((0ULL == (0xf800000000ULL 
                                             & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    bufp->fullCData(oldp+89,(vlSelf->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v),2);
    bufp->fullQData(oldp+90,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result)) 
                               << 6U) | (QData)((IData)(
                                                        ((0x3eU 
                                                          & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U]) 
                                                         | (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v)))))),38);
    __Vtemp_h65309a58__0[0U] = (IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))));
    __Vtemp_h65309a58__0[1U] = (IData)(((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))) 
                                        >> 0x20U));
    __Vtemp_h65309a58__0[2U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 << 6U) | ((0x3eU & 
                                            ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r) 
                                             << 1U)) 
                                           | (1U & (IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                            >> 0x1eU)))));
    __Vtemp_h65309a58__0[3U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h65309a58__0[4U] = ((0x6000U & ((IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 0x26U)) 
                                            << 0xdU)) 
                                | ((0x1c00U & ((IData)(
                                                       (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                        >> 0x23U)) 
                                               << 0xaU)) 
                                   | ((0x3c0U & ((IData)(
                                                         (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                          >> 0x1fU)) 
                                                 << 6U)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    bufp->fullWData(oldp+92,(__Vtemp_h65309a58__0),143);
    bufp->fullIData(oldp+97,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_cpu__DOT__imem_resp),32);
    bufp->fullBit(oldp+99,(vlSelf->tb_cpu__DOT__imem_ack));
    bufp->fullIData(oldp+100,(vlSelf->tb_cpu__DOT__dmem_resp),32);
    bufp->fullBit(oldp+101,(vlSelf->tb_cpu__DOT__dmem_resp_v));
    bufp->fullSData(oldp+102,((0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)),16);
    bufp->fullIData(oldp+103,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[4]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[5]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[6]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[7]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[8]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[9]),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[10]),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[11]),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[12]),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[13]),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[14]),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[15]),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[16]),32);
    bufp->fullIData(oldp+120,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[17]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[18]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[19]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[20]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[21]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[22]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[23]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[24]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[25]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[26]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[27]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[28]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[29]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[30]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[31]),32);
    bufp->fullBit(oldp+135,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n));
    bufp->fullIData(oldp+136,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result),32);
    bufp->fullBit(oldp+137,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v));
    bufp->fullIData(oldp+138,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
    bufp->fullBit(oldp+139,(vlSelf->clk));
    bufp->fullBit(oldp+140,(vlSelf->rst_n));
    bufp->fullIData(oldp+141,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->fullIData(oldp+142,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm),32);
    bufp->fullIData(oldp+143,(0x20U),32);
    bufp->fullBit(oldp+144,(1U));
    bufp->fullBit(oldp+145,(0U));
    bufp->fullBit(oldp+146,(vlSelf->tb_cpu__DOT__cpu__DOT__data_valid_rm2c));
    bufp->fullBit(oldp+147,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__eq));
    bufp->fullBit(oldp+148,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than));
    bufp->fullBit(oldp+149,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than_u));
    bufp->fullBit(oldp+150,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq));
    bufp->fullBit(oldp+151,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq_u));
    bufp->fullIData(oldp+152,(0x27U),32);
    bufp->fullIData(oldp+153,(0x26U),32);
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(0x28U),32);
    bufp->fullIData(oldp+156,(0x8fU),32);
    bufp->fullIData(oldp+157,(8U),32);
    bufp->fullIData(oldp+158,(0x400U),32);
    bufp->fullCData(oldp+159,(0U),4);
}
