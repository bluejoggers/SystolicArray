// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegister8b_test_top_v1.h for the primary calling header

#include "VRegister8b_test_top_v1__pch.h"

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard::init(VRegister8b_test_top_v1__Syms* __restrict vlSymsp, VlClassRef<VRegister8b_test_top_v1_std__03a__03amailbox__Tz1> mon2scb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__current_state = 0U;
    this->__PVT__match = 0U;
    this->__PVT__mismatch = 0U;
    this->__PVT__mon2scb = mon2scb;
}

VlCoroutine VRegister8b_test_top_v1___024unit__03a__03ascoreboard::__VnoInFunc_run(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03ascoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<VRegister8b_test_top_v1___024unit__03a__03atxn_object> unnamedblk1__DOT__txn;
    CData/*7:0*/ unnamedblk1__DOT__unnamedblk2__DOT__expected_data_out;
    VL_WRITEF_NX("T=%0t [SCOREBOARD] Starting\n",2, 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb, "Register8b_test_top_v1.sv", 131)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__txn);
        if (VL_LTS_III(32, 0U, this->__PVT__expected_queue.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__expected_data_out 
                = this->__PVT__expected_queue.pop_front();
            if (VL_LIKELY(((VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 137)
                            ->__PVT__data_out == (IData)(unnamedblk1__DOT__unnamedblk2__DOT__expected_data_out))))) {
                VL_WRITEF_NX("T=%0t [SCB PASS] Match! Actual: 0x%0h | Expected: 0x%0h\n",4, 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 139)
                             ->__PVT__data_out, '#',8,(IData)(unnamedblk1__DOT__unnamedblk2__DOT__expected_data_out));
                this->__PVT__match = ((IData)(1U) + this->__PVT__match);
            } else {
                VL_WRITEF_NX("[%0t] %%Error: Register8b_test_top_v1.sv:142: Assertion failed in %m: T=%0t [SCB ERROR] Mismatch! Actual: 0x%0h | Expected: 0x%0h\n",6, 'M',vlSymsp->name(),"$unit.scoreboard.run.unnamedblk1.unnamedblk2", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',8,VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 143)
                             ->__PVT__data_out, '#',8,(IData)(unnamedblk1__DOT__unnamedblk2__DOT__expected_data_out));
                VL_STOP_MT("Register8b_test_top_v1.sv", 142, "");
                this->__PVT__mismatch = ((IData)(1U) 
                                         + this->__PVT__mismatch);
            }
        }
        if (VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 149)
            ->__PVT__reset) {
            this->__PVT__current_state = 0U;
        } else if (VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 151)
                   ->__PVT__enable) {
            this->__PVT__current_state = VL_NULL_CHECK(unnamedblk1__DOT__txn, "Register8b_test_top_v1.sv", 152)
                ->__PVT__data;
        }
        this->__PVT__expected_queue.push_back(this->__PVT__current_state);
    }
    co_return;
}

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard::__VnoInFunc_report(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03ascoreboard::__VnoInFunc_report\n"); );
    // Body
    VL_WRITEF_NX("\n========================================\n        SCOREBOARD FINAL REPORT         \n========================================\n Matches:    %0d\n Mismatches: %0d\n========================================\n\n",2
                 , '~',32,this->__PVT__match, '~',32,this->__PVT__mismatch);
}

void VRegister8b_test_top_v1___024unit__03a__03ascoreboard::_ctor_var_reset(VRegister8b_test_top_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRegister8b_test_top_v1___024unit__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__expected_queue.atDefault() = 0;
}
