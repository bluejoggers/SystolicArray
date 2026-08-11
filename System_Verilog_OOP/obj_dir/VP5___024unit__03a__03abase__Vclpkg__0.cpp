// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP5.h for the primary calling header

#include "VP5__pch.h"

void VP5___024unit__03a__03abase::init(VP5__Syms* __restrict vlSymsp, CData/*7:0*/ address, CData/*7:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03abase::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__address = address;
    this->__PVT__data = data;
}

void VP5___024unit__03a__03abase::__VnoInFunc_display(VP5__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03abase::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[BASE] [%s] address = 0x%0h, data = 0x%0h\n",3
                 , 'S',&(tag), '#',8,(IData)(this->__PVT__address)
                 , '#',8,this->__PVT__data);
}

void VP5___024unit__03a__03abase::_ctor_var_reset(VP5__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03abase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__address = 0;
    __PVT__data = 0;
}

VP5___024unit__03a__03abase::~VP5___024unit__03a__03abase() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP5___024unit__03a__03abase::~\n"); );
}
