// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi57> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi57__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi57> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi57__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_shared_access_seq"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 376)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        VUVM_Activator_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_shared_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_shared_access_seq"s, "No register model specified to run sequence on"s, 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s, 0x00000186U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "STARTING_SEQ"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("\n\nStarting "s, __VlefCall_1__get_name), " sequence...\n"s)), 0x00000064U, ""s, 0U, ""s, 0U);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi55__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, this->__PVT__reg_seq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi56__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_shared_access_seq"s, VlNull{}, ""s, this->__PVT__mem_seq);
        this->__VnoInFunc_reset_blk(vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 400)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_do_block\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_24__get_sequencer;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_23__get_by_name;
    std::string __VlefCall_22__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_21__get_by_name;
    std::string __VlefCall_20__get_full_name;
    CData/*0:0*/ __VlefLogOr_19;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_18__get_by_name;
    std::string __VlefCall_17__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_16__get_by_name;
    std::string __VlefCall_15__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_14__get_sequencer;
    CData/*0:0*/ __VlefLogOr_13;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_12__get_by_name;
    std::string __VlefCall_11__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_10__get_by_name;
    std::string __VlefCall_9__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_8__get_by_name;
    std::string __VlefCall_7__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_6__get_by_name;
    std::string __VlefCall_5__get_full_name;
    CData/*0:0*/ __VlefLogOr_4;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_3__get_by_name;
    std::string __VlefCall_2__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_1__get_by_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i__Vloopsize;
    unnamedblk2__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block>> unnamedblk4__DOT__blks;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize;
    unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>> mems;
    {
        regs.clear();
        mems.clear();
        VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 414)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_0__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_1__get_by_name);
        __VlefLogOr_4 = (VlNull{} != __VlefCall_1__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 416)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_2__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_3__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_3__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 418)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_5__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_6__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_6__get_by_name);
        }
        if ((1U & (~ (IData)(__VlefLogOr_4)))) {
            VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 420)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_7__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_8__get_by_name);
            __VlefLogOr_4 = (VlNull{} != __VlefCall_8__get_by_name);
        }
        if (__VlefLogOr_4) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_reset_blk(vlSymsp, VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model);
        VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::__PVT__model, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 425)->__VnoInFunc_reset(vlSymsp, "HARD"s);
        VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 428)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, regs.size())) {
            unnamedblk2__DOT__i__Vloopsize = regs.size();
            {
                VL_NULL_CHECK(regs.at(unnamedblk2__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 431)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_9__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_10__get_by_name);
                __VlefLogOr_13 = (VlNull{} != __VlefCall_10__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_13)))) {
                    VL_NULL_CHECK(regs.at(unnamedblk2__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 433)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_11__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_12__get_by_name);
                    __VlefLogOr_13 = (VlNull{} != __VlefCall_12__get_by_name);
                }
                if (__VlefLogOr_13) {
                    goto __Vlabel1;
                }
                VL_NULL_CHECK(this->__PVT__reg_seq, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 436)->__PVT__rg 
                    = regs.at(unnamedblk2__DOT__i);
                this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_14__get_sequencer);
                co_await VL_NULL_CHECK(this->__PVT__reg_seq, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 437)->__VnoInFunc_start(vlProcess, vlSymsp, __VlefCall_14__get_sequencer, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel1: ;
            }
            if ((unnamedblk2__DOT__i__Vloopsize <= regs.size())) {
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        }
        VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 441)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, mems.size())) {
            unnamedblk3__DOT__i__Vloopsize = mems.size();
            {
                VL_NULL_CHECK(mems.at(unnamedblk3__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 444)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_15__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_16__get_by_name);
                __VlefLogOr_19 = (VlNull{} != __VlefCall_16__get_by_name);
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk3__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 446)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_17__get_full_name)), "NO_MEM_TESTS"s, 0U, __VlefCall_18__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_18__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk3__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 448)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_20__get_full_name)), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __VlefCall_21__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_21__get_by_name);
                }
                if ((1U & (~ (IData)(__VlefLogOr_19)))) {
                    VL_NULL_CHECK(mems.at(unnamedblk3__DOT__i), "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 450)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_22__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_22__get_full_name)), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __VlefCall_23__get_by_name);
                    __VlefLogOr_19 = (VlNull{} != __VlefCall_23__get_by_name);
                }
                if (__VlefLogOr_19) {
                    goto __Vlabel2;
                }
                VL_NULL_CHECK(this->__PVT__mem_seq, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 453)->__PVT__mem 
                    = mems.at(unnamedblk3__DOT__i);
                this->__VnoInFunc_get_sequencer(vlSymsp, __VlefCall_24__get_sequencer);
                co_await VL_NULL_CHECK(this->__PVT__mem_seq, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 454)->__VnoInFunc_start(vlProcess, vlSymsp, __VlefCall_24__get_sequencer, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq>{this}, 0xffffffffU, 1U);
                __Vlabel2: ;
            }
            if ((unnamedblk3__DOT__i__Vloopsize <= mems.size())) {
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        }
        unnamedblk4__DOT__blks.clear();
        VL_NULL_CHECK(blk, "../../uvm/distrib/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 460)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk4__DOT__blks, 1U);
        unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__i, unnamedblk4__DOT__blks.size())) {
            unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                = unnamedblk4__DOT__blks.size();
            co_await this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk4__DOT__blks.at(unnamedblk4__DOT__unnamedblk5__DOT__i));
            if ((unnamedblk4__DOT__unnamedblk5__DOT__i__Vloopsize 
                 <= unnamedblk4__DOT__blks.size())) {
                unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_reset_blk\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq::~\n"); );
}
