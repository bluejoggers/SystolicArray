// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<Vuvm_pkg_uvm_hdl_path_slice__struct__0> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__slices = t;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_add_slice(Vuvm_pkg__Syms* __restrict vlSymsp, Vuvm_pkg_uvm_hdl_path_slice__struct__0 slice) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_add_slice\n"); );
    // Body
    this->__PVT__slices.renew_copy(((IData)(1U) + this->__PVT__slices.size()), this->__PVT__slices);
    this->__PVT__slices.atWrite((this->__PVT__slices.size() 
                                 - (IData)(1U))) = slice;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_add_path(Vuvm_pkg__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::__VnoInFunc_add_path\n"); );
    // Body
    Vuvm_pkg_uvm_hdl_path_slice__struct__0 t;
    t.__PVT__path.clear();
    t.__PVT__offset = 0;
    t.__PVT__size = 0;
    t.__PVT__offset = offset;
    t.__PVT__path = path;
    t.__PVT__size = size;
    this->__VnoInFunc_add_slice(vlSymsp, t);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::init(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__slices.atDefault().__PVT__offset = 0;
    __PVT__slices.atDefault().__PVT__size = 0;
}
