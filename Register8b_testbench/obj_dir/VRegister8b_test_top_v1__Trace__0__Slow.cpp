// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VRegister8b_test_top_v1__Syms.h"


VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atest__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP__tb__DOT__rif__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::driver__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::environment__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::monitor__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::scoreboard__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::test__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atest__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "$unit::txn_object__Vclpkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT);
    VL_TRACE_PUSH_PREFIX(tracep, "DUT", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rif", VerilatedTracePrefixType::SCOPE_INTERFACE, 0, 0);
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP__tb__DOT__rif__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP__tb__DOT__rif__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP__tb__DOT__rif__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atxn_object__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03adriver__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03amonitor__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03ascoreboard__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03aenvironment__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atest__Vclpkg__0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_sub__TOP____024unit__03a__03atest__Vclpkg__0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+9,0,"BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_init_top(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_init_top\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VRegister8b_test_top_v1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegister8b_test_top_v1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegister8b_test_top_v1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_register(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_register\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VRegister8b_test_top_v1___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VRegister8b_test_top_v1___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VRegister8b_test_top_v1___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VRegister8b_test_top_v1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_const_0_sub_0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_const_0\n"); );
    // Body
    VRegister8b_test_top_v1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister8b_test_top_v1___024root*>(voidSelf);
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VRegister8b_test_top_v1___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_const_0_sub_0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_const_0_sub_0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+8,(8U),32);
    bufp->fullIData(oldp+9,(8U),32);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_full_0_sub_0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_full_0\n"); );
    // Body
    VRegister8b_test_top_v1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister8b_test_top_v1___024root*>(voidSelf);
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VRegister8b_test_top_v1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_full_0_sub_0(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegister8b_test_top_v1___024root__trace_full_0_sub_0\n"); );
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb__DOT__clk));
    bufp->fullBit(oldp+1,(vlSelfRef.tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__tb__DOT__rif.reset));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__tb__DOT__rif.enable));
    bufp->fullCData(oldp+4,(vlSymsp->TOP__tb__DOT__rif.data_in),8);
    bufp->fullCData(oldp+5,(vlSelfRef.tb__DOT____Vcellout__DUT__data_out),8);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__tb__DOT__rif.clk));
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb__DOT__rif.data_out),8);
}
