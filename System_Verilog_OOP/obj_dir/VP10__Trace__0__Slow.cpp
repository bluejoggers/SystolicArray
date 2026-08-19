// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VP10__Syms.h"


VL_ATTR_COLD void VP10___024root__trace_init_sub__TOP__cover_tb__0(VP10___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VP10___024root__trace_init_sub__TOP__0(VP10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_init_sub__TOP__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "cover_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VP10___024root__trace_init_sub__TOP__cover_tb__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VP10___024root__trace_init_sub__TOP__cover_tb__0(VP10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_init_sub__TOP__cover_tb__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
}

VL_ATTR_COLD void VP10___024root__trace_init_top(VP10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_init_top\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VP10___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VP10___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VP10___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VP10___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VP10___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VP10___024root__trace_register(VP10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_register\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VP10___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VP10___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VP10___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VP10___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VP10___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_const_0\n"); );
    // Body
    VP10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VP10___024root*>(voidSelf);
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VP10___024root__trace_full_0_sub_0(VP10___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VP10___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_full_0\n"); );
    // Body
    VP10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VP10___024root*>(voidSelf);
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VP10___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VP10___024root__trace_full_0_sub_0(VP10___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VP10___024root__trace_full_0_sub_0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSymsp->TOP__cover_tb.__PVT__mode),2);
    bufp->fullCData(oldp+1,(vlSymsp->TOP__cover_tb.__PVT__cfg),3);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__cover_tb.__PVT__clk));
}
