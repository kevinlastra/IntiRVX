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
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->pushNamePrefix("tb_cpu ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+64,"adr", false,-1, 31,0);
    tracep->declBus(c+65,"resp_data", false,-1, 31,0);
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->declBus(c+68,"j", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+65,"resp_data", false,-1, 31,0);
    tracep->declBus(c+64,"adr", false,-1, 31,0);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+1,"data_f2d", false,-1, 31,0);
    tracep->declBit(c+69,"data_valid_f2d", false,-1);
    tracep->declBit(c+69,"ok_d2f", false,-1);
    tracep->declBit(c+69,"data_valid_pg2r", false,-1);
    tracep->declQuad(c+2,"data_pg2r", false,-1, 39,0);
    tracep->declBit(c+69,"ok_r2p", false,-1);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+6,"jal_res_o", false,-1, 31,0);
    tracep->declBus(c+64,"target", false,-1, 31,0);
    tracep->declBus(c+64,"pg_target", false,-1, 31,0);
    tracep->declBit(c+69,"pg_target_valide", false,-1);
    tracep->declBit(c+7,"jal_instr_pcc", false,-1);
    tracep->declBit(c+70,"flush_if", false,-1);
    tracep->declBit(c+71,"data_valid_rm2c", false,-1);
    tracep->declBus(c+8,"unit_o", false,-1, 1,0);
    tracep->declBus(c+9,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+10,"sel_o", false,-1, 3,0);
    tracep->declBus(c+11,"rs1", false,-1, 31,0);
    tracep->declBus(c+12,"rs2", false,-1, 31,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+14,"immediate_o", false,-1, 31,0);
    tracep->declBit(c+15,"imm_o", false,-1);
    tracep->pushNamePrefix("ifetch ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+64,"target_address", false,-1, 31,0);
    tracep->declBus(c+65,"resp", false,-1, 31,0);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declBus(c+1,"data", false,-1, 31,0);
    tracep->declBit(c+69,"ok", false,-1);
    tracep->declBus(c+64,"target", false,-1, 31,0);
    tracep->declBit(c+70,"flush", false,-1);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->pushNamePrefix("pipeline_f2d ");
    tracep->declBus(c+66,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+65,"data_i", false,-1, 31,0);
    tracep->declBit(c+69,"valide", false,-1);
    tracep->declBit(c+70,"flush", false,-1);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declBus(c+1,"data_o", false,-1, 31,0);
    tracep->declBit(c+69,"ok", false,-1);
    tracep->declBus(c+65,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_control ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+64,"target", false,-1, 31,0);
    tracep->declBit(c+69,"pg_target_valide", false,-1);
    tracep->declBus(c+64,"pg_target", false,-1, 31,0);
    tracep->declBit(c+7,"jal", false,-1);
    tracep->declBit(c+70,"flush_if", false,-1);
    tracep->declBit(c+70,"alu_target_valide", false,-1);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_gen ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBit(c+69,"instr_valide", false,-1);
    tracep->declBus(c+1,"instruction", false,-1, 31,0);
    tracep->declBit(c+69,"ok_o", false,-1);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declQuad(c+2,"data", false,-1, 39,0);
    tracep->declBit(c+69,"ok_i", false,-1);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res", false,-1, 31,0);
    tracep->declBit(c+69,"next_pc_valide", false,-1);
    tracep->declBus(c+64,"next_pc", false,-1, 31,0);
    tracep->declBit(c+7,"jal_instr", false,-1);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+16,"decode", false,-1, 14,0);
    tracep->declBus(c+17,"decode_parse_instr", false,-1, 17,0);
    tracep->declBus(c+18,"reg_imm_parse_instr", false,-1, 24,0);
    tracep->declQuad(c+19,"data_i", false,-1, 39,0);
    tracep->declBus(c+72,"start_address", false,-1, 31,0);
    tracep->declBus(c+21,"pc", false,-1, 31,0);
    tracep->declBit(c+22,"state_c", false,-1);
    tracep->declBit(c+23,"init", false,-1);
    tracep->declBit(c+70,"INIT", false,-1);
    tracep->declBit(c+69,"NEXT", false,-1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+17,"instruction", false,-1, 17,0);
    tracep->declBus(c+16,"decode", false,-1, 14,0);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+24,"unit", false,-1, 1,0);
    tracep->declBus(c+25,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+26,"sel", false,-1, 3,0);
    tracep->declBit(c+27,"imm", false,-1);
    tracep->declBit(c+28,"csr", false,-1);
    tracep->declBit(c+29,"fence", false,-1);
    tracep->declBit(c+30,"ecall", false,-1);
    tracep->declBit(c+31,"ebreak", false,-1);
    tracep->declBit(c+32,"illegal_instr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipeline_pg2r ");
    tracep->declBus(c+73,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declQuad(c+19,"data_i", false,-1, 39,0);
    tracep->declBit(c+69,"valide", false,-1);
    tracep->declBit(c+70,"flush", false,-1);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declQuad(c+2,"data_o", false,-1, 39,0);
    tracep->declBit(c+69,"ok", false,-1);
    tracep->declQuad(c+19,"data", false,-1, 39,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_manager ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declQuad(c+2,"data", false,-1, 39,0);
    tracep->declBit(c+69,"ok_o", false,-1);
    tracep->declBus(c+4,"instr_pc", false,-1, 31,0);
    tracep->declBus(c+5,"jal_res_i", false,-1, 31,0);
    tracep->declBus(c+8,"unit_o", false,-1, 1,0);
    tracep->declBus(c+9,"sub_unit_o", false,-1, 2,0);
    tracep->declBus(c+10,"sel_o", false,-1, 3,0);
    tracep->declBit(c+15,"imm_o", false,-1);
    tracep->declBus(c+11,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+12,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+13,"rd_o", false,-1, 4,0);
    tracep->declBus(c+14,"immediate_o", false,-1, 31,0);
    tracep->declBus(c+6,"jal_res_o", false,-1, 31,0);
    tracep->declBit(c+69,"ok_i", false,-1);
    tracep->declBus(c+72,"res_data", false,-1, 31,0);
    tracep->declBus(c+74,"res_adr", false,-1, 4,0);
    tracep->declBit(c+70,"res_v", false,-1);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+33,"rs1_ad", false,-1, 4,0);
    tracep->declBus(c+34,"rs2_ad", false,-1, 4,0);
    tracep->declBus(c+35,"unit", false,-1, 1,0);
    tracep->declBus(c+36,"sub_unit", false,-1, 2,0);
    tracep->declBus(c+37,"sel", false,-1, 3,0);
    tracep->declBit(c+38,"imm", false,-1);
    tracep->declBus(c+39,"instruction", false,-1, 24,0);
    tracep->declArray(c+40,"data_i", false,-1, 142,0);
    tracep->declArray(c+45,"data_o", false,-1, 142,0);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declBus(c+50,"rs1", false,-1, 31,0);
    tracep->declBit(c+51,"rs1_v", false,-1);
    tracep->declBus(c+52,"rs2", false,-1, 31,0);
    tracep->declBit(c+53,"rs2_v", false,-1);
    tracep->declBus(c+54,"rd", false,-1, 4,0);
    tracep->declBit(c+55,"rd_v", false,-1);
    tracep->declBus(c+56,"immediate", false,-1, 31,0);
    tracep->declBus(c+57,"s_imm", false,-1, 11,0);
    tracep->declBit(c+58,"s_imm_v", false,-1);
    tracep->declBus(c+59,"l_imm", false,-1, 19,0);
    tracep->declBit(c+60,"l_imm_v", false,-1);
    tracep->declBit(c+61,"pc_instruction", false,-1);
    tracep->pushNamePrefix("pipeline_r2c ");
    tracep->declBus(c+75,"DATA_SIZE", false,-1, 31,0);
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declArray(c+40,"data_i", false,-1, 142,0);
    tracep->declBit(c+69,"valide", false,-1);
    tracep->declBit(c+70,"flush", false,-1);
    tracep->declBit(c+69,"data_valid", false,-1);
    tracep->declArray(c+45,"data_o", false,-1, 142,0);
    tracep->declBit(c+69,"ok", false,-1);
    tracep->declArray(c+40,"data", false,-1, 142,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBit(c+70,"w_valid", false,-1);
    tracep->declBus(c+74,"w_ad", false,-1, 4,0);
    tracep->declBus(c+72,"w_data", false,-1, 31,0);
    tracep->declBit(c+51,"r0_valid", false,-1);
    tracep->declBus(c+33,"r0_ad", false,-1, 4,0);
    tracep->declBit(c+53,"r1_valid", false,-1);
    tracep->declBus(c+34,"r1_ad", false,-1, 4,0);
    tracep->declBus(c+50,"r0_data", false,-1, 31,0);
    tracep->declBus(c+52,"r1_data", false,-1, 31,0);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+76+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+62,"clk", false,-1);
    tracep->declBit(c+63,"rst_n", false,-1);
    tracep->declBus(c+64,"adr", false,-1, 31,0);
    tracep->declBus(c+65,"resp_data", false,-1, 31,0);
    tracep->declBus(c+66,"xlen", false,-1, 31,0);
    tracep->declBus(c+108,"CELL_SIZE", false,-1, 31,0);
    tracep->declBus(c+109,"NB_CELLS", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h6f1cdd79__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d),32);
    bufp->fullQData(oldp+2,(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r),40);
    bufp->fullIData(oldp+4,(vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U]),32);
    bufp->fullBit(oldp+7,((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
    bufp->fullCData(oldp+8,((3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                   >> 0xdU))),2);
    bufp->fullCData(oldp+9,((7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                   >> 0xaU))),3);
    bufp->fullCData(oldp+10,((0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 6U))),4);
    bufp->fullIData(oldp+11,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                               << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                            >> 5U))),32);
    bufp->fullIData(oldp+12,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                               << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                            >> 5U))),32);
    bufp->fullCData(oldp+13,((0x1fU & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])),5);
    bufp->fullIData(oldp+14,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]),32);
    bufp->fullBit(oldp+15,((1U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  >> 5U))));
    bufp->fullSData(oldp+16,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
    bufp->fullIData(oldp+17,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
    bufp->fullIData(oldp+18,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                              >> 7U)),25);
    bufp->fullQData(oldp+19,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                               << 0x19U) | (QData)((IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                            >> 7U))))),40);
    bufp->fullIData(oldp+21,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
    bufp->fullBit(oldp+22,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
    bufp->fullBit(oldp+23,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
    bufp->fullCData(oldp+24,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
    bufp->fullCData(oldp+25,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
    bufp->fullCData(oldp+26,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
    bufp->fullBit(oldp+27,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
    bufp->fullBit(oldp+28,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
    bufp->fullBit(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
    bufp->fullBit(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
    bufp->fullBit(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
    bufp->fullBit(oldp+32,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
    bufp->fullCData(oldp+33,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 8U)))),5);
    bufp->fullCData(oldp+34,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0xdU)))),5);
    bufp->fullCData(oldp+35,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x26U)))),2);
    bufp->fullCData(oldp+36,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                            >> 0x23U)))),3);
    bufp->fullCData(oldp+37,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                              >> 0x1fU)))),4);
    bufp->fullBit(oldp+38,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                          >> 0x1eU)))));
    bufp->fullIData(oldp+39,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
    __Vtemp_h6f1cdd79__0[0U] = (IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))));
    __Vtemp_h6f1cdd79__0[1U] = (IData)(((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))) 
                                        >> 0x20U));
    __Vtemp_h6f1cdd79__0[2U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 << 5U) | (0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)));
    __Vtemp_h6f1cdd79__0[3U] = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                 >> 0x1bU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                       >> 0x20U)) 
                                              << 5U));
    __Vtemp_h6f1cdd79__0[4U] = ((0x6000U & ((IData)(
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
                                      | ((0x20U & ((IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                            >> 0x1eU)) 
                                                   << 5U)) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                     >> 0x20U)) 
                                            >> 0x1bU)))));
    bufp->fullWData(oldp+40,(__Vtemp_h6f1cdd79__0),143);
    bufp->fullWData(oldp+45,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
    bufp->fullIData(oldp+50,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
    bufp->fullBit(oldp+51,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
    bufp->fullIData(oldp+52,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
    bufp->fullBit(oldp+53,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
    bufp->fullCData(oldp+54,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
    bufp->fullBit(oldp+55,(((IData)(((0ULL == (0xc000000000ULL 
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
    bufp->fullIData(oldp+56,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
    bufp->fullSData(oldp+57,((0xfffU & (((IData)((0x800000000ULL 
                                                  == 
                                                  (0xf800000000ULL 
                                                   & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))) 
                                         | (IData)(
                                                   (0x4800000000ULL 
                                                    == 
                                                    (0xf800000000ULL 
                                                     & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))))
                                         ? ((0xfe0U 
                                             & ((IData)(
                                                        (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                         >> 0x12U)) 
                                                << 5U)) 
                                            | (0x1fU 
                                               & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))
                                         : (IData)(
                                                   (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                    >> 0xdU))))),12);
    bufp->fullBit(oldp+58,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
    bufp->fullIData(oldp+59,((0xfffffU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 5U)))),20);
    bufp->fullBit(oldp+60,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
    bufp->fullBit(oldp+61,((IData)((0ULL == (0xf800000000ULL 
                                             & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    bufp->fullBit(oldp+62,(vlSelf->clk));
    bufp->fullBit(oldp+63,(vlSelf->rst_n));
    bufp->fullIData(oldp+64,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_cpu__DOT__resp_data),32);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_cpu__DOT__i),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_cpu__DOT__j),32);
    bufp->fullBit(oldp+69,(1U));
    bufp->fullBit(oldp+70,(0U));
    bufp->fullBit(oldp+71,(vlSelf->tb_cpu__DOT__cpu__DOT__data_valid_rm2c));
    bufp->fullIData(oldp+72,(0U),32);
    bufp->fullIData(oldp+73,(0x28U),32);
    bufp->fullCData(oldp+74,(0U),5);
    bufp->fullIData(oldp+75,(0x8fU),32);
    bufp->fullIData(oldp+76,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[0]),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[1]),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[2]),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[3]),32);
    bufp->fullIData(oldp+80,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[4]),32);
    bufp->fullIData(oldp+81,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[5]),32);
    bufp->fullIData(oldp+82,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[6]),32);
    bufp->fullIData(oldp+83,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[7]),32);
    bufp->fullIData(oldp+84,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[8]),32);
    bufp->fullIData(oldp+85,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[9]),32);
    bufp->fullIData(oldp+86,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[10]),32);
    bufp->fullIData(oldp+87,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[11]),32);
    bufp->fullIData(oldp+88,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[12]),32);
    bufp->fullIData(oldp+89,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[13]),32);
    bufp->fullIData(oldp+90,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[14]),32);
    bufp->fullIData(oldp+91,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[15]),32);
    bufp->fullIData(oldp+92,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[16]),32);
    bufp->fullIData(oldp+93,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[17]),32);
    bufp->fullIData(oldp+94,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[18]),32);
    bufp->fullIData(oldp+95,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[19]),32);
    bufp->fullIData(oldp+96,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[20]),32);
    bufp->fullIData(oldp+97,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[21]),32);
    bufp->fullIData(oldp+98,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[22]),32);
    bufp->fullIData(oldp+99,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[23]),32);
    bufp->fullIData(oldp+100,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[24]),32);
    bufp->fullIData(oldp+101,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[25]),32);
    bufp->fullIData(oldp+102,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[26]),32);
    bufp->fullIData(oldp+103,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[27]),32);
    bufp->fullIData(oldp+104,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[28]),32);
    bufp->fullIData(oldp+105,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[29]),32);
    bufp->fullIData(oldp+106,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[30]),32);
    bufp->fullIData(oldp+107,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[31]),32);
    bufp->fullIData(oldp+108,(8U),32);
    bufp->fullIData(oldp+109,(0x400U),32);
}
