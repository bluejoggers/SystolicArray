// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP1.h for the primary calling header

#include "VP1__pch.h"

void VP1___024unit__03a__03amy_config::init(VP1__Syms* __restrict vlSymsp, CData/*7:0*/ a_width, IData/*31:0*/ d_width) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP1___024unit__03a__03amy_config::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__a_width = a_width;
    this->__PVT__d_width = d_width;
}

void VP1___024unit__03a__03amy_config::__VnoInFunc_display(VP1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP1___024unit__03a__03amy_config::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("Address Width: %0d, Data Width: %0d\n",2
                 , '#',8,this->__PVT__a_width, '#',32,this->__PVT__d_width);
}

void VP1___024unit__03a__03amy_config::_ctor_var_reset(VP1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP1___024unit__03a__03amy_config::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__a_width = 0;
    __PVT__d_width = 0;
}
