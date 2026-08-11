// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

VL_ATTR_COLD void Vswitch_testbench_v0_switch_if___ctor_var_reset(Vswitch_testbench_v0_switch_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vswitch_testbench_v0_switch_if___ctor_var_reset\n"); );
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12021632533271657083ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10363016170300574568ull);
    vlSelf->data_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13020576239233623063ull);
    vlSelf->data_b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5098037738387747998ull);
    vlSelf->address_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 971595663457240371ull);
    vlSelf->address_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 778498157570315470ull);
}
