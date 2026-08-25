// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

VL_ATTR_COLD void VUVM_Register8b_reg_if___ctor_var_reset(VUVM_Register8b_reg_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VUVM_Register8b_reg_if___ctor_var_reset\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10574596302020702150ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11675680895196038875ull);
}

VL_ATTR_COLD void VUVM_Register8b_reg_if___configure_coverage(VUVM_Register8b_reg_if* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VUVM_Register8b_reg_if___configure_coverage\n"); );
    VUVM_Register8b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
