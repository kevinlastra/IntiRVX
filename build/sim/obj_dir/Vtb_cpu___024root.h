// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cpu.h for the primary calling header

#ifndef VERILATED_VTB_CPU___024ROOT_H_
#define VERILATED_VTB_CPU___024ROOT_H_  // guard

#include "verilated.h"

class Vtb_cpu__Syms;

class Vtb_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__data_valid_rm2c;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init;
    CData/*1:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit;
    CData/*2:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit;
    CData/*3:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v;
    CData/*0:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*14:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode;
    IData/*31:0*/ tb_cpu__DOT__resp_data;
    IData/*31:0*/ tb_cpu__DOT__i;
    IData/*31:0*/ tb_cpu__DOT__j;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__data_f2d;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__instr_pc;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__jal_res_i;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__pg_target;
    IData/*17:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc;
    VlWide<5>/*142:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2;
    IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*39:0*/ tb_cpu__DOT__cpu__DOT__data_pg2r;
    VlUnpacked<IData/*31:0*/, 32> tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register;
    VlUnpacked<CData/*7:0*/, 1024> tb_cpu__DOT__mem__DOT__data;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cpu___024root(Vtb_cpu__Syms* symsp, const char* v__name);
    ~Vtb_cpu___024root();
    VL_UNCOPYABLE(Vtb_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
