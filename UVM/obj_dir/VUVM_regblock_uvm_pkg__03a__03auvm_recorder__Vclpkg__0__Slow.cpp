// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

VL_ATTR_COLD void VUVM_regblock_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset(VUVM_regblock_uvm_pkg__03a__03auvm_recorder__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset\n"); );
    VUVM_regblock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_recorder.atDefault() = VL_SCOPED_RAND_RESET_I(32, 14110915553244549694ULL, 17517965387487639987ull);
    vlSelf->__PVT__m_id = VL_SCOPED_RAND_RESET_I(32, 14110915553244549694ULL, 17085424622612734464ull);
}
