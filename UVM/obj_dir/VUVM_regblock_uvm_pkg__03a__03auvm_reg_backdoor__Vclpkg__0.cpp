// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi29> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> unnamedblk1__DOT__iter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk1__DOT__cb;
    this->__VnoInFunc_pre_read(vlSymsp, rw);
    unnamedblk1__DOT__iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                                    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 61)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk2__DOT__cb;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> unnamedblk3__DOT__iter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk3__DOT__cb;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> iter;
    iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                  VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 74)->__VnoInFunc_last(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 75)->__VnoInFunc_decode(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 75)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 74)->__VnoInFunc_prev(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    }
    unnamedblk3__DOT__iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                                    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 76)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    }
    this->__VnoInFunc_post_read(vlSymsp, rw);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> unnamedblk4__DOT__iter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk4__DOT__cb;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk5__DOT__cb;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> iter;
    iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                  VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    this->__VnoInFunc_pre_write(vlSymsp, rw);
    unnamedblk4__DOT__iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                                    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk4__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
    while ((VlNull{} != unnamedblk4__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk4__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk4__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 91)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk4__DOT__cb);
    }
    VL_NULL_CHECK(iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 92)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
    while ((VlNull{} != unnamedblk5__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk5__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 93)->__VnoInFunc_encode(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 93)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 92)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk5__DOT__cb);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92> unnamedblk6__DOT__iter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk6__DOT__cb;
    unnamedblk6__DOT__iter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz92, vlSymsp, 
                                    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk6__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
    while ((VlNull{} != unnamedblk6__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk6__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk6__DOT__iter, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 105)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk6__DOT__cb);
    }
    this->__VnoInFunc_post_write(vlSymsp, rw);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi29> __Vfunc_get__29__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi29__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__29__Vfuncout;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk7__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk7__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated\n"); );
    // Body
    is_auto_updated__Vfuncrtn = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__38__verbosity;
    __Vtask_uvm_report_fatal__38__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__38__line;
    __Vtask_uvm_report_fatal__38__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__38__report_enabled_checked;
    __Vtask_uvm_report_fatal__38__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__34__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__34__severity = 3U;
    __Vfunc_uvm_report_enabled__34__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__35__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__36__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__38__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__38__context_name = ""s;
        __Vtask_uvm_report_fatal__38__line = 0x000000fcU;
        this->__Vtask_uvm_report_fatal__38__filename = "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__38__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__38__message = "uvm_reg_backdoor::wait_for_change() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__38__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__39__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__39__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__40__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__38__id, this->__Vtask_uvm_report_fatal__38__message, __Vtask_uvm_report_fatal__38__verbosity, this->__Vtask_uvm_report_fatal__38__filename, __Vtask_uvm_report_fatal__38__line, this->__Vtask_uvm_report_fatal__38__context_name, (IData)(__Vtask_uvm_report_fatal__38__report_enabled_checked));
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_47> __VDynScope_start_update_thread_0;
    __VDynScope_start_update_thread_0 = VL_NEW(VUVM_regblock_uvm_pkg__03a__03a__VDynScope_47, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 258)->__PVT__element 
        = element;
    {
        if (this->__PVT__m_update_thread.exists(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 260)
                                                ->__PVT__element)) {
            this->__VnoInFunc_kill_update_thread(vlSymsp, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 261)
                                                 ->__PVT__element);
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 263)
                                       ->__PVT__element, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 263)
                                       ->__PVT__rg);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_update_thread____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, __VDynScope_start_update_thread_0);
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_47> __VDynScope_start_update_thread_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_47> __Vtask___VforkTask_0__44____VDynScope_start_update_thread_0;
    IData/*31:0*/ __Vtask___VforkTask_0__44____VlefCall_5__get_n_bits;
    __Vtask___VforkTask_0__44____VlefCall_5__get_n_bits = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__44____VlefCall_4__get_lsb_pos;
    __Vtask___VforkTask_0__44____VlefCall_4__get_lsb_pos = 0;
    CData/*0:0*/ __Vtask___VforkTask_0__44____VlefCall_3__is_auto_updated;
    __Vtask___VforkTask_0__44____VlefCall_3__is_auto_updated = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__44____VlefCall_1__uvm_report_enabled;
    __Vtask___VforkTask_0__44____VlefCall_1__uvm_report_enabled = 0;
    VlClassRef<VUVM_regblock_std__03a__03aprocess> __Vtask___VforkTask_0__44____VlefCall_0__self;
    QData/*63:0*/ __Vtask___VforkTask_0__44__unnamedblk274__DOT__val;
    __Vtask___VforkTask_0__44__unnamedblk274__DOT__val = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> __Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item;
    IData/*31:0*/ __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i;
    __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i = 0;
    IData/*31:0*/ __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i__Vloopsize;
    __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_field>> __Vtask___VforkTask_0__44__fields;
    VlClassRef<VUVM_regblock_std__03a__03aprocess> __Vfunc_self__45__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__52__Vfuncout;
    __Vtask_uvm_report_enabled__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__54__verbosity;
    __Vtask_uvm_report_error__54__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__54__line;
    __Vtask_uvm_report_error__54__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__54__report_enabled_checked;
    __Vtask_uvm_report_error__54__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    CData/*0:0*/ __Vfunc_is_auto_updated__58__Vfuncout;
    __Vfunc_is_auto_updated__58__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__59__Vfuncout;
    __Vtask_get_lsb_pos__59__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__60__Vfuncout;
    __Vtask_get_n_bits__60__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__44____VDynScope_start_update_thread_0 
        = __VDynScope_start_update_thread_0;
    __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i = 0U;
    __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i__Vloopsize = 0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 
                                            266);
    __Vtask___VforkTask_0__44__fields.clear();
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__45__Vfuncout);
    __Vtask___VforkTask_0__44____VlefCall_0__self = __Vfunc_self__45__Vfuncout;
    this->__PVT__m_update_thread.at(VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 273)
                                    ->__PVT__element) 
        = __Vtask___VforkTask_0__44____VlefCall_0__self;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 276)
                  ->__PVT__rg, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 276)->__VnoInFunc_get_fields(vlSymsp, __Vtask___VforkTask_0__44__fields);
    while (true) {
        __Vtask___VforkTask_0__44__unnamedblk274__DOT__val = 0ULL;
        __Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item 
            = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, "bd_r_item"s);
        VL_NULL_CHECK(__Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 281)->__PVT__element 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 281)
            ->__PVT__rg;
        VL_NULL_CHECK(__Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 282)->__PVT__element_kind = 0U;
        this->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item);
        __Vtask___VforkTask_0__44__unnamedblk274__DOT__val 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 284)
            ->__PVT__value.at(0U);
        if ((0U != VL_NULL_CHECK(__Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 285)
             ->__PVT__status)) {
            this->__Vfunc_uvm_report_enabled__49__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__49__severity = 2U;
            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), this->__Vfunc_uvm_report_enabled__49__id, __Vtask_uvm_report_enabled__52__Vfuncout);
            __Vfunc_uvm_report_enabled__49__Vfuncout 
                = __Vtask_uvm_report_enabled__52__Vfuncout;
            __Vtask___VforkTask_0__44____VlefCall_1__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__49__Vfuncout;
            if ((0U != __Vtask___VforkTask_0__44____VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 287)
                              ->__PVT__rg, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 287)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__53__Vfuncout);
                this->__Vtask___VforkTask_0__44____VlefCall_2__get_name 
                    = this->__Vtask_get_name__53__Vfuncout;
                __Vtask_uvm_report_error__54__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__54__context_name = ""s;
                __Vtask_uvm_report_error__54__line = 0x0000011fU;
                this->__Vtask_uvm_report_error__54__filename = "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh"s;
                __Vtask_uvm_report_error__54__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__54__message
                              ,"Backdoor read of register '%s' failed.",1
                              , 'S',&(this->__Vtask___VforkTask_0__44____VlefCall_2__get_name));
                this->__Vtask_uvm_report_error__54__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__56__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__54__id, this->__Vtask_uvm_report_error__54__message, __Vtask_uvm_report_error__54__verbosity, this->__Vtask_uvm_report_error__54__filename, __Vtask_uvm_report_error__54__line, this->__Vtask_uvm_report_error__54__context_name, (IData)(__Vtask_uvm_report_error__54__report_enabled_checked));
            }
        }
        __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i, __Vtask___VforkTask_0__44__fields.size())) {
            __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i__Vloopsize 
                = __Vtask___VforkTask_0__44__fields.size();
            this->__VnoInFunc_is_auto_updated(vlSymsp, __Vtask___VforkTask_0__44__fields.at(__Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i), __Vfunc_is_auto_updated__58__Vfuncout);
            __Vtask___VforkTask_0__44____VlefCall_3__is_auto_updated 
                = __Vfunc_is_auto_updated__58__Vfuncout;
            if (__Vtask___VforkTask_0__44____VlefCall_3__is_auto_updated) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__44__fields.at(__Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 291)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__59__Vfuncout);
                __Vtask___VforkTask_0__44____VlefCall_4__get_lsb_pos 
                    = __Vtask_get_lsb_pos__59__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__44__fields.at(__Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 292)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__60__Vfuncout);
                __Vtask___VforkTask_0__44____VlefCall_5__get_n_bits 
                    = __Vtask_get_n_bits__60__Vfuncout;
                VL_NULL_CHECK(__Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 291)->__PVT__value.atWrite(0U) 
                    = (VL_SHIFTR_QQI(64,64,32, __Vtask___VforkTask_0__44__unnamedblk274__DOT__val, __Vtask___VforkTask_0__44____VlefCall_4__get_lsb_pos) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vtask___VforkTask_0__44____VlefCall_5__get_n_bits) 
                          - 1ULL));
                VL_NULL_CHECK(__Vtask___VforkTask_0__44__fields.at(__Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i), "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 293)->__VnoInFunc_do_predict(vlProcess, vlSymsp, __Vtask___VforkTask_0__44__unnamedblk274__DOT__r_item, 0U, 0xffU);
            }
            if ((__Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i__Vloopsize 
                 <= __Vtask___VforkTask_0__44__fields.size())) {
                __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i 
                    = ((IData)(1U) + __Vtask___VforkTask_0__44__unnamedblk274__DOT__unnamedblk275__DOT__i);
            }
        }
        this->__VnoInFunc_wait_for_change(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_start_update_thread_0, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 296)
                                          ->__PVT__element);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread\n"); );
    // Body
    if (this->__PVT__m_update_thread.exists(element)) {
        VL_NULL_CHECK(this->__PVT__m_update_thread.at(element), "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 311)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_update_thread.erase(element);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads\n"); );
    // Body
    has_update_threads__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_update_thread.size());
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64__verbosity;
    __Vfunc_uvm_report_enabled__64__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__64__severity;
    __Vfunc_uvm_report_enabled__64__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__68__verbosity;
    __Vtask_uvm_report_fatal__68__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__68__line;
    __Vtask_uvm_report_fatal__68__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__68__report_enabled_checked;
    __Vtask_uvm_report_fatal__68__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__64__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__64__severity = 3U;
    __Vfunc_uvm_report_enabled__64__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__65__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__65__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__66__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__64__verbosity, (IData)(__Vfunc_uvm_report_enabled__64__severity), this->__Vfunc_uvm_report_enabled__64__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__68__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__68__context_name = ""s;
        __Vtask_uvm_report_fatal__68__line = 0x00000149U;
        this->__Vtask_uvm_report_fatal__68__filename = "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__68__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__68__message = "uvm_reg_backdoor::write() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__68__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__69__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__70__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__68__id, this->__Vtask_uvm_report_fatal__68__message, __Vtask_uvm_report_fatal__68__verbosity, this->__Vtask_uvm_report_fatal__68__filename, __Vtask_uvm_report_fatal__68__line, this->__Vtask_uvm_report_fatal__68__context_name, (IData)(__Vtask_uvm_report_fatal__68__report_enabled_checked));
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_do_pre_read(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_read_func(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_do_post_read(vlProcess, vlSymsp, rw);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__75__verbosity;
    __Vfunc_uvm_report_enabled__75__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__75__severity;
    __Vfunc_uvm_report_enabled__75__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__79__verbosity;
    __Vtask_uvm_report_fatal__79__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__79__line;
    __Vtask_uvm_report_fatal__79__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__79__report_enabled_checked;
    __Vtask_uvm_report_fatal__79__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__75__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__75__severity = 3U;
    __Vfunc_uvm_report_enabled__75__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__76__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__76__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__77__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__75__verbosity, (IData)(__Vfunc_uvm_report_enabled__75__severity), this->__Vfunc_uvm_report_enabled__75__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__79__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__79__context_name = ""s;
        __Vtask_uvm_report_fatal__79__line = 0x00000159U;
        this->__Vtask_uvm_report_fatal__79__filename = "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh"s;
        __Vtask_uvm_report_fatal__79__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__79__message = "uvm_reg_backdoor::read_func() method has not been overloaded"s;
        this->__Vtask_uvm_report_fatal__79__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__81__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__79__id, this->__Vtask_uvm_report_fatal__79__message, __Vtask_uvm_report_fatal__79__verbosity, this->__Vtask_uvm_report_fatal__79__filename, __Vtask_uvm_report_fatal__79__line, this->__Vtask_uvm_report_fatal__79__context_name, (IData)(__Vtask_uvm_report_fatal__79__report_enabled_checked));
    }
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_backdoor.svh", 346)->__PVT__status = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::~VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_reg_backdoor::~\n"); );
}
