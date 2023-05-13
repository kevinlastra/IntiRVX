// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu.h"
#include "Vtb_cpu__Syms.h"

//==========

void Vtb_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_cpu::eval\n"); );
    Vtb_cpu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_cpu.sv", 6, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtb_cpu::_eval_initial_loop(Vtb_cpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_cpu.sv", 6, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtb_cpu::_sequent__TOP__1(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_sequent__TOP__1\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v3;
    SData/*9:0*/ __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v1;
    SData/*9:0*/ __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v2;
    SData/*9:0*/ __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v3;
    IData/*31:0*/ __Vdlyvval__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0;
    // Body
    __Vdlyvset__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0 = 0U;
    __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v1 = 0U;
    __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v2 = 0U;
    __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v3 = 0U;
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__imem_ack = 1U;
    }
    if (((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->tb_cpu__DOT__dmem_r_v))) {
        vlTOPp->tb_cpu__DOT__dmem_resp_v = 1U;
    }
    if (((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->tb_cpu__DOT__dmem_r_v))) {
        vlTOPp->tb_cpu__DOT__dmem_resp = ((vlTOPp->tb_cpu__DOT__dmem__DOT__mem
                                           [(0x3ffU 
                                             & ((IData)(3U) 
                                                + vlTOPp->tb_cpu__DOT__dmem_data_adr))] 
                                           << 0x18U) 
                                          | ((vlTOPp->tb_cpu__DOT__dmem__DOT__mem
                                              [(0x3ffU 
                                                & ((IData)(2U) 
                                                   + vlTOPp->tb_cpu__DOT__dmem_data_adr))] 
                                              << 0x10U) 
                                             | ((vlTOPp->tb_cpu__DOT__dmem__DOT__mem
                                                 [(0x3ffU 
                                                   & ((IData)(1U) 
                                                      + vlTOPp->tb_cpu__DOT__dmem_data_adr))] 
                                                 << 8U) 
                                                | vlTOPp->tb_cpu__DOT__dmem__DOT__mem
                                                [(0x3ffU 
                                                  & vlTOPp->tb_cpu__DOT__dmem_data_adr)])));
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__wb_res_v) {
        __Vdlyvval__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__wb_res;
        __Vdlyvset__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0 = 1U;
        __Vdlyvdim0__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__wb_rd;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__imem_resp = ((vlTOPp->tb_cpu__DOT__imem__DOT__mem
                                           [(0x3ffU 
                                             & ((IData)(3U) 
                                                + (
                                                   (0x40U 
                                                    & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U])
                                                    ? 
                                                   vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U]
                                                    : vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target)))] 
                                           << 0x18U) 
                                          | ((vlTOPp->tb_cpu__DOT__imem__DOT__mem
                                              [(0x3ffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((0x40U 
                                                     & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U])
                                                     ? 
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U]
                                                     : vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target)))] 
                                              << 0x10U) 
                                             | ((vlTOPp->tb_cpu__DOT__imem__DOT__mem
                                                 [(0x3ffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((0x40U 
                                                        & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U])
                                                        ? 
                                                       vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U]
                                                        : vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target)))] 
                                                 << 8U) 
                                                | vlTOPp->tb_cpu__DOT__imem__DOT__mem
                                                [(0x3ffU 
                                                  & ((0x40U 
                                                      & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U])
                                                      ? 
                                                     vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U]
                                                      : vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target))])));
    }
    if (((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->tb_cpu__DOT__dmem_w_v))) {
        if ((1U & (IData)(vlTOPp->tb_cpu__DOT__dmem_strobe))) {
            __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v0 
                = (0xffU & vlTOPp->tb_cpu__DOT__dmem_data);
            __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v0 
                = (0x3ffU & vlTOPp->tb_cpu__DOT__dmem_data_adr);
        }
        if ((2U & (IData)(vlTOPp->tb_cpu__DOT__dmem_strobe))) {
            __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v1 
                = (0xffU & (vlTOPp->tb_cpu__DOT__dmem_data 
                            >> 8U));
            __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v1 = 1U;
            __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v1 
                = (0x3ffU & vlTOPp->tb_cpu__DOT__dmem_data_adr);
        }
        if ((4U & (IData)(vlTOPp->tb_cpu__DOT__dmem_strobe))) {
            __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v2 
                = (0xffU & (vlTOPp->tb_cpu__DOT__dmem_data 
                            >> 0x10U));
            __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v2 = 1U;
            __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v2 
                = (0x3ffU & vlTOPp->tb_cpu__DOT__dmem_data_adr);
        }
        if ((8U & (IData)(vlTOPp->tb_cpu__DOT__dmem_strobe))) {
            __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v3 
                = (0xffU & (vlTOPp->tb_cpu__DOT__dmem_data 
                            >> 0x18U));
            __Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v3 = 1U;
            __Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v3 
                = (0x3ffU & vlTOPp->tb_cpu__DOT__dmem_data_adr);
        }
    }
    if (__Vdlyvset__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[__Vdlyvdim0__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0] 
            = __Vdlyvval__tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register__v0;
    }
    if (__Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v0) {
        vlTOPp->tb_cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v1) {
        vlTOPp->tb_cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v1] 
            = __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v1;
    }
    if (__Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v2) {
        vlTOPp->tb_cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v2] 
            = __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v2;
    }
    if (__Vdlyvset__tb_cpu__DOT__dmem__DOT__mem__v3) {
        vlTOPp->tb_cpu__DOT__dmem__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__dmem__DOT__mem__v3] 
            = __Vdlyvval__tb_cpu__DOT__dmem__DOT__mem__v3;
    }
}

