// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vswitch_testbench_v1__Syms.h"


void Vswitch_testbench_v1___024root__trace_chg_0_sub_0(Vswitch_testbench_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vswitch_testbench_v1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v1___024root__trace_chg_0\n"); );
    // Body
    Vswitch_testbench_v1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vswitch_testbench_v1___024root*>(voidSelf);
    Vswitch_testbench_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vswitch_testbench_v1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vswitch_testbench_v1___024root__trace_chg_0_sub_0(Vswitch_testbench_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v1___024root__trace_chg_0_sub_0\n"); );
    Vswitch_testbench_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.tb__DOT____Vcellout__DUT__data_a),16);
        bufp->chgCData(oldp+1,(vlSelfRef.tb__DOT____Vcellout__DUT__addr_a),8);
        bufp->chgSData(oldp+2,(vlSelfRef.tb__DOT____Vcellout__DUT__data_b),16);
        bufp->chgCData(oldp+3,(vlSelfRef.tb__DOT____Vcellout__DUT__addr_b),8);
        bufp->chgSData(oldp+4,(vlSymsp->TOP__tb__DOT__sif.data_a),16);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__tb__DOT__sif.data_b),16);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__tb__DOT__sif.address_a),8);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__tb__DOT__sif.address_b),8);
    }
    bufp->chgBit(oldp+8,(vlSelfRef.tb__DOT__clock));
    bufp->chgBit(oldp+9,(vlSymsp->TOP__tb__DOT__sif.reset));
    bufp->chgBit(oldp+10,(vlSymsp->TOP__tb__DOT__sif.valid));
    bufp->chgCData(oldp+11,(vlSymsp->TOP__tb__DOT__sif.address),8);
    bufp->chgSData(oldp+12,(vlSymsp->TOP__tb__DOT__sif.data),16);
    bufp->chgBit(oldp+13,(vlSymsp->TOP__tb__DOT__sif.clock));
}

void Vswitch_testbench_v1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v1___024root__trace_cleanup\n"); );
    // Body
    Vswitch_testbench_v1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vswitch_testbench_v1___024root*>(voidSelf);
    Vswitch_testbench_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
