// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence__Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi26> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi26__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_count(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_count\n"); );
    // Body
    {
        get_count__Vfuncrtn = 0U;
        if ((0xffffffffU == this->__PVT__l_count)) {
            get_count__Vfuncrtn = VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 69)
                ->__PVT__count;
            goto __Vlabel0;
        }
        get_count__Vfuncrtn = this->__PVT__l_count;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__l_count = 0xffffffffU;
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
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(3U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_seq_kind__3__Vfuncout;
    __Vtask_get_seq_kind__3__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1____Vrandwith_h509d7fc5__0;
    IData/*31:0*/ __VlefCall_0____Vrandwith_h509d7fc5__1;
    VlQueue<CData/*0:0*/> unnamedblk2_3__DOT____Vmode_hdfdb2a92__0;
    unnamedblk2_3__DOT____Vmode_hdfdb2a92__0.atDefault() = 0;
    IData/*31:0*/ unnamedblk2_3__DOT__unnamedblk2_4__DOT__i;
    unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlQueue<CData/*0:0*/> unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_hdfdb2a92__1;
    unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_hdfdb2a92__1.atDefault() = 0;
    IData/*31:0*/ unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i;
    unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i = 0;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(0U) = 0U;
    if ((0xffffffffU == VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 86)
         ->__PVT__count)) {
        unnamedblk2_3__DOT____Vmode_hdfdb2a92__0 = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode;
        unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0U;
        while ((unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
            Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_3__DOT__unnamedblk2_4__DOT__i) = 0U;
            unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                = ((IData)(1U) + unnamedblk2_3__DOT__unnamedblk2_4__DOT__i);
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(1U) = 1U;
        this->__VnoInFunc___Vrandwith_h509d7fc5__1(vlSymsp, 
                                                   VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence>{this}, __VlefCall_0____Vrandwith_h509d7fc5__1);
        if ((1U & (~ (0U != __VlefCall_0____Vrandwith_h509d7fc5__1)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RANDSEQ"s, "Randomization for l_count failed in random sequence body"s, 0U, ""s, 0U, ""s, 0U);
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode 
            = unnamedblk2_3__DOT____Vmode_hdfdb2a92__0;
        VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 90)->__PVT__count 
            = this->__PVT__l_count;
    } else {
        this->__PVT__l_count = VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 93)
            ->__PVT__count;
    }
    this->__PVT__max_kind = VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 94)
        ->__PVT__sequences.size();
    VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 95)->__VnoInFunc_get_seq_kind(vlProcess, vlSymsp, "uvm_exhaustive_sequence"s, __Vtask_get_seq_kind__3__Vfuncout);
    this->__PVT__l_exhaustive_seq_kind = __Vtask_get_seq_kind__3__Vfuncout;
    unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__l_count;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_hdfdb2a92__1 
            = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode;
        unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i = 0U;
        while ((unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i 
                < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
            Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i) = 0U;
            unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i 
                = ((IData)(1U) + unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i);
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(2U) = 1U;
        this->__VnoInFunc___Vrandwith_h509d7fc5__0(vlSymsp, 
                                                   VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence>{this}, __VlefCall_1____Vrandwith_h509d7fc5__0);
        if ((1U & (~ (0U != __VlefCall_1____Vrandwith_h509d7fc5__0)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RANDSEQ"s, "Randomization for l_kind failed in random sequence body"s, 0U, ""s, 0U, ""s, 0U);
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode 
            = unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_hdfdb2a92__1;
        co_await this->__VnoInFunc_do_sequence_kind(vlProcess, vlSymsp, this->__PVT__l_kind);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 102)->__PVT__m_random_count 
        = ((IData)(1U) + VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 102)
           ->__PVT__m_random_count);
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(0U) = 1U;
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence> seq;
    {
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, seq);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__PVT__l_count = VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 112)
            ->__PVT__l_count;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_compare(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_compare\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__compare_field_int;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence> seq;
    {
        do_compare__Vfuncrtn = 0U;
        do_compare__Vfuncrtn = 1U;
        if ((VlNull{} == rhs)) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, seq);
        if ((! __VlefExpr_0)) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 120)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), (QData)((IData)(VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 120)
                                                                                ->__PVT__l_count)), 0x00000020U, 0U, __VlefCall_1__compare_field_int);
        do_compare__Vfuncrtn = ((IData)(do_compare__Vfuncrtn) 
                                & (IData)(__VlefCall_1__compare_field_int));
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 125)->__VnoInFunc_print_field_int(vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), 0x00000020U, 0U, 0x2eU, ""s);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_record(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 129)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), 0x00000020U, 0U);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence> i;
    i = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence, vlProcess, vlSymsp, name);
    create__Vfuncrtn = i;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_random_sequence"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi26> __Vfunc_get__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi26__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__11__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    if (Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.at(1U)) {
        this->__PVT__l_count = VL_RANDOM_RNG_I(__Vm_rng);
    }
    if (Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.at(2U)) {
        this->__PVT__l_kind = VL_RANDOM_RNG_I(__Vm_rng);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h509d7fc5__0(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h509d7fc5__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h509d7fc5__0\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    if (Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.at(2U)) {
        __Vtemp_1 = "l_kind"s;
        __Vtemp_3 = "l_kind"s;
    } else {
        __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_kind) ;
        __Vtemp_3 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_kind) ;
    }
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',32,this->__PVT__l_exhaustive_seq_kind);
    VL_SFORMAT_NX(__Vtemp_4,"#x%x",1, '#',32,this->__PVT__max_kind);
    VL_SFORMAT_NX(__Vtemp_5,"(__Vbv (bvugt %s %s))",2
                  , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
    VL_SFORMAT_NX(__Vtemp_6,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_3), 'S',&(__Vtemp_4));
    randomizer.hard(VL_SFORMATF_N_NX("(bvand %s %s)",2
                                     , 'S',&(__Vtemp_5)
                                     , 'S',&(__Vtemp_6)) , "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 0x00000061U, 
                    "    if (!randomize(l_kind) with { l_kind > l_exhaustive_seq_kind && ");
    randomizer.write_var(this->__PVT__l_kind, 0x0000000000000020ULL, 
                         "l_kind", 0ULL, 2ULL);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h509d7fc5__0__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h509d7fc5__1(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h509d7fc5__1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h509d7fc5__1\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    if (Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.at(1U)) {
        __Vtemp_1 = "l_count"s;
        __Vtemp_2 = "l_count"s;
    } else {
        __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_count) ;
        __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_count) ;
    }
    VL_SFORMAT_NX(__Vtemp_3,"#x%x",1, '#',32,VL_NULL_CHECK(VL_NULL_CHECK(__Vthis, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 88)
                                                           ->__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 88)
                  ->__PVT__max_random_count);
    VL_SFORMAT_NX(__Vtemp_4,"(__Vbv (bvugt %s #x00000000))",1
                  , 'S',&(__Vtemp_1));
    VL_SFORMAT_NX(__Vtemp_5,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_2), 'S',&(__Vtemp_3));
    randomizer.hard(VL_SFORMATF_N_NX("(bvand %s %s)",2
                                     , 'S',&(__Vtemp_4)
                                     , 'S',&(__Vtemp_5)) , "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 0x00000057U, 
                    "    if (!randomize(l_count) with { l_count > 0 &&");
    randomizer.write_var(this->__PVT__l_count, 0x0000000000000020ULL, 
                         "l_count", 0ULL, 1ULL);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h509d7fc5__1__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__l_exhaustive_seq_kind = 0;
    __PVT__max_kind = 0;
    __PVT__l_kind = 0;
    __PVT__m_success = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::~Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_random_sequence::~\n"); );
}
