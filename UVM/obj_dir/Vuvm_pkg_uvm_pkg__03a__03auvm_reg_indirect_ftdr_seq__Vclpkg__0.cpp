// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> data_reg) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::init(vlProcess, vlSymsp, "uvm_reg_indirect_ftdr_seq"s);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
    this->__PVT__m_addr_reg = addr_reg;
    this->__PVT__m_idx = idx;
    this->__PVT__m_data_reg = data_reg;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> __VlefCall_2__clone;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> __VlefCall_0__clone;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 300)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_0__clone);
        __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__clone, rw);
        if (VL_UNLIKELY(((! __VlefExpr_1)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:300: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_indirect_ftdr_seq.body", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 300, "");
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 301)->__PVT__element 
            = this->__PVT__m_addr_reg;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 302)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 303)->__PVT__value.atWrite(0U) 
            = VL_EXTENDS_QI(64,32, this->__PVT__m_idx);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 305)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 306)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 308)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 310)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 313)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_2__clone);
        __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__clone, rw);
        if (VL_UNLIKELY(((! __VlefExpr_3)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:313: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_indirect_ftdr_seq.body", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 313, "");
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 314)->__PVT__element 
            = this->__PVT__m_data_reg;
        if ((1U == VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 316)
             ->__PVT__kind)) {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 317)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        } else {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 319)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 320)->__PVT__value.atWrite(0U) 
                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 320)
                ->__PVT__value.at(0U);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 323)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 324)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 326)->__PVT__status 
            = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_indirect.svh", 326)
            ->__PVT__status;
        __Vlabel0: ;
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_idx = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~\n"); );
}
