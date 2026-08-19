// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

VL_ATTR_COLD void Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset(Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg___ctor_var_reset\n"); );
    Vhello_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_stream.atDefault() = VL_SCOPED_RAND_RESET_I(32, 17715518286256577264ULL, 15606940603957583775ull);
}