VL_INLINE_OPT void Vtb_cpu::_sequent__TOP__2(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_sequent__TOP__2\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_n) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init = 0U;
        } else {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c = 1U;
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c 
        = ((IData)(vlTOPp->rst_n) & (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n));
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U] 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[0U];
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[1U] 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[1U];
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U] 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[2U];
    }
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
            = (((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result)) 
                << 6U) | (QData)((IData)(((0x3eU & 
                                           vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U]) 
                                          | (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v)))));
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v 
        = ((2U & (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U] 
                  >> 4U)) | (1U & (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o)));
    if (vlTOPp->rst_n) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__flush) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] = 0U;
        } else {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[0U] 
                = (IData)((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                            << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__jal_res_i))));
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U] 
                = (IData)(((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate)) 
                             << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__jal_res_i))) 
                           >> 0x20U));
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                = ((0xffffffc0U & ((IData)((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                                   << 6U)) | ((0x3eU 
                                               & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                  << 1U)) 
                                              | (1U 
                                                 & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                    >> 0x1eU))));
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                = ((0x3fU & ((IData)((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2)))) 
                             >> 0x1aU)) | (0xffffffc0U 
                                           & ((IData)(
                                                      ((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                       >> 0x20U)) 
                                              << 6U)));
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                = ((0x6000U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                               << 7U)) | ((0x1c00U 
                                           & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                              << 7U)) 
                                          | ((0x3c0U 
                                              & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                  << 7U) 
                                                 | (0x40U 
                                                    & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                       >> 0x19U)))) 
                                             | (0x3fU 
                                                & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2))) 
                                                            >> 0x20U)) 
                                                   >> 0x1aU)))));
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__wb_res_v = ((1U 
                                                == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v)) 
                                               | (2U 
                                                  == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v)));
    if ((1U == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v))) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__wb_res = (IData)(
                                                        (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                                         >> 6U));
    } else {
        if ((2U == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__wb_res = 
                vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[1U];
        }
    }
    if ((1U == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v))) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__wb_rd = (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                                           >> 1U)));
    } else {
        if ((2U == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__wb_rd = 
                (0x1fU & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U]);
        }
    }
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__jal_res_i = vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target;
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__dmem_data = ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                               << 0x1aU) 
                                              | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                 >> 6U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__dmem_r_v = (0U == 
                                             (7U & 
                                              (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                               >> 0xaU)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__dmem_w_v = (1U == 
                                             (7U & 
                                              (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                               >> 0xaU)));
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 0U;
    if ((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 0xdU)))) {
        if ((0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xaU)))) {
            if ((0x200U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
            } else {
                if ((0x100U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                }
            }
        } else {
            if ((1U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 0xaU)))) {
                if ((0x200U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                } else {
                    if ((0x100U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                        if ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                        }
                    }
                }
            } else {
                if ((2U != (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  >> 0xaU)))) {
                    if ((3U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 0xaU)))) {
                        if ((0x200U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                        } else {
                            if ((0x100U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                                if ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                                } else {
                                    if ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                          >> 0xaU)))) {
                            if ((0U != (0xfU & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                >> 6U)))) {
                                if ((1U != (0xfU & 
                                            (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                             >> 6U)))) {
                                    if ((2U != (0xfU 
                                                & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                   >> 6U)))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr = 
        (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
           << 0x1aU) | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                        >> 6U)) + vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]);
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb = 
        ((1U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U])
          ? vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[1U]
          : ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
              << 0x1aU) | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                           >> 6U)));
    if (((((2U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                         >> 0xaU))) & (1U == (0xfU 
                                              & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 >> 6U)))) 
          | ((3U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                           >> 0xaU))) & ((0U == (0xfU 
                                                 & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                    >> 6U))) 
                                         & (1U == (0xfU 
                                                   & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                      >> 6U)))))) 
         | (1U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                         >> 0xaU))))) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
            = (~ vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
    }
    if (vlTOPp->rst_n) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__flush) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[0U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] = 0U;
        } else {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[0U] 
                = (IData)((((QData)((IData)((0x1ffffffU 
                                             & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                >> 7U)))) 
                            << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc))));
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                = ((0xfe000000U & ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode) 
                                   << 0x19U)) | (IData)(
                                                        ((((QData)((IData)(
                                                                           (0x1ffffffU 
                                                                            & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                                               >> 7U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc))) 
                                                         >> 0x20U)));
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                = (0x1ffffffU & ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode) 
                                 >> 7U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__dmem_data_adr = vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr;
        }
    }
    if ((0U == (0xfU & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                        >> 6U)))) {
        if ((0U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 1U;
        } else {
            if ((1U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 2U;
            } else {
                if ((2U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 4U;
                } else {
                    if ((3U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 8U;
                    }
                }
            }
        }
    } else {
        if ((1U == (0xfU & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                            >> 6U)))) {
            if ((0U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 3U;
            } else {
                if ((1U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 6U;
                } else {
                    if ((2U == (0xfU & vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__adr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 0xcU;
                    }
                }
            }
        } else {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe = 0xfU;
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff = 
        (1U & ((vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb 
                >> 0x1fU) ^ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                             >> 5U)));
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
        = (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
             << 0x1aU) | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                          >> 6U)) + vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
    vlTOPp->tb_cpu__DOT__cpu__DOT__flush = 0U;
    if ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[2U])) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__flush = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c)))) {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__dmem_strobe = vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe;
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res = 0U;
    if ((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 0xdU)))) {
        if ((0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xaU)))) {
            if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 9U)))) {
                if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 8U)))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                        = ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                            ? ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                ? ((IData)(4U) + vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res)
                                : ((IData)(4U) + ((
                                                   vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                     >> 6U))))
                            : ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                ? vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res
                                : ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                    << 0x1aU) | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                 >> 6U))));
                }
            }
        } else {
            if ((1U != (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 0xaU)))) {
                if ((2U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  >> 0xaU)))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                        = vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res;
                } else {
                    if ((3U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 0xaU)))) {
                        if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 9U)))) {
                            if ((0x100U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                                if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                              >> 7U)))) {
                                    if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                  >> 6U)))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                                            = (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                   >> 6U)) 
                                               & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb);
                                    }
                                }
                            } else {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                                    = ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                        ? ((0x40U & 
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                            ? (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                   >> 6U)) 
                                               | vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                            : (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                   >> 6U)) 
                                               ^ vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb))
                                        : ((0x40U & 
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                            ? (1U & 
                                               ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                                 ? 
                                                (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                 >> 5U)
                                                 : 
                                                (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                 >> 0x1fU)))
                                            : (1U & 
                                               ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                                 ? 
                                                (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 >> 5U)
                                                 : 
                                                (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                 >> 0x1fU)))));
                            }
                        }
                    } else {
                        if ((4U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                          >> 0xaU)))) {
                            if ((0U == (0xfU & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                >> 6U)))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                                    = ((0x1fU >= vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                        ? (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                             << 0x1aU) 
                                            | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                               >> 6U)) 
                                           << vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                        : 0U);
                            } else {
                                if ((1U == (0xfU & 
                                            (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                             >> 6U)))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                                        = ((0x1fU >= vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                            ? (((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                   >> 6U)) 
                                               >> vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                            : 0U);
                                } else {
                                    if ((2U == (0xfU 
                                                & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                   >> 6U)))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res 
                                            = ((0x1fU 
                                                >= vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                                ? (
                                                   ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                       >> 6U)) 
                                                   << vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__opb)
                                                : 0U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__j_res = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch = 0U;
    if ((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                      >> 0xdU)))) {
        if ((0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xaU)))) {
            if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 9U)))) {
                if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 8U)))) {
                    if ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                        if ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__j_res 
                                = (0xfffffffeU & vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res);
                            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch = 1U;
                        }
                    }
                }
            }
        } else {
            if ((1U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 0xaU)))) {
                if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                              >> 9U)))) {
                    if ((0x100U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])) {
                        if ((1U & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                      >> 7U)))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch 
                                = (1U & ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                          ? ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                              ? (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 >> 5U)
                                              : (~ 
                                                 (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                  >> 0x1fU)))
                                          : ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                              ? (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                 >> 5U)
                                              : (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                 >> 0x1fU))));
                        }
                    } else {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch 
                            = (1U & ((0x80U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                      ? ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                          ? ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                              ? (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                 >> 5U)
                                              : (~ 
                                                 (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                  >> 0x1fU)))
                                          : ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__diff)
                                              ? (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                 >> 5U)
                                              : (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res 
                                                 >> 0x1fU)))
                                      : ((0x40U & vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U])
                                          ? (0U != vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res)
                                          : (0U == vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res))));
                    }
                }
                if (vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__j_res 
                        = ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                            << 0x1aU) | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                         >> 6U));
                }
            }
        }
    }
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target;
    }
    if (((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                       >> 6U))) & (0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                >> 3U))))) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[0U];
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm 
        = (0xfffU & ((((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                     >> 6U))) & (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                     >> 3U)))) 
                      | ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                       >> 6U))) & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                       >> 3U)))))
                      ? ((0xfe0U & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                     << 0x13U) | (0x7ffe0U 
                                                  & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                     >> 0xdU)))) 
                         | (0x1fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U]))
                      : ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                          << 0x13U) | (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                       >> 0xdU))));
    vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v = 0U;
    if ((0x40000000U & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U])) {
        if ((1U & (~ (((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                     >> 6U))) & (0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                     >> 3U)))) 
                      & (3U != (0xfU & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                         << 1U) | (
                                                   vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                   >> 0x1fU)))))))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v = 1U;
        }
    }
    if ((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                      >> 6U)))) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v 
            = ((0U != (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                             >> 3U))) & (~ (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                            >> 0x1eU)));
    } else {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                          >> 6U)))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v 
                = (1U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                >> 3U)));
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v = 0U;
    if ((0x40000000U & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U])) {
        if ((((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                            >> 6U))) & (0U == (7U & 
                                               (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                >> 3U)))) 
             & (3U != (0xfU & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                << 1U) | (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                          >> 0x1fU)))))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v = 1U;
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v 
        = (1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v)));
    if (vlTOPp->rst_n) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
            = vlTOPp->tb_cpu__DOT__imem_resp;
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__flush) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[0U] = 0U;
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[1U] = 0U;
        vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[2U] = 0U;
    } else {
        if ((0U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[0U] 
                = (IData)((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res)) 
                            << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__j_res))));
            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[1U] 
                = (IData)(((((QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__res)) 
                             << 0x20U) | (QData)((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__j_res))) 
                           >> 0x20U));
            vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[2U] 
                = ((0xffffffc0U & ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__branch) 
                                   << 6U)) | ((0xffffffe0U 
                                               & (((~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr)) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                          >> 0xdU)))) 
                                                  << 5U)) 
                                              | (0x1fU 
                                                 & ((vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[3U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                       >> 1U)))));
        }
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate 
            = ((2U != (0xfU & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                << 1U) | (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                          >> 0x1fU))))
                ? (0xfffff000U & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                  << 7U)) : ((0xfff00000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                                >> 0x18U)))) 
                                                 << 0x14U)) 
                                             | ((0xff000U 
                                                 & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                    << 7U)) 
                                                | ((0x800U 
                                                    & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                       >> 2U)) 
                                                   | (0x7feU 
                                                      & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                                                          << 0x13U) 
                                                         | (0x7fffeU 
                                                            & (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                                               >> 0xdU))))))));
    } else {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate 
                = ((0xfffff000U & ((- (IData)((1U & 
                                               ((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm) 
                                                >> 0xbU)))) 
                                   << 0xcU)) | (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm));
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr 
        = ((0x3f800U & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                        >> 0xeU)) | ((0x400U & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                >> 0xaU)) 
                                     | ((0x380U & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                   >> 5U)) 
                                        | (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o))));
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall = 0U;
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak = 0U;
    if (((((((((0x37U == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
               | (0x17U == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
              | (0x6fU == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
             | (0x67U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
            | (0x63U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
           | (0xe3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
          | (0x263U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
         | (0x2e3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
        if ((0x37U == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
        } else {
            if ((0x17U == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
            } else {
                if ((0x6fU == (0x7fU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                } else {
                    if ((0x67U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                    } else {
                        if ((0x63U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                        } else {
                            if ((0xe3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                            } else {
                                if ((0x263U == (0x3ffU 
                                                & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                } else {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (((((((((0x363U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                   | (0x3e3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x83U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                | (0x103U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
               | (0x203U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
              | (0x283U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
             | (0x23U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
            if ((0x363U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
            } else {
                if ((0x3e3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 5U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                } else {
                    if ((3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                    } else {
                        if ((0x83U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                        } else {
                            if ((0x103U == (0x3ffU 
                                            & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                            } else {
                                if ((0x203U == (0x3ffU 
                                                & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                } else {
                                    if ((0x283U == 
                                         (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 0U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                    } else {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xa3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                       | (0x123U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                      | (0x13U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (0x113U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                    | (0x193U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                   | (0x213U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                  | (0x313U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                 | (0x393U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
                if ((0xa3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                } else {
                    if ((0x123U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 1U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 1U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                    } else {
                        if ((0x13U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                        } else {
                            if ((0x113U == (0x3ffU 
                                            & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                            } else {
                                if ((0x193U == (0x3ffU 
                                                & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                } else {
                                    if ((0x213U == 
                                         (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                    } else {
                                        if ((0x313U 
                                             == (0x3ffU 
                                                 & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                        } else {
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((((((((0x93U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                           | (0x293U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                          | (0x10293U == (0x3fbffU 
                                          & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                         | (0x33U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                        | (0x10033U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                       | (0xb3U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                      | (0x133U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                     | (0x1b3U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)))) {
                    if ((0x93U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                    } else {
                        if ((0x293U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                        } else {
                            if ((0x10293U == (0x3fbffU 
                                              & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                            } else {
                                if ((0x33U == (0x3fbffU 
                                               & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                } else {
                                    if ((0x10033U == 
                                         (0x3fbffU 
                                          & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 2U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                    } else {
                                        if ((0xb3U 
                                             == (0x3fbffU 
                                                 & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                        } else {
                                            if ((0x133U 
                                                 == 
                                                 (0x3fbffU 
                                                  & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                            } else {
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x233U == (0x3fbffU 
                                           & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                               | (0x2b3U == (0x3fbffU 
                                             & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                              | (0x102b3U == (0x3fbffU 
                                              & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                             | (0x333U == (0x3fbffU 
                                           & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                            | (0x3b3U == (0x3fbffU 
                                          & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                           | (0xfU == (0x3c3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) 
                          | (0x8fU == vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) 
                         | (0x73U == vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                        if ((0x233U == (0x3fbffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                        } else {
                            if ((0x2b3U == (0x3fbffU 
                                            & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                            } else {
                                if ((0x102b3U == (0x3fbffU 
                                                  & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 4U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                } else {
                                    if ((0x333U == 
                                         (0x3fbffU 
                                          & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 3U;
                                    } else {
                                        if ((0x3b3U 
                                             == (0x3fbffU 
                                                 & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit = 0U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit = 3U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 4U;
                                        } else {
                                            if ((0xfU 
                                                 == 
                                                 (0x3c3ffU 
                                                  & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 1U;
                                            } else {
                                                if (
                                                    (0x8fU 
                                                     == vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) {
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence = 1U;
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                                } else {
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x473U == vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr)) {
                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak = 1U;
                        } else {
                            if ((0xf3U == (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                            } else {
                                if ((0x173U == (0x3ffU 
                                                & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                } else {
                                    if ((0x1f3U == 
                                         (0x3ffU & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                    } else {
                                        if ((0x2f3U 
                                             == (0x3ffU 
                                                 & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 0U;
                                            vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                        } else {
                                            if ((0x373U 
                                                 == 
                                                 (0x3ffU 
                                                  & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 1U;
                                                vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                            } else {
                                                if (
                                                    (0x3f3U 
                                                     == 
                                                     (0x3ffU 
                                                      & vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr))) {
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr = 1U;
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel = 2U;
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm = 1U;
                                                } else {
                                                    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode 
        = (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit) 
            << 0xdU) | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit) 
                         << 0xaU) | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel) 
                                      << 6U) | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm) 
                                                 << 5U) 
                                                | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence) 
                                                       << 3U) 
                                                      | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall) 
                                                          << 2U) 
                                                         | (((IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak) 
                                                             << 1U) 
                                                            | (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr)))))))));
}

VL_INLINE_OPT void Vtb_cpu::_multiclk__TOP__5(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_multiclk__TOP__5\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v = 0U;
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v 
                = vlTOPp->tb_cpu__DOT__dmem_resp_v;
        }
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result 
                = (((0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                  >> 0xaU))) & ((3U 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                     >> 6U))) 
                                                | (4U 
                                                   == 
                                                   (0xfU 
                                                    & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                                       >> 6U)))))
                    ? (0xffffU & vlTOPp->tb_cpu__DOT__dmem_resp)
                    : ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->tb_cpu__DOT__dmem_resp 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->tb_cpu__DOT__dmem_resp)));
        }
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n 
                = (1U & (~ (IData)(vlTOPp->tb_cpu__DOT__dmem_resp_v)));
        }
    } else {
        if ((1U == (3U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                          >> 0xdU)))) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n 
                = (0U == (7U & (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                >> 0xaU)));
        }
    }
    if (VL_UNLIKELY(((0U == vlTOPp->tb_cpu__DOT__dmem_data_adr) 
                     & (IData)(vlTOPp->tb_cpu__DOT__dmem_w_v)))) {
        VL_WRITEF("Program exit with status %10#\n",
                  32,vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register
                  [0xaU]);
        VL_FINISH_MT("tb_cpu.sv", 83, "");
    }
    if ((1U & (~ (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v)))) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v) {
            vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2 
                = vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register
                [(0x1fU & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                            << 0x13U) | (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                         >> 0xdU)))];
        }
    }
    if (vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v) {
        vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1 
            = vlTOPp->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register
            [(0x1fU & ((vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[2U] 
                        << 0x18U) | (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[1U] 
                                     >> 8U)))];
    }
}

VL_INLINE_OPT void Vtb_cpu::_combo__TOP__6(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_combo__TOP__6\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm = 0U;
    if (vlTOPp->rst_n) {
        if (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
            if (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c) {
                if (vlTOPp->tb_cpu__DOT__cpu__DOT__flush) {
                    vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target 
                        = vlTOPp->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[0U];
                } else {
                    if ((0xa0U == (IData)(vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))) {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm 
                            = ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o) 
                                  | ((0x800U & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                >> 9U)) 
                                     | (0x7feU & (vlTOPp->tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o 
                                                  >> 0x14U)))));
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target 
                            = (vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc 
                               + vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm);
                    } else {
                        vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target 
                            = ((IData)(4U) + vlTOPp->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc);
                    }
                }
            }
        } else {
            vlTOPp->tb_cpu__DOT__cpu__DOT__pg_target = 0U;
        }
    }
}

void Vtb_cpu::_eval(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_eval\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vtb_cpu::_change_request(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_change_request\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtb_cpu::_change_request_1(Vtb_cpu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_change_request_1\n"); );
    Vtb_cpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtb_cpu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
