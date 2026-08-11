// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vswitch_testbench_v0.h for the primary calling header

#include "Vswitch_testbench_v0__pch.h"

void Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc_print(Vswitch_testbench_v0__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc_print\n"); );
    // Body
    VL_WRITEF_NX("T=%0t [%s] ADDR=0x%0h DATA=0x%0h ADDR_A=0x%0h DATA_A=0x%0h ADDR_B=0x%0h DATA_B=0x%0h\n",9, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1), 'S',&(tag)
                 , '#',8,(IData)(this->__PVT__address)
                 , '#',16,this->__PVT__data, '#',8,(IData)(this->__PVT__address_a)
                 , '#',16,this->__PVT__data_a, '#',8,(IData)(this->__PVT__address_b)
                 , '#',16,this->__PVT__data_b);
}

void Vswitch_testbench_v0___024unit__03a__03atxn_object::init(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atxn_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc_randomize(Vswitch_testbench_v0__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    randomize__Vfuncrtn = 1U;
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc___VBasicRand(Vswitch_testbench_v0__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atxn_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__valid = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__address = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__data = (0x0000ffffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vswitch_testbench_v0___024unit__03a__03atxn_object::_ctor_var_reset(Vswitch_testbench_v0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vswitch_testbench_v0___024unit__03a__03atxn_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__valid = 0;
    __PVT__address = VL_SCOPED_RAND_RESET_I(8, 12700195955633597247ULL, 12021632533271657083ull);
    __PVT__data = VL_SCOPED_RAND_RESET_I(16, 12700195955633597247ULL, 10363016170300574568ull);
    __PVT__data_a = VL_SCOPED_RAND_RESET_I(16, 12700195955633597247ULL, 13020576239233623063ull);
    __PVT__data_b = VL_SCOPED_RAND_RESET_I(16, 12700195955633597247ULL, 5098037738387747998ull);
    __PVT__address_a = VL_SCOPED_RAND_RESET_I(8, 12700195955633597247ULL, 971595663457240371ull);
    __PVT__address_b = VL_SCOPED_RAND_RESET_I(8, 12700195955633597247ULL, 778498157570315470ull);
}
