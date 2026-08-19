// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typed_callbacks__Tz70> __Vtask_m_initialize__1__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz51> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz71> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz70> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70> __Vfunc_get__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__verbosity;
    __Vtask_uvm_report_fatal__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__11__line;
    __Vtask_uvm_report_fatal__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__11__report_enabled_checked;
    __Vtask_uvm_report_fatal__11__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base> unnamedblk1__DOT__cb_base_type;
    if ((VlNull{} == this->__PVT__m_inst)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_m_initialize(vlProcess, vlSymsp, __Vtask_m_initialize__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz51__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        unnamedblk1__DOT__cb_base_type = __Vfunc_get__2__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz71__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        this->__PVT__m_cb_typeid = __Vfunc_get__3__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid__Tz70__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
        this->__PVT__m_typeid = __Vfunc_get__4__Vfuncout;
        this->__PVT__m_inst = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71, vlProcess, vlSymsp);
        if (VL_UNLIKELY(((unnamedblk1__DOT__cb_base_type 
                          == this->__PVT__m_cb_typeid)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_callback.svh:521: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_callbacks__Tz70_TBz71.get.unnamedblk1", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("../../uvm/distrib/src/base/uvm_callback.svh", 521, "");
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_t_inst 
                = this->__PVT__m_base_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map.at(this->__PVT__m_typeid) 
                = this->__PVT__m_inst;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__type_map.at(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst) 
                = this->__PVT__m_typeid;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_m_register_pair\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> inst;
    m_register_pair__Vfuncrtn = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, inst);
    this->__PVT__m_typename = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_typename 
        = tname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = tname;
    this->__PVT__m_cb_typename = cbname;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typename 
        = cbname;
    VL_NULL_CHECK(inst, "../../uvm/distrib/src/base/uvm_callback.svh", 555)->__PVT__m_registered = 1U;
    m_register_pair__Vfuncrtn = 1U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_add(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__34__verbosity;
    __Vtask_uvm_report_warning__34__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__34__line;
    __Vtask_uvm_report_warning__34__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__34__report_enabled_checked;
    __Vtask_uvm_report_warning__34__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__49__verbosity;
    __Vtask_uvm_report_warning__49__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__49__line;
    __Vtask_uvm_report_warning__49__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__49__report_enabled_checked;
    __Vtask_uvm_report_warning__49__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_m_cb_find_name__55__Vfuncout;
    __Vtask_m_cb_find_name__55__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_12__get_full_name;
    std::string __VlefCall_11__get_name;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__m_cb_find;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> __VlefCall_7__get;
    IData/*31:0*/ __VlefCall_6__size;
    IData/*31:0*/ __VlefCall_5__size;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__m_cb_find;
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__check_registration;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk5__DOT__i;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
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
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename;
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
            if ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename)) {
                tnm = vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename;
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
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_tw_cb_q, cb, __VlefCall_3__m_cb_find);
            if ((0xffffffffU != __VlefCall_3__m_cb_find)) {
                tnm = ((""s != vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename)
                        ? vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz70__Vclpkg.__PVT__m_typename
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
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 650)->__VnoInFunc_m_add_tw_cbs(vlSymsp, cb, ordering);
            }
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 659)->__VnoInFunc_get(vlSymsp, obj, q);
            if ((VlNull{} == q)) {
                q = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 663)->__VnoInFunc_add(vlSymsp, obj, q);
            }
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 666)->__VnoInFunc_size(vlSymsp, __VlefCall_5__size);
            if ((0U == __VlefCall_5__size)) {
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                unnamedblk2__DOT__unnamedblk5__DOT__i = 0U;
                while (true) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_tw_cb_q, "../../uvm/distrib/src/base/uvm_callback.svh", 679)->__VnoInFunc_size(vlSymsp, __VlefCall_6__size);
                    if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_6__size))) break;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_tw_cb_q, "../../uvm/distrib/src/base/uvm_callback.svh", 680)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk5__DOT__i, __VlefCall_7__get);
                    VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 680)->__VnoInFunc_push_back(vlSymsp, __VlefCall_7__get);
                    unnamedblk2__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk5__DOT__i);
                }
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, __VlefCall_8__m_cb_find);
            if ((0xffffffffU != __VlefCall_8__m_cb_find)) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 685)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 686)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                __Vtask_uvm_report_warning__49__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__49__context_name = ""s;
                __Vtask_uvm_report_warning__49__line = 0U;
                this->__Vtask_uvm_report_warning__49__filename = ""s;
                __Vtask_uvm_report_warning__49__verbosity = 0U;
                this->__Vtask_uvm_report_warning__49__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Callback object "s, __VlefCall_9__get_name), " is already registered"s), " with object "s), __VlefCall_10__get_full_name));
                this->__Vtask_uvm_report_warning__49__id = "CBPREG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__50__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__49__id, this->__Vtask_uvm_report_warning__49__message, __Vtask_uvm_report_warning__49__verbosity, this->__Vtask_uvm_report_warning__49__filename, __Vtask_uvm_report_warning__49__line, this->__Vtask_uvm_report_warning__49__context_name, (IData)(__Vtask_uvm_report_warning__49__report_enabled_checked));
            } else {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 689)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_callback.svh", 689)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_m_cb_find_name(vlSymsp, q, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("object instance "s, __VlefCall_12__get_full_name)), __Vtask_m_cb_find_name__55__Vfuncout);
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_add_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_add_by_name\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__61__verbosity;
    __Vtask_uvm_report_error__61__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__61__line;
    __Vtask_uvm_report_error__61__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__61__report_enabled_checked;
    __Vtask_uvm_report_error__61__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__verbosity;
    __Vtask_uvm_report_warning__67__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__line;
    __Vtask_uvm_report_warning__67__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__67__report_enabled_checked;
    __Vtask_uvm_report_warning__67__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk6__DOT__i;
    unnamedblk6__DOT__i = 0;
    IData/*31:0*/ unnamedblk6__DOT__i__Vloopsize;
    unnamedblk6__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        cq.clear();
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__58__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_callback.svh", 716)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VlNull{} == cb)) {
            __Vtask_uvm_report_error__61__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__61__context_name = ""s;
            __Vtask_uvm_report_error__61__line = 0U;
            this->__Vtask_uvm_report_error__61__filename = ""s;
            __Vtask_uvm_report_error__61__verbosity = 0U;
            this->__Vtask_uvm_report_error__61__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Null callback object cannot be registered with object(s) "s, name));
            this->__Vtask_uvm_report_error__61__id = "CBUNREG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__61__id, this->__Vtask_uvm_report_error__61__message, __Vtask_uvm_report_error__61__verbosity, this->__Vtask_uvm_report_error__61__filename, __Vtask_uvm_report_error__61__line, this->__Vtask_uvm_report_error__61__context_name, (IData)(__Vtask_uvm_report_error__61__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_callback.svh", 725)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
        if ((0U == cq.size())) {
            VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 728)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            __Vtask_uvm_report_warning__67__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__67__context_name = ""s;
            __Vtask_uvm_report_warning__67__line = 0U;
            this->__Vtask_uvm_report_warning__67__filename = ""s;
            __Vtask_uvm_report_warning__67__verbosity = 0U;
            this->__Vtask_uvm_report_warning__67__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("add_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be registered."s));
            this->__Vtask_uvm_report_warning__67__id = "CBNOMTC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__68__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__68__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__69__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__67__id, this->__Vtask_uvm_report_warning__67__message, __Vtask_uvm_report_warning__67__verbosity, this->__Vtask_uvm_report_warning__67__filename, __Vtask_uvm_report_warning__67__line, this->__Vtask_uvm_report_warning__67__context_name, (IData)(__Vtask_uvm_report_warning__67__report_enabled_checked));
        }
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, cq.size())) {
            unnamedblk6__DOT__i__Vloopsize = cq.size();
            if ((unnamedblk6__DOT__i__Vloopsize <= cq.size())) {
                unnamedblk6__DOT__i = ((IData)(1U) 
                                       + unnamedblk6__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_delete(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_delete\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__71__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__78__verbosity;
    __Vtask_uvm_report_warning__78__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__78__line;
    __Vtask_uvm_report_warning__78__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__78__report_enabled_checked;
    __Vtask_uvm_report_warning__78__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    std::string unnamedblk7__DOT__nm;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> b_obj;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
    CData/*0:0*/ found;
    IData/*31:0*/ pos;
    b_obj = obj;
    found = 0U;
    pos = 0U;
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__71__Vfuncout);
    if ((VlNull{} == obj)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 761)->__VnoInFunc_m_delete_tw_cbs(vlSymsp, cb, found);
    } else {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 766)->__VnoInFunc_get(vlSymsp, b_obj, q);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_m_cb_find(vlSymsp, q, cb, pos);
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
        __Vtask_uvm_report_warning__78__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__78__context_name = ""s;
        __Vtask_uvm_report_warning__78__line = 0U;
        this->__Vtask_uvm_report_warning__78__filename = ""s;
        __Vtask_uvm_report_warning__78__verbosity = 0U;
        this->__Vtask_uvm_report_warning__78__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("Callback "s, __VlefCall_0__get_name), " cannot be removed from object "s), unnamedblk7__DOT__nm), " because it is not currently registered to that object."s));
        this->__Vtask_uvm_report_warning__78__id = "CBUNREG"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__79__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__78__id, this->__Vtask_uvm_report_warning__78__message, __Vtask_uvm_report_warning__78__verbosity, this->__Vtask_uvm_report_warning__78__filename, __Vtask_uvm_report_warning__78__line, this->__Vtask_uvm_report_warning__78__context_name, (IData)(__Vtask_uvm_report_warning__78__report_enabled_checked));
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_delete_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> root) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_delete_by_name\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__82__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__87__verbosity;
    __Vtask_uvm_report_warning__87__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__87__line;
    __Vtask_uvm_report_warning__87__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__87__report_enabled_checked;
    __Vtask_uvm_report_warning__87__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    IData/*31:0*/ unnamedblk8__DOT__i__Vloopsize;
    unnamedblk8__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component>> cq;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    cq.clear();
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__82__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_callback.svh", 798)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_callback.svh", 802)->__VnoInFunc_find_all(vlProcess, vlSymsp, name, cq, root);
    if ((0U == cq.size())) {
        VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 805)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vtask_uvm_report_warning__87__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__87__context_name = ""s;
        __Vtask_uvm_report_warning__87__line = 0U;
        this->__Vtask_uvm_report_warning__87__filename = ""s;
        __Vtask_uvm_report_warning__87__verbosity = 0U;
        this->__Vtask_uvm_report_warning__87__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(
                                                                              VL_CONCATN_NNN("delete_by_name failed to find any components matching the name "s, name), ", callback "s), __VlefCall_0__get_name), " will not be unregistered."s));
        this->__Vtask_uvm_report_warning__87__id = "CBNOMTC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__88__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__88__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__87__id, this->__Vtask_uvm_report_warning__87__message, __Vtask_uvm_report_warning__87__verbosity, this->__Vtask_uvm_report_warning__87__filename, __Vtask_uvm_report_warning__87__line, this->__Vtask_uvm_report_warning__87__context_name, (IData)(__Vtask_uvm_report_warning__87__report_enabled_checked));
    }
    unnamedblk8__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk8__DOT__i, cq.size())) {
        unnamedblk8__DOT__i__Vloopsize = cq.size();
        if ((unnamedblk8__DOT__i__Vloopsize <= cq.size())) {
            unnamedblk8__DOT__i = ((IData)(1U) + unnamedblk8__DOT__i);
        }
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_m_get_q(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> &q, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_m_get_q\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> __VlefCall_1__m_get_tw_cb_q;
    IData/*31:0*/ __VlefCall_0__exists;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 824)->__VnoInFunc_exists(vlSymsp, obj, __VlefCall_0__exists);
    if ((0U != __VlefCall_0__exists)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 828)->__VnoInFunc_get(vlSymsp, obj, q);
        if ((VlNull{} == q)) {
            q = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51, vlProcess, vlSymsp, ""s);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_pool, "../../uvm/distrib/src/base/uvm_callback.svh", 831)->__VnoInFunc_add(vlSymsp, obj, q);
        }
    } else {
        if ((VlNull{} == obj)) {
            __VlefCall_1__m_get_tw_cb_q = vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_tw_cb_q;
        } else {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__PVT__m_t_inst, "../../uvm/distrib/src/base/uvm_callback.svh", 825)->__VnoInFunc_m_get_tw_cb_q(vlSymsp, obj, __VlefCall_1__m_get_tw_cb_q);
        }
        q = __VlefCall_1__m_get_tw_cb_q;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_first(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_first\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__96__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__100__Vfuncout;
    __Vtask_callback_mode__100__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__96__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = 0U;
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 854)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 855)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 855)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__100__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__100__Vfuncout;
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_last(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_last\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__101__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__105__Vfuncout;
    __Vtask_callback_mode__105__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__101__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 877)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        itr = (__VlefCall_0__size - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 878)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 878)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__105__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__105__Vfuncout;
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_next(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_next\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__106__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__110__Vfuncout;
    __Vtask_callback_mode__110__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__106__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = ((IData)(1U) + itr);
        while (true) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 903)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
            if (!(VL_LTS_III(32, itr, __VlefCall_0__size))) break;
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 904)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_1__get);
            __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__get, cb);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 904)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__110__Vfuncout);
                __VlefExpr_2 = __Vtask_callback_mode__110__Vfuncout;
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_prev(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_get_prev\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__111__Vfuncout;
    CData/*0:0*/ __Vtask_callback_mode__114__Vfuncout;
    __Vtask_callback_mode__114__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> __VlefCall_0__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> q;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> cb;
    {
        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__111__Vfuncout);
        this->__VnoInFunc_m_get_q(vlSymsp, q, obj);
        itr = (itr - (IData)(1U));
        while (VL_LTES_III(32, 0U, itr)) {
            VL_NULL_CHECK(q, "../../uvm/distrib/src/base/uvm_callback.svh", 930)->__VnoInFunc_get(vlProcess, vlSymsp, itr, __VlefCall_0__get);
            __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__get, cb);
            if (__VlefExpr_1) {
                VL_NULL_CHECK(cb, "../../uvm/distrib/src/base/uvm_callback.svh", 930)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vtask_callback_mode__114__Vfuncout);
                __VlefExpr_1 = __Vtask_callback_mode__114__Vfuncout;
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_display(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71__Vclpkg::__VnoInFunc_display\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71> __Vtask_get__115__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__115__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_typed_callbacks__Tz70__Vclpkg.__VnoInFunc_display(vlSymsp, obj);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_m_is_registered(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_m_is_registered\n"); );
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

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_m_is_for_me(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_m_is_for_me\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_vreg_field_cbs> this_cb;
    __VlefExpr_0 = VL_CAST_DYNAMIC(cb, this_cb);
    m_is_for_me__Vfuncrtn = (1U & __VlefExpr_0);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_typed_callbacks__Tz70::init(vlProcess, vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_registered = 0;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz70_TBz71::~\n"); );
}
