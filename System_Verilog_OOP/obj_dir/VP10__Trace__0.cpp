// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VP10__Syms.h"


void VP10___024root__trace_chg_0_sub_0(VP10___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VP10___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_chg_0\n"); );
    // Body
    VP10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VP10___024root*>(voidSelf);
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VP10___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VP10___024root__trace_chg_0_sub_0(VP10___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_chg_0_sub_0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgCData(oldp+0,(vlSymsp->TOP__cover_tb.__PVT__mode),2);
    bufp->chgCData(oldp+1,(vlSymsp->TOP__cover_tb.__PVT__cfg),3);
    bufp->chgBit(oldp+2,(vlSymsp->TOP__cover_tb.__PVT__clk));
}

void VP10___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    VP10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VP10___024root*>(voidSelf);
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
