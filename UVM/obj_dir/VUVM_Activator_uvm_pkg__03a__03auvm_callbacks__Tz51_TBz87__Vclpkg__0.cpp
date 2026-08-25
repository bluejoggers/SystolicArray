// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typed_callbacks__Tz51> __Vtask_m_initialize__1__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz50> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz87> __Vfunc_get__3__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typeid__Tz51> __Vfunc_get__4__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51> __Vfunc_get__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__verbosity;
    __Vtask_uvm_report_fatal__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__line;
    __Vtask_uvm_report_fatal__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__11__report_enabled_checked;
    __Vtask_uvm_report_fatal__11__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz50__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz87__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__3__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz51__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__4__Vfuncout;
        this->__PVT__m_inst = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:521: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_callbacks__Tz51_TBz87.get.unnamedblk1", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("../../uvm/distrib/src/base/uvm_callback.svh", 521, "");
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.at(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.at(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
            this->__PVT__m_base_inst = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_base_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 529)->__PVT__m_this_type.push_back(this->__PVT__m_inst);
        }
        if ((VlNull{} == this->__PVT__m_inst)) {
            this->__Vfunc_uvm_report_enabled__7__id = "CB/INTERNAL"s;
            __Vfunc_uvm_report_enabled__7__severity = 3U;
            __Vfunc_uvm_report_enabled__7__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), this->__Vfunc_uvm_report_enabled__7__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__11__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__11__context_name = ""s;
                __Vtask_uvm_report_fatal__11__line = 0x00000215U;
                this->__Vtask_uvm_report_fatal__11__filename = "../../uvm/distrib/src/base/uvm_callback.svh"s;
                __Vtask_uvm_report_fatal__11__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__11__message = "get(): m_inst is null"s;
                this->__Vtask_uvm_report_fatal__11__id = "CB/INTERNAL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__13__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__11__id, this->__Vtask_uvm_report_fatal__11__message, __Vtask_uvm_report_fatal__11__verbosity, this->__Vtask_uvm_report_fatal__11__filename, __Vtask_uvm_report_fatal__11__line, this->__Vtask_uvm_report_fatal__11__context_name, (IData)(__Vtask_uvm_report_fatal__11__report_enabled_checked));
            }
        }
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "../../uvm/distrib/src/base/uvm_callback.svh", 555)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_add(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__34__verbosity;
    __Vtask_uvm_report_warning__34__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__34__line;
    __Vtask_uvm_report_warning__34__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__34__report_enabled_checked;
    __Vtask_uvm_report_warning__34__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51> __Vtask_get__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__53__verbosity;
    __Vtask_uvm_report_warning__53__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__53__line;
    __Vtask_uvm_report_warning__53__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__53__report_enabled_checked;
    __Vtask_uvm_report_warning__53__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__59__Vfuncout;
    __Vtask_m_cb_find_name__59__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_name;
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__m_cb_find;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_9__get;
    IData/*31:0*/ __VlefCall_8__size;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_7__get;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__size;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__m_cb_find;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__check_registration;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> unnamedblk2__DOT__unnamedblk3__DOT__qr;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    std::string nm;
    std::string tnm;
    {
        nm = ""s;
        tnm = ""s;
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__16__Vfuncout);
        if ((VlNull{} == cb)) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 600)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 605)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            __Vtask_uvm_report_error__19__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__19__context_name = ""s;
            __Vtask_uvm_report_error__19__line = 0U;
            this->__Vtask_uvm_report_error__19__filename = ""s;
            __Vtask_uvm_report_error__19__verbosity = 0U;
            this->__Vtask_uvm_report_error__19__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Null callback object cannot be registered with object "s, nm), " ("s), tnm), ")"s));
            this->__Vtask_uvm_report_error__19__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__19__id, this->__Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, this->__Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, this->__Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_base_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 615)->__VnoInFunc_check_registration(vlSymsp, obj, cb, __VlefCall_0__check_registration);
        if ((1U & (~ (IData)(__VlefCall_0__check_registration)))) {
            if ((VlNull{} == obj)) {
                nm = "(*)"s;
            } else {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 620)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, nm);
            }
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename;
            } else if ((VlNull{} != obj)) {
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 625)->__VnoInFunc_get_type_name(vlSymsp, tnm);
            } else {
                tnm = "uvm_object"s;
            }
            VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 630)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 631)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            __Vtask_uvm_report_warning__28__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__28__context_name = ""s;
            __Vtask_uvm_report_warning__28__line = 0U;
            this->__Vtask_uvm_report_warning__28__filename = ""s;
            __Vtask_uvm_report_warning__28__verbosity = 0U;
            this->__Vtask_uvm_report_warning__28__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback "s, __VlefCall_1__get_name), " cannot be registered with object "s), nm), " because callback type "s), __VlefCall_2__get_type_name), " is not registered with object type "s), tnm));
            this->__Vtask_uvm_report_warning__28__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__29__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__30__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__28__id, this->__Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, this->__Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line, this->__Vtask_uvm_report_warning__28__context_name, (IData)(__Vtask_uvm_report_warning__28__report_enabled_checked));
        }
        if ((VlNull{} == obj)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if ((0xffffffffU != __VlefCall_3__m_cb_find)) {
                tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename)
                        ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__PVT__m_typename
                        : "uvm_object"s);
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 644)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_warning__34__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__34__context_name = ""s;
                __Vtask_uvm_report_warning__34__line = 0U;
                this->__Vtask_uvm_report_warning__34__filename = ""s;
                __Vtask_uvm_report_warning__34__verbosity = 0U;
                this->__Vtask_uvm_report_warning__34__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Callback object "s, __VlefCall_4__get_name), " is already registered with type "s), tnm));
                this->__Vtask_uvm_report_warning__34__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__36__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__34__id, this->__Vtask_uvm_report_warning__34__message, __Vtask_uvm_report_warning__34__verbosity, this->__Vtask_uvm_report_warning__34__filename, __Vtask_uvm_report_warning__34__line, this->__Vtask_uvm_report_warning__34__context_name, (IData)(__Vtask_uvm_report_warning__34__report_enabled_checked));
            } else {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 650)->__VnoInFunc_m_add_tw_cbs(vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 659)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 663)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 666)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if ((0U == __VlefCall_5__size)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz51__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__43__Vfuncout);
                unnamedblk2__DOT__unnamedblk3__DOT__qr 
                    = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_tw_cb_q;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "../../uvm/distrib/src/base/uvm_callback.svh", 675)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, __VlefCall_6__size))) break;
                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__qr, "../../uvm/distrib/src/base/uvm_callback.svh", 676)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i, __VlefCall_7__get);
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 676)->__VnoInFunc_push_back(vlSymsp, __VlefCall_7__get);
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__i);
                }
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_tw_cb_q, "../../uvm/distrib/src/base/uvm_callback.svh", 679)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_8__size))) break;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_tw_cb_q, "../../uvm/distrib/src/base/uvm_callback.svh", 680)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_9__get);
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 680)->__VnoInFunc_push_back(vlSymsp, __VlefCall_9__get);
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                }
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, __VlefCall_10__m_cb_find);
            if ((0xffffffffU != __VlefCall_10__m_cb_find)) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 685)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 686)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                __Vtask_uvm_report_warning__53__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__53__context_name = ""s;
                __Vtask_uvm_report_warning__53__line = 0U;
                this->__Vtask_uvm_report_warning__53__filename = ""s;
                __Vtask_uvm_report_warning__53__verbosity = 0U;
                this->__Vtask_uvm_report_warning__53__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_11__get_name), " is already registered"s), " with object "s), __VlefCall_12__get_full_name));
                this->__Vtask_uvm_report_warning__53__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__53__id, this->__Vtask_uvm_report_warning__53__message, __Vtask_uvm_report_warning__53__verbosity, this->__Vtask_uvm_report_warning__53__filename, __Vtask_uvm_report_warning__53__line, this->__Vtask_uvm_report_warning__53__context_name, (IData)(__Vtask_uvm_report_warning__53__report_enabled_checked));
            } else {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 689)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 689)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_m_cb_find_name(vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_13__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_14__get_full_name)), __Vtask_m_cb_find_name__59__Vfuncout);
                if ((0U == ordering)) {
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 691)->__VnoInFunc_push_back(vlSymsp, cb);
                } else {
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 693)->__VnoInFunc_push_front(vlSymsp, cb);
                }
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_add_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__65__verbosity;
    __Vtask_uvm_report_error__65__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__65__line;
    __Vtask_uvm_report_error__65__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__65__report_enabled_checked;
    __Vtask_uvm_report_error__65__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__71__verbosity;
    __Vtask_uvm_report_warning__71__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__71__line;
    __Vtask_uvm_report_warning__71__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__71__report_enabled_checked;
    __Vtask_uvm_report_warning__71__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> t;
    {
        cq.clear();
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__62__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_callback.svh", 716)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VlNull{} == cb)) {
            __Vtask_uvm_report_error__65__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__65__context_name = ""s;
            __Vtask_uvm_report_error__65__line = 0U;
            this->__Vtask_uvm_report_error__65__filename = ""s;
            __Vtask_uvm_report_error__65__verbosity = 0U;
            this->__Vtask_uvm_report_error__65__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name));
            this->__Vtask_uvm_report_error__65__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__66__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__66__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__67__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__65__id, this->__Vtask_uvm_report_error__65__message, __Vtask_uvm_report_error__65__verbosity, this->__Vtask_uvm_report_error__65__filename, __Vtask_uvm_report_error__65__line, this->__Vtask_uvm_report_error__65__context_name, (IData)(__Vtask_uvm_report_error__65__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_callback.svh", 725)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 728)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            __Vtask_uvm_report_warning__71__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__71__context_name = ""s;
            __Vtask_uvm_report_warning__71__line = 0U;
            this->__Vtask_uvm_report_warning__71__filename = ""s;
            __Vtask_uvm_report_warning__71__verbosity = 0U;
            this->__Vtask_uvm_report_warning__71__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be registered."s));
            this->__Vtask_uvm_report_warning__71__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__72__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__72__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__73__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__71__id, this->__Vtask_uvm_report_warning__71__message, __Vtask_uvm_report_warning__71__verbosity, this->__Vtask_uvm_report_warning__71__filename, __Vtask_uvm_report_warning__71__line, this->__Vtask_uvm_report_warning__71__context_name, (IData)(__Vtask_uvm_report_warning__71__report_enabled_checked));
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            unnamedblk6__DOT__i__Vloopsize = cq.size();
            t = cq.at(unnamedblk6__DOT__i);
            this->__VnoInFunc_add(vlSymsp, t, cb, ordering);
            if ((unnamedblk6__DOT__i__Vloopsize <= cq.size())) {
                unnamedblk6__DOT__i = ((IData)(1U) 
                                       + unnamedblk6__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_delete(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__76__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__verbosity;
    __Vtask_uvm_report_warning__83__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__83__line;
    __Vtask_uvm_report_warning__83__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__83__report_enabled_checked;
    __Vtask_uvm_report_warning__83__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    std::string unnamedblk7__DOT__nm;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> b_obj;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    CData/*0:0*/ found;
    IData/*31:0*/ pos;
    b_obj = obj;
    found = 0U;
    pos = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__76__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 761)->__VnoInFunc_m_delete_tw_cbs(vlSymsp, cb, found);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 766)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, pos);
        if ((0xffffffffU != pos)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 769)->__VnoInFunc_delete(vlSymsp, pos);
            found = 1U;
        }
    }
    if ((1U & (~ (IData)(found)))) {
        unnamedblk7__DOT__nm = ""s;
        if ((VlNull{} == obj)) {
            unnamedblk7__DOT__nm = "(*)"s;
        } else {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 775)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk7__DOT__nm);
        }
        VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 776)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__83__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__83__context_name = ""s;
        __Vtask_uvm_report_warning__83__line = 0U;
        this->__Vtask_uvm_report_warning__83__filename = ""s;
        __Vtask_uvm_report_warning__83__verbosity = 0U;
        this->__Vtask_uvm_report_warning__83__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vtask_uvm_report_warning__83__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__84__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__84__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__85__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__83__id, this->__Vtask_uvm_report_warning__83__message, __Vtask_uvm_report_warning__83__verbosity, this->__Vtask_uvm_report_warning__83__filename, __Vtask_uvm_report_warning__83__line, this->__Vtask_uvm_report_warning__83__context_name, (IData)(__Vtask_uvm_report_warning__83__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_delete_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__verbosity;
    __Vtask_uvm_report_warning__92__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__92__line;
    __Vtask_uvm_report_warning__92__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__92__report_enabled_checked;
    __Vtask_uvm_report_warning__92__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__93__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__94__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    IData/*31:0*/ unnamedblk8__DOT__i__Vloopsize;
    unnamedblk8__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> t;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
    cq.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__87__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_callback.svh", 798)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_callback.svh", 802)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 805)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__92__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__92__context_name = ""s;
        __Vtask_uvm_report_warning__92__line = 0U;
        this->__Vtask_uvm_report_warning__92__filename = ""s;
        __Vtask_uvm_report_warning__92__verbosity = 0U;
        this->__Vtask_uvm_report_warning__92__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be unregistered."s));
        this->__Vtask_uvm_report_warning__92__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__93__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__93__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__94__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__94__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__92__id, this->__Vtask_uvm_report_warning__92__message, __Vtask_uvm_report_warning__92__verbosity, this->__Vtask_uvm_report_warning__92__filename, __Vtask_uvm_report_warning__92__line, this->__Vtask_uvm_report_warning__92__context_name, (IData)(__Vtask_uvm_report_warning__92__report_enabled_checked));
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        unnamedblk8__DOT__i__Vloopsize = cq.size();
        t = cq.at(unnamedblk8__DOT__i);
        this->__VnoInFunc_delete(vlSymsp, t, cb);
        if ((unnamedblk8__DOT__i__Vloopsize <= cq.size())) {
            unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_m_get_q(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> &q, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> __VlefCall_1__m_get_tw_cb_q;
    IData/*31:0*/ __VlefCall_0__exists;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 824)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
    if ((0U != __VlefCall_0__exists)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 828)->__VnoInFunc_get(vlSymsp, obj, q);
        if ((VlNull{} == q)) {
            q = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 831)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        if ((VlNull{} == obj)) {
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 825)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_first(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__102__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__106__Vfuncout;
    __Vtask_callback_mode__106__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__102__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = 0U;
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 854)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 855)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 855)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__106__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__106__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_first__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_first__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_last(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__107__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__111__Vfuncout;
    __Vtask_callback_mode__111__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__107__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 877)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        itr = (__VlefCall_0__size - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 878)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 878)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__111__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__111__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_last__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_last__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_next(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__112__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__116__Vfuncout;
    __Vtask_callback_mode__116__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__112__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 903)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 904)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 904)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__116__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__116__Vfuncout;
            }
            if (__VlefExpr_2) {
                get_next__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = ((IData)(1U) + itr);
        }
        get_next__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_prev(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__117__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__120__Vfuncout;
    __Vtask_callback_mode__120__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> __VlefCall_0__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz50> q;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__117__Vfuncout);
        this->__VnoInFunc_m_get_q(vlProcess, vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 930)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_0__get);
            __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get, cb);
            if (__VlefExpr_1) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 930)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__120__Vfuncout);
                __VlefExpr_1 = __Vtask_callback_mode__120__Vfuncout;
            }
            if (__VlefExpr_1) {
                get_prev__Vfuncrtn = cb;
                goto __Vlabel0;
            }
            itr = (itr - (IData)(1U));
        }
        get_prev__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_display(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87> __Vtask_get__121__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__121__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz51__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_m_is_registered(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_m_is_registered\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__m_is_for_me;
    m_is_registered__Vfuncrtn = 0U;
    this->__VnoInFunc_m_is_for_me(vlSymsp, cb, __VlefCall_0__m_is_for_me);
    if (__VlefCall_0__m_is_for_me) {
        this->__VnoInFunc_m_am_i_a(vlSymsp, obj, __VlefCall_0__m_is_for_me);
    }
    if (__VlefCall_0__m_is_for_me) {
        m_is_registered__Vfuncrtn = this->__PVT__m_registered;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_m_is_for_me(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_m_is_for_me\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_catcher> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp) {
    VUVM_Activator_uvm_pkg__03a__03auvm_typed_callbacks__Tz51::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::~VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_callbacks__Tz51_TBz87::~\n"); );
}
