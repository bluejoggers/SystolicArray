// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP4.h for the primary calling header

#include "VP4__pch.h"

void VP4___024unit__03a__03asub_packet::init(VP4__Syms* __restrict vlSymsp, IData/*31:0*/ address, IData/*31:0*/ data) {
    VP4___024unit__03a__03apacket::init(vlSymsp, address);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03asub_packet::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__data = data;
}

void VP4___024unit__03a__03asub_packet::__VnoInFunc_display(VP4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03asub_packet::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[CHILD] Packet address: %0d, data: %0d\n",2
                 , '~',32,VP4___024unit__03a__03apacket::__PVT__address
                 , '~',32,this->__PVT__data);
}

void VP4___024unit__03a__03asub_packet::_ctor_var_reset(VP4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03asub_packet::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = 0;
}

VP4___024unit__03a__03asub_packet::~VP4___024unit__03a__03asub_packet() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP4___024unit__03a__03asub_packet::~\n"); );
}
