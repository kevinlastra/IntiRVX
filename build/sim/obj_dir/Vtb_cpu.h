// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTB_CPU_H_
#define _VTB_CPU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtb_cpu__Syms;
class Vtb_cpu_VerilatedVcd;


//----------

VL_MODULE(Vtb_cpu) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_cpu__DOT__imem_ack;
        CData/*0:0*/ tb_cpu__DOT__dmem_r_v;
        CData/*0:0*/ tb_cpu__DOT__dmem_w_v;
        CData/*3:0*/ tb_cpu__DOT__dmem_strobe;
        CData/*0:0*/ tb_cpu__DOT__dmem_resp_v;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__instruction_flushed;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__flush;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__data_valid_rm2c;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__wb_res_v;
        CData/*4:0*/ tb_cpu__DOT__cpu__DOT__wb_rd;
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
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__branch;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__eq;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__less_than;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__less_than_u;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__greater_eq_u;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__diff;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__state_c;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__state_n;
        CData/*3:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__strobe;
        CData/*0:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v;
        CData/*1:0*/ tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v;
        SData/*14:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode;
        SData/*11:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm;
        IData/*31:0*/ tb_cpu__DOT__imem_resp;
        IData/*31:0*/ tb_cpu__DOT__dmem_data_adr;
        IData/*31:0*/ tb_cpu__DOT__dmem_data;
        IData/*31:0*/ tb_cpu__DOT__dmem_resp;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__jal_res_i;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__pg_target;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__wb_res;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__ifetch__DOT__data_o;
        IData/*17:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm;
        WData/*71:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__data_o[3];
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc;
        WData/*142:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[5];
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__opb;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__res;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__j_res;
        WData/*70:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__data_o[3];
        WData/*70:0*/ tb_cpu__DOT__cpu__DOT__alu__DOT__pipeline_alu2wb__DOT__data[3];
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__adr;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result;
    };
    struct {
        QData/*37:0*/ tb_cpu__DOT__cpu__DOT__mem__DOT__data_o;
        IData/*31:0*/ tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[32];
        CData/*7:0*/ tb_cpu__DOT__imem__DOT__mem[4096];
        CData/*7:0*/ tb_cpu__DOT__dmem__DOT__mem[4096];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtb_cpu__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_cpu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtb_cpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtb_cpu();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtb_cpu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtb_cpu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtb_cpu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtb_cpu__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(Vtb_cpu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtb_cpu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtb_cpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtb_cpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(Vtb_cpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(Vtb_cpu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vtb_cpu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vtb_cpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtb_cpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
