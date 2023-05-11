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
    VlWide<5>/*159:0*/ __Vtemp_h6f1cdd79__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d),32);
        bufp->chgQData(oldp+1,(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r),40);
        bufp->chgIData(oldp+3,(vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U]),32);
        bufp->chgBit(oldp+6,((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
        bufp->chgCData(oldp+7,((3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 0xdU))),2);
        bufp->chgCData(oldp+8,((7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 0xaU))),3);
        bufp->chgCData(oldp+9,((0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                        >> 6U))),4);
        bufp->chgIData(oldp+10,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                               >> 5U))),32);
        bufp->chgIData(oldp+11,(((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                  << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+12,((0x1fU & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])),5);
        bufp->chgIData(oldp+13,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]),32);
        bufp->chgBit(oldp+14,((1U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                     >> 5U))));
        bufp->chgSData(oldp+15,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
        bufp->chgIData(oldp+16,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
        bufp->chgIData(oldp+17,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                 >> 7U)),25);
        bufp->chgQData(oldp+18,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                                  << 0x19U) | (QData)((IData)(
                                                              (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                               >> 7U))))),40);
        bufp->chgIData(oldp+20,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
        bufp->chgBit(oldp+21,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
        bufp->chgBit(oldp+22,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
        bufp->chgCData(oldp+23,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
        bufp->chgCData(oldp+24,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
        bufp->chgCData(oldp+25,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
        bufp->chgBit(oldp+26,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
        bufp->chgBit(oldp+27,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
        bufp->chgBit(oldp+28,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
        bufp->chgBit(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
        bufp->chgBit(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
        bufp->chgBit(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
        bufp->chgCData(oldp+32,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 8U)))),5);
        bufp->chgCData(oldp+33,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 0xdU)))),5);
        bufp->chgCData(oldp+34,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x26U)))),2);
        bufp->chgCData(oldp+35,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x23U)))),3);
        bufp->chgCData(oldp+36,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                 >> 0x1fU)))),4);
        bufp->chgBit(oldp+37,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                             >> 0x1eU)))));
        bufp->chgIData(oldp+38,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
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
                                     << 5U) | (0x1fU 
                                               & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)));
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
                                       | ((0x3c0U & 
                                           ((IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 0x1fU)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                          >> 0x1eU)) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                         >> 0x20U)) 
                                                >> 0x1bU)))));
        bufp->chgWData(oldp+39,(__Vtemp_h6f1cdd79__0),143);
        bufp->chgWData(oldp+44,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
        bufp->chgIData(oldp+49,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
        bufp->chgBit(oldp+50,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
        bufp->chgIData(oldp+51,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
        bufp->chgBit(oldp+52,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
        bufp->chgCData(oldp+53,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
        bufp->chgBit(oldp+54,(((IData)(((0ULL == (0xc000000000ULL 
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
        bufp->chgIData(oldp+55,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
        bufp->chgSData(oldp+56,((0xfffU & (((IData)(
                                                    (0x800000000ULL 
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
        bufp->chgBit(oldp+57,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
        bufp->chgIData(oldp+58,((0xfffffU & (IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 5U)))),20);
        bufp->chgBit(oldp+59,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
        bufp->chgBit(oldp+60,((IData)((0ULL == (0xf800000000ULL 
                                                & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
    }
    bufp->chgBit(oldp+61,(vlSelf->clk));
    bufp->chgBit(oldp+62,(vlSelf->rst_n));
    bufp->chgIData(oldp+63,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->chgIData(oldp+64,(vlSelf->tb_cpu__DOT__resp_data),32);
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
}
