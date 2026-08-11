// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP4.h for the primary calling header

#include "VP4__pch.h"

void VP4___024unit__03a__03apacket::init(VP4__Syms* __restrict vlSymsp, IData/*31:0*/ address) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03apacket::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__address = address;
}

void VP4___024unit__03a__03apacket::__VnoInFunc_display(VP4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03apacket::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[BASE] Packet address: %0d\n",1, '~',32,this->__PVT__address);
}

void VP4___024unit__03a__03apacket::_ctor_var_reset(VP4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03apacket::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__address = 0;
}

VP4___024unit__03a__03apacket::~VP4___024unit__03a__03apacket() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03apacket::~\n"); );
}
