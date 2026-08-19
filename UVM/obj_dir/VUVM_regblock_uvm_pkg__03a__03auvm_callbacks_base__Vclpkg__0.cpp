// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base, vlProcess, vlSymsp);
        this->__PVT__m_pool = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz12_TBz52, vlProcess, vlSymsp, ""s);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_b_inst;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a\n"); );
    // Body
    m_am_i_a__Vfuncrtn = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me\n"); );
    // Body
    m_is_for_me__Vfuncrtn = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered\n"); );
    // Body
    m_is_registered__Vfuncrtn = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz50> &m_get_tw_cb_q__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q\n"); );
    // Body
    m_get_tw_cb_q__Vfuncrtn = VlNull{};
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs\n"); );
    // Body
    m_delete_tw_cbs__Vfuncrtn = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &check_registration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration\n"); );
    // Body
    CData/*0:0*/ __VlefCall_2__check_registration;
    CData/*0:0*/ __VlefCall_1__m_is_registered;
    CData/*0:0*/ __VlefCall_0__m_is_registered;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base> dt;
    {
        check_registration__Vfuncrtn = 0U;
        this->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __VlefCall_0__m_is_registered);
        if (__VlefCall_0__m_is_registered) {
            check_registration__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_this_type.size())) {
            unnamedblk1__DOT__i__Vloopsize = this->__PVT__m_this_type.size();
            __VlefCall_1__m_is_registered = (vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst 
                                             != this->__PVT__m_this_type.at(unnamedblk1__DOT__i));
            if (__VlefCall_1__m_is_registered) {
                VL_NULL_CHECK(this->__PVT__m_this_type.at(unnamedblk1__DOT__i), "../../uvm/distrib/src/base/uvm_callback.svh", 146)->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __VlefCall_1__m_is_registered);
            }
            if (__VlefCall_1__m_is_registered) {
                check_registration__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk1__DOT__i__Vloopsize <= this->__PVT__m_this_type.size())) {
                unnamedblk1__DOT__i = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
            }
        }
        if ((VlNull{} == obj)) {
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_derived_types.size())) {
                unnamedblk2__DOT__i__Vloopsize = this->__PVT__m_derived_types.size();
                dt = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                    .at(this->__PVT__m_derived_types.at(unnamedblk2__DOT__i));
                __VlefCall_2__check_registration = 
                    (VlNull{} != dt);
                if (__VlefCall_2__check_registration) {
                    VL_NULL_CHECK(dt, "../../uvm/distrib/src/base/uvm_callback.svh", 152)->__VnoInFunc_check_registration(vlSymsp, VlNull{}, cb, __VlefCall_2__check_registration);
                }
                if (__VlefCall_2__check_registration) {
                    check_registration__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                if ((unnamedblk2__DOT__i__Vloopsize 
                     <= this->__PVT__m_derived_types.size())) {
                    unnamedblk2__DOT__i = ((IData)(1U) 
                                           + unnamedblk2__DOT__i);
                }
            }
        }
        check_registration__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, ""s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::~VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base::~\n"); );
}
