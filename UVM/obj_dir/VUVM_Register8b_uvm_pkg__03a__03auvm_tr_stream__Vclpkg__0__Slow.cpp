// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset(VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_stream.atDefault() = VL_SCOPED_RAND_RESET_I(32, 17715518286256577264ULL, 15606940603957583775ull);
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___configure_coverage\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}

VL_ATTR_COLD void VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream___configure_coverage(VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream___configure_coverage\n"); );
    (void)vlSelf;  // Prevent unused variable warning
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
