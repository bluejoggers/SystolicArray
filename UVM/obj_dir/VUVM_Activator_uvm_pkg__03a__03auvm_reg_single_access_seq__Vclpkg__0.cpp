// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi52> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi52> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi52__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, "uvm_reg_single_access_seq"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_access_seq"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 68)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, __VlefCall_0__m_do_cycle_check);
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

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::new\n"); );
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

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__34__status;
    __Vtask_write__34__status = 0;
    IData/*31:0*/ __Vtask_mirror__40__status;
    __Vtask_mirror__40__status = 0;
    IData/*31:0*/ __Vtask_write__44__status;
    __Vtask_write__44__status = 0;
    IData/*31:0*/ __Vtask_mirror__48__status;
    __Vtask_mirror__48__status = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_32__get_full_name;
    std::string __VlefCall_31__get_full_name;
    IData/*31:0*/ __VlefCall_30__uvm_report_enabled;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    std::string __VlefCall_27__get_full_name;
    IData/*31:0*/ __VlefCall_26__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> __VlefCall_25__backdoor;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    std::string __VlefCall_21__get_full_name;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_full_name;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_access;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_12__is_known_access;
    std::string __VlefCall_11__get_access;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_8;
    CData/*0:0*/ __VlefCall_7__has_hdl_path;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz28> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_field>> unnamedblk2__DOT__fields;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__k__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__k__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk6__DOT__j;
    unnamedblk6__DOT__j = 0;
    IData/*31:0*/ unnamedblk6__DOT__j__Vloopsize;
    unnamedblk6__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk6__DOT__unnamedblk7__DOT__status;
    QData/*63:0*/ unnamedblk6__DOT__unnamedblk7__DOT__v;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        maps.clear();
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, "No register specified to run sequence on"s, 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000004eU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 83)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 85)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_ACCESS_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 90)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
        __VlefLogAnd_8 = (VlNull{} == __VlefCall_6__get_backdoor);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 90)->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_7__has_hdl_path);
            __VlefLogAnd_8 = (1U & (~ (IData)(__VlefCall_7__has_hdl_path)));
        }
        if (__VlefLogAnd_8) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_9__uvm_report_enabled);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 92)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_10__get_full_name), "' does not have a backdoor mechanism available"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000005cU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 97)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__fields.clear();
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 103)->__VnoInFunc_get_fields(vlSymsp, unnamedblk2__DOT__fields);
        unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__k, maps.size())) {
            unnamedblk2__DOT__unnamedblk3__DOT__k__Vloopsize 
                = maps.size();
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j, unnamedblk2__DOT__fields.size())) {
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j__Vloopsize 
                    = unnamedblk2__DOT__fields.size();
                VL_NULL_CHECK(unnamedblk2__DOT__fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 108)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__unnamedblk3__DOT__k), __VlefCall_11__get_access);
                if (("RO"s == __VlefCall_11__get_access)) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro);
                }
                VL_NULL_CHECK(unnamedblk2__DOT__fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 111)->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__unnamedblk3__DOT__k), __VlefCall_12__is_known_access);
                if ((1U & (~ (IData)(__VlefCall_12__is_known_access)))) {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __VlefCall_13__uvm_report_enabled);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 114)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        VL_NULL_CHECK(unnamedblk2__DOT__fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 114)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__unnamedblk3__DOT__k), __VlefCall_15__get_access);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_14__get_full_name), "' has field with unknown access type '"s), __VlefCall_15__get_access), "', skipping"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000072U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
                if ((unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j__Vloopsize 
                     <= unnamedblk2__DOT__fields.size())) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j);
                }
            }
            if ((unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__ro 
                 == unnamedblk2__DOT__fields.size())) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "uvm_reg_access_seq"s, __VlefCall_16__uvm_report_enabled);
                if ((0U != __VlefCall_16__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 120)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk2__DOT__unnamedblk3__DOT__k), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 120)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_18__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_17__get_full_name), "' has only RO fields in map "s), __VlefCall_18__get_full_name), ", skipping"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000078U, ""s, 1U);
                }
                goto __Vlabel0;
            }
            if ((unnamedblk2__DOT__unnamedblk3__DOT__k__Vloopsize 
                 <= maps.size())) {
                unnamedblk2__DOT__unnamedblk3__DOT__k 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__k);
            }
        }
        unnamedblk6__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__j, maps.size())) {
            unnamedblk6__DOT__j__Vloopsize = maps.size();
            unnamedblk6__DOT__unnamedblk7__DOT__status = 0U;
            unnamedblk6__DOT__unnamedblk7__DOT__v = 0ULL;
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_access_seq"s, __VlefCall_19__uvm_report_enabled);
            if ((0U != __VlefCall_19__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 137)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk6__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 137)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_21__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Verifying access of register '"s, __VlefCall_20__get_full_name), "' in map '"s), __VlefCall_21__get_full_name), "' ..."s)), 0x00000064U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000089U, ""s, 1U);
            }
            VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 139)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, unnamedblk6__DOT__unnamedblk7__DOT__v);
            co_await VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 141)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__34__status, 
                                                                                (~ unnamedblk6__DOT__unnamedblk7__DOT__v), 0U, maps.at(unnamedblk6__DOT__j), 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk6__DOT__unnamedblk7__DOT__status 
                = __Vtask_write__34__status;
            if ((0U != unnamedblk6__DOT__unnamedblk7__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_22__uvm_report_enabled);
                if ((0U != __VlefCall_22__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 146)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk6__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 146)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, VUVM_Activator___024unit::__Venumtab_enum_name73
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk6__DOT__unnamedblk7__DOT__status)]), "' when writing '"s), __VlefCall_23__get_full_name), "' through map '"s), __VlefCall_24__get_full_name), "'"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x00000092U, ""s, 1U);
                }
            }
            co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 
                                                    148);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_25__backdoor);
            co_await VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 150)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__40__status, 1U, 1U, __VlefCall_25__backdoor, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk6__DOT__unnamedblk7__DOT__status 
                = __Vtask_mirror__40__status;
            if ((0U != unnamedblk6__DOT__unnamedblk7__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_26__uvm_report_enabled);
                if ((0U != __VlefCall_26__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 154)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_27__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, VUVM_Activator___024unit::__Venumtab_enum_name73
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk6__DOT__unnamedblk7__DOT__status)]), "' when reading reset value of register '"s), __VlefCall_27__get_full_name), "' through backdoor"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x0000009aU, ""s, 1U);
                }
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 157)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__44__status, unnamedblk6__DOT__unnamedblk7__DOT__v, 1U, maps.at(unnamedblk6__DOT__j), 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk6__DOT__unnamedblk7__DOT__status 
                = __Vtask_write__44__status;
            if ((0U != unnamedblk6__DOT__unnamedblk7__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_28__uvm_report_enabled);
                if ((0U != __VlefCall_28__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 161)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, VUVM_Activator___024unit::__Venumtab_enum_name73
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk6__DOT__unnamedblk7__DOT__status)]), "' when writing '"s), __VlefCall_29__get_full_name), "' through backdoor"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000a1U, ""s, 1U);
                }
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 164)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__48__status, 1U, 0U, maps.at(unnamedblk6__DOT__j), 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk6__DOT__unnamedblk7__DOT__status 
                = __Vtask_mirror__48__status;
            if ((0U != unnamedblk6__DOT__unnamedblk7__DOT__status)) {
                this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_access_seq"s, __VlefCall_30__uvm_report_enabled);
                if ((0U != __VlefCall_30__uvm_report_enabled)) {
                    VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 169)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_31__get_full_name);
                    VL_NULL_CHECK(maps.at(unnamedblk6__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh", 169)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_32__get_full_name);
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_access_seq"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Status was '"s, VUVM_Activator___024unit::__Venumtab_enum_name73
                                                                                [
                                                                                (3U 
                                                                                & unnamedblk6__DOT__unnamedblk7__DOT__status)]), "' when reading reset value of register '"s), __VlefCall_31__get_full_name), "' through map '"s), __VlefCall_32__get_full_name), "'"s)), 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_access_seq.svh"s, 0x000000a9U, ""s, 1U);
                }
            }
            if ((unnamedblk6__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk6__DOT__j = ((IData)(1U) 
                                       + unnamedblk6__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::~VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_reg_single_access_seq::~\n"); );
}
