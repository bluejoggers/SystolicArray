// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence__Vclpkg::__VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi27> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi27__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::new\n"); );
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
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(2U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_seq_kind__1__Vfuncout;
    __Vtask_get_seq_kind__1__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0____Vrandwith_h2a239dab__0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlQueue<CData/*0:0*/> unnamedblk1_1__DOT__unnamedblk2_3__DOT____Vmode_hdfdb2a92__2;
    unnamedblk1_1__DOT__unnamedblk2_3__DOT____Vmode_hdfdb2a92__2.atDefault() = 0;
    IData/*31:0*/ unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i;
    unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(0U) = 0U;
    this->__PVT__l_count = (VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 192)
                            ->__PVT__sequences.size() 
                            - (IData)(2U));
    this->__PVT__max_kind = VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 193)
        ->__PVT__sequences.size();
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 194)->__VnoInFunc_get_seq_kind(vlProcess, vlSymsp, "uvm_exhaustive_sequence"s, __Vtask_get_seq_kind__1__Vfuncout);
    this->__PVT__l_exhaustive_seq_kind = __Vtask_get_seq_kind__1__Vfuncout;
    unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__l_count;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk1_1__DOT__unnamedblk2_3__DOT____Vmode_hdfdb2a92__2 
            = Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode;
        unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0U;
        while ((unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                < Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
            Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i) = 0U;
            unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                = ((IData)(1U) + unnamedblk1_1__DOT__unnamedblk2_3__DOT__unnamedblk2_4__DOT__i);
        }
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(1U) = 1U;
        this->__VnoInFunc___Vrandwith_h2a239dab__0(vlSymsp, 
                                                   VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence>{this}, __VlefCall_0____Vrandwith_h2a239dab__0);
        if ((1U & (~ (0U != __VlefCall_0____Vrandwith_h2a239dab__0)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RANDSEQ"s, "Randomization for l_kind failed in exhaustive sequence body"s, 0U, ""s, 0U, ""s, 0U);
        }
        Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode 
            = unnamedblk1_1__DOT__unnamedblk2_3__DOT____Vmode_hdfdb2a92__2;
        co_await this->__VnoInFunc_do_sequence_kind(vlProcess, vlSymsp, this->__PVT__l_kind);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 203)->__PVT__m_exhaustive_count 
        = ((IData)(1U) + VL_NULL_CHECK(Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 203)
           ->__PVT__m_exhaustive_count);
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(0U) = 1U;
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence> seq;
    {
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, seq);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__PVT__l_count = VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 213)
            ->__PVT__l_count;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_compare(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_compare\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__compare_field_int;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence> seq;
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
        VL_NULL_CHECK(comparer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 221)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), (QData)((IData)(VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 221)
                                                                                ->__PVT__l_count)), 0x00000020U, 0U, __VlefCall_1__compare_field_int);
        do_compare__Vfuncrtn = ((IData)(do_compare__Vfuncrtn) 
                                & (IData)(__VlefCall_1__compare_field_int));
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 226)->__VnoInFunc_print_field_int(vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), 0x00000020U, 0U, 0x2eU, ""s);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_record(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 230)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), 0x00000020U, 0U);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence> i;
    i = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence, vlProcess, vlSymsp, name);
    create__Vfuncrtn = i;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_exhaustive_sequence"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi27> __Vfunc_get__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi27__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__9__Vfuncout;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__l_count = VL_RANDOM_RNG_I(__Vm_rng);
    if (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(1U)) {
        this->__PVT__l_kind = this->__PVT__l_kind__Vrandc.randomize(__Vm_rng);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___Vrandwith_h2a239dab__0(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h2a239dab__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::__VnoInFunc___Vrandwith_h2a239dab__0\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    __Vtemp_1 = (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(1U)
                  ? "l_kind"s : VL_SFORMATF_N_NX("#b%b",1
                                                 , '#',10,this->__PVT__l_kind) );
    VL_SFORMAT_NX(__Vtemp_2,"((_ zero_extend 22) %s)",1
                  , 'S',&(__Vtemp_1));
    VL_SFORMAT_NX(__Vtemp_3,"#x%x",1, '#',32,this->__PVT__l_exhaustive_seq_kind);
    randomizer.hard(VL_SFORMATF_N_NX("(__Vbv (bvugt %s %s))",2
                                     , 'S',&(__Vtemp_2)
                                     , 'S',&(__Vtemp_3)) , "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 0x000000c4U, 
                    "    if (!randomize(l_kind) with { l_kind > l_exhaustive_seq_kind; ");
    __Vtemp_4 = (Vhello_uvm_uvm_pkg__03a__03auvm_void::__Vrandmode.at(1U)
                  ? "l_kind"s : VL_SFORMATF_N_NX("#b%b",1
                                                 , '#',10,this->__PVT__l_kind) );
    VL_SFORMAT_NX(__Vtemp_5,"((_ zero_extend 22) %s)",1
                  , 'S',&(__Vtemp_4));
    VL_SFORMAT_NX(__Vtemp_6,"#x%x",1, '#',32,this->__PVT__max_kind);
    randomizer.hard(VL_SFORMATF_N_NX("(__Vbv (bvult %s %s))",2
                                     , 'S',&(__Vtemp_5)
                                     , 'S',&(__Vtemp_6)) , "../../uvm/distrib/src/seq/uvm_sequence_builtin.svh", 0x000000c5U, 
                    "      l_kind < max_kind; })  ");
    randomizer.write_var(this->__PVT__l_kind, 0x000000000000000aULL, 
                         "l_kind", 0ULL, 1ULL);
    randomizer.markRandc("l_kind");
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h2a239dab__0__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__l_count = 0;
    __PVT__l_exhaustive_seq_kind = 0;
    __PVT__max_kind = 0;
    __PVT__l_kind = 0;
    __PVT__m_success = 0;
}

Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::~Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_exhaustive_sequence::~\n"); );
}
