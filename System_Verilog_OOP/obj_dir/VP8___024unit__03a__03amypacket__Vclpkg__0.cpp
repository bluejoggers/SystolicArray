// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP8.h for the primary calling header

#include "VP8__pch.h"

void VP8___024unit__03a__03amypacket::__VnoInFunc_display(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("MODE: 0x%0h, KEY: 0x%0h\n",2, '#',2,this->__PVT__mode
                 , '#',3,(IData)(this->__PVT__key));
}

void VP8___024unit__03a__03amypacket::init(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__constraint.write_var(this->__PVT__mode, 2ULL, 
                                      "mode", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__key, 3ULL, 
                                      "key", 0ULL);
    this->__PVT__constraint.markRandc("key");
}

void VP8___024unit__03a__03amypacket::__VnoInFunc_randomize(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VP8___024unit__03a__03amypacket::__VnoInFunc_mode_c_setup_constraint(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc_mode_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (bvult ((_ zero_extend 30) mode) #x00000003))"s, "P8.sv", 0x0000000cU, 
                                 "    constraint mode_c { mode<3;}");
}

void VP8___024unit__03a__03amypacket::__VnoInFunc_key_c_setup_constraint(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc_key_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (bvugt ((_ zero_extend 29) key) #x00000002))"s, "P8.sv", 0x0000000dU, 
                                 "    constraint key_c { key>2;");
    this->__PVT__constraint.hard("(__Vbv (bvult ((_ zero_extend 29) key) #x00000007))"s, "P8.sv", 0x0000000eU, 
                                 "                        key<7;}");
}

void VP8___024unit__03a__03amypacket::__VnoInFunc___Vsetup_constraints(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_mode_c_setup_constraint(vlSymsp);
    this->__VnoInFunc_key_c_setup_constraint(vlSymsp);
}

void VP8___024unit__03a__03amypacket::__VnoInFunc___VBasicRand(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VP8___024unit__03a__03amypacket::_ctor_var_reset(VP8__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP8___024unit__03a__03amypacket::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__mode = 0;
    __PVT__key = 0;
}
