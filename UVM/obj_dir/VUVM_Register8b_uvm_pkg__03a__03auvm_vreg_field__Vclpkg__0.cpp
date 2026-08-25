// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi29> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi29> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, "uvm_vreg_field"s);
    } else {
        tmp = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_vreg_field"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 51)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &wdat, IData/*31:0*/ &path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_write\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ wdat, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_write\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_pre_read\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, QData/*63:0*/ &rdat, IData/*31:0*/ &path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> &map, IData/*31:0*/ &status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_post_read\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> parent, IData/*31:0*/ size, IData/*31:0*/ lsb_pos) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
    __Vtask_uvm_report_error__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__11__line;
    __Vtask_uvm_report_error__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
    __Vtask_uvm_report_error__11__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__PVT__parent = parent;
    if ((0U == size)) {
        this->__Vfunc_uvm_report_enabled__6__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__6__severity = 2U;
        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), this->__Vfunc_uvm_report_enabled__6__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__11__context_name = ""s;
            __Vtask_uvm_report_error__11__line = 0x000001f1U;
            this->__Vtask_uvm_report_error__11__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__11__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__11__message
                          ,"Virtual field \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_1__get_full_name));
            this->__Vtask_uvm_report_error__11__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__11__id, this->__Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, this->__Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, this->__Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
        }
        size = 1U;
    }
    if ((0x00000040U < size)) {
        this->__Vfunc_uvm_report_enabled__15__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__15__severity = 2U;
        __Vfunc_uvm_report_enabled__15__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__17__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), this->__Vfunc_uvm_report_enabled__15__id, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            __Vtask_uvm_report_error__20__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__20__context_name = ""s;
            __Vtask_uvm_report_error__20__line = 0x000001f7U;
            this->__Vtask_uvm_report_error__20__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_error__20__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__20__message
                          ,"Virtual field \"%s\" cannot have more than 64 bits",1
                          , 'S',&(__VlefCall_3__get_full_name));
            this->__Vtask_uvm_report_error__20__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__20__id, this->__Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, this->__Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, this->__Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
        }
        size = 0x00000040U;
    }
    this->__PVT__size = size;
    this->__PVT__lsb = lsb_pos;
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 510)->__VnoInFunc_add_field(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this});
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 516)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
    get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_register\n"); );
    // Body
    get_register__Vfuncrtn = this->__PVT__parent;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__parent;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_lsb_pos_in_register__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_lsb_pos_in_register\n"); );
    // Body
    get_lsb_pos_in_register__Vfuncrtn = this->__PVT__lsb;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__size;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> __VlefCall_0__get_memory;
    {
        get_access__Vfuncrtn = ""s;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 542)->__VnoInFunc_get_memory(vlSymsp, __VlefCall_0__get_memory);
        if ((VlNull{} == __VlefCall_0__get_memory)) {
            this->__Vfunc_uvm_report_enabled__28__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__28__severity = 2U;
            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), this->__Vfunc_uvm_report_enabled__28__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__33__context_name = ""s;
                __Vtask_uvm_report_error__33__line = 0x00000220U;
                this->__Vtask_uvm_report_error__33__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__33__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__33__message
                              ,"Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%s\"",1
                              , 'S',&(__VlefCall_2__get_full_name));
                this->__Vtask_uvm_report_error__33__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__33__id, this->__Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, this->__Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, this->__Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
            }
            get_access__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 548)->__VnoInFunc_get_access(vlSymsp, map, get_access__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__verbosity;
    __Vfunc_uvm_report_enabled__40__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__40__severity;
    __Vfunc_uvm_report_enabled__40__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
    __Vtask_uvm_report_error__45__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__45__line;
    __Vtask_uvm_report_error__45__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
    __Vtask_uvm_report_error__45__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
    __Vfunc_uvm_report_enabled__52__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
    __Vfunc_uvm_report_enabled__52__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__58__verbosity;
    __Vtask_uvm_report_warning__58__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__58__line;
    __Vtask_uvm_report_warning__58__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__58__report_enabled_checked;
    __Vtask_uvm_report_warning__58__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__67__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__67__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__71__status;
    __Vtask_read__71__status = 0;
    QData/*63:0*/ __Vtask_read__71__value;
    __Vtask_read__71__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__72__verbosity;
    __Vfunc_uvm_report_enabled__72__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__72__severity;
    __Vfunc_uvm_report_enabled__72__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__78__verbosity;
    __Vtask_uvm_report_error__78__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__78__line;
    __Vtask_uvm_report_error__78__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__78__report_enabled_checked;
    __Vtask_uvm_report_error__78__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_read__84__status;
    __Vtask_read__84__status = 0;
    QData/*63:0*/ __Vtask_read__84__value;
    __Vtask_read__84__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_write__96__status;
    __Vtask_write__96__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__102__verbosity;
    __Vfunc_uvm_report_enabled__102__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__102__severity;
    __Vfunc_uvm_report_enabled__102__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__107__verbosity;
    __Vtask_uvm_report_info__107__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__107__line;
    __Vtask_uvm_report_info__107__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__107__report_enabled_checked;
    __Vtask_uvm_report_info__107__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_17__get_full_name;
    IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
    std::string __VlefCall_15__get_full_name;
    std::string __VlefCall_14__get_full_name;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_12__get_n_bits;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_n_bits;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_7__get_backdoor;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk296__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk297__DOT__cb;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk299__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    IData/*31:0*/ rm_path;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz94_TBz95> cbs;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        rm_path = 0U;
        cbs = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz94_TBz95, vlSymsp, 
                     VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__write_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 577)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__40__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__40__severity = 2U;
            __Vfunc_uvm_report_enabled__40__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__41__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__41__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__42__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__40__verbosity, (IData)(__Vfunc_uvm_report_enabled__40__severity), this->__Vfunc_uvm_report_enabled__40__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__45__context_name = ""s;
                __Vtask_uvm_report_error__45__line = 0x00000244U;
                this->__Vtask_uvm_report_error__45__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__45__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__45__message
                              ,"Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__45__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__45__id, this->__Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, this->__Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, this->__Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 586)->__VnoInFunc_get_block(vlSymsp, unnamedblk296__DOT__blk);
            VL_NULL_CHECK(unnamedblk296__DOT__blk, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 587)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 592)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__52__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__52__severity = 1U;
            __Vfunc_uvm_report_enabled__52__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__53__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__53__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__54__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), this->__Vfunc_uvm_report_enabled__52__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__58__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__58__context_name = ""s;
                __Vtask_uvm_report_warning__58__line = 0x00000253U;
                this->__Vtask_uvm_report_warning__58__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__58__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__58__message
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_3__get_full_name)
                              , '#',32,__VlefCall_4__get_n_bits);
                this->__Vtask_uvm_report_warning__58__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__59__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__59__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__60__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__58__id, this->__Vtask_uvm_report_warning__58__message, __Vtask_uvm_report_warning__58__verbosity, this->__Vtask_uvm_report_warning__58__filename, __Vtask_uvm_report_warning__58__line, this->__Vtask_uvm_report_warning__58__context_name, (IData)(__Vtask_uvm_report_warning__58__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        this->__VnoInFunc_pre_write(vlSymsp, idx, value, path, map);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 601)->__VnoInFunc_first(vlSymsp, unnamedblk297__DOT__cb);
        while ((VlNull{} != unnamedblk297__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 603)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 604)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk297__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 605)->__VnoInFunc_pre_write(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 602)->__VnoInFunc_next(vlSymsp, unnamedblk297__DOT__cb);
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 608)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__67__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__67__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 610)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rm_path = 3U;
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 614)->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_7__get_backdoor);
        if ((VlNull{} != __VlefCall_7__get_backdoor)) {
            rm_path = 1U;
        }
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_8__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_8__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 625)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__71__status, segoff, __Vtask_read__71__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__71__status;
            tmp = __Vtask_read__71__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__72__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__72__severity = 2U;
                __Vfunc_uvm_report_enabled__72__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__74__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__72__verbosity, (IData)(__Vfunc_uvm_report_enabled__72__severity), this->__Vfunc_uvm_report_enabled__72__id, __VlefCall_9__uvm_report_enabled);
                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 629)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    __Vtask_uvm_report_error__78__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__78__context_name = ""s;
                    __Vtask_uvm_report_error__78__line = 0x00000275U;
                    this->__Vtask_uvm_report_error__78__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__78__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__78__message
                                  ,"Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                  , 'S',&(__VlefCall_10__get_full_name)
                                  , '#',64,segoff, 'S',&(__VlefCall_11__get_full_name));
                    this->__Vtask_uvm_report_error__78__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__79__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__80__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__78__id, this->__Vtask_uvm_report_error__78__message, __Vtask_uvm_report_error__78__verbosity, this->__Vtask_uvm_report_error__78__filename, __Vtask_uvm_report_error__78__line, this->__Vtask_uvm_report_error__78__context_name, (IData)(__Vtask_uvm_report_error__78__report_enabled_checked));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 631)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_12__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 643)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__84__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_read__84__value, rm_path, map, parent, 0xffffffffU, extension, fname, lineno);
                st = __Vtask_read__84__status;
                tmp = __Vtask_read__84__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__85__severity = 2U;
                    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__86__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__86__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__87__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_13__uvm_report_enabled);
                    if ((0U != __VlefCall_13__uvm_report_enabled)) {
                        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 648)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                        __Vtask_uvm_report_error__91__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__91__context_name = ""s;
                        __Vtask_uvm_report_error__91__line = 0x00000288U;
                        this->__Vtask_uvm_report_error__91__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__91__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__91__message
                                      ,"Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                      , 'S',&(__VlefCall_14__get_full_name)
                                      , '#',64,((segoff 
                                                 + (QData)((IData)(segn))) 
                                                - 1ULL)
                                      , 'S',&(__VlefCall_15__get_full_name));
                        this->__Vtask_uvm_report_error__91__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__92__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__92__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__93__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__91__id, this->__Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, this->__Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, this->__Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 650)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_1__DOT____Vrepeat0 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
            co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 660)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__96__status, segoff, tmp, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_write__96__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        this->__VnoInFunc_post_write(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 668)->__VnoInFunc_first(vlSymsp, unnamedblk299__DOT__cb);
        while ((VlNull{} != unnamedblk299__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 670)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 671)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk299__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 672)->__VnoInFunc_post_write(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 669)->__VnoInFunc_next(vlSymsp, unnamedblk299__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 675)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__102__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__102__severity = 0U;
        __Vfunc_uvm_report_enabled__102__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__103__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__103__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__104__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__102__verbosity, (IData)(__Vfunc_uvm_report_enabled__102__severity), this->__Vfunc_uvm_report_enabled__102__id, __VlefCall_16__uvm_report_enabled);
        if ((0U != __VlefCall_16__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
            __Vtask_uvm_report_info__107__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__107__context_name = ""s;
            __Vtask_uvm_report_info__107__line = 0x000002a9U;
            this->__Vtask_uvm_report_info__107__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__107__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__107__message
                          ,"Wrote virtual field \"%s\"[%0d] via %s with: 'h%h",4
                          , 'S',&(__VlefCall_17__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__107__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__108__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__108__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__109__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__107__id, this->__Vtask_uvm_report_info__107__message, __Vtask_uvm_report_info__107__verbosity, this->__Vtask_uvm_report_info__107__filename, __Vtask_uvm_report_info__107__line, this->__Vtask_uvm_report_info__107__context_name, (IData)(__Vtask_uvm_report_info__107__report_enabled_checked));
        }
        this->__PVT__write_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__113__verbosity;
    __Vfunc_uvm_report_enabled__113__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__113__severity;
    __Vfunc_uvm_report_enabled__113__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__114__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__115__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__118__verbosity;
    __Vtask_uvm_report_error__118__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__118__line;
    __Vtask_uvm_report_error__118__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__118__report_enabled_checked;
    __Vtask_uvm_report_error__118__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__119__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__120__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__130__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__130__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__133__status;
    __Vtask_read__133__status = 0;
    QData/*63:0*/ __Vtask_read__133__value;
    __Vtask_read__133__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__verbosity;
    __Vfunc_uvm_report_enabled__140__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__140__severity;
    __Vfunc_uvm_report_enabled__140__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__145__verbosity;
    __Vtask_uvm_report_info__145__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__145__line;
    __Vtask_uvm_report_info__145__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__145__report_enabled_checked;
    __Vtask_uvm_report_info__145__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_block> unnamedblk300__DOT__blk;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk301__DOT__cb;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field_cbs> unnamedblk302__DOT__cb;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz94_TBz95> cbs;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        cbs = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz94_TBz95, vlSymsp, 
                     VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this});
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        this->__PVT__read_in_progress = 1U;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 713)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__113__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__113__severity = 2U;
            __Vfunc_uvm_report_enabled__113__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__114__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__114__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__115__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__115__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__113__verbosity, (IData)(__Vfunc_uvm_report_enabled__113__severity), this->__Vfunc_uvm_report_enabled__113__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__118__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__118__context_name = ""s;
                __Vtask_uvm_report_error__118__line = 0x000002ccU;
                this->__Vtask_uvm_report_error__118__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__118__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__118__message
                              ,"Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__118__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__119__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__119__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__120__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__120__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__118__id, this->__Vtask_uvm_report_error__118__message, __Vtask_uvm_report_error__118__verbosity, this->__Vtask_uvm_report_error__118__filename, __Vtask_uvm_report_error__118__line, this->__Vtask_uvm_report_error__118__context_name, (IData)(__Vtask_uvm_report_error__118__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((3U == path)) {
            VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 722)->__VnoInFunc_get_block(vlSymsp, unnamedblk300__DOT__blk);
            VL_NULL_CHECK(unnamedblk300__DOT__blk, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 723)->__VnoInFunc_get_default_path(vlSymsp, path);
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 728)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        this->__VnoInFunc_pre_read(vlSymsp, idx, path, map);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 733)->__VnoInFunc_first(vlSymsp, unnamedblk301__DOT__cb);
        while ((VlNull{} != unnamedblk301__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 735)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 736)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk301__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 737)->__VnoInFunc_pre_read(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, path, map);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 734)->__VnoInFunc_next(vlSymsp, unnamedblk301__DOT__cb);
        }
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 740)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = (__VlefCall_2__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__130__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__130__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 742)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_2__DOT____Vrepeat1 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 753)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__133__status, segoff, __Vtask_read__133__value, path, map, parent, 0xffffffffU, extension, fname, lineno);
            st = __Vtask_read__133__status;
            tmp = __Vtask_read__133__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        this->__VnoInFunc_post_read(vlSymsp, idx, value, path, map, status);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 767)->__VnoInFunc_first(vlSymsp, unnamedblk302__DOT__cb);
        while ((VlNull{} != unnamedblk302__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk302__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 769)->__PVT__fname 
                = this->__PVT__fname;
            VL_NULL_CHECK(unnamedblk302__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 770)->__PVT__lineno 
                = this->__PVT__lineno;
            VL_NULL_CHECK(unnamedblk302__DOT__cb, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 771)->__VnoInFunc_post_read(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field>{this}, idx, value, path, map, status);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 768)->__VnoInFunc_next(vlSymsp, unnamedblk302__DOT__cb);
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 774)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__140__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__140__severity = 0U;
        __Vfunc_uvm_report_enabled__140__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__141__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__141__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__142__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__140__verbosity, (IData)(__Vfunc_uvm_report_enabled__140__severity), this->__Vfunc_uvm_report_enabled__140__id, __VlefCall_6__uvm_report_enabled);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__145__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__145__context_name = ""s;
            __Vtask_uvm_report_info__145__line = 0x0000030bU;
            this->__Vtask_uvm_report_info__145__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__145__verbosity = 0x000000c8U;
            if ((0U == path)) {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x726f6e74U;
                __Vtemp_1[2U] = 0x00000066U;
            } else {
                __Vtemp_1[0U] = 0x646f6f72U;
                __Vtemp_1[1U] = 0x6261636bU;
                __Vtemp_1[2U] = 0U;
            }
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__145__message
                          ,"Read virtual field \"%s\"[%0d] via %s: 'h%h",4
                          , 'S',&(__VlefCall_7__get_full_name)
                          , '#',64,idx, '#',72,__Vtemp_1.data()
                          , '#',64,value);
            this->__Vtask_uvm_report_info__145__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__146__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__146__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__147__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__145__id, this->__Vtask_uvm_report_info__145__message, __Vtask_uvm_report_info__145__verbosity, this->__Vtask_uvm_report_info__145__filename, __Vtask_uvm_report_info__145__line, this->__Vtask_uvm_report_info__145__context_name, (IData)(__Vtask_uvm_report_info__145__report_enabled_checked));
        }
        this->__PVT__read_in_progress = 0U;
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ value, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__150__verbosity;
    __Vfunc_uvm_report_enabled__150__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__150__severity;
    __Vfunc_uvm_report_enabled__150__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__151__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__152__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__155__verbosity;
    __Vtask_uvm_report_error__155__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__155__line;
    __Vtask_uvm_report_error__155__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__155__report_enabled_checked;
    __Vtask_uvm_report_error__155__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__160__verbosity;
    __Vfunc_uvm_report_enabled__160__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__160__severity;
    __Vfunc_uvm_report_enabled__160__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__166__verbosity;
    __Vtask_uvm_report_warning__166__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__166__line;
    __Vtask_uvm_report_warning__166__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__166__report_enabled_checked;
    __Vtask_uvm_report_warning__166__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__171__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__171__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__174__status;
    __Vtask_peek__174__status = 0;
    QData/*63:0*/ __Vtask_peek__174__value;
    __Vtask_peek__174__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__175__verbosity;
    __Vfunc_uvm_report_enabled__175__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__175__severity;
    __Vfunc_uvm_report_enabled__175__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__181__verbosity;
    __Vtask_uvm_report_error__181__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__181__line;
    __Vtask_uvm_report_error__181__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__181__report_enabled_checked;
    __Vtask_uvm_report_error__181__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
    IData/*31:0*/ __Vtask_peek__187__status;
    __Vtask_peek__187__status = 0;
    QData/*63:0*/ __Vtask_peek__187__value;
    __Vtask_peek__187__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__188__verbosity;
    __Vfunc_uvm_report_enabled__188__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__188__severity;
    __Vfunc_uvm_report_enabled__188__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__189__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__190__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__194__verbosity;
    __Vtask_uvm_report_error__194__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__194__line;
    __Vtask_uvm_report_error__194__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__194__report_enabled_checked;
    __Vtask_uvm_report_error__194__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__195__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__196__Vfuncout;
    IData/*31:0*/ __Vtask_poke__199__status;
    __Vtask_poke__199__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__201__verbosity;
    __Vfunc_uvm_report_enabled__201__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__201__severity;
    __Vfunc_uvm_report_enabled__201__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__202__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__203__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__206__verbosity;
    __Vtask_uvm_report_info__206__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__206__line;
    __Vtask_uvm_report_info__206__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__206__report_enabled_checked;
    __Vtask_uvm_report_info__206__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__207__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__208__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_16__get_full_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_11__get_n_bits;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_n_bits;
    QData/*63:0*/ __VlefCall_6__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ fmsb;
    IData/*31:0*/ rmwbits;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        fmsb = 0U;
        rmwbits = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 807)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__150__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__150__severity = 2U;
            __Vfunc_uvm_report_enabled__150__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__151__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__151__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__152__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__152__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__150__verbosity, (IData)(__Vfunc_uvm_report_enabled__150__severity), this->__Vfunc_uvm_report_enabled__150__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__155__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__155__context_name = ""s;
                __Vtask_uvm_report_error__155__line = 0x0000032aU;
                this->__Vtask_uvm_report_error__155__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__155__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__155__message
                              ,"Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__155__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__156__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__156__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__157__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__155__id, this->__Vtask_uvm_report_error__155__message, __Vtask_uvm_report_error__155__verbosity, this->__Vtask_uvm_report_error__155__filename, __Vtask_uvm_report_error__155__line, this->__Vtask_uvm_report_error__155__context_name, (IData)(__Vtask_uvm_report_error__155__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 817)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        if ((0U != VL_SHIFTR_QQI(64,64,32, value, this->__PVT__size))) {
            this->__Vfunc_uvm_report_enabled__160__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__160__severity = 1U;
            __Vfunc_uvm_report_enabled__160__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__161__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__161__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__162__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__160__verbosity, (IData)(__Vfunc_uvm_report_enabled__160__severity), this->__Vfunc_uvm_report_enabled__160__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
                __Vtask_uvm_report_warning__166__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__166__context_name = ""s;
                __Vtask_uvm_report_warning__166__line = 0x00000334U;
                this->__Vtask_uvm_report_warning__166__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_warning__166__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__166__message
                              ,"Writing value 'h%h that is greater than field \"%s\" size (%0d bits)",3
                              , '#',64,value, 'S',&(__VlefCall_3__get_full_name)
                              , '#',32,__VlefCall_4__get_n_bits);
                this->__Vtask_uvm_report_warning__166__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__167__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__167__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__168__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__166__id, this->__Vtask_uvm_report_warning__166__message, __Vtask_uvm_report_warning__166__verbosity, this->__Vtask_uvm_report_warning__166__filename, __Vtask_uvm_report_warning__166__line, this->__Vtask_uvm_report_warning__166__context_name, (IData)(__Vtask_uvm_report_warning__166__report_enabled_checked));
            }
            value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__size) 
                              - 1ULL));
        }
        tmp = 0ULL;
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 825)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_5__get_n_bytes);
        segsiz = (__VlefCall_5__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__171__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__171__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 827)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_6__get_offset_in_memory);
        segoff = (__VlefCall_6__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        rmwbits = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((rmwbits 
                                               + __VlefCall_7__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        if (VL_LTS_III(32, 0U, rmwbits)) {
            VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 838)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__174__status, segoff, __Vtask_peek__174__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__174__status;
            tmp = __Vtask_peek__174__value;
            if (((0U != st) & (2U != st))) {
                this->__Vfunc_uvm_report_enabled__175__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__175__severity = 2U;
                __Vfunc_uvm_report_enabled__175__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__176__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__176__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__177__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__175__verbosity, (IData)(__Vfunc_uvm_report_enabled__175__severity), this->__Vfunc_uvm_report_enabled__175__id, __VlefCall_8__uvm_report_enabled);
                if ((0U != __VlefCall_8__uvm_report_enabled)) {
                    VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 842)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                    __Vtask_uvm_report_error__181__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__181__context_name = ""s;
                    __Vtask_uvm_report_error__181__line = 0x0000034aU;
                    this->__Vtask_uvm_report_error__181__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                    __Vtask_uvm_report_error__181__verbosity = 0U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__181__message
                                  ,"Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                  , 'S',&(__VlefCall_9__get_full_name)
                                  , '#',64,segoff, 'S',&(__VlefCall_10__get_full_name));
                    this->__Vtask_uvm_report_error__181__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__182__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__182__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__183__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__181__id, this->__Vtask_uvm_report_error__181__message, __Vtask_uvm_report_error__181__verbosity, this->__Vtask_uvm_report_error__181__filename, __Vtask_uvm_report_error__181__line, this->__Vtask_uvm_report_error__181__context_name, (IData)(__Vtask_uvm_report_error__181__report_enabled_checked));
                }
                status = 1U;
                co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 844)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                goto __Vlabel0;
            }
            value = (VL_SHIFTL_QQI(64,64,32, value, rmwbits) 
                     | (tmp & (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                               - 1ULL)));
        }
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_11__get_n_bits);
        fmsb = ((rmwbits + __VlefCall_11__get_n_bits) 
                - (IData)(1U));
        rmwbits = VL_MODDIVS_III(32, ((IData)(1U) + fmsb), segsiz);
        if (VL_LTS_III(32, 0U, rmwbits)) {
            if (VL_LTS_III(32, 0U, segn)) {
                VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 856)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__187__status, 
                                                                                ((segoff 
                                                                                + (QData)((IData)(segn))) 
                                                                                - 1ULL), __Vtask_peek__187__value, ""s, parent, extension, fname, lineno);
                st = __Vtask_peek__187__status;
                tmp = __Vtask_peek__187__value;
                if (((0U != st) & (2U != st))) {
                    this->__Vfunc_uvm_report_enabled__188__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__188__severity = 2U;
                    __Vfunc_uvm_report_enabled__188__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__189__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__189__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__190__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__190__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__188__verbosity, (IData)(__Vfunc_uvm_report_enabled__188__severity), this->__Vfunc_uvm_report_enabled__188__id, __VlefCall_12__uvm_report_enabled);
                    if ((0U != __VlefCall_12__uvm_report_enabled)) {
                        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 861)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                        __Vtask_uvm_report_error__194__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__194__context_name = ""s;
                        __Vtask_uvm_report_error__194__line = 0x0000035dU;
                        this->__Vtask_uvm_report_error__194__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                        __Vtask_uvm_report_error__194__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__194__message
                                      ,"Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",3
                                      , 'S',&(__VlefCall_13__get_full_name)
                                      , '#',64,((segoff 
                                                 + (QData)((IData)(segn))) 
                                                - 1ULL)
                                      , 'S',&(__VlefCall_14__get_full_name));
                        this->__Vtask_uvm_report_error__194__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__195__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__195__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__196__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__196__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__194__id, this->__Vtask_uvm_report_error__194__message, __Vtask_uvm_report_error__194__verbosity, this->__Vtask_uvm_report_error__194__filename, __Vtask_uvm_report_error__194__line, this->__Vtask_uvm_report_error__194__context_name, (IData)(__Vtask_uvm_report_error__194__report_enabled_checked));
                    }
                    status = 1U;
                    co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 863)->__VnoInFunc_XatomicX(vlSymsp, 0U);
                    goto __Vlabel0;
                }
            }
            value = (value | VL_SHIFTL_QQI(64,64,32, 
                                           (tmp & (~ 
                                                   (VL_SHIFTL_QQI(64,64,32, 1ULL, rmwbits) 
                                                    - 1ULL))), 
                                           VL_MULS_III(32, 
                                                       (segn 
                                                        - (IData)(1U)), segsiz)));
        }
        tmp = value;
        unnamedblk1_3__DOT____Vrepeat2 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 873)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__199__status, segoff, tmp, ""s, parent, extension, fname, lineno);
            st = __Vtask_poke__199__status;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (1ULL + segoff);
            tmp = VL_SHIFTR_QQI(64,64,32, tmp, segsiz);
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (IData)(1U));
        }
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 880)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__201__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__201__severity = 0U;
        __Vfunc_uvm_report_enabled__201__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__202__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__202__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__203__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__203__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__201__verbosity, (IData)(__Vfunc_uvm_report_enabled__201__severity), this->__Vfunc_uvm_report_enabled__201__id, __VlefCall_15__uvm_report_enabled);
        if ((0U != __VlefCall_15__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
            __Vtask_uvm_report_info__206__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__206__context_name = ""s;
            __Vtask_uvm_report_info__206__line = 0x00000373U;
            this->__Vtask_uvm_report_info__206__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__206__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__206__message
                          ,"Wrote virtual field \"%s\"[%0d] with: 'h%h",3
                          , 'S',&(__VlefCall_16__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__206__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__207__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__207__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__208__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__208__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__206__id, this->__Vtask_uvm_report_info__206__message, __Vtask_uvm_report_info__206__verbosity, this->__Vtask_uvm_report_info__206__filename, __Vtask_uvm_report_info__206__line, this->__Vtask_uvm_report_info__206__context_name, (IData)(__Vtask_uvm_report_info__206__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ idx, IData/*31:0*/ &status, QData/*63:0*/ &value, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__211__verbosity;
    __Vfunc_uvm_report_enabled__211__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__211__severity;
    __Vfunc_uvm_report_enabled__211__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__212__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__213__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__216__verbosity;
    __Vtask_uvm_report_error__216__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__216__line;
    __Vtask_uvm_report_error__216__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__216__report_enabled_checked;
    __Vtask_uvm_report_error__216__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__217__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__218__Vfuncout;
    IData/*31:0*/ __Vfunc_get_lsb_pos_in_register__222__Vfuncout;
    __Vfunc_get_lsb_pos_in_register__222__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__225__status;
    __Vtask_peek__225__status = 0;
    QData/*63:0*/ __Vtask_peek__225__value;
    __Vtask_peek__225__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__228__verbosity;
    __Vfunc_uvm_report_enabled__228__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__228__severity;
    __Vfunc_uvm_report_enabled__228__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__229__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__230__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__233__verbosity;
    __Vtask_uvm_report_info__233__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__233__line;
    __Vtask_uvm_report_info__233__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__233__report_enabled_checked;
    __Vtask_uvm_report_info__233__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__234__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__235__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__get_n_bits;
    IData/*31:0*/ __VlefCall_4__get_n_bits;
    QData/*63:0*/ __VlefCall_3__get_offset_in_memory;
    IData/*31:0*/ __VlefCall_2__get_n_bytes;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk1_4__DOT____Vrepeat3 = 0;
    QData/*63:0*/ tmp;
    QData/*63:0*/ segoff;
    IData/*31:0*/ st;
    IData/*31:0*/ flsb;
    IData/*31:0*/ lsb;
    IData/*31:0*/ segsiz;
    IData/*31:0*/ segn;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        tmp = 0ULL;
        segoff = 0ULL;
        st = 0U;
        flsb = 0U;
        lsb = 0U;
        segsiz = 0U;
        segn = 0U;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 908)->__VnoInFunc_get_memory(vlSymsp, mem);
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__211__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__211__severity = 2U;
            __Vfunc_uvm_report_enabled__211__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__212__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__212__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__213__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__213__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__211__verbosity, (IData)(__Vfunc_uvm_report_enabled__211__severity), this->__Vfunc_uvm_report_enabled__211__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__216__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__216__context_name = ""s;
                __Vtask_uvm_report_error__216__line = 0x0000038fU;
                this->__Vtask_uvm_report_error__216__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
                __Vtask_uvm_report_error__216__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__216__message
                              ,"Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%s\"",1
                              , 'S',&(__VlefCall_1__get_full_name));
                this->__Vtask_uvm_report_error__216__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__217__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__217__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__218__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__218__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__216__id, this->__Vtask_uvm_report_error__216__message, __Vtask_uvm_report_error__216__verbosity, this->__Vtask_uvm_report_error__216__filename, __Vtask_uvm_report_error__216__line, this->__Vtask_uvm_report_error__216__context_name, (IData)(__Vtask_uvm_report_error__216__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        status = 0U;
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 918)->__VnoInFunc_XatomicX(vlSymsp, 1U);
        value = 0ULL;
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 922)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_2__get_n_bytes);
        segsiz = (__VlefCall_2__get_n_bytes << 3U);
        this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __Vfunc_get_lsb_pos_in_register__222__Vfuncout);
        flsb = __Vfunc_get_lsb_pos_in_register__222__Vfuncout;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 924)->__VnoInFunc_get_offset_in_memory(vlProcess, vlSymsp, idx, __VlefCall_3__get_offset_in_memory);
        segoff = (__VlefCall_3__get_offset_in_memory 
                  + VL_DIV_QQQ(64, (QData)((IData)(flsb)), (QData)((IData)(segsiz))));
        lsb = VL_MODDIVS_III(32, flsb, segsiz);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_4__get_n_bits);
        segn = ((IData)(1U) + VL_DIV_III(32, ((lsb 
                                               + __VlefCall_4__get_n_bits) 
                                              - (IData)(1U)), segsiz));
        segoff = (segoff + ((QData)((IData)(segn)) 
                            - 1ULL));
        unnamedblk1_4__DOT____Vrepeat3 = segn;
        while (VL_LTS_III(32, 0U, unnamedblk1_4__DOT____Vrepeat3)) {
            value = VL_SHIFTL_QQI(64,64,32, value, segsiz);
            VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 935)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__225__status, segoff, __Vtask_peek__225__value, ""s, parent, extension, fname, lineno);
            st = __Vtask_peek__225__status;
            tmp = __Vtask_peek__225__value;
            if (((0U != st) & (2U != st))) {
                status = 1U;
            }
            segoff = (segoff - 1ULL);
            value = (value | tmp);
            unnamedblk1_4__DOT____Vrepeat3 = (unnamedblk1_4__DOT____Vrepeat3 
                                              - (IData)(1U));
        }
        value = VL_SHIFTR_QQI(64,64,32, value, lsb);
        this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
        value = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                          - 1ULL));
        co_await VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 949)->__VnoInFunc_XatomicX(vlSymsp, 0U);
        this->__Vfunc_uvm_report_enabled__228__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__228__severity = 0U;
        __Vfunc_uvm_report_enabled__228__verbosity = 0x000000c8U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__229__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__229__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__230__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__230__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__228__verbosity, (IData)(__Vfunc_uvm_report_enabled__228__severity), this->__Vfunc_uvm_report_enabled__228__id, __VlefCall_6__uvm_report_enabled);
        if ((0U != __VlefCall_6__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__233__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__233__context_name = ""s;
            __Vtask_uvm_report_info__233__line = 0x000003b7U;
            this->__Vtask_uvm_report_info__233__filename = "../../uvm/distrib/src/reg/uvm_vreg_field.svh"s;
            __Vtask_uvm_report_info__233__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__233__message
                          ,"Peeked virtual field \"%s\"[%0d]: 'h%h",3
                          , 'S',&(__VlefCall_7__get_full_name)
                          , '#',64,idx, '#',64,value);
            this->__Vtask_uvm_report_info__233__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__234__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__234__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__235__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__235__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__233__id, this->__Vtask_uvm_report_info__233__message, __Vtask_uvm_report_info__233__verbosity, this->__Vtask_uvm_report_info__233__filename, __Vtask_uvm_report_info__233__line, this->__Vtask_uvm_report_info__233__context_name, (IData)(__Vtask_uvm_report_info__233__report_enabled_checked));
        }
        this->__PVT__fname = ""s;
        this->__PVT__lineno = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__convert2string;
    std::string __VlefCall_0__get_type_name;
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 960)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_1__convert2string);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_vreg_field.svh", 960)->__VnoInFunc_print_generic(vlSymsp, "initiator"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name), 0xffffffffU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__convert2string), 0x2eU);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_lsb_pos_in_register;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    IData/*31:0*/ __VlefCall_1__get_lsb_pos_in_register;
    std::string __VlefCall_0__get_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    res_str = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_1__get_lsb_pos_in_register);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    this->__VnoInFunc_get_lsb_pos_in_register(vlSymsp, __VlefCall_3__get_lsb_pos_in_register);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%s[%0d-%0d]"s,5, 'M',vlSymsp->name(),"uvm_pkg.uvm_vreg_field.convert2string", 'T',-12
                  , 'S',&(__VlefCall_0__get_name), '#',32,
                  ((__VlefCall_1__get_lsb_pos_in_register 
                    + __VlefCall_2__get_n_bits) - (IData)(1U))
                  , '#',32,__VlefCall_3__get_lsb_pos_in_register);
    if (this->__PVT__read_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__write_in_progress) {
        if (((""s != this->__PVT__fname) & (0U != this->__PVT__lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__fname)
                          , '~',32,this->__PVT__lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_clone\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    clone__Vfuncrtn = VlNull{};
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_copy\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_compare\n"); );
    // Body
    do_compare__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_pack\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_do_unpack\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lsb = 0;
    __PVT__size = 0;
    __PVT__lineno = 0;
    __PVT__read_in_progress = 0;
    __PVT__write_in_progress = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::~VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_field::~\n"); );
}
