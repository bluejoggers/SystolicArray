// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc_print(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc_print\n"); );
    // Body
    VL_WRITEF_NX("T=%0t [%s] DATA=0x%0h EN=%0b RESET=%0b DATA_OUT=0x%0h\n",7, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1), 'S',&(tag)
                 , '#',8,(IData)(this->__PVT__data)
                 , '#',1,this->__PVT__enable, '#',1,(IData)(this->__PVT__reset)
                 , '#',8,this->__PVT__data_out);
}

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc_randomize(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    randomize__Vfuncrtn = 1U;
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc___VBasicRand(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__enable = (1U & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__reset = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc___Vrandwith_h71018274__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vrandwith_h71018274__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::__VnoInFunc___Vrandwith_h71018274__0\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VlRandomizer randomizer;
    randomizer.hard("(__Vbv (= reset #b0))"s, "Register8b_test_top_v1.sv", 0x000000efU, 
                    "                reset == 1'b0; ");
    randomizer.hard("(bvor (bvand #b1 (__Vbv (= ((_ zero_extend 31) enable) #x00000001))) (bvand #b1 (__Vbv (= ((_ zero_extend 31) enable) #x00000000))))"s, "Register8b_test_top_v1.sv", 0x000000f0U, 
                    "                enable dist { 1 := 80, 0 := 20 };");
    randomizer.write_var(this->__PVT__reset, 1ULL, 
                         "reset", 0ULL);
    randomizer.write_var(this->__PVT__enable, 1ULL, 
                         "enable", 0ULL);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h71018274__0__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void VRegister8b_test_top_v1___024unit__03a__03atxn_object::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atxn_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 12700195955633597247ULL, 10363016170300574568ull);
    __PVT__enable = VL_SCOPED_RAND_RESET_I(1, 12700195955633597247ULL, 11030669854614834172ull);
    __PVT__reset = VL_SCOPED_RAND_RESET_I(1, 12700195955633597247ULL, 9928399931838511862ull);
    __PVT__data_out = VL_SCOPED_RAND_RESET_I(8, 12700195955633597247ULL, 11675680895196038875ull);
}
