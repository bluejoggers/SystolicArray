// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi17> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock___024unit__03a__03areg_sequence> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_regblock___024unit__03a__03areg_sequence, vlProcess, vlSymsp, "reg_sequence"s);
    } else {
        tmp = VL_NEW(VUVM_regblock___024unit__03a__03areg_sequence, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "reg_sequence"s;
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_sequence> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "UVM_regblock.sv", 201)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock___024unit__03a__03areg_sequence>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock___024unit__03a__03areg_sequence::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        VUVM_regblock_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_body(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000064U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "req"s, VlNull{}, ""s, VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::__PVT__req);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::__PVT__req, 0xffffffffU, VlNull{});
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if ((VlNull{} != VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::__PVT__req)) {
                VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::__PVT__req, "UVM_regblock.sv", 213)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
                __VlefCond_1 = __VlefCall_0__randomize;
            } else {
                __VlefCond_1 = 0U;
            }
            if (VL_LIKELY(((1U & (~ (0U != __VlefCond_1)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: UVM_regblock.sv:213: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"$unit.reg_sequence.body.unnamedblk1_1", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("UVM_regblock.sv", 213, "");
                }
            }
        }
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59::__PVT__req, 0xffffffffU);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

VUVM_regblock___024unit__03a__03areg_sequence::~VUVM_regblock___024unit__03a__03areg_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_regblock___024unit__03a__03areg_sequence::~\n"); );
}
