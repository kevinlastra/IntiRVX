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
        bufp->chgBit(oldp+11,((0xa0U == (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode))));
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
        bufp->chgBit(oldp+20,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                             >> 0x25U)))));
        bufp->chgIData(oldp+21,((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o)),32);
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                             >> 0x26U)))));
        bufp->chgCData(oldp+23,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o 
                                                  >> 0x20U)))),5);
        bufp->chgBit(oldp+24,((0U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                            >> 0xdU)))));
        bufp->chgBit(oldp+25,((1U & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o))));
        bufp->chgIData(oldp+26,((IData)((vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                         >> 6U))),32);
        bufp->chgCData(oldp+27,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o 
                                                  >> 1U)))),5);
        bufp->chgBit(oldp+28,((1U == (3U & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[4U] 
                                            >> 0xdU)))));
        bufp->chgIData(oldp+29,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_res),32);
        bufp->chgBit(oldp+30,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_res_v));
        bufp->chgCData(oldp+31,(vlSelf->tb_cpu__DOT__cpu__DOT__wb_rd),5);
        bufp->chgIData(oldp+32,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__opb),32);
        bufp->chgIData(oldp+33,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__alu_res),32);
        bufp->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr)))));
        bufp->chgBit(oldp+35,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__branch_v));
        bufp->chgIData(oldp+36,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__res),32);
        bufp->chgQData(oldp+37,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__branch_v)) 
                                  << 0x26U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr))))) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U] 
                                                                       >> 1U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__res)))))),39);
        bufp->chgQData(oldp+39,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__data_o),39);
        bufp->chgBit(oldp+41,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__diff));
        bufp->chgBit(oldp+42,(vlSelf->tb_cpu__DOT__cpu__DOT__alu__DOT__illegal_instr));
        bufp->chgQData(oldp+43,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__data_o),38);
        bufp->chgBit(oldp+45,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_c));
        bufp->chgIData(oldp+46,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__adr),32);
        bufp->chgCData(oldp+47,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__strobe),4);
        bufp->chgBit(oldp+48,((1U & (~ (IData)(((0U 
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
        bufp->chgSData(oldp+49,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode),15);
        bufp->chgIData(oldp+50,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode_parse_instr),18);
        bufp->chgIData(oldp+51,((vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                 >> 7U)),25);
        bufp->chgQData(oldp+52,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decode)) 
                                  << 0x19U) | (QData)((IData)(
                                                              (vlSelf->tb_cpu__DOT__cpu__DOT__data_f2d 
                                                               >> 7U))))),40);
        bufp->chgIData(oldp+54,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__pc),32);
        bufp->chgBit(oldp+55,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__state_c));
        bufp->chgBit(oldp+56,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__init));
        bufp->chgCData(oldp+57,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__unit),2);
        bufp->chgCData(oldp+58,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sub_unit),3);
        bufp->chgCData(oldp+59,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__sel),4);
        bufp->chgBit(oldp+60,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__imm));
        bufp->chgBit(oldp+61,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__csr));
        bufp->chgBit(oldp+62,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__fence));
        bufp->chgBit(oldp+63,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ecall));
        bufp->chgBit(oldp+64,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__ebreak));
        bufp->chgBit(oldp+65,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__decoder__DOT__illegal_instr));
        bufp->chgCData(oldp+66,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 8U)))),5);
        bufp->chgCData(oldp+67,((0x1fU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                  >> 0xdU)))),5);
        bufp->chgCData(oldp+68,((3U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x26U)))),2);
        bufp->chgCData(oldp+69,((7U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                               >> 0x23U)))),3);
        bufp->chgCData(oldp+70,((0xfU & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                 >> 0x1fU)))),4);
        bufp->chgBit(oldp+71,((1U & (IData)((vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                             >> 0x1eU)))));
        bufp->chgIData(oldp+72,((0x1ffffffU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),25);
        bufp->chgWData(oldp+73,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o),143);
        bufp->chgBit(oldp+78,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1_v));
        bufp->chgBit(oldp+79,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2_v));
        bufp->chgCData(oldp+80,((0x1fU & (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r))),5);
        bufp->chgBit(oldp+81,(((IData)(((0ULL == (0xc000000000ULL 
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
        bufp->chgIData(oldp+82,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__immediate),32);
        bufp->chgSData(oldp+83,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm),12);
        bufp->chgBit(oldp+84,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__s_imm_v));
        bufp->chgIData(oldp+85,((0xfffffU & (IData)(
                                                    (vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r 
                                                     >> 5U)))),20);
        bufp->chgBit(oldp+86,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__l_imm_v));
        bufp->chgBit(oldp+87,((IData)((0ULL == (0xf800000000ULL 
                                                & vlSelf->tb_cpu__DOT__cpu__DOT__data_pg2r)))));
        bufp->chgCData(oldp+88,(vlSelf->tb_cpu__DOT__cpu__DOT__write_back__DOT__res_v),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+89,((((QData)((IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result)) 
                                  << 6U) | (QData)((IData)(
                                                           ((0x3eU 
                                                             & vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__data_o[2U]) 
                                                            | (IData)(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v)))))),38);
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
        bufp->chgWData(oldp+91,(__Vtemp_h65309a58__0),143);
        bufp->chgIData(oldp+96,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs1),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+97,(vlSelf->tb_cpu__DOT__imem_resp),32);
        bufp->chgBit(oldp+98,(vlSelf->tb_cpu__DOT__imem_ack));
        bufp->chgIData(oldp+99,(vlSelf->tb_cpu__DOT__dmem_resp),32);
        bufp->chgBit(oldp+100,(vlSelf->tb_cpu__DOT__dmem_resp_v));
        bufp->chgSData(oldp+101,((0xffffU & vlSelf->tb_cpu__DOT__dmem_resp)),16);
        bufp->chgIData(oldp+102,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[0]),32);
        bufp->chgIData(oldp+103,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[1]),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[2]),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[3]),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[4]),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[5]),32);
        bufp->chgIData(oldp+108,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[6]),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[7]),32);
        bufp->chgIData(oldp+110,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[8]),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[9]),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[10]),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[11]),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[12]),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[13]),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[14]),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[15]),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[16]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[17]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[18]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[19]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[20]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[21]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[22]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[23]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[24]),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[25]),32);
        bufp->chgIData(oldp+128,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[26]),32);
        bufp->chgIData(oldp+129,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[27]),32);
        bufp->chgIData(oldp+130,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[28]),32);
        bufp->chgIData(oldp+131,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[29]),32);
        bufp->chgIData(oldp+132,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[30]),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__register_file__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+134,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__state_n));
        bufp->chgIData(oldp+135,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result),32);
        bufp->chgBit(oldp+136,(vlSelf->tb_cpu__DOT__cpu__DOT__mem__DOT__mem_result_v));
        bufp->chgIData(oldp+137,(vlSelf->tb_cpu__DOT__cpu__DOT__register_manager__DOT__rs2),32);
    }
    bufp->chgBit(oldp+138,(vlSelf->clk));
    bufp->chgBit(oldp+139,(vlSelf->rst_n));
    bufp->chgIData(oldp+140,(vlSelf->tb_cpu__DOT__cpu__DOT__pg_target),32);
    bufp->chgIData(oldp+141,(vlSelf->tb_cpu__DOT__cpu__DOT__pc_gen__DOT__jal_imm),32);
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
