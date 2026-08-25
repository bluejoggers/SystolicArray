// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi7> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi7> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi7__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, "unnamed-uvm_text_tr_database"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_database"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_tr_database.svh", 305)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database>{this}, __VlefCall_0__m_do_cycle_check);
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

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_tr_database::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_filename_dap = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_simple_lock_dap__Tz2, vlProcess, vlSymsp, "filename_dap"s);
    VL_NULL_CHECK(this->__PVT__m_filename_dap, "../../uvm/distrib/src/base/uvm_tr_database.svh", 317)->__VnoInFunc_set(vlProcess, vlSymsp, "tr_db.log"s);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &do_open_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_db\n"); );
    // Body
    std::string __VlefCall_0__get;
    do_open_db__Vfuncrtn = 0U;
    if (VL_UNLIKELY(((0U == this->__PVT__m_file)))) {
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "../../uvm/distrib/src/base/uvm_tr_database.svh", 334)->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
        this->__PVT__m_file = VL_FOPEN_NN(__VlefCall_0__get
                                          , "a+"s);
        ;
        if ((0U != this->__PVT__m_file)) {
            VL_NULL_CHECK(this->__PVT__m_filename_dap, "../../uvm/distrib/src/base/uvm_tr_database.svh", 336)->__VnoInFunc_lock(vlSymsp);
        }
    }
    do_open_db__Vfuncrtn = (0U != this->__PVT__m_file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &do_close_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db\n"); );
    // Body
    do_close_db__Vfuncrtn = 0U;
    if ((0U != this->__PVT__m_file)) {
        this->__VnoInFunc_do_close_db____Vfork_1__0(vlSymsp);
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "../../uvm/distrib/src/base/uvm_tr_database.svh", 355)->__VnoInFunc_unlock(vlSymsp);
    }
    do_close_db__Vfuncrtn = 1U;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_close_db____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "../../uvm/distrib/src/base/uvm_tr_database.svh", 
                                            352);
    VL_FCLOSE_I(this->__PVT__m_file); co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string scope, std::string type_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tr_stream> &do_open_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_open_stream\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_stream> m_stream;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi9__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, m_stream);
    do_open_stream__Vfuncrtn = m_stream;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_link_base> link) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_do_establish_link\n"); );
    // Body
    IData/*31:0*/ __VlefCall_5__get_handle;
    IData/*31:0*/ __VlefCall_4__get_handle;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefCall_2__get_handle;
    IData/*31:0*/ __VlefCall_1__get_handle;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_parent_child_link> unnamedblk2__DOT__pc_link;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_related_link> unnamedblk2__DOT__re_link;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> r_lhs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> r_rhs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> lhs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs;
    VL_NULL_CHECK(link, "../../uvm/distrib/src/base/uvm_tr_database.svh", 378)->__VnoInFunc_get_lhs(vlSymsp, lhs);
    VL_NULL_CHECK(link, "../../uvm/distrib/src/base/uvm_tr_database.svh", 379)->__VnoInFunc_get_rhs(vlSymsp, rhs);
    std::ignore = VL_CAST_DYNAMIC(lhs, r_lhs);
    std::ignore = VL_CAST_DYNAMIC(rhs, r_rhs);
    if ((1U & (~ ((VlNull{} == r_lhs) | (VlNull{} == r_rhs))))) {
        __VlefExpr_0 = VL_CAST_DYNAMIC(link, unnamedblk2__DOT__pc_link);
        if (VL_UNLIKELY((__VlefExpr_0))) {
            VL_NULL_CHECK(r_lhs, "../../uvm/distrib/src/base/uvm_tr_database.svh", 393)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_1__get_handle);
            VL_NULL_CHECK(r_rhs, "../../uvm/distrib/src/base/uvm_tr_database.svh", 394)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_2__get_handle);
            VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=child}\n",4, 'T',-12
                          , '#',64,VL_TIME_UNITED_Q(1)
                          , '~',32,__VlefCall_1__get_handle
                          , '~',32,__VlefCall_2__get_handle);
        } else {
            __VlefExpr_3 = VL_CAST_DYNAMIC(link, unnamedblk2__DOT__re_link);
            if (VL_UNLIKELY((__VlefExpr_3))) {
                VL_NULL_CHECK(r_lhs, "../../uvm/distrib/src/base/uvm_tr_database.svh", 401)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
                VL_NULL_CHECK(r_rhs, "../../uvm/distrib/src/base/uvm_tr_database.svh", 402)->__VnoInFunc_get_handle(vlSymsp, __VlefCall_5__get_handle);
                VL_FWRITEF_NX(this->__PVT__m_file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=}\n",4, 'T',-12
                              , '#',64,VL_TIME_UNITED_Q(1)
                              , '~',32,__VlefCall_4__get_handle
                              , '~',32,__VlefCall_5__get_handle);
            }
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_set_file_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__22__verbosity;
    __Vtask_uvm_report_warning__22__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__22__line;
    __Vtask_uvm_report_warning__22__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__22__report_enabled_checked;
    __Vtask_uvm_report_warning__22__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__verbosity;
    __Vfunc_uvm_report_enabled__27__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__27__severity;
    __Vfunc_uvm_report_enabled__27__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__31__verbosity;
    __Vtask_uvm_report_warning__31__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__31__line;
    __Vtask_uvm_report_warning__31__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__31__report_enabled_checked;
    __Vtask_uvm_report_warning__31__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__try_set;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((""s == filename)) {
            this->__Vfunc_uvm_report_enabled__18__id = "UVM/TXT_DB/EMPTY_NAME"s;
            __Vfunc_uvm_report_enabled__18__severity = 1U;
            __Vfunc_uvm_report_enabled__18__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), this->__Vfunc_uvm_report_enabled__18__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__22__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__22__context_name = ""s;
                __Vtask_uvm_report_warning__22__line = 0x000001a4U;
                this->__Vtask_uvm_report_warning__22__filename = "../../uvm/distrib/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__22__verbosity = 0U;
                this->__Vtask_uvm_report_warning__22__message = "Ignoring attempt to set file name to ''!"s;
                this->__Vtask_uvm_report_warning__22__id = "UVM/TXT_DB/EMPTY_NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__23__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__24__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__22__id, this->__Vtask_uvm_report_warning__22__message, __Vtask_uvm_report_warning__22__verbosity, this->__Vtask_uvm_report_warning__22__filename, __Vtask_uvm_report_warning__22__line, this->__Vtask_uvm_report_warning__22__context_name, (IData)(__Vtask_uvm_report_warning__22__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_filename_dap, "../../uvm/distrib/src/base/uvm_tr_database.svh", 424)->__VnoInFunc_try_set(vlSymsp, filename, __VlefCall_1__try_set);
        if ((1U & (~ (IData)(__VlefCall_1__try_set)))) {
            this->__Vfunc_uvm_report_enabled__27__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
            __Vfunc_uvm_report_enabled__27__severity = 1U;
            __Vfunc_uvm_report_enabled__27__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__27__verbosity, (IData)(__Vfunc_uvm_report_enabled__27__severity), this->__Vfunc_uvm_report_enabled__27__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__31__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__31__context_name = ""s;
                __Vtask_uvm_report_warning__31__line = 0x000001aaU;
                this->__Vtask_uvm_report_warning__31__filename = "../../uvm/distrib/src/base/uvm_tr_database.svh"s;
                __Vtask_uvm_report_warning__31__verbosity = 0U;
                this->__Vtask_uvm_report_warning__31__message = "Ignoring attempt to change file name after opening the db!"s;
                this->__Vtask_uvm_report_warning__31__id = "UVM/TXT_DB/SET_AFTER_OPEN"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__32__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__32__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__31__id, this->__Vtask_uvm_report_warning__31__message, __Vtask_uvm_report_warning__31__verbosity, this->__Vtask_uvm_report_warning__31__filename, __Vtask_uvm_report_warning__31__line, this->__Vtask_uvm_report_warning__31__context_name, (IData)(__Vtask_uvm_report_warning__31__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_file = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::~VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_text_tr_database::~\n"); );
}
