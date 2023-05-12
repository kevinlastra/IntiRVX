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
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->pushNamePrefix("tb_cpu ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+90,"imem_adr", false,-1, 31,0);
    tracep->declBus(c+80,"imem_resp", false,-1, 31,0);
    tracep->declBit(c+81,"imem_ack", false,-1);
    tracep->declBit(c+1,"dmem_r_v", false,-1);
    tracep->declBit(c+2,"dmem_w_v", false,-1);
    tracep->declBus(c+3,"dmem_data_adr", false,-1, 31,0);
    tracep->declBus(c+4,"dmem_data", false,-1, 31,0);
    tracep->declBus(c+5,"dmem_strobe", false,-1, 3,0);
    tracep->declBus(c+82,"dmem_resp", false,-1, 31,0);
    tracep->declBit(c+83,"dmem_resp_v", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBus(c+80,"resp_instruction", false,-1, 31,0);
    tracep->declBus(c+90,"adr_instruction", false,-1, 31,0);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"data_adr", false,-1, 31,0);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->declBus(c+5,"strobe", false,-1, 3,0);
    tracep->declBus(c+82,"dmem_resp", false,-1, 31,0);
    tracep->declBit(c+83,"dmem_resp_v", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+6,"data_f2d", false,-1, 31,0);
    tracep->declBit(c+92,"data_valid_f2d", false,-1);
    tracep->declBit(c+92,"ok_d2f", false,-1);
    tracep->declBit(c+92,"data_valid_pg2r", false,-1);
    tracep->declQuad(c+7,"data_pg2r", false,-1, 39,0);
    tracep->declBus(c+9,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+11,"jal_res_o", false,-1, 31,0);
    tracep->declBus(c+90,"target", false,-1, 31,0);
    tracep->declBus(c+90,"pg_target", false,-1, 31,0);
    tracep->declBit(c+92,"pg_target_valide", false,-1);
    tracep->declBit(c+12,"jal_instr_pcc", false,-1);
    tracep->declBit(c+93,"flush_if", false,-1);
    tracep->declBit(c+94,"data_valid_rm2c", false,-1);
    tracep->declBus(c+13,"unit_o", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+15,"sel_o", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBit(c+19,"imm_o", false,-1);
    tracep->declBus(c+20,"immediate_o", false,-1, 31,0);
    tracep->declBit(c+92,"ok_r2p", false,-1);
    tracep->declBit(c+21,"alu_result_v", false,-1);
    tracep->declBus(c+22,"alu_result", false,-1, 31,0);
    tracep->declBit(c+23,"alu_branch", false,-1);
    tracep->declBit(c+24,"ok_alu2r", false,-1);
    tracep->declBit(c+85,"mem_result_v", false,-1);
    tracep->declBus(c+86,"mem_result", false,-1, 31,0);
    tracep->declBit(c+25,"ok_mem2r", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+24,"ok_o", false,-1);
    tracep->declBus(c+13,"unit", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+15,"sel", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+20,"immediate", false,-1, 31,0);
    tracep->declBit(c+19,"imm", false,-1);
    tracep->declBit(c+21,"result_v", false,-1);
    tracep->declBus(c+22,"result", false,-1, 31,0);
    tracep->declBit(c+23,"branch", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+26,"opb", false,-1, 31,0);
    tracep->declBus(c+27,"alu_res", false,-1, 31,0);
    tracep->declBit(c+95,"eq", false,-1);
    tracep->declBit(c+96,"less_than", false,-1);
    tracep->declBit(c+97,"less_than_u", false,-1);
    tracep->declBit(c+98,"greater_eq", false,-1);
    tracep->declBit(c+99,"greater_eq_u", false,-1);
    tracep->declBit(c+28,"diff", false,-1);
    tracep->declBit(c+29,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifetch ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBus(c+90,"target_address", false,-1, 31,0);
    tracep->declBus(c+80,"resp", false,-1, 31,0);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declBus(c+6,"data", false,-1, 31,0);
    tracep->declBit(c+92,"ok", false,-1);
    tracep->declBus(c+90,"target", false,-1, 31,0);
    tracep->declBit(c+93,"flush", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->pushNamePrefix("pipeline_f2d ");
    tracep->declBus(c+91,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBus(c+80,"data_i", false,-1, 31,0);
    tracep->declBit(c+92,"valide", false,-1);
    tracep->declBit(c+93,"flush", false,-1);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declBus(c+6,"data_o", false,-1, 31,0);
    tracep->declBit(c+92,"ok", false,-1);
    tracep->declBus(c+80,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+25,"ok_o", false,-1);
    tracep->declBus(c+13,"unit", false,-1, 1,0);
    tracep->declBus(c+14,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+15,"sel", false,-1, 3,0);
    tracep->declBus(c+16,"rs1", false,-1, 31,0);
    tracep->declBus(c+17,"rs2", false,-1, 31,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+20,"immediate", false,-1, 31,0);
    tracep->declBit(c+19,"imm", false,-1);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"req_adr", false,-1, 31,0);
    tracep->declBus(c+4,"req_data", false,-1, 31,0);
    tracep->declBus(c+5,"req_strobe", false,-1, 3,0);
    tracep->declBit(c+83,"hit", false,-1);
    tracep->declBus(c+84,"mem_res", false,-1, 15,0);
    tracep->declBus(c+86,"result", false,-1, 31,0);
    tracep->declBit(c+85,"result_v", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBit(c+93,"IDLE", false,-1);
    tracep->declBit(c+92,"READ", false,-1);
    tracep->declBit(c+30,"state_c", false,-1);
    tracep->declBit(c+87,"state_n", false,-1);
    tracep->declBus(c+31,"adr", false,-1, 31,0);
    tracep->declBus(c+32,"strobe", false,-1, 3,0);
    tracep->declBit(c+33,"sign_ext", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_control ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBus(c+90,"target", false,-1, 31,0);
    tracep->declBit(c+92,"pg_target_valide", false,-1);
    tracep->declBus(c+90,"pg_target", false,-1, 31,0);
    tracep->declBit(c+12,"jal", false,-1);
    tracep->declBit(c+93,"flush_if", false,-1);
    tracep->declBit(c+93,"alu_target_valide", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_gen ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+92,"instr_valide", false,-1);
    tracep->declBus(c+6,"instruction", false,-1, 31,0);
    tracep->declBit(c+92,"ok_o", false,-1);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declQuad(c+7,"data", false,-1, 39,0);
    tracep->declBit(c+92,"ok_i", false,-1);
    tracep->declBus(c+9,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+10,"jal_res", false,-1, 31,0);
    tracep->declBit(c+92,"next_pc_valide", false,-1);
    tracep->declBus(c+90,"next_pc", false,-1, 31,0);
    tracep->declBit(c+12,"jal_instr", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+34,"decode", false,-1, 14,0);
    tracep->declBus(c+35,"decode_parse_instr", false,-1, 17,0);
    tracep->declBus(c+36,"reg_imm_parse_instr", false,-1, 24,0);
    tracep->declQuad(c+37,"data_i", false,-1, 39,0);
    tracep->declBus(c+100,"start_address", false,-1, 31,0);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->declBit(c+40,"state_c", false,-1);
    tracep->declBit(c+41,"init", false,-1);
    tracep->declBit(c+93,"INIT", false,-1);
    tracep->declBit(c+92,"NEXT", false,-1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+35,"instruction", false,-1, 17,0);
    tracep->declBus(c+34,"decode", false,-1, 14,0);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+42,"unit", false,-1, 1,0);
    tracep->declBus(c+43,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+44,"sel", false,-1, 3,0);
    tracep->declBit(c+45,"imm", false,-1);
    tracep->declBit(c+46,"csr", false,-1);
    tracep->declBit(c+47,"fence", false,-1);
    tracep->declBit(c+48,"ecall", false,-1);
    tracep->declBit(c+49,"ebreak", false,-1);
    tracep->declBit(c+50,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_pg2r ");
    tracep->declBus(c+101,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declQuad(c+37,"data_i", false,-1, 39,0);
    tracep->declBit(c+92,"valide", false,-1);
    tracep->declBit(c+93,"flush", false,-1);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declQuad(c+7,"data_o", false,-1, 39,0);
    tracep->declBit(c+92,"ok", false,-1);
    tracep->declQuad(c+37,"data", false,-1, 39,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_manager ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declQuad(c+7,"data", false,-1, 39,0);
    tracep->declBit(c+92,"ok_o", false,-1);
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
    tracep->declBit(c+92,"ok_i", false,-1);
    tracep->declBus(c+100,"res_data", false,-1, 31,0);
    tracep->declBus(c+102,"res_adr", false,-1, 4,0);
    tracep->declBit(c+93,"res_v", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+51,"rs1_ad", false,-1, 4,0);
    tracep->declBus(c+52,"rs2_ad", false,-1, 4,0);
    tracep->declBus(c+53,"unit", false,-1, 1,0);
    tracep->declBus(c+54,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+55,"sel", false,-1, 3,0);
    tracep->declBit(c+56,"imm", false,-1);
    tracep->declBus(c+57,"instruction", false,-1, 24,0);
    tracep->declArray(c+58,"data_i", false,-1, 142,0);
    tracep->declArray(c+63,"data_o", false,-1, 142,0);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declBus(c+68,"rs1", false,-1, 31,0);
    tracep->declBit(c+69,"rs1_v", false,-1);
    tracep->declBus(c+70,"rs2", false,-1, 31,0);
    tracep->declBit(c+71,"rs2_v", false,-1);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBit(c+73,"rd_v", false,-1);
    tracep->declBus(c+74,"immediate", false,-1, 31,0);
    tracep->declBus(c+75,"s_imm", false,-1, 11,0);
    tracep->declBit(c+76,"s_imm_v", false,-1);
    tracep->declBus(c+77,"l_imm", false,-1, 19,0);
    tracep->declBit(c+78,"l_imm_v", false,-1);
    tracep->declBit(c+79,"pc_instruction", false,-1);
    tracep->pushNamePrefix("pipeline_r2c ");
    tracep->declBus(c+103,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declArray(c+58,"data_i", false,-1, 142,0);
    tracep->declBit(c+92,"valide", false,-1);
    tracep->declBit(c+93,"flush", false,-1);
    tracep->declBit(c+92,"data_valid", false,-1);
    tracep->declArray(c+63,"data_o", false,-1, 142,0);
    tracep->declBit(c+92,"ok", false,-1);
    tracep->declArray(c+58,"data", false,-1, 142,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+93,"w_valid", false,-1);
    tracep->declBus(c+102,"w_ad", false,-1, 4,0);
    tracep->declBus(c+100,"w_data", false,-1, 31,0);
    tracep->declBit(c+69,"r0_valid", false,-1);
    tracep->declBus(c+51,"r0_ad", false,-1, 4,0);
    tracep->declBit(c+71,"r1_valid", false,-1);
    tracep->declBus(c+52,"r1_ad", false,-1, 4,0);
    tracep->declBus(c+68,"r0_data", false,-1, 31,0);
    tracep->declBus(c+70,"r1_data", false,-1, 31,0);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+1,"r_v", false,-1);
    tracep->declBit(c+2,"w_v", false,-1);
    tracep->declBus(c+3,"adr", false,-1, 31,0);
    tracep->declBus(c+4,"data", false,-1, 31,0);
    tracep->declBus(c+5,"strobe", false,-1, 3,0);
    tracep->declBus(c+82,"resp", false,-1, 31,0);
    tracep->declBit(c+83,"ack", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+136,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+137,"NB_CELLS", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+88,"clk", false,-1);
    tracep->declBit(c+89,"rst_n", false,-1);
    tracep->declBit(c+92,"r_v", false,-1);
    tracep->declBit(c+93,"w_v", false,-1);
    tracep->declBus(c+90,"adr", false,-1, 31,0);
    tracep->declBus(c+100,"data", false,-1, 31,0);
    tracep->declBus(c+138,"strobe", false,-1, 3,0);
    tracep->declBus(c+80,"resp", false,-1, 31,0);
    tracep->declBit(c+81,"ack", false,-1);
    tracep->declBus(c+91,"xlen", false,-1, 31,0);
    tracep->declBus(c+136,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+137,"NB_CELLS", false,-1, 31,0);
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
    bufp->fullBit(oldp+12,((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
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
    bufp->fullBit(oldp+21,((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr)))));
    bufp->fullIData(oldp+22,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+23,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch));
    bufp->fullBit(oldp+24,((0U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 0xdU)))));
    bufp->fullBit(oldp+25,((1U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 0xdU)))));
    bufp->fullIData(oldp+26,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb),32);
    bufp->fullIData(oldp+27,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res),32);
    bufp->fullBit(oldp+28,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff));
    bufp->fullBit(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr));
    bufp->fullBit(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c));
    bufp->fullIData(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr),32);
    bufp->fullCData(oldp+32,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe),4);
    bufp->fullBit(oldp+33,((1U & (~ (IData)(((0U == 
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
    bufp->fullSData(oldp+34,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
    bufp->fullIData(oldp+35,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
    bufp->fullIData(oldp+36,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                              >> 7U)),25);
    bufp->fullQData(oldp+37,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                               << 0x19U) | (QData)((IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                            >> 7U))))),40);
    bufp->fullIData(oldp+39,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
    bufp->fullBit(oldp+40,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
    bufp->fullBit(oldp+41,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
    bufp->fullCData(oldp+42,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
    bufp->fullCData(oldp+43,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
    bufp->fullCData(oldp+44,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
    bufp->fullBit(oldp+45,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
    bufp->fullBit(oldp+46,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
    bufp->fullBit(oldp+47,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
    bufp->fullBit(oldp+48,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
    bufp->fullBit(oldp+49,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
    bufp->fullBit(oldp+50,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
    bufp->fullCData(oldp+51,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 8U)))),5);
    bufp->fullCData(oldp+52,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0xdU)))),5);
    bufp->fullCData(oldp+53,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x26U)))),2);
    bufp->fullCData(oldp+54,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x23U)))),3);
    bufp->fullCData(oldp+55,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                              >> 0x1fU)))),4);
    bufp->fullBit(oldp+56,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                          >> 0x1eU)))));
    bufp->fullIData(oldp+57,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
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
    bufp->fullWData(oldp+58,(__Vtemp_h65309a58__0),143);
    bufp->fullWData(oldp+63,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
    bufp->fullIData(oldp+68,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
    bufp->fullBit(oldp+69,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
    bufp->fullIData(oldp+70,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
    bufp->fullBit(oldp+71,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
    bufp->fullCData(oldp+72,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
    bufp->fullBit(oldp+73,(((IData)(((0ULL == (0xc000000000ULL 
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
    bufp->fullIData(oldp+74,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
    bufp->fullSData(oldp+75,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm),12);
    bufp->fullBit(oldp+76,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
    bufp->fullIData(oldp+77,((0xfffffU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 5U)))),20);
    bufp->fullBit(oldp+78,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
    bufp->fullBit(oldp+79,((IData)((0ULL == (0xf800000000ULL 
                                             & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    bufp->fullIData(oldp+80,(vlSelf->tb_cpu__DOT__imem_resp),32);
    bufp->fullBit(oldp+81,(vlSelf->tb_cpu__DOT__imem_ack));
    bufp->fullIData(oldp+82,(vlSelf->tb_cpu__DOT__dmem_resp),32);
    bufp->fullBit(oldp+83,(vlSelf->tb_cpu__DOT__dmem_resp_v));
    bufp->fullSData(oldp+84,((0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)),16);
    bufp->fullBit(oldp+85,(vlSelf->tb_cpu__DOT__cpu__DOT__mem_result_v));
    bufp->fullIData(oldp+86,(vlSelf->tb_cpu__DOT__cpu__DOT__mem_result),32);
    bufp->fullBit(oldp+87,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n));
    bufp->fullBit(oldp+88,(vlSelf->clk));
    bufp->fullBit(oldp+89,(vlSelf->rst_n));
    bufp->fullIData(oldp+90,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->fullIData(oldp+91,(0x20U),32);
    bufp->fullBit(oldp+92,(1U));
    bufp->fullBit(oldp+93,(0U));
    bufp->fullBit(oldp+94,(vlSelf->tb_cpu__DOT__cpu__DOT__data_valid_rm2c));
    bufp->fullBit(oldp+95,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__eq));
    bufp->fullBit(oldp+96,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than));
    bufp->fullBit(oldp+97,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than_u));
    bufp->fullBit(oldp+98,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq));
    bufp->fullBit(oldp+99,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq_u));
    bufp->fullIData(oldp+100,(0U),32);
    bufp->fullIData(oldp+101,(0x28U),32);
    bufp->fullCData(oldp+102,(0U),5);
    bufp->fullIData(oldp+103,(0x8fU),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[3]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[4]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[5]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[6]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[7]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[8]),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[9]),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[10]),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[11]),32);
    bufp->fullIData(oldp+116,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[12]),32);
    bufp->fullIData(oldp+117,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[13]),32);
    bufp->fullIData(oldp+118,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[14]),32);
    bufp->fullIData(oldp+119,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[15]),32);
    bufp->fullIData(oldp+120,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[16]),32);
    bufp->fullIData(oldp+121,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[17]),32);
    bufp->fullIData(oldp+122,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[18]),32);
    bufp->fullIData(oldp+123,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[19]),32);
    bufp->fullIData(oldp+124,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[20]),32);
    bufp->fullIData(oldp+125,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[21]),32);
    bufp->fullIData(oldp+126,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[22]),32);
    bufp->fullIData(oldp+127,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[23]),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[24]),32);
    bufp->fullIData(oldp+129,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[25]),32);
    bufp->fullIData(oldp+130,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[26]),32);
    bufp->fullIData(oldp+131,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[27]),32);
    bufp->fullIData(oldp+132,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[28]),32);
    bufp->fullIData(oldp+133,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[29]),32);
    bufp->fullIData(oldp+134,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[30]),32);
    bufp->fullIData(oldp+135,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[31]),32);
    bufp->fullIData(oldp+136,(8U),32);
    bufp->fullIData(oldp+137,(0x400U),32);
    bufp->fullCData(oldp+138,(0U),4);
}
