// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP5.h for the primary calling header

#include "VP5__pch.h"

void VP5___024unit__03a__03achild::init(VP5__Syms* __restrict vlSymsp, CData/*7:0*/ address, CData/*7:0*/ data, CData/*0:0*/ en) {
    VP5___024unit__03a__03abase::init(vlSymsp, address, (IData)(data));
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03achild::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__en = en;
}

void VP5___024unit__03a__03achild::__VnoInFunc_display(VP5__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03achild::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[CHILD] [%s] address = 0x%0h, data = 0x%0h, en = %0b\n",4
                 , 'S',&(tag), '#',8,(IData)(VP5___024unit__03a__03abase::__PVT__address)
                 , '#',8,VP5___024unit__03a__03abase::__PVT__data
                 , '#',1,(IData)(this->__PVT__en));
}

void VP5___024unit__03a__03achild::_ctor_var_reset(VP5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03achild::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__en = 0;
}

VP5___024unit__03a__03achild::~VP5___024unit__03a__03achild() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03achild::~\n"); );
}
