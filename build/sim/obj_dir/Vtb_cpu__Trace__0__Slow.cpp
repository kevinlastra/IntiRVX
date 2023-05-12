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
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->pushNamePrefix("tb_cpu ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+67,"adr", false,-1, 31,0);
    tracep->declBus(c+68,"resp_data", false,-1, 31,0);
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->declBus(c+71,"j", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+68,"resp_data", false,-1, 31,0);
    tracep->declBus(c+67,"adr", false,-1, 31,0);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+1,"data_f2d", false,-1, 31,0);
    tracep->declBit(c+72,"data_valid_f2d", false,-1);
    tracep->declBit(c+72,"ok_d2f", false,-1);
    tracep->declBit(c+72,"data_valid_pg2r", false,-1);
    tracep->declQuad(c+2,"data_pg2r", false,-1, 39,0);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+6,"jal_res_o", false,-1, 31,0);
    tracep->declBus(c+67,"target", false,-1, 31,0);
    tracep->declBus(c+67,"pg_target", false,-1, 31,0);
    tracep->declBit(c+72,"pg_target_valide", false,-1);
    tracep->declBit(c+7,"jal_instr_pcc", false,-1);
    tracep->declBit(c+73,"flush_if", false,-1);
    tracep->declBit(c+74,"data_valid_rm2c", false,-1);
    tracep->declBus(c+8,"unit_o", false,-1, 1,0);
    tracep->declBus(c+9,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+10,"sel_o", false,-1, 3,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+12,"rs2", false,-1, 31,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBit(c+72,"ok_r2p", false,-1);
    tracep->declBit(c+14,"ok_alu2r", false,-1);
    tracep->declBus(c+15,"alu_result", false,-1, 31,0);
    tracep->declBit(c+16,"alu_branch", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBit(c+14,"ok_o", false,-1);
    tracep->declBus(c+8,"unit", false,-1, 1,0);
    tracep->declBus(c+9,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+10,"sel", false,-1, 3,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+12,"rs2", false,-1, 31,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+15,"result", false,-1, 31,0);
    tracep->declBit(c+16,"branch", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+17,"opb", false,-1, 31,0);
    tracep->declBus(c+18,"alu_res", false,-1, 31,0);
    tracep->declBit(c+75,"eq", false,-1);
    tracep->declBit(c+76,"less_than", false,-1);
    tracep->declBit(c+77,"less_than_u", false,-1);
    tracep->declBit(c+78,"greater_eq", false,-1);
    tracep->declBit(c+79,"greater_eq_u", false,-1);
    tracep->declBit(c+19,"diff", false,-1);
    tracep->declBit(c+20,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifetch ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+67,"target_address", false,-1, 31,0);
    tracep->declBus(c+68,"resp", false,-1, 31,0);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBit(c+72,"ok", false,-1);
    tracep->declBus(c+67,"target", false,-1, 31,0);
    tracep->declBit(c+73,"flush", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->pushNamePrefix("pipeline_f2d ");
    tracep->declBus(c+69,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+68,"data_i", false,-1, 31,0);
    tracep->declBit(c+72,"valide", false,-1);
    tracep->declBit(c+73,"flush", false,-1);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declBus(c+1,"data_o", false,-1, 31,0);
    tracep->declBit(c+72,"ok", false,-1);
    tracep->declBus(c+68,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_control ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+67,"target", false,-1, 31,0);
    tracep->declBit(c+72,"pg_target_valide", false,-1);
    tracep->declBus(c+67,"pg_target", false,-1, 31,0);
    tracep->declBit(c+7,"jal", false,-1);
    tracep->declBit(c+73,"flush_if", false,-1);
    tracep->declBit(c+73,"alu_target_valide", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_gen ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBit(c+72,"instr_valide", false,-1);
    tracep->declBus(c+1,"instruction", false,-1, 31,0);
    tracep->declBit(c+72,"ok_o", false,-1);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declQuad(c+2,"data", false,-1, 39,0);
    tracep->declBit(c+72,"ok_i", false,-1);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res", false,-1, 31,0);
    tracep->declBit(c+72,"next_pc_valide", false,-1);
    tracep->declBus(c+67,"next_pc", false,-1, 31,0);
    tracep->declBit(c+7,"jal_instr", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+21,"decode", false,-1, 14,0);
    tracep->declBus(c+22,"decode_parse_instr", false,-1, 17,0);
    tracep->declBus(c+23,"reg_imm_parse_instr", false,-1, 24,0);
    tracep->declQuad(c+24,"data_i", false,-1, 39,0);
    tracep->declBus(c+80,"start_address", false,-1, 31,0);
    tracep->declBus(c+26,"pc", false,-1, 31,0);
    tracep->declBit(c+27,"state_c", false,-1);
    tracep->declBit(c+28,"init", false,-1);
    tracep->declBit(c+73,"INIT", false,-1);
    tracep->declBit(c+72,"NEXT", false,-1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+22,"instruction", false,-1, 17,0);
    tracep->declBus(c+21,"decode", false,-1, 14,0);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+29,"unit", false,-1, 1,0);
    tracep->declBus(c+30,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+31,"sel", false,-1, 3,0);
    tracep->declBit(c+32,"imm", false,-1);
    tracep->declBit(c+33,"csr", false,-1);
    tracep->declBit(c+34,"fence", false,-1);
    tracep->declBit(c+35,"ecall", false,-1);
    tracep->declBit(c+36,"ebreak", false,-1);
    tracep->declBit(c+37,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_pg2r ");
    tracep->declBus(c+81,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declQuad(c+24,"data_i", false,-1, 39,0);
    tracep->declBit(c+72,"valide", false,-1);
    tracep->declBit(c+73,"flush", false,-1);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declQuad(c+2,"data_o", false,-1, 39,0);
    tracep->declBit(c+72,"ok", false,-1);
    tracep->declQuad(c+24,"data", false,-1, 39,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_manager ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declQuad(c+2,"data", false,-1, 39,0);
    tracep->declBit(c+72,"ok_o", false,-1);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+8,"unit_o", false,-1, 1,0);
    tracep->declBus(c+9,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+10,"sel_o", false,-1, 3,0);
    tracep->declBus(c+11,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+12,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+13,"rd_o", false,-1, 4,0);
    tracep->declBus(c+6,"jal_res_o", false,-1, 31,0);
    tracep->declBit(c+72,"ok_i", false,-1);
    tracep->declBus(c+80,"res_data", false,-1, 31,0);
    tracep->declBus(c+82,"res_adr", false,-1, 4,0);
    tracep->declBit(c+73,"res_v", false,-1);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+38,"rs1_ad", false,-1, 4,0);
    tracep->declBus(c+39,"rs2_ad", false,-1, 4,0);
    tracep->declBus(c+40,"unit", false,-1, 1,0);
    tracep->declBus(c+41,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+42,"sel", false,-1, 3,0);
    tracep->declBit(c+43,"imm", false,-1);
    tracep->declBus(c+44,"instruction", false,-1, 24,0);
    tracep->declArray(c+45,"data_i", false,-1, 109,0);
    tracep->declArray(c+49,"data_o", false,-1, 109,0);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declBus(c+53,"rs1", false,-1, 31,0);
    tracep->declBit(c+54,"rs1_v", false,-1);
    tracep->declBus(c+55,"rs2", false,-1, 31,0);
    tracep->declBit(c+56,"rs2_v", false,-1);
    tracep->declBus(c+57,"rd", false,-1, 4,0);
    tracep->declBit(c+58,"rd_v", false,-1);
    tracep->declBus(c+59,"immediate", false,-1, 31,0);
    tracep->declBus(c+60,"s_imm", false,-1, 11,0);
    tracep->declBit(c+61,"s_imm_v", false,-1);
    tracep->declBus(c+62,"l_imm", false,-1, 19,0);
    tracep->declBit(c+63,"l_imm_v", false,-1);
    tracep->declBit(c+64,"pc_instruction", false,-1);
    tracep->pushNamePrefix("pipeline_r2c ");
    tracep->declBus(c+83,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declArray(c+45,"data_i", false,-1, 109,0);
    tracep->declBit(c+72,"valide", false,-1);
    tracep->declBit(c+73,"flush", false,-1);
    tracep->declBit(c+72,"data_valid", false,-1);
    tracep->declArray(c+49,"data_o", false,-1, 109,0);
    tracep->declBit(c+72,"ok", false,-1);
    tracep->declArray(c+45,"data", false,-1, 109,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBit(c+73,"w_valid", false,-1);
    tracep->declBus(c+82,"w_ad", false,-1, 4,0);
    tracep->declBus(c+80,"w_data", false,-1, 31,0);
    tracep->declBit(c+54,"r0_valid", false,-1);
    tracep->declBus(c+38,"r0_ad", false,-1, 4,0);
    tracep->declBit(c+56,"r1_valid", false,-1);
    tracep->declBus(c+39,"r1_ad", false,-1, 4,0);
    tracep->declBus(c+53,"r0_data", false,-1, 31,0);
    tracep->declBus(c+55,"r1_data", false,-1, 31,0);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+84+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst_n", false,-1);
    tracep->declBus(c+67,"adr", false,-1, 31,0);
    tracep->declBus(c+68,"resp_data", false,-1, 31,0);
    tracep->declBus(c+69,"xlen", false,-1, 31,0);
    tracep->declBus(c+116,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+117,"NB_CELLS", false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_ha2b544ea__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d),32);
    bufp->fullQData(oldp+2,(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r),40);
    bufp->fullIData(oldp+4,(vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U]),32);
    bufp->fullBit(oldp+7,((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
    bufp->fullCData(oldp+8,((3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                   >> 0xcU))),2);
    bufp->fullCData(oldp+9,((7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                   >> 9U))),3);
    bufp->fullCData(oldp+10,((0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                      >> 5U))),4);
    bufp->fullIData(oldp+11,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                               << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+12,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                               << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+13,((0x1fU & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U])),5);
    bufp->fullBit(oldp+14,((0U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                         >> 0xcU)))));
    bufp->fullIData(oldp+15,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+16,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch));
    bufp->fullIData(oldp+17,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res),32);
    bufp->fullBit(oldp+19,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff));
    bufp->fullBit(oldp+20,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr));
    bufp->fullSData(oldp+21,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
    bufp->fullIData(oldp+22,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
    bufp->fullIData(oldp+23,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                              >> 7U)),25);
    bufp->fullQData(oldp+24,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                               << 0x19U) | (QData)((IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                            >> 7U))))),40);
    bufp->fullIData(oldp+26,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
    bufp->fullBit(oldp+27,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
    bufp->fullBit(oldp+28,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
    bufp->fullCData(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
    bufp->fullCData(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
    bufp->fullCData(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
    bufp->fullBit(oldp+32,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
    bufp->fullBit(oldp+33,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
    bufp->fullBit(oldp+34,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
    bufp->fullBit(oldp+35,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
    bufp->fullBit(oldp+36,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
    bufp->fullBit(oldp+37,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
    bufp->fullCData(oldp+38,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 8U)))),5);
    bufp->fullCData(oldp+39,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0xdU)))),5);
    bufp->fullCData(oldp+40,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x26U)))),2);
    bufp->fullCData(oldp+41,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x23U)))),3);
    bufp->fullCData(oldp+42,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                              >> 0x1fU)))),4);
    bufp->fullBit(oldp+43,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                          >> 0x1eU)))));
    bufp->fullIData(oldp+44,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
    __Vtemp_ha2b544ea__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))));
    __Vtemp_ha2b544ea__0[1U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 << 5U) | (IData)((
                                                   (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))) 
                                                   >> 0x20U)));
    __Vtemp_ha2b544ea__0[2U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 >> 0x1bU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                       >> 0x20U)) 
                                              << 5U));
    __Vtemp_ha2b544ea__0[3U] = ((0x3000U & ((IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 0x26U)) 
                                            << 0xcU)) 
                                | ((0xe00U & ((IData)(
                                                      (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                       >> 0x23U)) 
                                              << 9U)) 
                                   | ((0x1e0U & ((IData)(
                                                         (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                          >> 0x1fU)) 
                                                 << 5U)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                  >> 0x20U)) 
                                         >> 0x1bU))));
    bufp->fullWData(oldp+45,(__Vtemp_ha2b544ea__0),110);
    bufp->fullWData(oldp+49,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),110);
    bufp->fullIData(oldp+53,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
    bufp->fullBit(oldp+54,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
    bufp->fullIData(oldp+55,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
    bufp->fullBit(oldp+56,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
    bufp->fullCData(oldp+57,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
    bufp->fullBit(oldp+58,(((IData)(((0ULL == (0xc000000000ULL 
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
    bufp->fullIData(oldp+59,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
    bufp->fullSData(oldp+60,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm),12);
    bufp->fullBit(oldp+61,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
    bufp->fullIData(oldp+62,((0xfffffU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 5U)))),20);
    bufp->fullBit(oldp+63,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
    bufp->fullBit(oldp+64,((IData)((0ULL == (0xf800000000ULL 
                                             & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst_n));
    bufp->fullIData(oldp+67,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_cpu__DOT__resp_data),32);
    bufp->fullIData(oldp+69,(0x20U),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_cpu__DOT__i),32);
    bufp->fullIData(oldp+71,(vlSelf->tb_cpu__DOT__j),32);
    bufp->fullBit(oldp+72,(1U));
    bufp->fullBit(oldp+73,(0U));
    bufp->fullBit(oldp+74,(vlSelf->tb_cpu__DOT__cpu__DOT__data_valid_rm2c));
    bufp->fullBit(oldp+75,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__eq));
    bufp->fullBit(oldp+76,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than));
    bufp->fullBit(oldp+77,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than_u));
    bufp->fullBit(oldp+78,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq));
    bufp->fullBit(oldp+79,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq_u));
    bufp->fullIData(oldp+80,(0U),32);
    bufp->fullIData(oldp+81,(0x28U),32);
    bufp->fullCData(oldp+82,(0U),5);
    bufp->fullIData(oldp+83,(0x6eU),32);
    bufp->fullIData(oldp+84,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[0]),32);
    bufp->fullIData(oldp+85,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[1]),32);
    bufp->fullIData(oldp+86,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[2]),32);
    bufp->fullIData(oldp+87,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[3]),32);
    bufp->fullIData(oldp+88,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[4]),32);
    bufp->fullIData(oldp+89,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[5]),32);
    bufp->fullIData(oldp+90,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[6]),32);
    bufp->fullIData(oldp+91,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[7]),32);
    bufp->fullIData(oldp+92,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[8]),32);
    bufp->fullIData(oldp+93,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[9]),32);
    bufp->fullIData(oldp+94,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[10]),32);
    bufp->fullIData(oldp+95,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[11]),32);
    bufp->fullIData(oldp+96,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[12]),32);
    bufp->fullIData(oldp+97,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[13]),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[14]),32);
    bufp->fullIData(oldp+99,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[15]),32);
    bufp->fullIData(oldp+100,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[16]),32);
    bufp->fullIData(oldp+101,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[17]),32);
    bufp->fullIData(oldp+102,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[18]),32);
    bufp->fullIData(oldp+103,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[19]),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[20]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[21]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[22]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[23]),32);
    bufp->fullIData(oldp+108,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[24]),32);
    bufp->fullIData(oldp+109,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[25]),32);
    bufp->fullIData(oldp+110,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[26]),32);
    bufp->fullIData(oldp+111,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[27]),32);
    bufp->fullIData(oldp+112,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[28]),32);
    bufp->fullIData(oldp+113,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[29]),32);
    bufp->fullIData(oldp+114,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[30]),32);
    bufp->fullIData(oldp+115,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[31]),32);
    bufp->fullIData(oldp+116,(8U),32);
    bufp->fullIData(oldp+117,(0x400U),32);
}
