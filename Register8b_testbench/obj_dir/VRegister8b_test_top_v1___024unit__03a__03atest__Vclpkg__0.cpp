// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024unit__03a__03atest::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__ENV = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03aenvironment, vlSymsp);
    this->__PVT__DRV_MBOX = VL_NEW(VRegister8b_test_top_v1_std__03a__03amailbox__Tz1, vlSymsp, 0U);
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__ENV, "Register8b_test_top_v1.sv", 210)
                  ->__PVT__DRV, "Register8b_test_top_v1.sv", 210)->__PVT__driver_mbox 
        = this->__PVT__DRV_MBOX;
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    co_await this->__VnoInFunc_apply_stim(vlSymsp);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            nullptr, 
                                            "Register8b_test_top_v1.sv", 
                                            218);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__ENV, "Register8b_test_top_v1.sv", 219)
                  ->__PVT__SCB, "Register8b_test_top_v1.sv", 219)->__VnoInFunc_report(vlSymsp);
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_run____Vfork_1__0(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "Register8b_test_top_v1.sv", 
                                            212);
    VL_NULL_CHECK(this->__PVT__ENV, "Register8b_test_top_v1.sv", 213)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_apply_stim(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atest::__VnoInFunc_apply_stim\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0____Vrandwith_h71018274__0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> txn;
    VL_WRITEF_NX("T=%0t [TEST] Starting stimulus application\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    txn = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03atxn_object, vlSymsp);
    VL_NULL_CHECK(txn, "Register8b_test_top_v1.sv", 228)->__PVT__reset = 1U;
    VL_NULL_CHECK(txn, "Register8b_test_top_v1.sv", 229)->__PVT__enable = 0U;
    VL_NULL_CHECK(txn, "Register8b_test_top_v1.sv", 230)->__PVT__data = 0U;
    co_await VL_NULL_CHECK(this->__PVT__DRV_MBOX, "Register8b_test_top_v1.sv", 231)->__VnoInFunc_put(vlSymsp, txn);
    unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        txn = VL_NEW(VRegister8b_test_top_v1___024unit__03a__03atxn_object, vlSymsp);
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if ((VlNull{} != txn)) {
                VL_NULL_CHECK(txn, "Register8b_test_top_v1.sv", 238)->__VnoInFunc___Vrandwith_h71018274__0(vlSymsp, __VlefCall_0____Vrandwith_h71018274__0);
                __VlefCond_1 = __VlefCall_0____Vrandwith_h71018274__0;
            } else {
                __VlefCond_1 = 0U;
            }
            if (VL_LIKELY(((1U != __VlefCond_1)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: Register8b_test_top_v1.sv:241: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"$unit.test.apply_stim.unnamedblk1_1", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("Register8b_test_top_v1.sv", 241, "", false);
                }
            }
        }
        co_await VL_NULL_CHECK(this->__PVT__DRV_MBOX, "Register8b_test_top_v1.sv", 243)->__VnoInFunc_put(vlSymsp, txn);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void VRegister8b_test_top_v1___024unit__03a__03atest::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03atest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
