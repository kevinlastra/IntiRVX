// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_cpu__Syms.h"
#include "Vtb_cpu___024root.h"

VL_INLINE_OPT void Vtb_cpu___024root___ico_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
            if (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
                vlSelf->tb_cpu__DOT__cpu__DOT__pg_target 
                    = ((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))
                        ? (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc 
                           + ((0x7ff00000U & ((- (IData)(
                                                         (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                          >> 0x1fU))) 
                                              << 0x14U)) 
                              | ((0xff000U & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d) 
                                 | ((0x800U & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d) 
                                    | (0x7feU & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                 >> 0x14U))))))
                        : ((IData)(4U) + vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc));
            }
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pg_target = 0U;
        }
    }
}

void Vtb_cpu___024root___eval_ico(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_cpu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtb_cpu___024root___eval_act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init = 0U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c = 1U;
        }
        vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc = vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc;
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U] 
            = (IData)((((QData)((IData)((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))));
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
            = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                          << 0x20U) | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                << 5U) | (IData)(((((QData)((IData)(
                                                    (0x1fU 
                                                     & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i))) 
                                  >> 0x20U)));
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
            = (((IData)((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                          << 0x20U) | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                >> 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                      >> 0x20U)) << 5U));
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
            = ((0x3000U & ((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                    >> 0x26U)) << 0xcU)) 
               | ((0xe00U & ((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                      >> 0x23U)) << 9U)) 
                  | ((0x1e0U & ((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                         >> 0x1fU)) 
                                << 5U)) | ((IData)(
                                                   ((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                    >> 0x20U)) 
                                           >> 0x1bU))));
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb = 
        (((IData)((0x420U == (0xfe0U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U]))) 
          | (1U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 9U)))) ? (~ ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                                             >> 5U)))
          : ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
              << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                           >> 5U)));
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
        = (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
             << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                          >> 5U)) + vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff = 
        (1U & ((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
                >> 0x1fU) ^ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                             >> 4U)));
    if ((0U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                      >> 9U)))) {
        if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        } else if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        }
        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                      >> 8U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 7U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                        ? ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                            ? vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res
                            : ((IData)(4U) + vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res))
                        : ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                            ? vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res
                            : ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                                             >> 5U))));
            }
        }
    } else if ((1U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                             >> 9U)))) {
        if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        } else if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
            if ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
            }
        }
        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                      >> 8U)))) {
            if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                              >> 6U)))) {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch 
                        = (1U & ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                                  ? ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                         >> 4U) : (~ 
                                                   (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                    >> 0x1fU)))
                                  : ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                         >> 4U) : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                   >> 0x1fU))));
                }
            } else {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch 
                    = (1U & ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                              ? ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                                  ? ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                         >> 4U) : (~ 
                                                   (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                    >> 0x1fU)))
                                  : ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                         >> 4U) : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                   >> 0x1fU)))
                              : ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                                  ? (0U != vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res)
                                  : (0U == vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res))));
            }
        }
        if (vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                = ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                    << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                                 >> 5U));
        }
    } else {
        if ((2U != (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 9U)))) {
            if ((3U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                              >> 9U)))) {
                if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                } else if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                    if ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                        vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                    } else if ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                        vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                    }
                }
            } else if ((4U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                     >> 9U)))) {
                if ((0U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                    >> 5U)))) {
                    if ((1U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                        >> 5U)))) {
                        if ((2U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                            >> 5U)))) {
                            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 9U)))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                = vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res;
        } else if ((3U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                 >> 9U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 8U)))) {
                if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])) {
                    if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                  >> 6U)))) {
                        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                      >> 5U)))) {
                            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                                = (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                     << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                  >> 5U)) 
                                   & vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
                        }
                    }
                } else {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                        = ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                            ? ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                                ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                     << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                  >> 5U)) 
                                   | vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                : (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                     << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                  >> 5U)) 
                                   ^ vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb))
                            : ((0x20U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U])
                                ? (1U & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                          ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                             >> 4U)
                                          : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                             >> 0x1fU)))
                                : (1U & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                          ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                             >> 4U)
                                          : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                             >> 0x1fU)))));
                }
            }
        } else if ((4U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                 >> 9U)))) {
            if ((0U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                >> 5U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                             << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                          >> 5U)) << vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            } else if ((1U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                       >> 5U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                             << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                          >> 5U)) >> vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            } else if ((2U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                       >> 5U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                             << 0x1bU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                          >> 5U)) << vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            }
        }
    }
    if (vlSelf->rst_n) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc 
            = vlSelf->tb_cpu__DOT__cpu__DOT__pg_target;
        vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i = vlSelf->tb_cpu__DOT__cpu__DOT__pg_target;
        vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r = 
            (((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
              << 0x19U) | (QData)((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                           >> 7U))));
    }
    if ((IData)((0ULL == (0xf800000000ULL & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 
            = vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc;
    }
    if ((0U == (3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                              >> 0x26U))))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v 
            = ((0U != (7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                     >> 0x23U)))) & 
               (~ (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                           >> 0x1eU))));
    } else if ((1U == (3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                     >> 0x26U))))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v 
            = (1U == (7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                    >> 0x23U))));
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm 
        = (0xfffU & (((IData)((0x800000000ULL == (0xf800000000ULL 
                                                  & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))) 
                      | (IData)((0x4800000000ULL == 
                                 (0xf800000000ULL & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))))
                      ? ((0xfe0U & ((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                             >> 0x12U)) 
                                    << 5U)) | (0x1fU 
                                               & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))
                      : (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                 >> 0xdU))));
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v = 0U;
    if ((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                       >> 0x1eU)))) {
        if ((1U & (~ ((IData)((0ULL == (0xf800000000ULL 
                                        & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))) 
                      & (3U != (0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                >> 0x1fU)))))))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v = 1U;
        }
        if (((IData)((0ULL == (0xf800000000ULL & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))) 
             & (3U != (0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                       >> 0x1fU)))))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v = 1U;
        }
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v 
        = (1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v)));
    if (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate 
            = ((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                        >> 5U)) << 0xcU);
    } else if (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate 
            = (((- (IData)((1U & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm) 
                                  >> 0xbU)))) << 0xcU) 
               | (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm));
    }
    if (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 
            = vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register
            [(0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                               >> 8U)))];
    }
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v)))) {
        if (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v) {
            vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2 
                = vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register
                [(0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                   >> 0xdU)))];
        }
    }
    if ((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                       >> 0x1eU)))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2 
            = vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate;
    }
    if (vlSelf->rst_n) {
        vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d = vlSelf->tb_cpu__DOT__resp_data;
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr 
        = ((0x3f800U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                        >> 0xeU)) | ((0x400U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                >> 0xaU)) 
                                     | ((0x380U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d))));
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall = 0U;
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak = 0U;
    if (((((((((0x37U == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
               | (0x17U == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
              | (0x6fU == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
             | (0x67U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
            | (0x63U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
           | (0xe3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
          | (0x263U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
         | (0x2e3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
        if ((0x37U == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x17U == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x6fU == (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x67U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x63U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0xe3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x263U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        }
    } else if (((((((((0x363U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                      | (0x3e3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                    | (0x83U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                   | (0x103U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (0x203U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x283U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                | (0x23U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
        if ((0x363U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x3e3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 5U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x83U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x103U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x203U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x283U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        }
    } else if (((((((((0xa3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                      | (0x123U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (0x13U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                    | (0x113U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                   | (0x193U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (0x213U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x313U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                | (0x393U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
        if ((0xa3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x123U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x13U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x113U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x193U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x213U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x313U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        }
    } else if (((((((((0x93U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                      | (0x293U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (0x10293U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                    | (0x33U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                   | (0x10033U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (0xb3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x133U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                | (0x1b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
        if ((0x93U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x293U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x10293U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else if ((0x33U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
        } else if ((0x10033U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
        } else if ((0xb3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
        } else if ((0x133U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
        }
    } else if (((((((((0x233U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                      | (0x2b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (0x102b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                    | (0x333U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                   | (0x3b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (0xfU == (0x3c3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x8fU == vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                | (0x73U == vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        if ((0x233U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
        } else if ((0x2b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
        } else if ((0x102b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
        } else if ((0x333U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
        } else if ((0x3b3U == (0x3fbffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
        } else if ((0xfU == (0x3c3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 1U;
        } else if ((0x8fU == vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 1U;
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall = 1U;
        }
    } else if ((0x473U == vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak = 1U;
    } else if ((0xf3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
    } else if ((0x173U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
    } else if ((0x1f3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
    } else if ((0x2f3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
    } else if ((0x373U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
    } else if ((0x3f3U == (0x3ffU & vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
    } else {
        vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr = 1U;
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode 
        = (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit) 
            << 0xdU) | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit) 
                         << 0xaU) | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel) 
                                      << 6U) | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr)))))))));
    if (vlSelf->rst_n) {
        if (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
            if (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
                vlSelf->tb_cpu__DOT__cpu__DOT__pg_target 
                    = ((0x100U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))
                        ? (vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc 
                           + ((0x7ff00000U & ((- (IData)(
                                                         (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                          >> 0x1fU))) 
                                              << 0x14U)) 
                              | ((0xff000U & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d) 
                                 | ((0x800U & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d) 
                                    | (0x7feU & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                 >> 0x14U))))))
                        : ((IData)(4U) + vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc));
            }
        } else {
            vlSelf->tb_cpu__DOT__cpu__DOT__pg_target = 0U;
        }
    }
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__1(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->tb_cpu__DOT__resp_data = ((vlSelf->tb_cpu__DOT__mem__DOT__data
                                           [(0x3ffU 
                                             & ((IData)(3U) 
                                                + vlSelf->tb_cpu__DOT__cpu__DOT__pg_target))] 
                                           << 0x18U) 
                                          | ((vlSelf->tb_cpu__DOT__mem__DOT__data
                                              [(0x3ffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->tb_cpu__DOT__cpu__DOT__pg_target))] 
                                              << 0x10U) 
                                             | ((vlSelf->tb_cpu__DOT__mem__DOT__data
                                                 [(0x3ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->tb_cpu__DOT__cpu__DOT__pg_target))] 
                                                 << 8U) 
                                                | vlSelf->tb_cpu__DOT__mem__DOT__data
                                                [(0x3ffU 
                                                  & vlSelf->tb_cpu__DOT__cpu__DOT__pg_target)])));
    }
}

void Vtb_cpu___024root___eval_nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_cpu___024root___eval_triggers__ico(Vtb_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__ico(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtb_cpu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb_cpu.sv", 6, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtb_cpu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_cpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_cpu.sv", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_cpu.sv", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_cpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cpu___024root___eval_debug_assertions(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
