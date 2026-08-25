// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vswitch_testbench_v0__Syms.h"


VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03agenerator__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP__tb__DOT__sif__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::driver__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::environment__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::generator__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03agenerator__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::monitor__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::scoreboard__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::txn_object__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"ADDR_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "DUT", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"ADDR_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"data_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"addr_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"data_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"addr_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sif", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    Vswitch_testbench_v0___024root__trace_init_sub__TOP__tb__DOT__sif__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP__tb__DOT__sif__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP__tb__DOT__sif__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"address_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"address_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03agenerator__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03agenerator__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+14,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+17,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_init_top(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_init_top\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vswitch_testbench_v0___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vswitch_testbench_v0___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vswitch_testbench_v0___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_register(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_register\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vswitch_testbench_v0___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vswitch_testbench_v0___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vswitch_testbench_v0___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vswitch_testbench_v0___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_const_0_sub_0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_const_0\n"); );
    // Body
    Vswitch_testbench_v0___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vswitch_testbench_v0___024root*>(voidSelf);
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vswitch_testbench_v0___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_const_0_sub_0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_const_0_sub_0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+14,(8U),32);
    bufp->fullIData(oldp+15,(0x00000010U),32);
    bufp->fullCData(oldp+16,(0x3fU),8);
    bufp->fullIData(oldp+17,(8U),32);
    bufp->fullIData(oldp+18,(0x00000010U),32);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_full_0_sub_0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_full_0\n"); );
    // Body
    Vswitch_testbench_v0___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vswitch_testbench_v0___024root*>(voidSelf);
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vswitch_testbench_v0___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_full_0_sub_0(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vswitch_testbench_v0___024root__trace_full_0_sub_0\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+0,(vlSelfRef.tb__DOT____Vcellout__DUT__data_a),16);
    bufp->fullCData(oldp+1,(vlSelfRef.tb__DOT____Vcellout__DUT__addr_a),8);
    bufp->fullSData(oldp+2,(vlSelfRef.tb__DOT____Vcellout__DUT__data_b),16);
    bufp->fullCData(oldp+3,(vlSelfRef.tb__DOT____Vcellout__DUT__addr_b),8);
    bufp->fullSData(oldp+4,(vlSymsp->TOP__tb__DOT__sif.data_a),16);
    bufp->fullSData(oldp+5,(vlSymsp->TOP__tb__DOT__sif.data_b),16);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__tb__DOT__sif.address_a),8);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb__DOT__sif.address_b),8);
    bufp->fullBit(oldp+8,(vlSelfRef.tb__DOT__clock));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb__DOT__sif.reset));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb__DOT__sif.valid));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__tb__DOT__sif.address),8);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__tb__DOT__sif.data),16);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__tb__DOT__sif.clock));
}
