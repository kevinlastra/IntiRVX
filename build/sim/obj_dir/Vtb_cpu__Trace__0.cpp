// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_cpu__Syms.h"


void Vtb_cpu___024root__trace_chg_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_cpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_cpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_cpu___024root__trace_chg_sub_0(Vtb_cpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h65309a58__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->tb_cpu__DOT__dmem_r_v));
        bufp->chgBit(oldp+1,(vlSelf->tb_cpu__DOT__dmem_w_v));
        bufp->chgIData(oldp+2,(vlSelf->tb_cpu__DOT__dmem_data_adr),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_cpu__DOT__dmem_data),32);
        bufp->chgCData(oldp+4,(vlSelf->tb_cpu__DOT__dmem_strobe),4);
        bufp->chgIData(oldp+5,(vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d),32);
        bufp->chgQData(oldp+6,(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r),40);
        bufp->chgIData(oldp+8,(vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc),32);
        bufp->chgIData(oldp+9,(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U]),32);
        bufp->chgBit(oldp+11,((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
        bufp->chgCData(oldp+12,((3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                       >> 0xdU))),2);
        bufp->chgCData(oldp+13,((7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+14,((0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 6U))),4);
        bufp->chgIData(oldp+15,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                               >> 6U))),32);
        bufp->chgIData(oldp+16,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                  << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                               >> 6U))),32);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                          >> 1U))),5);
        bufp->chgBit(oldp+18,((1U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])));
        bufp->chgIData(oldp+19,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]),32);
        bufp->chgBit(oldp+20,((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr)))));
        bufp->chgIData(oldp+21,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_result),32);
        bufp->chgBit(oldp+22,(vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch));
        bufp->chgBit(oldp+23,((0U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                            >> 0xdU)))));
        bufp->chgBit(oldp+24,((1U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                            >> 0xdU)))));
        bufp->chgIData(oldp+25,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res),32);
        bufp->chgBit(oldp+27,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff));
        bufp->chgBit(oldp+28,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr));
        bufp->chgBit(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c));
        bufp->chgIData(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr),32);
        bufp->chgCData(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe),4);
        bufp->chgBit(oldp+32,((1U & (~ (IData)(((0U 
                                                 == 
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
        bufp->chgSData(oldp+33,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
        bufp->chgIData(oldp+34,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
        bufp->chgIData(oldp+35,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                 >> 7U)),25);
        bufp->chgQData(oldp+36,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                                  << 0x19U) | (QData)((IData)(
                                                              (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                               >> 7U))))),40);
        bufp->chgIData(oldp+38,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
        bufp->chgBit(oldp+39,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
        bufp->chgBit(oldp+40,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
        bufp->chgCData(oldp+41,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
        bufp->chgCData(oldp+42,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
        bufp->chgCData(oldp+43,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
        bufp->chgBit(oldp+44,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
        bufp->chgBit(oldp+45,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
        bufp->chgBit(oldp+46,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
        bufp->chgBit(oldp+47,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
        bufp->chgBit(oldp+48,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
        bufp->chgBit(oldp+49,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
        bufp->chgCData(oldp+50,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 8U)))),5);
        bufp->chgCData(oldp+51,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 0xdU)))),5);
        bufp->chgCData(oldp+52,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x26U)))),2);
        bufp->chgCData(oldp+53,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x23U)))),3);
        bufp->chgCData(oldp+54,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                 >> 0x1fU)))),4);
        bufp->chgBit(oldp+55,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                             >> 0x1eU)))));
        bufp->chgIData(oldp+56,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
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
                                     << 6U) | ((0x3eU 
                                                & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
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
                                       | ((0x3c0U & 
                                           ((IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 0x1fU)) 
                                            << 6U)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU))));
        bufp->chgWData(oldp+57,(__Vtemp_h65309a58__0),143);
        bufp->chgWData(oldp+62,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
        bufp->chgIData(oldp+67,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
        bufp->chgBit(oldp+68,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
        bufp->chgIData(oldp+69,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
        bufp->chgBit(oldp+70,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
        bufp->chgCData(oldp+71,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
        bufp->chgBit(oldp+72,(((IData)(((0ULL == (0xc000000000ULL 
                                                  & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)) 
                                        & (1U != (7U 
                                                  & (IData)(
                                                            (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                             >> 0x23U)))))) 
                               | (IData)(((0x4000000000ULL 
                                           == (0xc000000000ULL 
                                               & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)) 
                                          & (1U != 
                                             (7U & (IData)(
                                                           (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                            >> 0x23U)))))))));
        bufp->chgIData(oldp+73,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
        bufp->chgSData(oldp+74,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm),12);
        bufp->chgBit(oldp+75,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
        bufp->chgIData(oldp+76,((0xfffffU & (IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 5U)))),20);
        bufp->chgBit(oldp+77,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
        bufp->chgBit(oldp+78,((IData)((0ULL == (0xf800000000ULL 
                                                & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+79,(vlSelf->tb_cpu__DOT__imem_resp),32);
        bufp->chgBit(oldp+80,(vlSelf->tb_cpu__DOT__imem_ack));
        bufp->chgIData(oldp+81,(vlSelf->tb_cpu__DOT__dmem_resp),32);
        bufp->chgBit(oldp+82,(vlSelf->tb_cpu__DOT__dmem_resp_v));
        bufp->chgSData(oldp+83,((0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+84,(vlSelf->tb_cpu__DOT__cpu__DOT__mem_result_v));
        bufp->chgIData(oldp+85,(vlSelf->tb_cpu__DOT__cpu__DOT__mem_result),32);
        bufp->chgBit(oldp+86,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n));
    }
    bufp->chgBit(oldp+87,(vlSelf->clk));
    bufp->chgBit(oldp+88,(vlSelf->rst_n));
    bufp->chgIData(oldp+89,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
}

void Vtb_cpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root__trace_cleanup\n"); );
    // Init
    Vtb_cpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cpu___024root*>(voidSelf);
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
