// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__a),32);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__b),32);
        bufp->chgIData(oldp+2,(vlSelfRef.quadra_top__DOT__c),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
        bufp->chgIData(oldp+6,(vlSelfRef.quadra_top__DOT__y_p0),25);
        bufp->chgIData(oldp+7,(vlSelfRef.quadra_top__DOT__y_p1),25);
        bufp->chgIData(oldp+8,(vlSelfRef.quadra_top__DOT__y_p2),25);
    }
    bufp->chgBit(oldp+9,(vlSelfRef.clk));
    bufp->chgBit(oldp+10,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+11,(vlSelfRef.x),24);
    bufp->chgBit(oldp+12,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+13,(vlSelfRef.y),25);
    bufp->chgBit(oldp+14,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+15,((0x0000007fU & (vlSelfRef.x 
                                            >> 0x00000011U))),7);
    bufp->chgIData(oldp+16,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->chgQData(oldp+17,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.x)))))),34);
    bufp->chgIData(oldp+19,((0x01ffffffU & (IData)(
                                                   VL_SHIFTRS_QQI(64,64,32, 
                                                                  VL_SHIFTRS_QQQ(64,64,34, 
                                                                                (VL_EXTENDS_QI(64,32, vlSelfRef.quadra_top__DOT__a) 
                                                                                + 
                                                                                VL_MULS_QQQ(64, 
                                                                                VL_EXTENDS_QI(64,32, vlSelfRef.quadra_top__DOT__b), 
                                                                                VL_EXTENDS_QI(64,18, 
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x)))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & (0x000000000000000aULL 
                                                                                + 
                                                                                ((QData)((IData)(vlSelfRef.quadra_top__DOT__c)) 
                                                                                * 
                                                                                (0x00000003ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))) 
                                                                                * (QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))))))))), 0x00000017U)))),25);
    bufp->chgQData(oldp+20,(VL_SHIFTRS_QQI(64,64,32, 
                                           VL_SHIFTRS_QQQ(64,64,34, 
                                                          (VL_EXTENDS_QI(64,32, vlSelfRef.quadra_top__DOT__a) 
                                                           + 
                                                           VL_MULS_QQQ(64, 
                                                                       VL_EXTENDS_QI(64,32, vlSelfRef.quadra_top__DOT__b), 
                                                                       VL_EXTENDS_QI(64,18, 
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x)))), 
                                                          (0x00000003ffffffffULL 
                                                           & (0x000000000000000aULL 
                                                              + 
                                                              ((QData)((IData)(vlSelfRef.quadra_top__DOT__c)) 
                                                               * 
                                                               (0x00000003ffffffffULL 
                                                                & ((QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))) 
                                                                   * (QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))))))))), 0x00000017U)),64);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
