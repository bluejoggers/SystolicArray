// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg::__VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi28> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
    this->__PVT__item = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item, vlProcess, vlSymsp, "uvm_sequence_item"s);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi4> __Vfunc_get_type__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefExpr_5;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_3;
    IData/*31:0*/ __VlefCond_2;
    IData/*31:0*/ __VlefCall_1__randomize;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> unnamedblk1__DOT_____05Fseq;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk1__DOT__unnamedblk2__DOT__w_;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequence_item__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __Vfunc_get_type__2__Vfuncout);
    unnamedblk1__DOT__unnamedblk2__DOT__w_ = __Vfunc_get_type__2__Vfuncout;
    this->__VnoInFunc_create_item(vlProcess, vlSymsp, unnamedblk1__DOT__unnamedblk2__DOT__w_, Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "item"s, this->__PVT__item);
    __VlefExpr_0 = VL_CAST_DYNAMIC(this->__PVT__item, unnamedblk1__DOT_____05Fseq);
    if ((! __VlefExpr_0)) {
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, this->__PVT__item, 0xffffffffU, VlNull{});
    }
    __VlefLogAnd_3 = ((VlNull{} == unnamedblk1__DOT_____05Fseq) 
                      || (1U & (~ VL_NULL_CHECK(unnamedblk1__DOT_____05Fseq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 280)
                                ->__PVT__do_not_randomize)));
    if (__VlefLogAnd_3) {
        if ((VlNull{} != this->__PVT__item)) {
            VL_NULL_CHECK(this->__PVT__item, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 280)->__VnoInFunc_randomize(vlSymsp, __VlefCall_1__randomize);
            __VlefCond_2 = __VlefCall_1__randomize;
        } else {
            __VlefCond_2 = 0U;
        }
        __VlefLogAnd_3 = (1U & (~ (0U != __VlefCond_2)));
    }
    if (__VlefLogAnd_3) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "RNDFLD"s, __VlefCall_4__uvm_report_enabled);
        if ((0U != __VlefCall_4__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "RNDFLD"s, "Randomization failed in uvm_do_with action"s, 0U, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh"s, 0x00000118U, ""s, 1U);
        }
    }
    __VlefExpr_5 = VL_CAST_DYNAMIC(this->__PVT__item, unnamedblk1__DOT_____05Fseq);
    if (__VlefExpr_5) {
        co_await VL_NULL_CHECK(unnamedblk1__DOT_____05Fseq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 280)->__VnoInFunc_start(vlProcess, vlSymsp, Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence>{this}, 0xffffffffU, 0U);
    } else {
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, this->__PVT__item, 0xffffffffU);
    }
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 281)->__PVT__m_simple_count 
        = ((IData)(1U) + VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 281)
           ->__PVT__m_simple_count);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence> i;
    i = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence, vlProcess, vlSymsp, name);
    create__Vfuncrtn = i;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_simple_sequence"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi28> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__11__Vfuncout;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__randomize;
    __VBasicRand__Vfuncrtn = 1U;
    if ((VlNull{} != this->__PVT__item)) {
        VL_NULL_CHECK(this->__PVT__item, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 264)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
        __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                  & __VlefCall_0__randomize);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::~Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_simple_sequence::~\n"); );
}
