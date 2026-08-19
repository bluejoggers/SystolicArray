// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_reg_if___ctor_var_reset(VUVM_regblock_reg_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VUVM_regblock_reg_if___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->w_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2266221496550135194ull);
    vlSelf->r_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5382022666816333102ull);
    vlSelf->address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12021632533271657083ull);
    vlSelf->w_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1356167372520825866ull);
    vlSelf->r_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9282394983452304596ull);
}
