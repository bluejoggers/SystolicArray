// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

void VP10___024root____VbeforeTrig_h5439cdbc__0(VP10___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__0(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    __PVT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.__PVT__cg_inst = VL_NEW(VP10_cover_tb__03a__03acg, vlSymsp);
    __PVT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000014U, __PVT__unnamedblk1__DOT__i)) {
        VP10___024root____VbeforeTrig_h5439cdbc__0((&vlSymsp->TOP), 
                                                   "@(negedge cover_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h5439cdbc__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge cover_tb.clk)", 
                                                                "P10.sv", 
                                                                19);
        vlSelfRef.__PVT__mode = (3U & VL_RANDOM_I());
        vlSelfRef.__PVT__cfg = (7U & VL_RANDOM_I());
        VL_WRITEF_NX("[%0t] MODE: 0x%0h CONFIG: 0x%0h\n",4, 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',2,(IData)(vlSelfRef.__PVT__mode)
                     , '#',3,vlSelfRef.__PVT__cfg);
        __PVT__unnamedblk1__DOT__i = ((IData)(1U) + __PVT__unnamedblk1__DOT__i);
        ++(vlSelf->__Vcoverage[15]);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000001f4ULL, 
                                            nullptr, 
                                            "P10.sv", 
                                            26);
    VL_NULL_CHECK(vlSelfRef.__PVT__cg_inst, "P10.sv", 26)->__VnoInFunc_get_inst_coverage__Vtcwrap_1_2(vlSymsp, vlSelfRef.__VlemCall_0__get_inst_coverage__Vtcwrap_1_2);
    VL_WRITEF_NX("COVERAGE: %0.2f %%\n",1, 'D',vlSelfRef.__VlemCall_0__get_inst_coverage__Vtcwrap_1_2);
    VL_FINISH_MT("P10.sv", 27, "");
    ++(vlSelf->__Vcoverage[16]);
    co_return;
}

VlCoroutine VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__1(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___eval_initial__TOP__cover_tb__Vtiming__1\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x000000000000000aULL, 
                                                nullptr, 
                                                "P10.sv", 
                                                6);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
        if ((1U & (~ (IData)(vlSelfRef.__PVT__clk)))) {
            ++(vlSelf->__Vcoverage[12]);
        }
        if (vlSelfRef.__PVT__clk) {
            ++(vlSelf->__Vcoverage[13]);
        }
        ++(vlSelf->__Vcoverage[14]);
    }
    co_return;
}

void VP10_cover_tb___act_comb__TOP__cover_tb__0(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___act_comb__TOP__cover_tb__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != ((IData)(vlSelfRef.__PVT__mode) ^ (IData)(vlSelfRef.__Vtogcov__mode)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 0, vlSelfRef.__PVT__mode, vlSelfRef.__Vtogcov__mode);
        vlSelfRef.__Vtogcov__mode = vlSelfRef.__PVT__mode;
    }
    if ((0U != ((IData)(vlSelfRef.__PVT__cfg) ^ (IData)(vlSelfRef.__Vtogcov__cfg)))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSelf->__Vcoverage + 4, vlSelfRef.__PVT__cfg, vlSelfRef.__Vtogcov__cfg);
        vlSelfRef.__Vtogcov__cfg = vlSelfRef.__PVT__cfg;
    }
}

void VP10_cover_tb___act_sequent__TOP__cover_tb__0(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___act_sequent__TOP__cover_tb__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 10, vlSelfRef.__PVT__clk, vlSelfRef.__Vtogcov__clk);
        vlSelfRef.__Vtogcov__clk = vlSelfRef.__PVT__clk;
    }
}

void VP10_cover_tb___nba_sequent__TOP__cover_tb__0(VP10_cover_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VP10_cover_tb___nba_sequent__TOP__cover_tb__0\n"); );
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_NULL_CHECK(vlSelfRef.__PVT__cg_inst, "P10.sv", 13)->__VnoInFunc_sample(vlSymsp);
}
