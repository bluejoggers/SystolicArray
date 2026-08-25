// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action\n"); );
    // Body
    std::string s;
    if ((0U == action)) {
        s = "NO ACTION"s;
    } else {
        s = ""s;
        if ((0U != (1U & action))) {
            s = VL_CONCATN_NNN(s, "DISPLAY "s);
        }
        if ((0U != (2U & action))) {
            s = VL_CONCATN_NNN(s, "LOG "s);
        }
        if ((0U != (0x00000040U & action))) {
            s = VL_CONCATN_NNN(s, "RM_RECORD "s);
        }
        if ((0U != (4U & action))) {
            s = VL_CONCATN_NNN(s, "COUNT "s);
        }
        if ((0U != (0x00000010U & action))) {
            s = VL_CONCATN_NNN(s, "CALL_HOOK "s);
        }
        if ((0U != (8U & action))) {
            s = VL_CONCATN_NNN(s, "EXIT "s);
        }
        if ((0U != (0x00000020U & action))) {
            s = VL_CONCATN_NNN(s, "STOP "s);
        }
    }
    format_action__Vfuncrtn = s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "uvm_report_handler"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_handler"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_report_handler.svh", 81)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    {
        // Inlined CFunc: __VnoInFunc_initialize
        this->__VnoInFunc_set_default_file(vlSymsp, 0U);
        this->__PVT__m_max_verbosity_level = 0x000000c8U;
        this->__PVT__id_actions = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__id_verbosities = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__id_file_handles = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_overrides = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
        this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
        this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
        this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
        this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__9__Vfuncout;
    __Vtask_first__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__15__Vfuncout;
    __Vtask_next__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__19__Vfuncout;
    __Vtask_first__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__23__Vfuncout;
    __Vtask_next__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__25__Vfuncout;
    __Vtask_first__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__31__Vfuncout;
    __Vtask_next__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__39__Vfuncout;
    __Vtask_first__39__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__43__Vfuncout;
    __Vtask_next__43__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__45__Vfuncout;
    __Vtask_first__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__50__Vfuncout;
    __Vtask_next__50__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__54__Vfuncout;
    __Vtask_first__54__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__57__Vfuncout;
    __Vtask_next__57__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__60__Vfuncout;
    __Vtask_first__60__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__65__Vfuncout;
    __Vtask_next__65__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__72__Vfuncout;
    __Vtask_first__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__75__Vfuncout;
    __Vtask_next__75__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_12;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_48;
    IData/*31:0*/ __VlefCall_47__next;
    IData/*31:0*/ __VlefCall_46__get;
    IData/*31:0*/ __VlefCall_45__first;
    CData/*0:0*/ __VlefExpr_44;
    IData/*31:0*/ __VlefCall_43__num;
    CData/*0:0*/ __VlefExpr_42;
    VlWide<128>/*4095:0*/ __VlefExpr_41;
    CData/*0:0*/ __VlefExpr_40;
    IData/*31:0*/ __VlefCall_39__next;
    IData/*31:0*/ __VlefCall_38__get;
    IData/*31:0*/ __VlefCall_37__num;
    IData/*31:0*/ __VlefCall_36__first;
    CData/*0:0*/ __VlefExpr_35;
    IData/*31:0*/ __VlefCall_34__next;
    IData/*31:0*/ __VlefCall_33__first;
    CData/*0:0*/ __VlefExpr_32;
    IData/*31:0*/ __VlefCall_31__num;
    IData/*31:0*/ __VlefCall_30__next;
    IData/*31:0*/ __VlefCall_29__num;
    IData/*31:0*/ __VlefCall_28__first;
    CData/*0:0*/ __VlefExpr_27;
    IData/*31:0*/ __VlefCall_26__next;
    std::string __VlefCall_25__format_action;
    IData/*31:0*/ __VlefCall_24__get;
    IData/*31:0*/ __VlefCall_23__first;
    CData/*0:0*/ __VlefExpr_22;
    IData/*31:0*/ __VlefCall_21__num;
    CData/*0:0*/ __VlefExpr_20;
    std::string __VlefCall_19__format_action;
    CData/*0:0*/ __VlefExpr_18;
    IData/*31:0*/ __VlefCall_17__next;
    std::string __VlefCall_16__format_action;
    IData/*31:0*/ __VlefCall_15__num;
    IData/*31:0*/ __VlefCall_14__first;
    CData/*0:0*/ __VlefExpr_13;
    IData/*31:0*/ __VlefCall_12__next;
    std::string __VlefExpr_11;
    IData/*31:0*/ __VlefCond_10;
    IData/*31:0*/ __VlefCall_9__first;
    CData/*0:0*/ __VlefExpr_8;
    IData/*31:0*/ __VlefCall_7__num;
    IData/*31:0*/ __VlefCall_6__next;
    std::string __VlefExpr_5;
    IData/*31:0*/ __VlefCond_4;
    IData/*31:0*/ __VlefCall_3__num;
    IData/*31:0*/ __VlefCall_2__first;
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    std::string unnamedblk2__DOT__l_str;
    IData/*31:0*/ unnamedblk3__DOT___total_cnt;
    CData/*1:0*/ unnamedblk3__DOT__unnamedblk4__DOT__l_severity;
    unnamedblk3__DOT__unnamedblk4__DOT__l_severity = 0;
    CData/*1:0*/ unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vnext;
    unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vnext = 0;
    CData/*0:0*/ unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vmore;
    unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk3__DOT__unnamedblk5__DOT__id_v_ary;
    std::string unnamedblk3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__l_str;
    IData/*31:0*/ unnamedblk7__DOT___total_cnt;
    CData/*1:0*/ unnamedblk7__DOT__unnamedblk8__DOT__l_severity;
    unnamedblk7__DOT__unnamedblk8__DOT__l_severity = 0;
    CData/*1:0*/ unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vnext;
    unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vnext = 0;
    CData/*0:0*/ unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vmore;
    unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk7__DOT__unnamedblk9__DOT__id_a_ary;
    CData/*1:0*/ unnamedblk10__DOT__l_severity_new;
    IData/*31:0*/ unnamedblk11__DOT___total_cnt;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__idx;
    std::string unnamedblk11__DOT__unnamedblk12__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__unnamedblk12__DOT__idx__Vmore;
    unnamedblk11__DOT__unnamedblk12__DOT__idx__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> unnamedblk11__DOT__unnamedblk13__DOT__sev_o_ary;
    CData/*1:0*/ unnamedblk11__DOT__unnamedblk13__DOT__unnamedblk14__DOT__new_sev;
    IData/*31:0*/ unnamedblk15__DOT___total_cnt;
    CData/*1:0*/ unnamedblk15__DOT__unnamedblk16__DOT__l_severity;
    unnamedblk15__DOT__unnamedblk16__DOT__l_severity = 0;
    CData/*1:0*/ unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vnext;
    unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vnext = 0;
    CData/*0:0*/ unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vmore;
    unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk15__DOT__unnamedblk17__DOT__id_f_ary;
    IData/*31:0*/ l_verbosity;
    CData/*1:0*/ l_severity;
    std::string idx;
    IData/*31:0*/ l_int;
    l_verbosity = 0U;
    l_severity = 0U;
    idx = ""s;
    l_int = 0U;
    if (VUVM_Activator___024unit::__Venumtab_enum_valid25
        .at(this->__PVT__m_max_verbosity_level)) {
        l_verbosity = this->__PVT__m_max_verbosity_level;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 124)->__VnoInFunc_print_generic(vlSymsp, "max_verbosity_level"s, "uvm_verbosity"s, 0x00000020U, __VlefExpr_1, 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_max_verbosity_level);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 127)->__VnoInFunc_print_int(vlSymsp, "max_verbosity_level"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    }
    VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 131)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__9__Vfuncout);
    __VlefCall_2__first = __Vtask_first__9__Vfuncout;
    if ((0U != __VlefCall_2__first)) {
        VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 132)->__VnoInFunc_num(vlSymsp, __VlefCall_3__num);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 132)->__VnoInFunc_print_array_header(vlSymsp, "id_verbosities"s, __VlefCall_3__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 135)->__VnoInFunc_get(vlSymsp, idx, l_int);
            if (VUVM_Activator___024unit::__Venumtab_enum_valid25
                .at(l_int)) {
                l_verbosity = l_int;
                __VlefCond_4 = 1U;
            } else {
                __VlefCond_4 = 0U;
            }
            if ((0U != __VlefCond_4)) {
                __VlefExpr_5 = VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name25
                                                  .at(l_verbosity));
                VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 137)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "uvm_verbosity"s, 0x00000020U, __VlefExpr_5, 0x2eU);
            } else {
                unnamedblk2__DOT__l_str = ""s;
                VL_SFORMAT_NX(unnamedblk2__DOT__l_str
                              ,"%0d",1, '~',32,l_int);
                VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 142)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "int"s, 0x00000020U, unnamedblk2__DOT__l_str, 0x2eU);
            }
            VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 145)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__15__Vfuncout);
            __VlefCall_6__next = __Vtask_next__15__Vfuncout;
        } while ((0U != __VlefCall_6__next));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 146)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_verbosities.size())) {
        unnamedblk3__DOT___total_cnt = 0U;
        unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_verbosities.first(unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vnext));
        while (unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vmore) {
            unnamedblk3__DOT__unnamedblk4__DOT__l_severity 
                = unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vnext;
            unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_verbosities.next(unnamedblk3__DOT__unnamedblk4__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                          .at(unnamedblk3__DOT__unnamedblk4__DOT__l_severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 153)->__VnoInFunc_num(vlSymsp, __VlefCall_7__num);
            unnamedblk3__DOT___total_cnt = (unnamedblk3__DOT___total_cnt 
                                            + __VlefCall_7__num);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 154)->__VnoInFunc_print_array_header(vlSymsp, "severity_id_verbosities"s, unnamedblk3__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_8 = (0U != this->__PVT__severity_id_verbosities.first(l_severity));
        if (__VlefExpr_8) {
            do {
                unnamedblk3__DOT__unnamedblk5__DOT__id_v_ary 
                    = this->__PVT__severity_id_verbosities
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk5__DOT__id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 159)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__19__Vfuncout);
                __VlefCall_9__first = __Vtask_first__19__Vfuncout;
                if ((0U != __VlefCall_9__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk5__DOT__id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 161)->__VnoInFunc_get(vlSymsp, idx, l_int);
                        if (VUVM_Activator___024unit::__Venumtab_enum_valid25
                            .at(l_int)) {
                            l_verbosity = l_int;
                            __VlefCond_10 = 1U;
                        } else {
                            __VlefCond_10 = 0U;
                        }
                        if ((0U != __VlefCond_10)) {
                            __VlefExpr_11 = VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name25
                                                               .at(l_verbosity));
                            __Vtemp_2 = VUVM_Activator___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 163)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(idx)) , "uvm_verbosity"s, 0x00000020U, __VlefExpr_11, 0x2eU);
                        } else {
                            unnamedblk3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__l_str = ""s;
                            VL_SFORMAT_NX(unnamedblk3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__l_str
                                          ,"%0d",1, '~',32,l_int);
                            __Vtemp_3 = VUVM_Activator___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 168)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(idx)) , "int"s, 0x00000020U, unnamedblk3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__l_str, 0x2eU);
                        }
                        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk5__DOT__id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 171)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__23__Vfuncout);
                        __VlefCall_12__next = __Vtask_next__23__Vfuncout;
                    } while ((0U != __VlefCall_12__next));
                }
                __VlefExpr_13 = (0U != this->__PVT__severity_id_verbosities.next(l_severity));
            } while (__VlefExpr_13);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 174)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 178)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__25__Vfuncout);
    __VlefCall_14__first = __Vtask_first__25__Vfuncout;
    if ((0U != __VlefCall_14__first)) {
        VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 179)->__VnoInFunc_num(vlSymsp, __VlefCall_15__num);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 179)->__VnoInFunc_print_array_header(vlSymsp, "id_actions"s, __VlefCall_15__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 182)->__VnoInFunc_get(vlSymsp, idx, l_int);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, l_int, __VlefCall_16__format_action);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 183)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_16__format_action), 0x2eU);
            VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 185)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__31__Vfuncout);
            __VlefCall_17__next = __Vtask_next__31__Vfuncout;
        } while ((0U != __VlefCall_17__next));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 186)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_18 = (0U != this->__PVT__severity_actions.first(l_severity));
    if (__VlefExpr_18) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 191)->__VnoInFunc_print_array_header(vlSymsp, "severity_actions"s, 4U, "array"s, 0x2eU);
        do {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                                                                .at((IData)(l_severity)), __VlefCall_19__format_action);
            __Vtemp_4 = VUVM_Activator___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 193)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_4)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_19__format_action), 0x2eU);
            __VlefExpr_20 = (0U != this->__PVT__severity_actions.next(l_severity));
        } while (__VlefExpr_20);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 196)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_actions.size())) {
        unnamedblk7__DOT___total_cnt = 0U;
        unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_actions.first(unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vnext));
        while (unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vmore) {
            unnamedblk7__DOT__unnamedblk8__DOT__l_severity 
                = unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vnext;
            unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_actions.next(unnamedblk7__DOT__unnamedblk8__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_actions
                          .at(unnamedblk7__DOT__unnamedblk8__DOT__l_severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 203)->__VnoInFunc_num(vlSymsp, __VlefCall_21__num);
            unnamedblk7__DOT___total_cnt = (unnamedblk7__DOT___total_cnt 
                                            + __VlefCall_21__num);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 204)->__VnoInFunc_print_array_header(vlSymsp, "severity_id_actions"s, unnamedblk7__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_22 = (0U != this->__PVT__severity_id_actions.first(l_severity));
        if (__VlefExpr_22) {
            do {
                unnamedblk7__DOT__unnamedblk9__DOT__id_a_ary 
                    = this->__PVT__severity_id_actions
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk9__DOT__id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 209)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__39__Vfuncout);
                __VlefCall_23__first = __Vtask_first__39__Vfuncout;
                if ((0U != __VlefCall_23__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk9__DOT__id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 212)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_24__get);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, __VlefCall_24__get, __VlefCall_25__format_action);
                        __Vtemp_5 = VUVM_Activator___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 211)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_5)
                                                                                , 'S',&(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_25__format_action), 0x2eU);
                        VL_NULL_CHECK(unnamedblk7__DOT__unnamedblk9__DOT__id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 213)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__43__Vfuncout);
                        __VlefCall_26__next = __Vtask_next__43__Vfuncout;
                    } while ((0U != __VlefCall_26__next));
                }
                __VlefExpr_27 = (0U != this->__PVT__severity_id_actions.next(l_severity));
            } while (__VlefExpr_27);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 216)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 220)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__45__Vfuncout);
    __VlefCall_28__first = __Vtask_first__45__Vfuncout;
    if ((0U != __VlefCall_28__first)) {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 221)->__VnoInFunc_num(vlSymsp, __VlefCall_29__num);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 221)->__VnoInFunc_print_array_header(vlSymsp, "sev_overrides"s, __VlefCall_29__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 224)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk10__DOT__l_severity_new);
            __Vtemp_6 = VUVM_Activator___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 225)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_6)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk10__DOT__l_severity_new]), 0x2eU);
            VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 227)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__50__Vfuncout);
            __VlefCall_30__next = __Vtask_next__50__Vfuncout;
        } while ((0U != __VlefCall_30__next));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 228)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__sev_id_overrides.size())) {
        unnamedblk11__DOT___total_cnt = 0U;
        unnamedblk11__DOT__unnamedblk12__DOT__idx__Vmore 
            = (0U != this->__PVT__sev_id_overrides.first(unnamedblk11__DOT__unnamedblk12__DOT__idx__Vnext));
        while (unnamedblk11__DOT__unnamedblk12__DOT__idx__Vmore) {
            unnamedblk11__DOT__unnamedblk12__DOT__idx 
                = unnamedblk11__DOT__unnamedblk12__DOT__idx__Vnext;
            unnamedblk11__DOT__unnamedblk12__DOT__idx__Vmore 
                = (0U != this->__PVT__sev_id_overrides.next(unnamedblk11__DOT__unnamedblk12__DOT__idx__Vnext));
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(unnamedblk11__DOT__unnamedblk12__DOT__idx), "../../uvm/distrib/src/base/uvm_report_handler.svh", 235)->__VnoInFunc_num(vlSymsp, __VlefCall_31__num);
            unnamedblk11__DOT___total_cnt = (unnamedblk11__DOT___total_cnt 
                                             + __VlefCall_31__num);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 236)->__VnoInFunc_print_array_header(vlSymsp, "sev_id_overrides"s, unnamedblk11__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_32 = (0U != this->__PVT__sev_id_overrides.first(idx));
        if (__VlefExpr_32) {
            do {
                unnamedblk11__DOT__unnamedblk13__DOT__sev_o_ary 
                    = this->__PVT__sev_id_overrides
                    .at(idx);
                VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk13__DOT__sev_o_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 241)->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__54__Vfuncout);
                __VlefCall_33__first = __Vtask_first__54__Vfuncout;
                if ((0U != __VlefCall_33__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk13__DOT__sev_o_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 243)->__VnoInFunc_get(vlSymsp, l_severity, unnamedblk11__DOT__unnamedblk13__DOT__unnamedblk14__DOT__new_sev);
                        __Vtemp_7 = VUVM_Activator___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 244)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_7)
                                                                                , 'S',&(idx)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk11__DOT__unnamedblk13__DOT__unnamedblk14__DOT__new_sev]), 0x2eU);
                        VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk13__DOT__sev_o_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 246)->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__57__Vfuncout);
                        __VlefCall_34__next = __Vtask_next__57__Vfuncout;
                    } while ((0U != __VlefCall_34__next));
                }
                __VlefExpr_35 = (0U != this->__PVT__sev_id_overrides.next(idx));
            } while (__VlefExpr_35);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 249)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_EXTENDS_WI(4096,32, __Vtemp_8, this->__PVT__default_file_handle);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 253)->__VnoInFunc_print_int(vlSymsp, "default_file_handle"s, __Vtemp_8, 0x00000020U, 0x07000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 257)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__60__Vfuncout);
    __VlefCall_36__first = __Vtask_first__60__Vfuncout;
    if ((0U != __VlefCall_36__first)) {
        VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 258)->__VnoInFunc_num(vlSymsp, __VlefCall_37__num);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 258)->__VnoInFunc_print_array_header(vlSymsp, "id_file_handles"s, __VlefCall_37__num, "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 261)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_38__get);
            VL_EXTENDS_WI(4096,32, __Vtemp_9, __VlefCall_38__get);
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 261)->__VnoInFunc_print_int(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(idx)) , __Vtemp_9, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 263)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__65__Vfuncout);
            __VlefCall_39__next = __Vtask_next__65__Vfuncout;
        } while ((0U != __VlefCall_39__next));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 264)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_40 = (0U != this->__PVT__severity_file_handles.first(l_severity));
    if (__VlefExpr_40) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 269)->__VnoInFunc_print_array_header(vlSymsp, "severity_file_handles"s, 4U, "array"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __VlefExpr_41, this->__PVT__severity_file_handles
                          .at((IData)(l_severity)));
            __Vtemp_10 = VUVM_Activator___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 271)->__VnoInFunc_print_int(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_10)) , __VlefExpr_41, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
            __VlefExpr_42 = (0U != this->__PVT__severity_file_handles.next(l_severity));
        } while (__VlefExpr_42);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 274)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_file_handles.size())) {
        unnamedblk15__DOT___total_cnt = 0U;
        unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vmore 
            = (0U != this->__PVT__severity_id_file_handles.first(unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vnext));
        while (unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vmore) {
            unnamedblk15__DOT__unnamedblk16__DOT__l_severity 
                = unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vnext;
            unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vmore 
                = (0U != this->__PVT__severity_id_file_handles.next(unnamedblk15__DOT__unnamedblk16__DOT__l_severity__Vnext));
            VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                          .at(unnamedblk15__DOT__unnamedblk16__DOT__l_severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 281)->__VnoInFunc_num(vlSymsp, __VlefCall_43__num);
            unnamedblk15__DOT___total_cnt = (unnamedblk15__DOT___total_cnt 
                                             + __VlefCall_43__num);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 282)->__VnoInFunc_print_array_header(vlSymsp, "severity_id_file_handles"s, unnamedblk15__DOT___total_cnt, "array"s, 0x2eU);
        __VlefExpr_44 = (0U != this->__PVT__severity_id_file_handles.first(l_severity));
        if (__VlefExpr_44) {
            do {
                unnamedblk15__DOT__unnamedblk17__DOT__id_f_ary 
                    = this->__PVT__severity_id_file_handles
                    .at(l_severity);
                VL_NULL_CHECK(unnamedblk15__DOT__unnamedblk17__DOT__id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 287)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__72__Vfuncout);
                __VlefCall_45__first = __Vtask_first__72__Vfuncout;
                if ((0U != __VlefCall_45__first)) {
                    do {
                        VL_NULL_CHECK(unnamedblk15__DOT__unnamedblk17__DOT__id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 290)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_46__get);
                        __Vtemp_11 = VUVM_Activator___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_EXTENDS_WI(4096,32, __Vtemp_12, __VlefCall_46__get);
                        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 289)->__VnoInFunc_print_int(vlSymsp, VL_SFORMATF_N_NX("[%s:%s]",2
                                                                                , 'S',&(__Vtemp_11)
                                                                                , 'S',&(idx)) , __Vtemp_12, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
                        VL_NULL_CHECK(unnamedblk15__DOT__unnamedblk17__DOT__id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 291)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__75__Vfuncout);
                        __VlefCall_47__next = __Vtask_next__75__Vfuncout;
                    } while ((0U != __VlefCall_47__next));
                }
                __VlefExpr_48 = (0U != this->__PVT__severity_id_file_handles.next(l_severity));
            } while (__VlefExpr_48);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_handler.svh", 294)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_action;
    IData/*31:0*/ __VlefCall_2__get_file_handle;
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<VUVM_Activator_std__03a__03aprocess> p;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> srvr;
    std::string id;
    CData/*1:0*/ severity;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 313)->__VnoInFunc_get_id(vlSymsp, id);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 314)->__VnoInFunc_get_severity(vlSymsp, severity);
    if (this->__PVT__sev_id_overrides.exists(id)) {
        VL_NULL_CHECK(this->__PVT__sev_id_overrides
                      .at(id), "../../uvm/distrib/src/base/uvm_report_handler.svh", 319)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(id), "../../uvm/distrib/src/base/uvm_report_handler.svh", 320)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 321)->__VnoInFunc_set_severity(vlSymsp, severity);
        }
    } else {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 325)->__VnoInFunc_exists(vlSymsp, severity, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 326)->__VnoInFunc_get(vlSymsp, severity, severity);
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 327)->__VnoInFunc_set_severity(vlSymsp, severity);
        }
    }
    this->__VnoInFunc_get_file_handle(vlSymsp, severity, id, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 330)->__VnoInFunc_set_file(vlSymsp, __VlefCall_2__get_file_handle);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 331)->__VnoInFunc_set_report_handler(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler>{this});
    this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_3__get_action);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 332)->__VnoInFunc_set_action(vlSymsp, __VlefCall_3__get_action);
    VL_NULL_CHECK(srvr, "../../uvm/distrib/src/base/uvm_report_handler.svh", 333)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_set_default_file(vlSymsp, 0U);
    this->__PVT__m_max_verbosity_level = 0x000000c8U;
    this->__PVT__id_actions = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_verbosities = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_file_handles = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__sev_overrides = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
    this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
    this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_severity_id_file__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_file_handles.exists(severity)) {
            array = this->__PVT__severity_id_file_handles
                .at(severity);
            VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 405)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 406)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 410)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 411)->__VnoInFunc_get(vlSymsp, id, get_severity_id_file__Vfuncrtn);
            goto __Vlabel0;
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            get_severity_id_file__Vfuncrtn = this->__PVT__severity_file_handles
                .at((IData)(severity));
            goto __Vlabel0;
        }
        get_severity_id_file__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level\n"); );
    // Body
    this->__PVT__m_max_verbosity_level = verbosity_level;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_verbosity_level__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_verbosities.exists(severity)) {
            array = this->__PVT__severity_id_verbosities
                .at(severity);
            VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 443)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 444)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 448)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 449)->__VnoInFunc_get(vlSymsp, id, get_verbosity_level__Vfuncrtn);
            goto __Vlabel0;
        }
        get_verbosity_level__Vfuncrtn = this->__PVT__m_max_verbosity_level;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__exists;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        get_action__Vfuncrtn = 0U;
        if (this->__PVT__severity_id_actions.exists(severity)) {
            array = this->__PVT__severity_id_actions
                .at(severity);
            VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 471)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
            if ((0U != __VlefCall_0__exists)) {
                VL_NULL_CHECK(array, "../../uvm/distrib/src/base/uvm_report_handler.svh", 472)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
                goto __Vlabel0;
            }
        }
        VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 475)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_1__exists);
        if ((0U != __VlefCall_1__exists)) {
            VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 476)->__VnoInFunc_get(vlSymsp, id, get_action__Vfuncrtn);
            goto __Vlabel0;
        }
        get_action__Vfuncrtn = this->__PVT__severity_actions
            .at((IData)(severity));
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    IData/*31:0*/ file;
    {
        get_file_handle__Vfuncrtn = 0U;
        file = 0U;
        this->__VnoInFunc_get_severity_id_file(vlSymsp, severity, id, file);
        if ((0U != file)) {
            get_file_handle__Vfuncrtn = file;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 499)->__VnoInFunc_exists(vlSymsp, id, __VlefCall_0__exists);
        if ((0U != __VlefCall_0__exists)) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 500)->__VnoInFunc_get(vlSymsp, id, file);
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            file = this->__PVT__severity_file_handles
                .at((IData)(severity));
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        get_file_handle__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action\n"); );
    // Body
    this->__PVT__severity_actions.at((IData)(severity)) 
        = action;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 529)->__VnoInFunc_add(vlSymsp, id, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_actions.exists(severity))) {
        __VlefCall_0__new = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_actions.at(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_actions.at(severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 537)->__VnoInFunc_add(vlSymsp, id, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 541)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_verbosities.exists(severity))) {
        __VlefCall_0__new = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_verbosities.at(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                  .at(severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 549)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file\n"); );
    // Body
    this->__PVT__default_file_handle = file;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file\n"); );
    // Body
    this->__PVT__severity_file_handles.at((IData)(severity)) 
        = file;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 568)->__VnoInFunc_add(vlSymsp, id, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __VlefCall_0__new;
    if ((! this->__PVT__severity_id_file_handles.exists(severity))) {
        __VlefCall_0__new = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
        this->__PVT__severity_id_file_handles.at(severity) 
            = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                  .at(severity), "../../uvm/distrib/src/base/uvm_report_handler.svh", 575)->__VnoInFunc_add(vlSymsp, id, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__sev_overrides, "../../uvm/distrib/src/base/uvm_report_handler.svh", 580)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> __VlefCall_0__new;
    if ((! this->__PVT__sev_id_overrides.exists(id))) {
        __VlefCall_0__new = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
        this->__PVT__sev_id_overrides.at(id) = __VlefCall_0__new;
    }
    VL_NULL_CHECK(this->__PVT__sev_id_overrides.at(id), "../../uvm/distrib/src/base/uvm_report_handler.svh", 592)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__134__verbosity;
    __Vfunc_uvm_report_enabled__134__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__134__severity;
    __Vfunc_uvm_report_enabled__134__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__135__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_action;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> l_report_message;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        this->__Vfunc_uvm_report_enabled__134__id = id;
        __Vfunc_uvm_report_enabled__134__severity = 0U;
        __Vfunc_uvm_report_enabled__134__verbosity 
            = verbosity_level;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__135__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__135__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__136__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__134__verbosity, (IData)(__Vfunc_uvm_report_enabled__134__severity), this->__Vfunc_uvm_report_enabled__134__id, __VlefCall_0__uvm_report_enabled);
        if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
            goto __Vlabel0;
        }
        if ((VlNull{} == client)) {
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_handler.svh", 621)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
            client = __Vtask_get_root__138__Vfuncout;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 624)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity_level, filename, line, name);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 626)->__VnoInFunc_set_report_object(vlSymsp, client);
        this->__VnoInFunc_get_action(vlSymsp, severity, id, __VlefCall_1__get_action);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_handler.svh", 627)->__VnoInFunc_set_action(vlSymsp, __VlefCall_1__get_action);
        this->__VnoInFunc_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> client, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &run_hooks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_run_hooks\n"); );
    // Body
    CData/*0:0*/ __VlefCall_3__report_fatal_hook;
    CData/*0:0*/ __VlefCall_2__report_error_hook;
    CData/*0:0*/ __VlefCall_1__report_warning_hook;
    CData/*0:0*/ __VlefCall_0__report_info_hook;
    CData/*0:0*/ ok;
    run_hooks__Vfuncrtn = 0U;
    ok = 0U;
    VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_handler.svh", 652)->__VnoInFunc_report_hook(vlSymsp, id, message, verbosity, filename, line, ok);
    if ((2U & (IData)(severity))) {
        if ((1U & (IData)(severity))) {
            VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_handler.svh", 662)->__VnoInFunc_report_fatal_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_3__report_fatal_hook);
            ok = ((IData)(ok) & (IData)(__VlefCall_3__report_fatal_hook));
        } else {
            VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_handler.svh", 660)->__VnoInFunc_report_error_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_2__report_error_hook);
            ok = ((IData)(ok) & (IData)(__VlefCall_2__report_error_hook));
        }
    } else if ((1U & (IData)(severity))) {
        VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_handler.svh", 658)->__VnoInFunc_report_warning_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_1__report_warning_hook);
        ok = ((IData)(ok) & (IData)(__VlefCall_1__report_warning_hook));
    } else {
        VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_handler.svh", 656)->__VnoInFunc_report_info_hook(vlSymsp, id, message, verbosity, filename, line, __VlefCall_0__report_info_hook);
        ok = ((IData)(ok) & (IData)(__VlefCall_0__report_info_hook));
    }
    run_hooks__Vfuncrtn = ok;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_dump_state(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_dump_state\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__150__Vfuncout;
    __Vtask_first__150__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__152__Vfuncout;
    __Vtask_next__152__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__153__Vfuncout;
    __Vtask_first__153__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__155__Vfuncout;
    __Vtask_next__155__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__157__Vfuncout;
    __Vtask_first__157__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__160__Vfuncout;
    __Vtask_next__160__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__161__Vfuncout;
    __Vtask_first__161__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__164__Vfuncout;
    __Vtask_next__164__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__165__Vfuncout;
    __Vtask_first__165__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__167__Vfuncout;
    __Vtask_next__167__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__168__Vfuncout;
    __Vtask_first__168__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__170__Vfuncout;
    __Vtask_next__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__178__verbosity;
    __Vtask_uvm_report_info__178__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__178__line;
    __Vtask_uvm_report_info__178__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__178__report_enabled_checked;
    __Vtask_uvm_report_info__178__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__179__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__180__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_19__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_17__next;
    IData/*31:0*/ __VlefCall_16__get;
    IData/*31:0*/ __VlefCall_15__first;
    IData/*31:0*/ __VlefCall_14__next;
    IData/*31:0*/ __VlefCall_13__first;
    IData/*31:0*/ __VlefCall_12__next;
    std::string __VlefCall_11__format_action;
    IData/*31:0*/ __VlefCall_10__get;
    IData/*31:0*/ __VlefCall_9__first;
    IData/*31:0*/ __VlefCall_8__next;
    std::string __VlefCall_7__format_action;
    IData/*31:0*/ __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__first;
    std::string __VlefCall_4__format_action;
    IData/*31:0*/ __VlefCall_3__next;
    IData/*31:0*/ __VlefCall_2__first;
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    IData/*31:0*/ unnamedblk18__DOT__v;
    CData/*1:0*/ unnamedblk19__DOT__severity;
    unnamedblk19__DOT__severity = 0;
    CData/*1:0*/ unnamedblk19__DOT__severity__Vnext;
    unnamedblk19__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk19__DOT__severity__Vmore;
    unnamedblk19__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk19__DOT__unnamedblk20__DOT__sev;
    IData/*31:0*/ unnamedblk19__DOT__unnamedblk20__DOT__unnamedblk21__DOT__v;
    CData/*1:0*/ unnamedblk22__DOT__severity;
    unnamedblk22__DOT__severity = 0;
    CData/*1:0*/ unnamedblk22__DOT__severity__Vnext;
    unnamedblk22__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk22__DOT__severity__Vmore;
    unnamedblk22__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk22__DOT__unnamedblk23__DOT__sev;
    CData/*1:0*/ unnamedblk24__DOT__severity;
    unnamedblk24__DOT__severity = 0;
    CData/*1:0*/ unnamedblk24__DOT__severity__Vnext;
    unnamedblk24__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk24__DOT__severity__Vmore;
    unnamedblk24__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk24__DOT__unnamedblk25__DOT__sev;
    CData/*1:0*/ unnamedblk26__DOT__severity;
    unnamedblk26__DOT__severity = 0;
    CData/*1:0*/ unnamedblk26__DOT__severity__Vnext;
    unnamedblk26__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk26__DOT__severity__Vmore;
    unnamedblk26__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk26__DOT__unnamedblk27__DOT__sev;
    CData/*1:0*/ unnamedblk28__DOT__severity;
    unnamedblk28__DOT__severity = 0;
    CData/*1:0*/ unnamedblk28__DOT__severity__Vnext;
    unnamedblk28__DOT__severity__Vnext = 0;
    CData/*0:0*/ unnamedblk28__DOT__severity__Vmore;
    unnamedblk28__DOT__severity__Vmore = 0;
    CData/*1:0*/ unnamedblk28__DOT__unnamedblk29__DOT__sev;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> unnamedblk30__DOT__srvr;
    IData/*31:0*/ file;
    std::string idx;
    VlQueue<std::string> q;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> id_a_ary;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> id_v_ary;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> id_f_ary;
    file = 0U;
    idx = ""s;
    q.clear();
    q.atDefault().clear();
    q.push_back("\n----------------------------------------------------------------------\n"s);
    q.push_back("report handler state dump \n\n"s);
    q.push_back("\n+-----------------+\n"s);
    q.push_back("|   Verbosities   |\n"s);
    q.push_back("+-----------------+\n\n"s);
    q.push_back(VL_SFORMATF_N_NX("max verbosity level = %d\n",1
                                 , '~',32,this->__PVT__m_max_verbosity_level) );
    q.push_back("*** verbosities by id\n"s);
    VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 698)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__150__Vfuncout);
    __VlefCall_0__first = __Vtask_first__150__Vfuncout;
    if ((0U != __VlefCall_0__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 700)->__VnoInFunc_get(vlSymsp, idx, unnamedblk18__DOT__v);
            __Vtemp_1 = VUVM_Activator___024unit::__Venumtab_enum_name25
                .at(unnamedblk18__DOT__v);
            q.push_back(VL_SFORMATF_N_NX("[%s] --> %s\n",2
                                         , 'S',&(idx)
                                         , 'S',&(__Vtemp_1)) );
            VL_NULL_CHECK(this->__PVT__id_verbosities, "../../uvm/distrib/src/base/uvm_report_handler.svh", 702)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__152__Vfuncout);
            __VlefCall_1__next = __Vtask_next__152__Vfuncout;
        } while ((0U != __VlefCall_1__next));
    }
    q.push_back("*** verbosities by id and severity\n"s);
    unnamedblk19__DOT__severity__Vmore = (0U != this->__PVT__severity_id_verbosities.first(unnamedblk19__DOT__severity__Vnext));
    while (unnamedblk19__DOT__severity__Vmore) {
        unnamedblk19__DOT__severity = unnamedblk19__DOT__severity__Vnext;
        unnamedblk19__DOT__severity__Vmore = (0U != this->__PVT__severity_id_verbosities.next(unnamedblk19__DOT__severity__Vnext));
        unnamedblk19__DOT__unnamedblk20__DOT__sev = unnamedblk19__DOT__severity;
        id_v_ary = this->__PVT__severity_id_verbosities
            .at(unnamedblk19__DOT__severity);
        VL_NULL_CHECK(id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 711)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__153__Vfuncout);
        __VlefCall_2__first = __Vtask_first__153__Vfuncout;
        if ((0U != __VlefCall_2__first)) {
            do {
                VL_NULL_CHECK(id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 713)->__VnoInFunc_get(vlSymsp, idx, unnamedblk19__DOT__unnamedblk20__DOT__unnamedblk21__DOT__v);
                __Vtemp_2 = VUVM_Activator___024unit::__Venumtab_enum_name21
                    [unnamedblk19__DOT__unnamedblk20__DOT__sev];
                __Vtemp_3 = VUVM_Activator___024unit::__Venumtab_enum_name25
                    .at(unnamedblk19__DOT__unnamedblk20__DOT__unnamedblk21__DOT__v);
                q.push_back(VL_SFORMATF_N_NX("%s:%s --> %s\n",3
                                             , 'S',&(__Vtemp_2)
                                             , 'S',&(idx)
                                             , 'S',&(__Vtemp_3)) );
                VL_NULL_CHECK(id_v_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 715)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__155__Vfuncout);
                __VlefCall_3__next = __Vtask_next__155__Vfuncout;
            } while ((0U != __VlefCall_3__next));
        }
    }
    q.push_back("\n+-------------+\n"s);
    q.push_back("|   actions   |\n"s);
    q.push_back("+-------------+\n\n"s);
    q.push_back("*** actions by severity\n"s);
    unnamedblk22__DOT__severity__Vmore = (0U != this->__PVT__severity_actions.first(unnamedblk22__DOT__severity__Vnext));
    while (unnamedblk22__DOT__severity__Vmore) {
        unnamedblk22__DOT__severity = unnamedblk22__DOT__severity__Vnext;
        unnamedblk22__DOT__severity__Vmore = (0U != this->__PVT__severity_actions.next(unnamedblk22__DOT__severity__Vnext));
        unnamedblk22__DOT__unnamedblk23__DOT__sev = unnamedblk22__DOT__severity;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                                                                .at((IData)(unnamedblk22__DOT__severity)), __VlefCall_4__format_action);
        __Vtemp_4 = VUVM_Activator___024unit::__Venumtab_enum_name21
            [unnamedblk22__DOT__unnamedblk23__DOT__sev];
        q.push_back(VL_SFORMATF_N_NX("%s = %s\n",2, 'S',&(__Vtemp_4)
                                     , 'S',&(__VlefCall_4__format_action)) );
    }
    q.push_back("\n*** actions by id\n"s);
    VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 732)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__157__Vfuncout);
    __VlefCall_5__first = __Vtask_first__157__Vfuncout;
    if ((0U != __VlefCall_5__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 734)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_6__get);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, __VlefCall_6__get, __VlefCall_7__format_action);
            q.push_back(VL_SFORMATF_N_NX("[%s] --> %s\n",2
                                         , 'S',&(idx)
                                         , 'S',&(__VlefCall_7__format_action)) );
            VL_NULL_CHECK(this->__PVT__id_actions, "../../uvm/distrib/src/base/uvm_report_handler.svh", 735)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__160__Vfuncout);
            __VlefCall_8__next = __Vtask_next__160__Vfuncout;
        } while ((0U != __VlefCall_8__next));
    }
    q.push_back("\n*** actions by id and severity\n"s);
    unnamedblk24__DOT__severity__Vmore = (0U != this->__PVT__severity_id_actions.first(unnamedblk24__DOT__severity__Vnext));
    while (unnamedblk24__DOT__severity__Vmore) {
        unnamedblk24__DOT__severity = unnamedblk24__DOT__severity__Vnext;
        unnamedblk24__DOT__severity__Vmore = (0U != this->__PVT__severity_id_actions.next(unnamedblk24__DOT__severity__Vnext));
        unnamedblk24__DOT__unnamedblk25__DOT__sev = unnamedblk24__DOT__severity;
        id_a_ary = this->__PVT__severity_id_actions
            .at(unnamedblk24__DOT__severity);
        VL_NULL_CHECK(id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 743)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__161__Vfuncout);
        __VlefCall_9__first = __Vtask_first__161__Vfuncout;
        if ((0U != __VlefCall_9__first)) {
            do {
                VL_NULL_CHECK(id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 745)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_10__get);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, __VlefCall_10__get, __VlefCall_11__format_action);
                __Vtemp_5 = VUVM_Activator___024unit::__Venumtab_enum_name21
                    [unnamedblk24__DOT__unnamedblk25__DOT__sev];
                q.push_back(VL_SFORMATF_N_NX("%s:%s --> %s\n",3
                                             , 'S',&(__Vtemp_5)
                                             , 'S',&(idx)
                                             , 'S',&(__VlefCall_11__format_action)) );
                VL_NULL_CHECK(id_a_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 746)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__164__Vfuncout);
                __VlefCall_12__next = __Vtask_next__164__Vfuncout;
            } while ((0U != __VlefCall_12__next));
        }
    }
    q.push_back("\n+-------------+\n"s);
    q.push_back("|    files    |\n"s);
    q.push_back("+-------------+\n\n"s);
    q.push_back(VL_SFORMATF_N_NX("default file handle = %d\n\n",1
                                 , '~',32,this->__PVT__default_file_handle) );
    q.push_back("*** files by severity\n"s);
    unnamedblk26__DOT__severity__Vmore = (0U != this->__PVT__severity_file_handles.first(unnamedblk26__DOT__severity__Vnext));
    while (unnamedblk26__DOT__severity__Vmore) {
        unnamedblk26__DOT__severity = unnamedblk26__DOT__severity__Vnext;
        unnamedblk26__DOT__severity__Vmore = (0U != this->__PVT__severity_file_handles.next(unnamedblk26__DOT__severity__Vnext));
        unnamedblk26__DOT__unnamedblk27__DOT__sev = unnamedblk26__DOT__severity;
        file = this->__PVT__severity_file_handles.at((IData)(unnamedblk26__DOT__severity));
        __Vtemp_6 = VUVM_Activator___024unit::__Venumtab_enum_name21
            [unnamedblk26__DOT__unnamedblk27__DOT__sev];
        q.push_back(VL_SFORMATF_N_NX("%s = %d\n",2, 'S',&(__Vtemp_6)
                                     , '~',32,file) );
    }
    q.push_back("\n*** files by id\n"s);
    VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 766)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__165__Vfuncout);
    __VlefCall_13__first = __Vtask_first__165__Vfuncout;
    if ((0U != __VlefCall_13__first)) {
        do {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 768)->__VnoInFunc_get(vlSymsp, idx, file);
            q.push_back(VL_SFORMATF_N_NX("id %s --> %d\n",2
                                         , 'S',&(idx)
                                         , '~',32,file) );
            VL_NULL_CHECK(this->__PVT__id_file_handles, "../../uvm/distrib/src/base/uvm_report_handler.svh", 770)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__167__Vfuncout);
            __VlefCall_14__next = __Vtask_next__167__Vfuncout;
        } while ((0U != __VlefCall_14__next));
    }
    q.push_back("\n*** files by id and severity\n"s);
    unnamedblk28__DOT__severity__Vmore = (0U != this->__PVT__severity_id_file_handles.first(unnamedblk28__DOT__severity__Vnext));
    while (unnamedblk28__DOT__severity__Vmore) {
        unnamedblk28__DOT__severity = unnamedblk28__DOT__severity__Vnext;
        unnamedblk28__DOT__severity__Vmore = (0U != this->__PVT__severity_id_file_handles.next(unnamedblk28__DOT__severity__Vnext));
        unnamedblk28__DOT__unnamedblk29__DOT__sev = unnamedblk28__DOT__severity;
        id_f_ary = this->__PVT__severity_id_file_handles
            .at(unnamedblk28__DOT__severity);
        VL_NULL_CHECK(id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 777)->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__168__Vfuncout);
        __VlefCall_15__first = __Vtask_first__168__Vfuncout;
        if ((0U != __VlefCall_15__first)) {
            do {
                VL_NULL_CHECK(id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 779)->__VnoInFunc_get(vlSymsp, idx, __VlefCall_16__get);
                __Vtemp_7 = VUVM_Activator___024unit::__Venumtab_enum_name21
                    [unnamedblk28__DOT__unnamedblk29__DOT__sev];
                q.push_back(VL_SFORMATF_N_NX("%s:%s --> %d\n",3
                                             , 'S',&(__Vtemp_7)
                                             , 'S',&(idx)
                                             , '~',32,__VlefCall_16__get) );
                VL_NULL_CHECK(id_f_ary, "../../uvm/distrib/src/base/uvm_report_handler.svh", 780)->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__170__Vfuncout);
                __VlefCall_17__next = __Vtask_next__170__Vfuncout;
            } while ((0U != __VlefCall_17__next));
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, unnamedblk30__DOT__srvr);
    VL_NULL_CHECK(unnamedblk30__DOT__srvr, "../../uvm/distrib/src/base/uvm_report_handler.svh", 786)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0U);
    q.push_back("----------------------------------------------------------------------\n"s);
    this->__Vfunc_uvm_report_enabled__173__id = "UVM/REPORT/HANDLER"s;
    __Vfunc_uvm_report_enabled__173__severity = 0U;
    __Vfunc_uvm_report_enabled__173__verbosity = 0x00000064U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__174__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__174__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__175__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), this->__Vfunc_uvm_report_enabled__173__id, __VlefCall_18__uvm_report_enabled);
    if ((0U != __VlefCall_18__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__177__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__177__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
        __VlefCall_19__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__177__Vfuncout;
        __Vtask_uvm_report_info__178__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__178__context_name = ""s;
        __Vtask_uvm_report_info__178__line = 0x00000316U;
        this->__Vtask_uvm_report_info__178__filename = "../../uvm/distrib/src/base/uvm_report_handler.svh"s;
        __Vtask_uvm_report_info__178__verbosity = 0x00000064U;
        this->__Vtask_uvm_report_info__178__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_19__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__178__id = "UVM/REPORT/HANDLER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__179__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__179__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__180__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__180__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__178__id, this->__Vtask_uvm_report_info__178__message, __Vtask_uvm_report_info__178__verbosity, this->__Vtask_uvm_report_info__178__filename, __Vtask_uvm_report_info__178__line, this->__Vtask_uvm_report_info__178__context_name, (IData)(__Vtask_uvm_report_info__178__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_verbosity_level = 0;
    __PVT__severity_actions.atDefault() = 0;
    __PVT__default_file_handle = 0;
    __PVT__severity_file_handles.atDefault() = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::~VUVM_Activator_uvm_pkg__03a__03auvm_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_handler::~\n"); );
}
