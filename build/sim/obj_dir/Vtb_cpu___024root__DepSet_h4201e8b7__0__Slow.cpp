// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_cpu__Syms.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_static__TOP(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_static(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static\n"); );
    // Body
    Vtb_cpu___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_static__TOP(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init = 1U;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h93e39a69__0;
    VlWide<7>/*223:0*/ __Vtemp_hc6626e69__0;
    // Body
    VL_WRITEF("Loading memory.\n");
    __Vtemp_h93e39a69__0[0U] = 0x69686578U;
    __Vtemp_h93e39a69__0[1U] = 0x7374732fU;
    __Vtemp_h93e39a69__0[2U] = 0x652f7465U;
    __Vtemp_h93e39a69__0[3U] = 0x74776172U;
    __Vtemp_h93e39a69__0[4U] = 0x2f736f66U;
    __Vtemp_h93e39a69__0[5U] = 0x2e2f2e2eU;
    __Vtemp_h93e39a69__0[6U] = 0x2eU;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h93e39a69__0)
                 ,  &(vlSelf->tb_cpu__DOT__imem__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_hc6626e69__0[0U] = 0x64686578U;
    __Vtemp_hc6626e69__0[1U] = 0x7374732fU;
    __Vtemp_hc6626e69__0[2U] = 0x652f7465U;
    __Vtemp_hc6626e69__0[3U] = 0x74776172U;
    __Vtemp_hc6626e69__0[4U] = 0x2f736f66U;
    __Vtemp_hc6626e69__0[5U] = 0x2e2f2e2eU;
    __Vtemp_hc6626e69__0[6U] = 0x2eU;
    VL_READMEM_N(true, 8, 1024, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_hc6626e69__0)
                 ,  &(vlSelf->tb_cpu__DOT__dmem__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers__stl(Vtb_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_settle(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_cpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_cpu.sv", 6, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_cpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 0U;
    if (vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
        if (vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem_result_v 
                = vlSelf->tb_cpu__DOT__dmem_resp_v;
            vlSelf->tb_cpu__DOT__cpu__DOT__mem_result 
                = ((IData)(((0U == (0x1c00U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) 
                            & ((3U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                               >> 6U))) 
                               | (4U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 >> 6U))))))
                    ? (0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)
                    : (((- (IData)((1U & (vlSelf->tb_cpu__DOT__dmem_resp 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)));
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n 
                = (1U & (~ (IData)(vlSelf->tb_cpu__DOT__dmem_resp_v)));
        }
    } else {
        vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n 
            = (0U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                            >> 0xaU)));
    }
    if ((IData)((0ULL == (0xf800000000ULL & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 
            = vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc;
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
    vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr = 
        (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
         + ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
             << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 6U)));
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
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr 
        = ((0x3f800U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                        >> 0xeU)) | ((0x400U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                >> 0xaU)) 
                                     | ((0x380U & (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                   >> 5U)) 
                                        | (0x7fU & vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d))));
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb = 
        ((1U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])
          ? vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]
          : ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
              << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                           >> 6U)));
    if (((IData)((0x840U == (0x1fc0U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U]))) 
         | (1U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                         >> 0xaU))))) {
        vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
            = (~ vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
    }
    if ((0U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                        >> 6U)))) {
        if ((0U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 1U;
        } else if ((1U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 2U;
        } else if ((2U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 4U;
        } else if ((3U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 8U;
        }
    } else if ((1U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                               >> 6U)))) {
        if ((0U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 3U;
        } else if ((1U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 6U;
        } else if ((2U == (0xfU & vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 0xcU;
        }
    } else {
        vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 0xfU;
    }
    if ((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        vlSelf->tb_cpu__DOT__dmem_data = ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                           << 0x1aU) 
                                          | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                             >> 6U));
        vlSelf->tb_cpu__DOT__dmem_r_v = (0U == (7U 
                                                & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                   >> 0xaU)));
        vlSelf->tb_cpu__DOT__dmem_w_v = (1U == (7U 
                                                & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                   >> 0xaU)));
        vlSelf->tb_cpu__DOT__dmem_data_adr = vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr;
        vlSelf->tb_cpu__DOT__dmem_strobe = vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe;
    }
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
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
        = (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
           + ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
               << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                            >> 6U)));
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff = 
        (1U & ((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
                >> 0x1fU) ^ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             >> 5U)));
    if ((0U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 0xaU)))) {
        if ((0x200U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        } else if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        }
        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 9U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 8U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                        ? ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                            ? vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res
                            : ((IData)(4U) + vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res))
                        : ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                            ? vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res
                            : ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                             >> 6U))));
            }
        }
    } else if ((1U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             >> 0xaU)))) {
        if ((0x200U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
        } else if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
            if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
            }
        }
        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 9U)))) {
            if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 7U)))) {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch 
                        = (1U & ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                  ? ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 5U) : (~ 
                                                   (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                    >> 0x1fU)))
                                  : ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                         >> 5U) : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                   >> 0x1fU))));
                }
            } else {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch 
                    = (1U & ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                              ? ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                  ? ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                         >> 5U) : (~ 
                                                   (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                    >> 0x1fU)))
                                  : ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                      ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                         >> 5U) : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                   >> 0x1fU)))
                              : ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                  ? (0U != vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res)
                                  : (0U == vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res))));
            }
        }
        if (vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                = ((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                    << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                 >> 6U));
        }
    } else {
        if ((2U != (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xaU)))) {
            if ((3U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 0xaU)))) {
                if ((0x200U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                } else if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                    if ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                        vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                    } else if ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                        vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                    }
                }
            } else if ((4U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                     >> 0xaU)))) {
                if ((0U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                    >> 6U)))) {
                    if ((1U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                        >> 6U)))) {
                        if ((2U != (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                            >> 6U)))) {
                            vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                        }
                    }
                }
            }
        }
        if ((2U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xaU)))) {
            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                = vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res;
        } else if ((3U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                 >> 0xaU)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 9U)))) {
                if ((0x100U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                    if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  >> 7U)))) {
                        if ((1U & (~ (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 6U)))) {
                            vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                                = (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                     << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                  >> 6U)) 
                                   & vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
                        }
                    }
                } else {
                    vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                        = ((0x80U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                            ? ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                     << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                  >> 6U)) 
                                   | vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                : (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                     << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                  >> 6U)) 
                                   ^ vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb))
                            : ((0x40U & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                ? (1U & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                          ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                             >> 5U)
                                          : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                             >> 0x1fU)))
                                : (1U & ((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                          ? (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                             >> 5U)
                                          : (vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                             >> 0x1fU)))));
                }
            }
        } else if ((4U == (7U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                 >> 0xaU)))) {
            if ((0U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                >> 6U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                          >> 6U)) << vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            } else if ((1U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                       >> 6U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                          >> 6U)) >> vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            } else if ((2U == (0xfU & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                       >> 6U)))) {
                vlSelf->tb_cpu__DOT__cpu__DOT__alu_result 
                    = ((0x1fU >= vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        ? (((vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             << 0x1aU) | (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                          >> 6U)) << vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                        : 0U);
            }
        }
    }
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

VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_cpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__ico(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___ctor_var_reset(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__imem_resp = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__imem_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dmem_r_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dmem_w_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__dmem_data_adr = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__dmem_data = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__dmem_strobe = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__dmem_resp = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__dmem_resp_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r = VL_RAND_RESET_Q(40);
    vlSelf->tb_cpu__DOT__cpu__DOT__instr_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__jal_res_i = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__pg_target = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__data_valid_rm2c = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem_result_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem_result = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode = VL_RAND_RESET_I(15);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr = VL_RAND_RESET_I(18);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = VL_RAND_RESET_I(2);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = VL_RAND_RESET_I(3);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = VL_RAND_RESET_I(4);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(143, vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm = VL_RAND_RESET_I(12);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__less_than_u = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq_u = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
