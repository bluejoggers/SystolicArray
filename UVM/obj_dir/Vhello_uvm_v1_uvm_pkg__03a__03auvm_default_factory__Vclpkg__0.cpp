// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_register\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_fatal__1__verbosity;
    __Vtask_uvm_report_fatal__1__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__1__line;
    __Vtask_uvm_report_fatal__1__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__1__report_enabled_checked;
    __Vtask_uvm_report_fatal__1__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__verbosity;
    __Vtask_uvm_report_warning__9__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__line;
    __Vtask_uvm_report_warning__9__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__9__report_enabled_checked;
    __Vtask_uvm_report_warning__9__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__verbosity;
    __Vtask_uvm_report_warning__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__line;
    __Vtask_uvm_report_warning__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__17__report_enabled_checked;
    __Vtask_uvm_report_warning__17__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__29__Vfuncout;
    __Vfunc_uvm_re_match__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__29____Vincrement1;
    __Vfunc_uvm_re_match__29____Vincrement1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_16__uvm_is_match;
    std::string __VlefCall_15__get_type_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_14__new;
    std::string __VlefCall_13__get_type_name;
    std::string __VlefCall_12__get_type_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_11__new;
    std::string __VlefCall_10__get_type_name;
    std::string __VlefCall_9__get_type_name;
    CData/*0:0*/ __VlefLogAnd_8;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefLogAnd_2;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk8__DOT__i;
    unnamedblk8__DOT__i = 0;
    IData/*31:0*/ unnamedblk8__DOT__i__Vloopsize;
    unnamedblk8__DOT__i__Vloopsize = 0;
    if ((VlNull{} == obj)) {
        __Vtask_uvm_report_fatal__1__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_fatal__1__context_name = ""s;
        __Vtask_uvm_report_fatal__1__line = 0U;
        this->__Vtask_uvm_report_fatal__1__filename = ""s;
        __Vtask_uvm_report_fatal__1__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__1__message = "Attempting to register a null object with the factory"s;
        this->__Vtask_uvm_report_fatal__1__id = "NULLWR"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__1__id, this->__Vtask_uvm_report_fatal__1__message, __Vtask_uvm_report_fatal__1__verbosity, this->__Vtask_uvm_report_fatal__1__filename, __Vtask_uvm_report_fatal__1__line, this->__Vtask_uvm_report_fatal__1__context_name, (IData)(__Vtask_uvm_report_fatal__1__report_enabled_checked));
    }
    VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 889)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    __VlefLogAnd_2 = (""s != __VlefCall_0__get_type_name);
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 889)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
        __VlefLogAnd_2 = ("<unknown>"s != __VlefCall_1__get_type_name);
    }
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 890)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
        if (this->__PVT__m_type_names.exists(__VlefCall_3__get_type_name)) {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 891)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
            __Vtask_uvm_report_warning__9__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__9__context_name = ""s;
            __Vtask_uvm_report_warning__9__line = 0U;
            this->__Vtask_uvm_report_warning__9__filename = ""s;
            __Vtask_uvm_report_warning__9__verbosity = 0U;
            this->__Vtask_uvm_report_warning__9__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Type name '"s, __VlefCall_4__get_type_name), "' already registered with factory. No string-based lookup "s), "support for multiple types with the same type name."s));
            this->__Vtask_uvm_report_warning__9__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__9__id, this->__Vtask_uvm_report_warning__9__message, __Vtask_uvm_report_warning__9__verbosity, this->__Vtask_uvm_report_warning__9__filename, __Vtask_uvm_report_warning__9__line, this->__Vtask_uvm_report_warning__9__context_name, (IData)(__Vtask_uvm_report_warning__9__report_enabled_checked));
        } else {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 895)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
            this->__PVT__m_type_names.at(__VlefCall_5__get_type_name) 
                = obj;
        }
    }
    if (this->__PVT__m_types.exists(obj)) {
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 899)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
        __VlefLogAnd_8 = (""s != __VlefCall_6__get_type_name);
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 899)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
            __VlefLogAnd_8 = ("<unknown>"s != __VlefCall_7__get_type_name);
        }
        if (__VlefLogAnd_8) {
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 900)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
            __Vtask_uvm_report_warning__17__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__17__context_name = ""s;
            __Vtask_uvm_report_warning__17__line = 0U;
            this->__Vtask_uvm_report_warning__17__filename = ""s;
            __Vtask_uvm_report_warning__17__verbosity = 0U;
            this->__Vtask_uvm_report_warning__17__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Object type '"s, __VlefCall_9__get_type_name), "' already registered with factory. "s));
            this->__Vtask_uvm_report_warning__17__id = "TPRGED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__17__id, this->__Vtask_uvm_report_warning__17__message, __Vtask_uvm_report_warning__17__verbosity, this->__Vtask_uvm_report_warning__17__filename, __Vtask_uvm_report_warning__17__line, this->__Vtask_uvm_report_warning__17__context_name, (IData)(__Vtask_uvm_report_warning__17__report_enabled_checked));
        }
    } else {
        this->__PVT__m_types.at(obj) = 1U;
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 909)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
        if (this->__PVT__m_inst_override_name_queues.exists(__VlefCall_10__get_type_name)) {
            __VlefCall_11__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
            this->__PVT__m_inst_override_queues.at(obj) 
                = __VlefCall_11__new;
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 911)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
            VL_NULL_CHECK(this->__PVT__m_inst_override_queues
                          .at(obj), "../../uvm/distrib/src/base/uvm_factory.svh", 911)->__PVT__queue 
                = VL_NULL_CHECK(this->__PVT__m_inst_override_name_queues
                                .at(__VlefCall_12__get_type_name), "../../uvm/distrib/src/base/uvm_factory.svh", 911)
                ->__PVT__queue;
            VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 912)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
            this->__PVT__m_inst_override_name_queues.erase(__VlefCall_13__get_type_name);
        }
        if ((0U != this->__PVT__m_wildcard_inst_overrides.size())) {
            if ((! this->__PVT__m_inst_override_queues.exists(obj))) {
                __VlefCall_14__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
                this->__PVT__m_inst_override_queues.at(obj) 
                    = __VlefCall_14__new;
            }
            unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk8__DOT__i, this->__PVT__m_wildcard_inst_overrides.size())) {
                unnamedblk8__DOT__i__Vloopsize = this->__PVT__m_wildcard_inst_overrides.size();
                VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 918)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
                this->__Vfunc_uvm_is_match__27__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_15__get_type_name);
                this->__Vfunc_uvm_is_match__27__expr 
                    = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(this->__PVT__m_wildcard_inst_overrides.at(unnamedblk8__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 918)
                                         ->__PVT__orig_type_name);
                this->__Vfunc_uvm_glob_to_re__28__glob 
                    = this->__Vfunc_uvm_is_match__27__expr;
                this->__Vfunc_uvm_glob_to_re__28__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__28__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__28__Vfuncout;
                this->__Vfunc_uvm_re_match__29__str 
                    = this->__Vfunc_uvm_is_match__27__str;
                this->__Vfunc_uvm_re_match__29__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__29____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))) {
                        __Vfunc_uvm_re_match__29__Vfuncout = 0U;
                        goto __Vlabel0;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,0U))) {
                        this->__Vfunc_uvm_re_match__29__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__29__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__29__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__29__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__29__Vfuncout = 1U;
                            goto __Vlabel0;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__29__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))) {
                                __Vfunc_uvm_re_match__29__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__29__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__29____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__29____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__29__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__29__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__29__re))
                            ? 0U : 1U);
                    __Vlabel0: ;
                }
                __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__29__Vfuncout;
                __VlefCall_16__uvm_is_match = (0U == __Vfunc_uvm_is_match__27____VlefCall_0__uvm_re_match);
                if (__VlefCall_16__uvm_is_match) {
                    VL_NULL_CHECK(this->__PVT__m_inst_override_queues
                                  .at(obj), "../../uvm/distrib/src/base/uvm_factory.svh", 919)->__PVT__queue.push_back(this->__PVT__m_wildcard_inst_overrides.at(unnamedblk8__DOT__i));
                }
                if ((unnamedblk8__DOT__i__Vloopsize 
                     <= this->__PVT__m_wildcard_inst_overrides.size())) {
                    unnamedblk8__DOT__i = ((IData)(1U) 
                                           + unnamedblk8__DOT__i);
                }
            }
        }
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__32__verbosity;
    __Vtask_uvm_report_warning__32__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__32__line;
    __Vtask_uvm_report_warning__32__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__32__report_enabled_checked;
    __Vtask_uvm_report_warning__32__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__verbosity;
    __Vtask_uvm_report_warning__37__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__37__line;
    __Vtask_uvm_report_warning__37__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__37__report_enabled_checked;
    __Vtask_uvm_report_warning__37__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__45__verbosity;
    __Vtask_uvm_report_info__45__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__45__line;
    __Vtask_uvm_report_info__45__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__45__report_enabled_checked;
    __Vtask_uvm_report_info__45__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__50__verbosity;
    __Vtask_uvm_report_info__50__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__50__line;
    __Vtask_uvm_report_info__50__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__50__report_enabled_checked;
    __Vtask_uvm_report_info__50__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_10__get_type_name;
    std::string __VlefCall_9__get_type_name;
    std::string __VlefCall_8__get_type_name;
    std::string __VlefCall_7__get_type_name;
    std::string __VlefCall_6__get_type_name;
    CData/*0:0*/ __VlefLogAnd_5;
    std::string __VlefCall_4__get_type_name;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefLogOr_2;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk9__DOT__index;
    unnamedblk9__DOT__index = 0;
    IData/*31:0*/ unnamedblk9__DOT__index__Vloopsize;
    unnamedblk9__DOT__index__Vloopsize = 0;
    std::string unnamedblk9__DOT__unnamedblk10__DOT__msg;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> unnamedblk11__DOT__override;
    CData/*0:0*/ replaced;
    {
        replaced = 0U;
        if ((original_type == override_type)) {
            VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 938)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            __VlefLogOr_2 = (""s == __VlefCall_0__get_type_name);
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 938)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                __VlefLogOr_2 = ("<unknown>"s == __VlefCall_1__get_type_name);
            }
            if (__VlefLogOr_2) {
                __Vtask_uvm_report_warning__32__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__32__context_name = ""s;
                __Vtask_uvm_report_warning__32__line = 0U;
                this->__Vtask_uvm_report_warning__32__filename = ""s;
                __Vtask_uvm_report_warning__32__verbosity = 0U;
                this->__Vtask_uvm_report_warning__32__message = "Original and override type arguments are identical"s;
                this->__Vtask_uvm_report_warning__32__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__32__id, this->__Vtask_uvm_report_warning__32__message, __Vtask_uvm_report_warning__32__verbosity, this->__Vtask_uvm_report_warning__32__filename, __Vtask_uvm_report_warning__32__line, this->__Vtask_uvm_report_warning__32__context_name, (IData)(__Vtask_uvm_report_warning__32__report_enabled_checked));
            } else {
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 944)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                __Vtask_uvm_report_warning__37__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__37__context_name = ""s;
                __Vtask_uvm_report_warning__37__line = 0U;
                this->__Vtask_uvm_report_warning__37__filename = ""s;
                __Vtask_uvm_report_warning__37__verbosity = 0U;
                this->__Vtask_uvm_report_warning__37__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Original and override type arguments are identical: "s, __VlefCall_3__get_type_name));
                this->__Vtask_uvm_report_warning__37__id = "TYPDUP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__38__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__38__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__39__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__37__id, this->__Vtask_uvm_report_warning__37__message, __Vtask_uvm_report_warning__37__verbosity, this->__Vtask_uvm_report_warning__37__filename, __Vtask_uvm_report_warning__37__line, this->__Vtask_uvm_report_warning__37__context_name, (IData)(__Vtask_uvm_report_warning__37__report_enabled_checked));
            }
        }
        if ((! this->__PVT__m_types.exists(original_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
        }
        if ((! this->__PVT__m_types.exists(override_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
        }
        unnamedblk9__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk9__DOT__index, this->__PVT__m_type_overrides.size())) {
            unnamedblk9__DOT__index__Vloopsize = this->__PVT__m_type_overrides.size();
            __VlefLogAnd_5 = (VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 957)
                              ->__PVT__orig_type == original_type);
            if ((1U & (~ (IData)(__VlefLogAnd_5)))) {
                __VlefLogAnd_5 = (("<unknown>"s != VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 958)
                                   ->__PVT__orig_type_name) 
                                  && (""s != VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 959)
                                      ->__PVT__orig_type_name));
                if (__VlefLogAnd_5) {
                    VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 960)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_4__get_type_name);
                    __VlefLogAnd_5 = (VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 960)
                                      ->__PVT__orig_type_name 
                                      == __VlefCall_4__get_type_name);
                }
            }
            if (__VlefLogAnd_5) {
                unnamedblk9__DOT__unnamedblk10__DOT__msg = ""s;
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 962)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
                unnamedblk9__DOT__unnamedblk10__DOT__msg 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Original object type '"s, __VlefCall_6__get_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 964)
                                                    ->__PVT__ovrd_type_name), "'"s);
                if ((1U & (~ (IData)(replace)))) {
                    unnamedblk9__DOT__unnamedblk10__DOT__msg 
                        = VL_CONCATN_NNN(unnamedblk9__DOT__unnamedblk10__DOT__msg, ".  Set 'replace' argument to replace the existing entry."s);
                    __Vtask_uvm_report_info__45__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_info__45__context_name = ""s;
                    __Vtask_uvm_report_info__45__line = 0U;
                    this->__Vtask_uvm_report_info__45__filename = ""s;
                    __Vtask_uvm_report_info__45__verbosity = 0x000000c8U;
                    this->__Vtask_uvm_report_info__45__message 
                        = unnamedblk9__DOT__unnamedblk10__DOT__msg;
                    this->__Vtask_uvm_report_info__45__id = "TPREGD"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__46__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__46__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__47__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__45__id, this->__Vtask_uvm_report_info__45__message, __Vtask_uvm_report_info__45__verbosity, this->__Vtask_uvm_report_info__45__filename, __Vtask_uvm_report_info__45__line, this->__Vtask_uvm_report_info__45__context_name, (IData)(__Vtask_uvm_report_info__45__report_enabled_checked));
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(override_type, "../../uvm/distrib/src/base/uvm_factory.svh", 971)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_7__get_type_name);
                unnamedblk9__DOT__unnamedblk10__DOT__msg 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(unnamedblk9__DOT__unnamedblk10__DOT__msg, ".  Replacing with override to produce type '"s), __VlefCall_7__get_type_name), "'."s);
                __Vtask_uvm_report_info__50__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_info__50__context_name = ""s;
                __Vtask_uvm_report_info__50__line = 0U;
                this->__Vtask_uvm_report_info__50__filename = ""s;
                __Vtask_uvm_report_info__50__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__50__message 
                    = unnamedblk9__DOT__unnamedblk10__DOT__msg;
                this->__Vtask_uvm_report_info__50__id = "TPREGR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__50__id, this->__Vtask_uvm_report_info__50__message, __Vtask_uvm_report_info__50__verbosity, this->__Vtask_uvm_report_info__50__filename, __Vtask_uvm_report_info__50__line, this->__Vtask_uvm_report_info__50__context_name, (IData)(__Vtask_uvm_report_info__50__report_enabled_checked));
                replaced = 1U;
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 974)->__PVT__orig_type 
                    = original_type;
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 975)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 975)->__PVT__orig_type_name 
                    = __VlefCall_8__get_type_name;
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 976)->__PVT__ovrd_type 
                    = override_type;
                VL_NULL_CHECK(override_type, "../../uvm/distrib/src/base/uvm_factory.svh", 977)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_9__get_type_name);
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk9__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 977)->__PVT__ovrd_type_name 
                    = __VlefCall_9__get_type_name;
            }
            if ((unnamedblk9__DOT__index__Vloopsize 
                 <= this->__PVT__m_type_overrides.size())) {
                unnamedblk9__DOT__index = ((IData)(1U) 
                                           + unnamedblk9__DOT__index);
            }
        }
        if ((1U & (~ (IData)(replaced)))) {
            VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 985)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
            unnamedblk11__DOT__override = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override, vlProcess, vlSymsp, "*"s, 
                                                 VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name), original_type, override_type);
            this->__PVT__m_type_overrides.push_back(unnamedblk11__DOT__override);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_type_override_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__58__verbosity;
    __Vtask_uvm_report_error__58__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__58__line;
    __Vtask_uvm_report_error__58__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__58__report_enabled_checked;
    __Vtask_uvm_report_error__58__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__59__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__60__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__62__verbosity;
    __Vtask_uvm_report_warning__62__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__62__line;
    __Vtask_uvm_report_warning__62__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__62__report_enabled_checked;
    __Vtask_uvm_report_warning__62__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__66__verbosity;
    __Vtask_uvm_report_info__66__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__66__line;
    __Vtask_uvm_report_info__66__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__66__report_enabled_checked;
    __Vtask_uvm_report_info__66__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__70__verbosity;
    __Vtask_uvm_report_info__70__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__70__line;
    __Vtask_uvm_report_info__70__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__70__report_enabled_checked;
    __Vtask_uvm_report_info__70__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk12__DOT__index;
    unnamedblk12__DOT__index = 0;
    IData/*31:0*/ unnamedblk12__DOT__index__Vloopsize;
    unnamedblk12__DOT__index__Vloopsize = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> unnamedblk13__DOT__override;
    CData/*0:0*/ replaced;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        replaced = 0U;
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if ((VlNull{} == override_type)) {
            __Vtask_uvm_report_error__58__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__58__context_name = ""s;
            __Vtask_uvm_report_error__58__line = 0U;
            this->__Vtask_uvm_report_error__58__filename = ""s;
            __Vtask_uvm_report_error__58__verbosity = 0U;
            this->__Vtask_uvm_report_error__58__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot register override for original type '"s, original_type_name), "' because the override type '"s), override_type_name), "' is not registered with the factory."s));
            this->__Vtask_uvm_report_error__58__id = "TYPNTF"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__59__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__59__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__58__id, this->__Vtask_uvm_report_error__58__message, __Vtask_uvm_report_error__58__verbosity, this->__Vtask_uvm_report_error__58__filename, __Vtask_uvm_report_error__58__line, this->__Vtask_uvm_report_error__58__context_name, (IData)(__Vtask_uvm_report_error__58__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((original_type_name == override_type_name)) {
            __Vtask_uvm_report_warning__62__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__62__context_name = ""s;
            __Vtask_uvm_report_warning__62__line = 0U;
            this->__Vtask_uvm_report_warning__62__filename = ""s;
            __Vtask_uvm_report_warning__62__verbosity = 0U;
            this->__Vtask_uvm_report_warning__62__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Requested and actual type name  arguments are identical: "s, original_type_name), ". Ignoring this override."s));
            this->__Vtask_uvm_report_warning__62__id = "TYPDUP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__63__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__63__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__64__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__62__id, this->__Vtask_uvm_report_warning__62__message, __Vtask_uvm_report_warning__62__verbosity, this->__Vtask_uvm_report_warning__62__filename, __Vtask_uvm_report_warning__62__line, this->__Vtask_uvm_report_warning__62__context_name, (IData)(__Vtask_uvm_report_warning__62__report_enabled_checked));
            goto __Vlabel0;
        }
        unnamedblk12__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk12__DOT__index, this->__PVT__m_type_overrides.size())) {
            unnamedblk12__DOT__index__Vloopsize = this->__PVT__m_type_overrides.size();
            if ((VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk12__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1028)
                 ->__PVT__orig_type_name == original_type_name)) {
                if ((1U & (~ (IData)(replace)))) {
                    __Vtask_uvm_report_info__66__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_info__66__context_name = ""s;
                    __Vtask_uvm_report_info__66__line = 0U;
                    this->__Vtask_uvm_report_info__66__filename = ""s;
                    __Vtask_uvm_report_info__66__verbosity = 0x000000c8U;
                    this->__Vtask_uvm_report_info__66__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original type '"s, original_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk12__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1031)
                                                                           ->__PVT__ovrd_type_name), "'.  Set 'replace' argument to replace the existing entry."s));
                    this->__Vtask_uvm_report_info__66__id = "TPREGD"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__66__id, this->__Vtask_uvm_report_info__66__message, __Vtask_uvm_report_info__66__verbosity, this->__Vtask_uvm_report_info__66__filename, __Vtask_uvm_report_info__66__line, this->__Vtask_uvm_report_info__66__context_name, (IData)(__Vtask_uvm_report_info__66__report_enabled_checked));
                    goto __Vlabel0;
                }
                __Vtask_uvm_report_info__70__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_info__70__context_name = ""s;
                __Vtask_uvm_report_info__70__line = 0U;
                this->__Vtask_uvm_report_info__70__filename = ""s;
                __Vtask_uvm_report_info__70__verbosity = 0x000000c8U;
                this->__Vtask_uvm_report_info__70__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Original object type '"s, original_type_name), "' already registered to produce '"s), VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk12__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1036)
                                                                                ->__PVT__ovrd_type_name), "'.  Replacing with override to produce type '"s), override_type_name), "'."s));
                this->__Vtask_uvm_report_info__70__id = "TPREGR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__71__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__71__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__72__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__70__id, this->__Vtask_uvm_report_info__70__message, __Vtask_uvm_report_info__70__verbosity, this->__Vtask_uvm_report_info__70__filename, __Vtask_uvm_report_info__70__line, this->__Vtask_uvm_report_info__70__context_name, (IData)(__Vtask_uvm_report_info__70__report_enabled_checked));
                replaced = 1U;
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk12__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1039)->__PVT__ovrd_type 
                    = override_type;
                VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk12__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1040)->__PVT__ovrd_type_name 
                    = override_type_name;
            }
            if ((unnamedblk12__DOT__index__Vloopsize 
                 <= this->__PVT__m_type_overrides.size())) {
                unnamedblk12__DOT__index = ((IData)(1U) 
                                            + unnamedblk12__DOT__index);
            }
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
        }
        if ((1U & (~ (IData)(replaced)))) {
            unnamedblk13__DOT__override = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override, vlProcess, vlSymsp, "*"s, original_type_name, original_type, override_type);
            this->__PVT__m_type_overrides.push_back(unnamedblk13__DOT__override);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_check_inst_override_exists\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__78__verbosity;
    __Vtask_uvm_report_info__78__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__78__line;
    __Vtask_uvm_report_info__78__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__78__report_enabled_checked;
    __Vtask_uvm_report_info__78__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefLogAnd_1;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk14__DOT__index;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> qc;
    {
        check_inst_override_exists__Vfuncrtn = 0U;
        if (this->__PVT__m_inst_override_queues.exists(original_type)) {
            qc = this->__PVT__m_inst_override_queues
                .at(original_type);
        } else {
            check_inst_override_exists__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        unnamedblk14__DOT__index = 0U;
        unnamedblk14__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk14__DOT__index, VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1074)
                          ->__PVT__queue.size())) {
            __SYM__override = VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1076)
                ->__PVT__queue.at(unnamedblk14__DOT__index);
            __VlefLogAnd_1 = (((VL_NULL_CHECK(__SYM__override, "../../uvm/distrib/src/base/uvm_factory.svh", 1077)
                                ->__PVT__full_inst_path 
                                == full_inst_path) 
                               && (VL_NULL_CHECK(__SYM__override, "../../uvm/distrib/src/base/uvm_factory.svh", 1078)
                                   ->__PVT__orig_type 
                                   == original_type)) 
                              && (VL_NULL_CHECK(__SYM__override, "../../uvm/distrib/src/base/uvm_factory.svh", 1079)
                                  ->__PVT__ovrd_type 
                                  == override_type));
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1080)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                __VlefLogAnd_1 = (VL_NULL_CHECK(__SYM__override, "../../uvm/distrib/src/base/uvm_factory.svh", 1080)
                                  ->__PVT__orig_type_name 
                                  == __VlefCall_0__get_type_name);
            }
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1082)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                VL_NULL_CHECK(override_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1083)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                __Vtask_uvm_report_info__78__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_info__78__context_name = ""s;
                __Vtask_uvm_report_info__78__line = 0U;
                this->__Vtask_uvm_report_info__78__filename = ""s;
                __Vtask_uvm_report_info__78__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__78__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Instance override for '"s, __VlefCall_2__get_type_name), "' already exists: override type '"s), __VlefCall_3__get_type_name), "' with full_inst_path '"s), full_inst_path), "'"s));
                this->__Vtask_uvm_report_info__78__id = "DUPOVRD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__79__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__80__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__78__id, this->__Vtask_uvm_report_info__78__message, __Vtask_uvm_report_info__78__verbosity, this->__Vtask_uvm_report_info__78__filename, __Vtask_uvm_report_info__78__line, this->__Vtask_uvm_report_info__78__context_name, (IData)(__Vtask_uvm_report_info__78__report_enabled_checked));
                check_inst_override_exists__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk14__DOT__index = ((IData)(1U) 
                                        + unnamedblk14__DOT__index);
        }
        check_inst_override_exists__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_1__new;
    CData/*0:0*/ __VlefCall_0__check_inst_override_exists;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    {
        if ((! this->__PVT__m_types.exists(original_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, original_type);
        }
        if ((! this->__PVT__m_types.exists(override_type))) {
            this->__VnoInFunc_register(vlProcess, vlSymsp, override_type);
        }
        this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, override_type, full_inst_path, __VlefCall_0__check_inst_override_exists);
        if (__VlefCall_0__check_inst_override_exists) {
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_inst_override_queues.exists(original_type))) {
            __VlefCall_1__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
            this->__PVT__m_inst_override_queues.at(original_type) 
                = __VlefCall_1__new;
        }
        VL_NULL_CHECK(original_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1115)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
        __SYM__override = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override, vlProcess, vlSymsp, full_inst_path, 
                                 VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name), original_type, override_type);
        VL_NULL_CHECK(this->__PVT__m_inst_override_queues
                      .at(original_type), "../../uvm/distrib/src/base/uvm_factory.svh", 1119)->__PVT__queue.push_back(__SYM__override);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_set_inst_override_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__88__verbosity;
    __Vtask_uvm_report_error__88__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__88__line;
    __Vtask_uvm_report_error__88__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__88__report_enabled_checked;
    __Vtask_uvm_report_error__88__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_is_match__96____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__96____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__98__Vfuncout;
    __Vfunc_uvm_re_match__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__98____Vincrement1;
    __Vfunc_uvm_re_match__98____Vincrement1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_4__new;
    CData/*0:0*/ __VlefCall_3__uvm_is_match;
    CData/*0:0*/ __VlefCall_2__m_has_wildcard;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_1__new;
    CData/*0:0*/ __VlefCall_0__check_inst_override_exists;
    std::string unnamedblk15__DOT__i;
    std::string unnamedblk15__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk15__DOT__i__Vmore;
    unnamedblk15__DOT__i__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> __SYM__override;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> original_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type;
    {
        if (this->__PVT__m_type_names.exists(original_type_name)) {
            original_type = this->__PVT__m_type_names
                .at(original_type_name);
        }
        if (this->__PVT__m_type_names.exists(override_type_name)) {
            override_type = this->__PVT__m_type_names
                .at(override_type_name);
        }
        if ((VlNull{} == override_type)) {
            __Vtask_uvm_report_error__88__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__88__context_name = ""s;
            __Vtask_uvm_report_error__88__line = 0U;
            this->__Vtask_uvm_report_error__88__filename = ""s;
            __Vtask_uvm_report_error__88__verbosity = 0U;
            this->__Vtask_uvm_report_error__88__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot register instance override with type name '"s, original_type_name), "' and instance path '"s), full_inst_path), "' because the type it's supposed "s), "to produce, '"s), override_type_name), "', is not registered with the factory."s));
            this->__Vtask_uvm_report_error__88__id = "TYPNTF"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__89__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__89__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__90__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__88__id, this->__Vtask_uvm_report_error__88__message, __Vtask_uvm_report_error__88__verbosity, this->__Vtask_uvm_report_error__88__filename, __Vtask_uvm_report_error__88__line, this->__Vtask_uvm_report_error__88__context_name, (IData)(__Vtask_uvm_report_error__88__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((VlNull{} == original_type)) {
            this->__PVT__m_lookup_strs.at(original_type_name) = 1U;
        }
        __SYM__override = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override, vlProcess, vlSymsp, full_inst_path, original_type_name, original_type, override_type);
        if ((VlNull{} != original_type)) {
            this->__VnoInFunc_check_inst_override_exists(vlProcess, vlSymsp, original_type, override_type, full_inst_path, __VlefCall_0__check_inst_override_exists);
            if (__VlefCall_0__check_inst_override_exists) {
                goto __Vlabel0;
            }
            if ((! this->__PVT__m_inst_override_queues.exists(original_type))) {
                __VlefCall_1__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
                this->__PVT__m_inst_override_queues.at(original_type) 
                    = __VlefCall_1__new;
            }
            VL_NULL_CHECK(this->__PVT__m_inst_override_queues
                          .at(original_type), "../../uvm/distrib/src/base/uvm_factory.svh", 1162)->__PVT__queue.push_back(__SYM__override);
        } else {
            this->__VnoInFunc_m_has_wildcard(vlSymsp, original_type_name, __VlefCall_2__m_has_wildcard);
            if (__VlefCall_2__m_has_wildcard) {
                unnamedblk15__DOT__i__Vmore = (0U != this->__PVT__m_type_names.first(unnamedblk15__DOT__i__Vnext));
                while (unnamedblk15__DOT__i__Vmore) {
                    unnamedblk15__DOT__i = unnamedblk15__DOT__i__Vnext;
                    unnamedblk15__DOT__i__Vmore = (0U 
                                                   != this->__PVT__m_type_names.next(unnamedblk15__DOT__i__Vnext));
                    this->__Vfunc_uvm_is_match__96__str 
                        = unnamedblk15__DOT__i;
                    this->__Vfunc_uvm_is_match__96__expr 
                        = original_type_name;
                    this->__Vfunc_uvm_glob_to_re__97__glob 
                        = this->__Vfunc_uvm_is_match__96__expr;
                    this->__Vfunc_uvm_glob_to_re__97__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__97__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__97__Vfuncout;
                    this->__Vfunc_uvm_re_match__98__str 
                        = this->__Vfunc_uvm_is_match__96__str;
                    this->__Vfunc_uvm_re_match__98__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__98____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__98__re))) {
                            __Vfunc_uvm_re_match__98__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,0U))) {
                            this->__Vfunc_uvm_re_match__98__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__98__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__98__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__98__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__98__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__98__Vfuncout = 1U;
                                goto __Vlabel1;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__98__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__98__re))) {
                                    __Vfunc_uvm_re_match__98__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__98__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__98____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__98____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__98__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__98__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__98__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__98__re))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_is_match__96____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__98__Vfuncout;
                    __VlefCall_3__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__96____VlefCall_0__uvm_re_match);
                    if (__VlefCall_3__uvm_is_match) {
                        this->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, unnamedblk15__DOT__i, override_type_name, full_inst_path);
                    }
                }
                this->__PVT__m_wildcard_inst_overrides.push_back(__SYM__override);
            } else {
                if ((! this->__PVT__m_inst_override_name_queues.exists(original_type_name))) {
                    __VlefCall_4__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
                    this->__PVT__m_inst_override_name_queues.at(original_type_name) 
                        = __VlefCall_4__new;
                }
                VL_NULL_CHECK(this->__PVT__m_inst_override_name_queues
                              .at(original_type_name), "../../uvm/distrib/src/base/uvm_factory.svh", 1176)->__PVT__queue.push_back(__SYM__override);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_has_wildcard(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_has_wildcard\n"); );
    // Body
    IData/*31:0*/ unnamedblk16__DOT__i;
    unnamedblk16__DOT__i = 0;
    {
        m_has_wildcard__Vfuncrtn = 0U;
        unnamedblk16__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk16__DOT__i, 
                          VL_LEN_IN(nm))) {
            if (((0x2aU == VL_GETC_N(nm,unnamedblk16__DOT__i)) 
                 | (0x3fU == VL_GETC_N(nm,unnamedblk16__DOT__i)))) {
                m_has_wildcard__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk16__DOT__i = ((IData)(1U) + unnamedblk16__DOT__i);
        }
        m_has_wildcard__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__102__verbosity;
    __Vtask_uvm_report_warning__102__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__102__line;
    __Vtask_uvm_report_warning__102__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__102__report_enabled_checked;
    __Vtask_uvm_report_warning__102__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ""s;
        inst_path = ((""s == parent_inst_path) ? name
                      : ((""s != name) ? VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(parent_inst_path, "."s), name)
                          : parent_inst_path));
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, wrapper);
        if ((VlNull{} == wrapper)) {
            if ((! this->__PVT__m_type_names.exists(requested_type_name))) {
                __Vtask_uvm_report_warning__102__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__102__context_name = ""s;
                __Vtask_uvm_report_warning__102__line = 0U;
                this->__Vtask_uvm_report_warning__102__filename = ""s;
                __Vtask_uvm_report_warning__102__verbosity = 0U;
                this->__Vtask_uvm_report_warning__102__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create an object of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                this->__Vtask_uvm_report_warning__102__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__103__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__103__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__104__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__102__id, this->__Vtask_uvm_report_warning__102__message, __Vtask_uvm_report_warning__102__verbosity, this->__Vtask_uvm_report_warning__102__filename, __Vtask_uvm_report_warning__102__line, this->__Vtask_uvm_report_warning__102__context_name, (IData)(__Vtask_uvm_report_warning__102__report_enabled_checked));
                create_object_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            wrapper = this->__PVT__m_type_names.at(requested_type_name);
        }
        VL_NULL_CHECK(wrapper, "../../uvm/distrib/src/base/uvm_factory.svh", 1219)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, create_object_by_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_object_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1244)->__VnoInFunc_create_object(vlProcess, vlSymsp, name, create_object_by_type__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__110__verbosity;
    __Vtask_uvm_report_warning__110__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__110__line;
    __Vtask_uvm_report_warning__110__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__110__report_enabled_checked;
    __Vtask_uvm_report_warning__110__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    std::string inst_path;
    {
        inst_path = ""s;
        inst_path = ((""s == parent_inst_path) ? name
                      : ((""s != name) ? VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(parent_inst_path, "."s), name)
                          : parent_inst_path));
        this->__PVT__m_override_info.clear();
        this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, inst_path, wrapper);
        if ((VlNull{} == wrapper)) {
            if ((! this->__PVT__m_type_names.exists(requested_type_name))) {
                __Vtask_uvm_report_warning__110__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__110__context_name = ""s;
                __Vtask_uvm_report_warning__110__line = 0U;
                this->__Vtask_uvm_report_warning__110__filename = ""s;
                __Vtask_uvm_report_warning__110__verbosity = 0U;
                this->__Vtask_uvm_report_warning__110__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot create a component of type '"s, requested_type_name), "' because it is not registered with the factory."s));
                this->__Vtask_uvm_report_warning__110__id = "BDTYP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__110__id, this->__Vtask_uvm_report_warning__110__message, __Vtask_uvm_report_warning__110__verbosity, this->__Vtask_uvm_report_warning__110__filename, __Vtask_uvm_report_warning__110__line, this->__Vtask_uvm_report_warning__110__context_name, (IData)(__Vtask_uvm_report_warning__110__report_enabled_checked));
                create_component_by_name__Vfuncrtn = VlNull{};
                goto __Vlabel0;
            }
            wrapper = this->__PVT__m_type_names.at(requested_type_name);
        }
        VL_NULL_CHECK(wrapper, "../../uvm/distrib/src/base/uvm_factory.svh", 1280)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_create_component_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string full_inst_path;
    full_inst_path = ((""s == parent_inst_path) ? name
                       : ((""s != name) ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(parent_inst_path, "."s), name)
                           : parent_inst_path));
    this->__PVT__m_override_info.clear();
    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, requested_type);
    VL_NULL_CHECK(requested_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1305)->__VnoInFunc_create_component(vlProcess, vlSymsp, name, parent, create_component_by_type__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_wrapper_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__117__verbosity;
    __Vtask_uvm_report_warning__117__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__117__line;
    __Vtask_uvm_report_warning__117__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__117__report_enabled_checked;
    __Vtask_uvm_report_warning__117__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__118__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__119__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (this->__PVT__m_type_names.exists(type_name)) {
            find_wrapper_by_name__Vfuncrtn = this->__PVT__m_type_names
                .at(type_name);
            goto __Vlabel0;
        }
        __Vtask_uvm_report_warning__117__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__117__context_name = ""s;
        __Vtask_uvm_report_warning__117__line = 0U;
        this->__Vtask_uvm_report_warning__117__filename = ""s;
        __Vtask_uvm_report_warning__117__verbosity = 0U;
        this->__Vtask_uvm_report_warning__117__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("find_wrapper_by_name: Type name '"s, type_name), "' not registered with the factory."s));
        this->__Vtask_uvm_report_warning__117__id = "UnknownTypeName"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__118__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__118__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__119__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__119__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__117__id, this->__Vtask_uvm_report_warning__117__message, __Vtask_uvm_report_warning__117__verbosity, this->__Vtask_uvm_report_warning__117__filename, __Vtask_uvm_report_warning__117__line, this->__Vtask_uvm_report_warning__117__context_name, (IData)(__Vtask_uvm_report_warning__117__report_enabled_checked));
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__121____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__121____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__123__Vfuncout;
    __Vfunc_uvm_re_match__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__123____Vincrement1;
    __Vfunc_uvm_re_match__123____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__124____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__124____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__126__Vfuncout;
    __Vfunc_uvm_re_match__126__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__126____Vincrement1;
    __Vfunc_uvm_re_match__126____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__130____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__130____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__132__Vfuncout;
    __Vfunc_uvm_re_match__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__132____Vincrement1;
    __Vfunc_uvm_re_match__132____Vincrement1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__uvm_is_match;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> __VlefCall_2__new;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefCall_0__uvm_is_match;
    IData/*31:0*/ unnamedblk17__DOT__index;
    IData/*31:0*/ unnamedblk18__DOT__i;
    unnamedblk18__DOT__i = 0;
    IData/*31:0*/ unnamedblk18__DOT__i__Vloopsize;
    unnamedblk18__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk19__DOT__index;
    unnamedblk19__DOT__index = 0;
    IData/*31:0*/ unnamedblk19__DOT__index__Vloopsize;
    unnamedblk19__DOT__index__Vloopsize = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> rtype;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> qc;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> lindex;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> __SYM__override;
    {
        if (this->__PVT__m_type_names.exists(requested_type_name)) {
            rtype = this->__PVT__m_type_names.at(requested_type_name);
        }
        if ((""s != full_inst_path)) {
            if ((VlNull{} == rtype)) {
                if (this->__PVT__m_inst_override_name_queues.exists(requested_type_name)) {
                    qc = this->__PVT__m_inst_override_name_queues
                        .at(requested_type_name);
                }
            } else if (this->__PVT__m_inst_override_queues.exists(rtype)) {
                qc = this->__PVT__m_inst_override_queues
                    .at(rtype);
            }
            if ((VlNull{} != qc)) {
                unnamedblk17__DOT__index = 0U;
                unnamedblk17__DOT__index = 0U;
                while (VL_LTS_III(32, unnamedblk17__DOT__index, VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1361)
                                  ->__PVT__queue.size())) {
                    this->__Vfunc_uvm_is_match__121__str 
                        = requested_type_name;
                    this->__Vfunc_uvm_is_match__121__expr 
                        = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1362)
                                                           ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1362)
                                             ->__PVT__orig_type_name);
                    this->__Vfunc_uvm_glob_to_re__122__glob 
                        = this->__Vfunc_uvm_is_match__121__expr;
                    this->__Vfunc_uvm_glob_to_re__122__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__122__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__122__Vfuncout;
                    this->__Vfunc_uvm_re_match__123__str 
                        = this->__Vfunc_uvm_is_match__121__str;
                    this->__Vfunc_uvm_re_match__123__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__123____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__123__re))) {
                            __Vfunc_uvm_re_match__123__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,0U))) {
                            this->__Vfunc_uvm_re_match__123__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__123__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__123__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__123__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__123__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__123__Vfuncout = 1U;
                                goto __Vlabel1;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__123__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__123__re))) {
                                    __Vfunc_uvm_re_match__123__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__123__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__123____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__123____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__123__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__123__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__123__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__123__re))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_is_match__121____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__123__Vfuncout;
                    __VlefCall_0__uvm_is_match = (0U 
                                                  == __Vfunc_uvm_is_match__121____VlefCall_0__uvm_re_match);
                    if (__VlefCall_0__uvm_is_match) {
                        this->__Vfunc_uvm_is_match__124__str 
                            = full_inst_path;
                        this->__Vfunc_uvm_is_match__124__expr 
                            = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1363)
                                                               ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1363)
                                                 ->__PVT__full_inst_path);
                        this->__Vfunc_uvm_glob_to_re__125__glob 
                            = this->__Vfunc_uvm_is_match__124__expr;
                        this->__Vfunc_uvm_glob_to_re__125__Vfuncout 
                            = this->__Vfunc_uvm_glob_to_re__125__glob;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                            = this->__Vfunc_uvm_glob_to_re__125__Vfuncout;
                        this->__Vfunc_uvm_re_match__126__str 
                            = this->__Vfunc_uvm_is_match__124__str;
                        this->__Vfunc_uvm_re_match__126__re 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                        __Vfunc_uvm_re_match__126____Vincrement1 = 0U;
                        {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                            if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__126__re))) {
                                __Vfunc_uvm_re_match__126__Vfuncout = 0U;
                                goto __Vlabel2;
                            }
                            if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,0U))) {
                                this->__Vfunc_uvm_re_match__126__re 
                                    = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__126__re,1U,
                                                  (VL_LEN_IN(this->__Vfunc_uvm_re_match__126__re) 
                                                   - (IData)(1U)));
                            }
                            while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                     != VL_LEN_IN(this->__Vfunc_uvm_re_match__126__str)) 
                                    & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                if (((VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                      != VL_GETC_N(this->__Vfunc_uvm_re_match__126__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                     & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    __Vfunc_uvm_re_match__126__Vfuncout = 1U;
                                    goto __Vlabel2;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            }
                            while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    != VL_LEN_IN(this->__Vfunc_uvm_re_match__126__str))) {
                                if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                         == VL_LEN_IN(this->__Vfunc_uvm_re_match__126__re))) {
                                        __Vfunc_uvm_re_match__126__Vfuncout = 0U;
                                        goto __Vlabel2;
                                    }
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                             == VL_GETC_N(this->__Vfunc_uvm_re_match__126__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                            | (0x3fU 
                                               == VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                } else {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                    __Vfunc_uvm_re_match__126____Vincrement1 
                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                        = ((IData)(1U) 
                                           + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                        = __Vfunc_uvm_re_match__126____Vincrement1;
                                }
                            }
                            while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                               VL_LEN_IN(this->__Vfunc_uvm_re_match__126__re)) 
                                    & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__126__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            }
                            __Vfunc_uvm_re_match__126__Vfuncout 
                                = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    == VL_LEN_IN(this->__Vfunc_uvm_re_match__126__re))
                                    ? 0U : 1U);
                            __Vlabel2: ;
                        }
                        __Vfunc_uvm_is_match__124____VlefCall_0__uvm_re_match 
                            = __Vfunc_uvm_re_match__126__Vfuncout;
                        __VlefCall_0__uvm_is_match 
                            = (0U == __Vfunc_uvm_is_match__124____VlefCall_0__uvm_re_match);
                    }
                    if (__VlefCall_0__uvm_is_match) {
                        this->__PVT__m_override_info.push_back(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1364)
                                                               ->__PVT__queue.at(unnamedblk17__DOT__index));
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                            if ((VlNull{} == __SYM__override)) {
                                __SYM__override = VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1367)
                                                                ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1367)
                                    ->__PVT__ovrd_type;
                                VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1368)
                                              ->__PVT__queue.atWriteAppend(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1368)->__PVT__selected = 1U;
                                lindex = VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1369)
                                    ->__PVT__queue.at(unnamedblk17__DOT__index);
                            }
                        } else {
                            VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1373)
                                          ->__PVT__queue.atWriteAppend(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1373)->__PVT__used 
                                = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1373)
                                                               ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1373)
                                   ->__PVT__used);
                            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1374)
                                                        ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1374)
                                          ->__PVT__ovrd_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1374)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                            if ((__VlefCall_1__get_type_name 
                                 == requested_type_name)) {
                                find_override_by_name__Vfuncrtn 
                                    = VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1375)
                                                    ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1375)
                                    ->__PVT__ovrd_type;
                            } else {
                                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1377)
                                                                                ->__PVT__queue.at(unnamedblk17__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1377)
                                                                        ->__PVT__ovrd_type, full_inst_path, find_override_by_name__Vfuncrtn);
                            }
                            goto __Vlabel0;
                        }
                    }
                    unnamedblk17__DOT__index = ((IData)(1U) 
                                                + unnamedblk17__DOT__index);
                }
            }
        }
        if ((((VlNull{} != rtype) & (! this->__PVT__m_inst_override_queues.exists(rtype))) 
             & (0U != this->__PVT__m_wildcard_inst_overrides.size()))) {
            __VlefCall_2__new = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class, vlSymsp);
            this->__PVT__m_inst_override_queues.at(rtype) 
                = __VlefCall_2__new;
            unnamedblk18__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk18__DOT__i, this->__PVT__m_wildcard_inst_overrides.size())) {
                unnamedblk18__DOT__i__Vloopsize = this->__PVT__m_wildcard_inst_overrides.size();
                this->__Vfunc_uvm_is_match__130__str 
                    = requested_type_name;
                this->__Vfunc_uvm_is_match__130__expr 
                    = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(this->__PVT__m_wildcard_inst_overrides.at(unnamedblk18__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1386)
                                         ->__PVT__orig_type_name);
                this->__Vfunc_uvm_glob_to_re__131__glob 
                    = this->__Vfunc_uvm_is_match__130__expr;
                this->__Vfunc_uvm_glob_to_re__131__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__131__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__131__Vfuncout;
                this->__Vfunc_uvm_re_match__132__str 
                    = this->__Vfunc_uvm_is_match__130__str;
                this->__Vfunc_uvm_re_match__132__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__132____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__132__re))) {
                        __Vfunc_uvm_re_match__132__Vfuncout = 0U;
                        goto __Vlabel3;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,0U))) {
                        this->__Vfunc_uvm_re_match__132__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__132__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__132__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__132__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__132__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__132__Vfuncout = 1U;
                            goto __Vlabel3;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__132__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__132__re))) {
                                __Vfunc_uvm_re_match__132__Vfuncout = 0U;
                                goto __Vlabel3;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__132__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__132____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__132____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__132__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__132__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__132__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__132__re))
                            ? 0U : 1U);
                    __Vlabel3: ;
                }
                __Vfunc_uvm_is_match__130____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__132__Vfuncout;
                __VlefCall_3__uvm_is_match = (0U == __Vfunc_uvm_is_match__130____VlefCall_0__uvm_re_match);
                if (__VlefCall_3__uvm_is_match) {
                    VL_NULL_CHECK(this->__PVT__m_inst_override_queues
                                  .at(rtype), "../../uvm/distrib/src/base/uvm_factory.svh", 1387)->__PVT__queue.push_back(this->__PVT__m_wildcard_inst_overrides.at(unnamedblk18__DOT__i));
                }
                if ((unnamedblk18__DOT__i__Vloopsize 
                     <= this->__PVT__m_wildcard_inst_overrides.size())) {
                    unnamedblk18__DOT__i = ((IData)(1U) 
                                            + unnamedblk18__DOT__i);
                }
            }
        }
        unnamedblk19__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk19__DOT__index, this->__PVT__m_type_overrides.size())) {
            unnamedblk19__DOT__index__Vloopsize = this->__PVT__m_type_overrides.size();
            if ((VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1393)
                 ->__PVT__orig_type_name == requested_type_name)) {
                this->__PVT__m_override_info.push_back(this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index));
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    if ((VlNull{} == __SYM__override)) {
                        __SYM__override = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1397)
                            ->__PVT__ovrd_type;
                        VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1398)->__PVT__selected = 1U;
                        lindex = this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index);
                    }
                } else {
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1403)->__PVT__used 
                        = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1403)
                           ->__PVT__used);
                    this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk19__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1404)
                                                            ->__PVT__ovrd_type, full_inst_path, find_override_by_name__Vfuncrtn);
                    goto __Vlabel0;
                }
            }
            if ((unnamedblk19__DOT__index__Vloopsize 
                 <= this->__PVT__m_type_overrides.size())) {
                unnamedblk19__DOT__index = ((IData)(1U) 
                                            + unnamedblk19__DOT__index);
            }
        }
        if (((IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) 
             & (VlNull{} != __SYM__override))) {
            VL_NULL_CHECK(lindex, "../../uvm/distrib/src/base/uvm_factory.svh", 1410)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "../../uvm/distrib/src/base/uvm_factory.svh", 1410)
                   ->__PVT__used);
            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, __SYM__override, full_inst_path, find_override_by_name__Vfuncrtn);
            goto __Vlabel0;
        }
        find_override_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_find_override_by_type\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__135__verbosity;
    __Vtask_uvm_report_error__135__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__135__line;
    __Vtask_uvm_report_error__135__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__135__report_enabled_checked;
    __Vtask_uvm_report_error__135__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__136__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__137__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_is_match__141____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__141____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__143__Vfuncout;
    __Vfunc_uvm_re_match__143__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__143____Vincrement1;
    __Vfunc_uvm_re_match__143____Vincrement1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_3;
    std::string __VlefCall_2__get_type_name;
    CData/*0:0*/ __VlefLogAnd_1;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk20__DOT__index;
    unnamedblk20__DOT__index = 0;
    IData/*31:0*/ unnamedblk20__DOT__index__Vloopsize;
    unnamedblk20__DOT__index__Vloopsize = 0;
    IData/*31:0*/ unnamedblk21__DOT__index;
    IData/*31:0*/ unnamedblk22__DOT__index;
    unnamedblk22__DOT__index = 0;
    IData/*31:0*/ unnamedblk22__DOT__index__Vloopsize;
    unnamedblk22__DOT__index__Vloopsize = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> __SYM__override;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override> lindex;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> qc;
    {
        qc = (this->__PVT__m_inst_override_queues.exists(requested_type)
               ? this->__PVT__m_inst_override_queues
              .at(requested_type) : VlNull{});
        unnamedblk20__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk20__DOT__index, this->__PVT__m_override_info.size())) {
            unnamedblk20__DOT__index__Vloopsize = this->__PVT__m_override_info.size();
            if ((VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk20__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1436)
                 ->__PVT__orig_type == requested_type)) {
                __Vtask_uvm_report_error__135__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_error__135__context_name = ""s;
                __Vtask_uvm_report_error__135__line = 0U;
                this->__Vtask_uvm_report_error__135__filename = ""s;
                __Vtask_uvm_report_error__135__verbosity = 0U;
                this->__Vtask_uvm_report_error__135__message = "Recursive loop detected while finding override."s;
                this->__Vtask_uvm_report_error__135__id = "OVRDLOOP"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__137__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__137__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__135__id, this->__Vtask_uvm_report_error__135__message, __Vtask_uvm_report_error__135__verbosity, this->__Vtask_uvm_report_error__135__filename, __Vtask_uvm_report_error__135__line, this->__Vtask_uvm_report_error__135__context_name, (IData)(__Vtask_uvm_report_error__135__report_enabled_checked));
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass)))) {
                    this->__VnoInFunc_debug_create_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, ""s);
                }
                VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk20__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1441)->__PVT__used 
                    = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk20__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1441)
                       ->__PVT__used);
                find_override_by_type__Vfuncrtn = requested_type;
                goto __Vlabel0;
            }
            if ((unnamedblk20__DOT__index__Vloopsize 
                 <= this->__PVT__m_override_info.size())) {
                unnamedblk20__DOT__index = ((IData)(1U) 
                                            + unnamedblk20__DOT__index);
            }
        }
        if (((""s != full_inst_path) & (VlNull{} != qc))) {
            unnamedblk21__DOT__index = 0U;
            unnamedblk21__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk21__DOT__index, VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1448)
                              ->__PVT__queue.size())) {
                __VlefLogAnd_1 = (VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1449)
                                                ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1449)
                                  ->__PVT__orig_type 
                                  == requested_type);
                if ((1U & (~ (IData)(__VlefLogAnd_1)))) {
                    __VlefLogAnd_1 = (("<unknown>"s 
                                       != VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1450)
                                                        ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1450)
                                       ->__PVT__orig_type_name) 
                                      && (""s != VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1451)
                                                               ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1451)
                                          ->__PVT__orig_type_name));
                    if (__VlefLogAnd_1) {
                        VL_NULL_CHECK(requested_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1452)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
                        __VlefLogAnd_1 = (VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1452)
                                                        ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1452)
                                          ->__PVT__orig_type_name 
                                          == __VlefCall_0__get_type_name);
                    }
                }
                if (__VlefLogAnd_1) {
                    this->__Vfunc_uvm_is_match__141__str 
                        = full_inst_path;
                    this->__Vfunc_uvm_is_match__141__expr 
                        = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1453)
                                                           ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1453)
                                             ->__PVT__full_inst_path);
                    this->__Vfunc_uvm_glob_to_re__142__glob 
                        = this->__Vfunc_uvm_is_match__141__expr;
                    this->__Vfunc_uvm_glob_to_re__142__Vfuncout 
                        = this->__Vfunc_uvm_glob_to_re__142__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = this->__Vfunc_uvm_glob_to_re__142__Vfuncout;
                    this->__Vfunc_uvm_re_match__143__str 
                        = this->__Vfunc_uvm_is_match__141__str;
                    this->__Vfunc_uvm_re_match__143__re 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                    __Vfunc_uvm_re_match__143____Vincrement1 = 0U;
                    {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__143__re))) {
                            __Vfunc_uvm_re_match__143__Vfuncout = 0U;
                            goto __Vlabel1;
                        }
                        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,0U))) {
                            this->__Vfunc_uvm_re_match__143__re 
                                = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__143__re,1U,
                                              (VL_LEN_IN(this->__Vfunc_uvm_re_match__143__re) 
                                               - (IData)(1U)));
                        }
                        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__143__str)) 
                                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                  != VL_GETC_N(this->__Vfunc_uvm_re_match__143__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                __Vfunc_uvm_re_match__143__Vfuncout = 1U;
                                goto __Vlabel1;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        }
                        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                != VL_LEN_IN(this->__Vfunc_uvm_re_match__143__str))) {
                            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__143__re))) {
                                    __Vfunc_uvm_re_match__143__Vfuncout = 0U;
                                    goto __Vlabel1;
                                }
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                         == VL_GETC_N(this->__Vfunc_uvm_re_match__143__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                        | (0x3fU == 
                                           VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                            } else {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                __Vfunc_uvm_re_match__143____Vincrement1 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                    = ((IData)(1U) 
                                       + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                    = __Vfunc_uvm_re_match__143____Vincrement1;
                            }
                        }
                        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                           VL_LEN_IN(this->__Vfunc_uvm_re_match__143__re)) 
                                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__143__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        }
                        __Vfunc_uvm_re_match__143__Vfuncout 
                            = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                == VL_LEN_IN(this->__Vfunc_uvm_re_match__143__re))
                                ? 0U : 1U);
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_is_match__141____VlefCall_0__uvm_re_match 
                        = __Vfunc_uvm_re_match__143__Vfuncout;
                    __VlefLogAnd_1 = (0U == __Vfunc_uvm_is_match__141____VlefCall_0__uvm_re_match);
                }
                if (__VlefLogAnd_1) {
                    this->__PVT__m_override_info.push_back(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1454)
                                                           ->__PVT__queue.at(unnamedblk21__DOT__index));
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                        if ((VlNull{} == __SYM__override)) {
                            __SYM__override = VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1457)
                                                            ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1457)
                                ->__PVT__ovrd_type;
                            VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1458)
                                          ->__PVT__queue.atWriteAppend(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1458)->__PVT__selected = 1U;
                            lindex = VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1459)
                                ->__PVT__queue.at(unnamedblk21__DOT__index);
                        }
                    } else {
                        VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1463)
                                      ->__PVT__queue.atWriteAppend(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1463)->__PVT__used 
                            = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1463)
                                                           ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1463)
                               ->__PVT__used);
                        if ((VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1464)
                                           ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1464)
                             ->__PVT__ovrd_type == requested_type)) {
                            find_override_by_type__Vfuncrtn 
                                = requested_type;
                        } else {
                            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, VL_NULL_CHECK(VL_NULL_CHECK(qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1467)
                                                                                ->__PVT__queue.at(unnamedblk21__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1467)
                                                                    ->__PVT__ovrd_type, full_inst_path, find_override_by_type__Vfuncrtn);
                        }
                        goto __Vlabel0;
                    }
                }
                unnamedblk21__DOT__index = ((IData)(1U) 
                                            + unnamedblk21__DOT__index);
            }
        }
        unnamedblk22__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk22__DOT__index, this->__PVT__m_type_overrides.size())) {
            unnamedblk22__DOT__index__Vloopsize = this->__PVT__m_type_overrides.size();
            __VlefLogAnd_3 = (VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1474)
                              ->__PVT__orig_type == requested_type);
            if ((1U & (~ (IData)(__VlefLogAnd_3)))) {
                __VlefLogAnd_3 = ((("<unknown>"s != VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1475)
                                    ->__PVT__orig_type_name) 
                                   && (""s != VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1476)
                                       ->__PVT__orig_type_name)) 
                                  && (VlNull{} != requested_type));
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(requested_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1478)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                    __VlefLogAnd_3 = (VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1478)
                                      ->__PVT__orig_type_name 
                                      == __VlefCall_2__get_type_name);
                }
            }
            if (__VlefLogAnd_3) {
                this->__PVT__m_override_info.push_back(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index));
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) {
                    if ((VlNull{} == __SYM__override)) {
                        __SYM__override = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1482)
                            ->__PVT__ovrd_type;
                        VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1483)->__PVT__selected = 1U;
                        lindex = this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index);
                    }
                } else {
                    VL_NULL_CHECK(this->__PVT__m_type_overrides.atWriteAppend(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1488)->__PVT__used 
                        = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1488)
                           ->__PVT__used);
                    if ((VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1489)
                         ->__PVT__ovrd_type == requested_type)) {
                        find_override_by_type__Vfuncrtn 
                            = requested_type;
                    } else {
                        this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk22__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1492)
                                                                ->__PVT__ovrd_type, full_inst_path, find_override_by_type__Vfuncrtn);
                    }
                    goto __Vlabel0;
                }
            }
            if ((unnamedblk22__DOT__index__Vloopsize 
                 <= this->__PVT__m_type_overrides.size())) {
                unnamedblk22__DOT__index = ((IData)(1U) 
                                            + unnamedblk22__DOT__index);
            }
        }
        if (((IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass) 
             & (VlNull{} != __SYM__override))) {
            VL_NULL_CHECK(lindex, "../../uvm/distrib/src/base/uvm_factory.svh", 1505)->__PVT__used 
                = ((IData)(1U) + VL_NULL_CHECK(lindex, "../../uvm/distrib/src/base/uvm_factory.svh", 1505)
                   ->__PVT__used);
            if ((__SYM__override == requested_type)) {
                find_override_by_type__Vfuncrtn = requested_type;
            } else {
                this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, __SYM__override, full_inst_path, find_override_by_type__Vfuncrtn);
            }
            goto __Vlabel0;
        }
        find_override_by_type__Vfuncrtn = requested_type;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ all_types) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_is_match__150____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__150____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__152__Vfuncout;
    __Vfunc_uvm_re_match__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__152____Vincrement1;
    __Vfunc_uvm_re_match__152____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__155__verbosity;
    __Vfunc_uvm_report_enabled__155__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__155__severity;
    __Vfunc_uvm_report_enabled__155__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__160__verbosity;
    __Vtask_uvm_report_info__160__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__160__line;
    __Vtask_uvm_report_info__160__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__160__report_enabled_checked;
    __Vtask_uvm_report_info__160__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__161__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__162__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_8__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefExpr_6;
    std::string __VlefCall_5__get_type_name;
    CData/*0:0*/ __VlefLogAnd_4;
    std::string __VlefCall_3__get_type_name;
    CData/*0:0*/ __VlefCall_2__uvm_is_match;
    std::string __VlefCall_1__get_type_name;
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk23__DOT__i;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk23__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk23__DOT__i__Vmore;
    unnamedblk23__DOT__i__Vmore = 0;
    std::string unnamedblk24__DOT__i;
    std::string unnamedblk24__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk24__DOT__i__Vmore;
    unnamedblk24__DOT__i__Vmore = 0;
    IData/*31:0*/ unnamedblk25__DOT__max1;
    IData/*31:0*/ unnamedblk25__DOT__max2;
    IData/*31:0*/ unnamedblk25__DOT__max3;
    std::string unnamedblk25__DOT__dash;
    std::string unnamedblk25__DOT__space;
    std::string unnamedblk25__DOT__unnamedblk26__DOT__j;
    std::string unnamedblk25__DOT__unnamedblk26__DOT__j__Vnext;
    CData/*0:0*/ unnamedblk25__DOT__unnamedblk26__DOT__j__Vmore;
    unnamedblk25__DOT__unnamedblk26__DOT__j__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc;
    IData/*31:0*/ unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i;
    std::string unnamedblk25__DOT__unnamedblk29__DOT__j;
    std::string unnamedblk25__DOT__unnamedblk29__DOT__j__Vnext;
    CData/*0:0*/ unnamedblk25__DOT__unnamedblk29__DOT__j__Vmore;
    unnamedblk25__DOT__unnamedblk29__DOT__j__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class> unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc;
    IData/*31:0*/ unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i;
    IData/*31:0*/ unnamedblk25__DOT__unnamedblk32__DOT__i;
    unnamedblk25__DOT__unnamedblk32__DOT__i = 0;
    IData/*31:0*/ unnamedblk25__DOT__unnamedblk33__DOT__index;
    unnamedblk25__DOT__unnamedblk33__DOT__index = 0;
    CData/*0:0*/ unnamedblk34__DOT__banner;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    std::string key;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_queue_class>> sorted_override_queues;
    VlQueue<std::string> qs;
    std::string tmp;
    IData/*31:0*/ id;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> obj;
    key = ""s;
    sorted_override_queues.clear();
    qs.clear();
    qs.atDefault().clear();
    tmp = ""s;
    id = 0U;
    unnamedblk23__DOT__i__Vmore = (0U != this->__PVT__m_inst_override_queues.first(unnamedblk23__DOT__i__Vnext));
    while (unnamedblk23__DOT__i__Vmore) {
        unnamedblk23__DOT__i = unnamedblk23__DOT__i__Vnext;
        unnamedblk23__DOT__i__Vmore = (0U != this->__PVT__m_inst_override_queues.next(unnamedblk23__DOT__i__Vnext));
        obj = unnamedblk23__DOT__i;
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_factory.svh", 1534)->__VnoInFunc_get_type_name(vlSymsp, tmp);
        if ((""s == tmp)) {
            __Vincrement1 = id;
            id = ((IData)(1U) + id);
            VL_SFORMAT_NX(tmp,"__unnamed_id_%0d",1, '~',32,__Vincrement1);
        }
        sorted_override_queues.at(tmp) = this->__PVT__m_inst_override_queues
            .at(unnamedblk23__DOT__i);
    }
    unnamedblk24__DOT__i__Vmore = (0U != this->__PVT__m_inst_override_name_queues.first(unnamedblk24__DOT__i__Vnext));
    while (unnamedblk24__DOT__i__Vmore) {
        unnamedblk24__DOT__i = unnamedblk24__DOT__i__Vnext;
        unnamedblk24__DOT__i__Vmore = (0U != this->__PVT__m_inst_override_name_queues.next(unnamedblk24__DOT__i__Vnext));
        sorted_override_queues.at(unnamedblk24__DOT__i) 
            = this->__PVT__m_inst_override_name_queues
            .at(unnamedblk24__DOT__i);
    }
    qs.push_back("\n#### Factory Configuration (*)\n\n"s);
    if ((1U & ((~ (0U != this->__PVT__m_type_overrides.size())) 
               & (~ (0U != sorted_override_queues.size()))))) {
        qs.push_back("  No instance or type overrides are registered with this factory\n"s);
    } else {
        unnamedblk25__DOT__max1 = 0U;
        unnamedblk25__DOT__max2 = 0U;
        unnamedblk25__DOT__max3 = 0U;
        unnamedblk25__DOT__dash = "---------------------------------------------------------------------------------------------------"s;
        unnamedblk25__DOT__space = "                                                                                                   "s;
        if ((0U != sorted_override_queues.size())) {
            unnamedblk25__DOT__unnamedblk26__DOT__j__Vmore 
                = (0U != sorted_override_queues.first(unnamedblk25__DOT__unnamedblk26__DOT__j__Vnext));
            while (unnamedblk25__DOT__unnamedblk26__DOT__j__Vmore) {
                unnamedblk25__DOT__unnamedblk26__DOT__j 
                    = unnamedblk25__DOT__unnamedblk26__DOT__j__Vnext;
                unnamedblk25__DOT__unnamedblk26__DOT__j__Vmore 
                    = (0U != sorted_override_queues.next(unnamedblk25__DOT__unnamedblk26__DOT__j__Vnext));
                unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc 
                    = sorted_override_queues.at(unnamedblk25__DOT__unnamedblk26__DOT__j);
                unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i = 0U;
                unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i, VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1560)
                                  ->__PVT__queue.size())) {
                    if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1561)
                                                               ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1561)
                                                 ->__PVT__orig_type_name), unnamedblk25__DOT__max1)) {
                        unnamedblk25__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1562)
                                                                          ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1562)
                                                            ->__PVT__orig_type_name);
                    }
                    if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1563)
                                                               ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1563)
                                                 ->__PVT__full_inst_path), unnamedblk25__DOT__max2)) {
                        unnamedblk25__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1564)
                                                                          ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1564)
                                                            ->__PVT__full_inst_path);
                    }
                    if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1565)
                                                               ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1565)
                                                 ->__PVT__ovrd_type_name), unnamedblk25__DOT__max3)) {
                        unnamedblk25__DOT__max3 = VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1566)
                                                                          ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1566)
                                                            ->__PVT__ovrd_type_name);
                    }
                    unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i 
                        = ((IData)(1U) + unnamedblk25__DOT__unnamedblk26__DOT__unnamedblk27__DOT__unnamedblk28__DOT__i);
                }
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk25__DOT__max1)) {
                unnamedblk25__DOT__max1 = 0x0000000eU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk25__DOT__max2)) {
                unnamedblk25__DOT__max2 = 0x0000000dU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk25__DOT__max3)) {
                unnamedblk25__DOT__max3 = 0x0000000dU;
            }
            qs.push_back("Instance Overrides:\n\n"s);
            __Vtemp_1 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                    (unnamedblk25__DOT__max1 
                                     - (IData)(0x0000000eU)));
            __Vtemp_2 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                    (unnamedblk25__DOT__max2 
                                     - (IData)(0x0000000dU)));
            __Vtemp_3 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                    (unnamedblk25__DOT__max3 
                                     - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0s  Override Path%0s  Override Type%0s\n",3
                                          , 'S',&(__Vtemp_1)
                                          , 'S',&(__Vtemp_2)
                                          , 'S',&(__Vtemp_3)) );
            __Vtemp_4 = VL_SUBSTR_N(unnamedblk25__DOT__dash,1U,unnamedblk25__DOT__max1);
            __Vtemp_5 = VL_SUBSTR_N(unnamedblk25__DOT__dash,1U,unnamedblk25__DOT__max2);
            __Vtemp_6 = VL_SUBSTR_N(unnamedblk25__DOT__dash,1U,unnamedblk25__DOT__max3);
            qs.push_back(VL_SFORMATF_N_NX("  %0s  %0s  %0s\n",3
                                          , 'S',&(__Vtemp_4)
                                          , 'S',&(__Vtemp_5)
                                          , 'S',&(__Vtemp_6)) );
            unnamedblk25__DOT__unnamedblk29__DOT__j__Vmore 
                = (0U != sorted_override_queues.first(unnamedblk25__DOT__unnamedblk29__DOT__j__Vnext));
            while (unnamedblk25__DOT__unnamedblk29__DOT__j__Vmore) {
                unnamedblk25__DOT__unnamedblk29__DOT__j 
                    = unnamedblk25__DOT__unnamedblk29__DOT__j__Vnext;
                unnamedblk25__DOT__unnamedblk29__DOT__j__Vmore 
                    = (0U != sorted_override_queues.next(unnamedblk25__DOT__unnamedblk29__DOT__j__Vnext));
                unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc 
                    = sorted_override_queues.at(unnamedblk25__DOT__unnamedblk29__DOT__j);
                unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i = 0U;
                unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i, VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1584)
                                  ->__PVT__queue.size())) {
                    __Vtemp_7 = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1585)
                                              ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1585)
                        ->__PVT__orig_type_name;
                    __Vtemp_8 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                            (unnamedblk25__DOT__max1 
                                             - VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1586)
                                                                       ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1586)
                                                         ->__PVT__orig_type_name)));
                    __Vtemp_9 = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1587)
                                              ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1587)
                        ->__PVT__full_inst_path;
                    __Vtemp_10 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                             (unnamedblk25__DOT__max2 
                                              - VL_LEN_IN(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1588)
                                                                        ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1588)
                                                          ->__PVT__full_inst_path)));
                    qs.push_back(VL_SFORMATF_N_NX("  %0s%0s  %0s%0s",4
                                                  , 'S',&(__Vtemp_7)
                                                  , 'S',&(__Vtemp_8)
                                                  , 'S',&(__Vtemp_9)
                                                  , 'S',&(__Vtemp_10)) );
                    __Vtemp_11 = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__qc, "../../uvm/distrib/src/base/uvm_factory.svh", 1589)
                                               ->__PVT__queue.at(unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1589)
                        ->__PVT__ovrd_type_name;
                    qs.push_back(VL_SFORMATF_N_NX("  %0s\n",1
                                                  , 'S',&(__Vtemp_11)) );
                    unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i 
                        = ((IData)(1U) + unnamedblk25__DOT__unnamedblk29__DOT__unnamedblk30__DOT__unnamedblk31__DOT__i);
                }
            }
        } else {
            qs.push_back("No instance overrides are registered with this factory\n"s);
        }
        if ((0U != this->__PVT__m_type_overrides.size())) {
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk25__DOT__max3)) {
                unnamedblk25__DOT__max3 = 0x0000000dU;
            }
            unnamedblk25__DOT__unnamedblk32__DOT__i = 0U;
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk25__DOT__max1)) {
                unnamedblk25__DOT__max1 = 0x0000000eU;
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk25__DOT__max2)) {
                unnamedblk25__DOT__max2 = 0x0000000dU;
            }
            while (VL_LTS_III(32, unnamedblk25__DOT__unnamedblk32__DOT__i, this->__PVT__m_type_overrides.size())) {
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk32__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1604)
                                             ->__PVT__orig_type_name), unnamedblk25__DOT__max1)) {
                    unnamedblk25__DOT__max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk32__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1605)
                                                        ->__PVT__orig_type_name);
                }
                if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk32__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1606)
                                             ->__PVT__ovrd_type_name), unnamedblk25__DOT__max2)) {
                    unnamedblk25__DOT__max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk32__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1607)
                                                        ->__PVT__ovrd_type_name);
                }
                unnamedblk25__DOT__unnamedblk32__DOT__i 
                    = ((IData)(1U) + unnamedblk25__DOT__unnamedblk32__DOT__i);
            }
            if (VL_GTS_III(32, 0x0000000dU, unnamedblk25__DOT__max2)) {
                unnamedblk25__DOT__max2 = 0x0000000dU;
            }
            if (VL_GTS_III(32, 0x0000000eU, unnamedblk25__DOT__max1)) {
                unnamedblk25__DOT__max1 = 0x0000000eU;
            }
            qs.push_back("\nType Overrides:\n\n"s);
            __Vtemp_12 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                     (unnamedblk25__DOT__max1 
                                      - (IData)(0x0000000eU)));
            __Vtemp_13 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                     (unnamedblk25__DOT__max2 
                                      - (IData)(0x0000000dU)));
            qs.push_back(VL_SFORMATF_N_NX("  Requested Type%0s  Override Type%0s\n",2
                                          , 'S',&(__Vtemp_12)
                                          , 'S',&(__Vtemp_13)) );
            __Vtemp_14 = VL_SUBSTR_N(unnamedblk25__DOT__dash,1U,unnamedblk25__DOT__max1);
            __Vtemp_15 = VL_SUBSTR_N(unnamedblk25__DOT__dash,1U,unnamedblk25__DOT__max2);
            qs.push_back(VL_SFORMATF_N_NX("  %0s  %0s\n",2
                                          , 'S',&(__Vtemp_14)
                                          , 'S',&(__Vtemp_15)) );
            unnamedblk25__DOT__unnamedblk33__DOT__index = 0U;
            while (VL_LTS_III(32, unnamedblk25__DOT__unnamedblk33__DOT__index, this->__PVT__m_type_overrides.size())) {
                __Vtemp_16 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk33__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1618)
                    ->__PVT__orig_type_name;
                __Vtemp_17 = VL_SUBSTR_N(unnamedblk25__DOT__space,1U,
                                         (unnamedblk25__DOT__max1 
                                          - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk33__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1619)
                                                      ->__PVT__orig_type_name)));
                __Vtemp_18 = VL_NULL_CHECK(this->__PVT__m_type_overrides.at(unnamedblk25__DOT__unnamedblk33__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1620)
                    ->__PVT__ovrd_type_name;
                qs.push_back(VL_SFORMATF_N_NX("  %0s%0s  %0s\n",3
                                              , 'S',&(__Vtemp_16)
                                              , 'S',&(__Vtemp_17)
                                              , 'S',&(__Vtemp_18)) );
                unnamedblk25__DOT__unnamedblk33__DOT__index 
                    = ((IData)(1U) + unnamedblk25__DOT__unnamedblk33__DOT__index);
            }
        } else {
            qs.push_back("\nNo type overrides are registered with this factory\n"s);
        }
    }
    __VlefExpr_0 = VL_LTES_III(32, 1U, all_types);
    if (__VlefExpr_0) {
        __VlefExpr_0 = (0U != this->__PVT__m_type_names.first(key));
    }
    if (__VlefExpr_0) {
        unnamedblk34__DOT__banner = 0U;
        qs.push_back(VL_SFORMATF_N_NX("\nAll types registered with the factory: %0d total\n",1
                                      , '~',32,this->__PVT__m_types.size()) );
        do {
            __VlefCall_2__uvm_is_match = VL_GTS_III(32, 2U, all_types);
            if (__VlefCall_2__uvm_is_match) {
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "../../uvm/distrib/src/base/uvm_factory.svh", 1631)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                this->__Vfunc_uvm_is_match__150__str 
                    = VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name);
                this->__Vfunc_uvm_is_match__150__expr = "uvm_*"s;
                this->__Vfunc_uvm_glob_to_re__151__glob 
                    = this->__Vfunc_uvm_is_match__150__expr;
                this->__Vfunc_uvm_glob_to_re__151__Vfuncout 
                    = this->__Vfunc_uvm_glob_to_re__151__glob;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                    = this->__Vfunc_uvm_glob_to_re__151__Vfuncout;
                this->__Vfunc_uvm_re_match__152__str 
                    = this->__Vfunc_uvm_is_match__150__str;
                this->__Vfunc_uvm_re_match__152__re 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                __Vfunc_uvm_re_match__152____Vincrement1 = 0U;
                {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                    if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__152__re))) {
                        __Vfunc_uvm_re_match__152__Vfuncout = 0U;
                        goto __Vlabel0;
                    }
                    if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,0U))) {
                        this->__Vfunc_uvm_re_match__152__re 
                            = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__152__re,1U,
                                          (VL_LEN_IN(this->__Vfunc_uvm_re_match__152__re) 
                                           - (IData)(1U)));
                    }
                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                             != VL_LEN_IN(this->__Vfunc_uvm_re_match__152__str)) 
                            & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        if (((VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                              != VL_GETC_N(this->__Vfunc_uvm_re_match__152__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                             & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            __Vfunc_uvm_re_match__152__Vfuncout = 1U;
                            goto __Vlabel0;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    }
                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            != VL_LEN_IN(this->__Vfunc_uvm_re_match__152__str))) {
                        if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                 == VL_LEN_IN(this->__Vfunc_uvm_re_match__152__re))) {
                                __Vfunc_uvm_re_match__152__Vfuncout = 0U;
                                goto __Vlabel0;
                            }
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                     == VL_GETC_N(this->__Vfunc_uvm_re_match__152__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                    | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                        } else {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                            __Vfunc_uvm_re_match__152____Vincrement1 
                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                = __Vfunc_uvm_re_match__152____Vincrement1;
                        }
                    }
                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                       VL_LEN_IN(this->__Vfunc_uvm_re_match__152__re)) 
                            & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__152__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    }
                    __Vfunc_uvm_re_match__152__Vfuncout 
                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            == VL_LEN_IN(this->__Vfunc_uvm_re_match__152__re))
                            ? 0U : 1U);
                    __Vlabel0: ;
                }
                __Vfunc_uvm_is_match__150____VlefCall_0__uvm_re_match 
                    = __Vfunc_uvm_re_match__152__Vfuncout;
                __VlefCall_2__uvm_is_match = (0U == __Vfunc_uvm_is_match__150____VlefCall_0__uvm_re_match);
            }
            __VlefLogAnd_4 = (1U & (~ (IData)(__VlefCall_2__uvm_is_match)));
            if (__VlefLogAnd_4) {
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "../../uvm/distrib/src/base/uvm_factory.svh", 1632)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                __VlefLogAnd_4 = (key == __VlefCall_3__get_type_name);
            }
            if (__VlefLogAnd_4) {
                if ((1U & (~ (IData)(unnamedblk34__DOT__banner)))) {
                    qs.push_back("  Type Name\n"s);
                    qs.push_back("  ---------\n"s);
                    unnamedblk34__DOT__banner = 1U;
                }
                VL_NULL_CHECK(this->__PVT__m_type_names
                              .at(key), "../../uvm/distrib/src/base/uvm_factory.svh", 1638)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                qs.push_back(VL_SFORMATF_N_NX("  %s\n",1
                                              , 'S',&(__VlefCall_5__get_type_name)) );
            }
            __VlefExpr_6 = (0U != this->__PVT__m_type_names.next(key));
        } while (__VlefExpr_6);
    }
    qs.push_back("(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    this->__Vfunc_uvm_report_enabled__155__id = "UVM/FACTORY/PRINT"s;
    __Vfunc_uvm_report_enabled__155__severity = 0U;
    __Vfunc_uvm_report_enabled__155__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__156__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__156__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__157__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__155__verbosity, (IData)(__Vfunc_uvm_report_enabled__155__severity), this->__Vfunc_uvm_report_enabled__155__id, __VlefCall_7__uvm_report_enabled);
    if ((0U != __VlefCall_7__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__159__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__159__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
        __VlefCall_8__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__159__Vfuncout;
        __Vtask_uvm_report_info__160__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__160__context_name = ""s;
        __Vtask_uvm_report_info__160__line = 0x0000066dU;
        this->__Vtask_uvm_report_info__160__filename = "../../uvm/distrib/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__160__verbosity = 0U;
        this->__Vtask_uvm_report_info__160__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_8__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__160__id = "UVM/FACTORY/PRINT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__161__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__161__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__162__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__162__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__160__id, this->__Vtask_uvm_report_info__160__message, __Vtask_uvm_report_info__160__verbosity, this->__Vtask_uvm_report_info__160__filename, __Vtask_uvm_report_info__160__line, this->__Vtask_uvm_report_info__160__context_name, (IData)(__Vtask_uvm_report_info__160__report_enabled_checked));
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, requested_type_name, VlNull{}, parent_inst_path, name);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_debug_create_by_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_m_debug_create(vlProcess, vlSymsp, ""s, requested_type, parent_inst_path, name);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_create\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__166__verbosity;
    __Vtask_uvm_report_warning__166__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__166__line;
    __Vtask_uvm_report_warning__166__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__166__report_enabled_checked;
    __Vtask_uvm_report_warning__166__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk35__DOT__index;
    unnamedblk35__DOT__index = 0;
    IData/*31:0*/ unnamedblk35__DOT__index__Vloopsize;
    unnamedblk35__DOT__index__Vloopsize = 0;
    std::string full_inst_path;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> result;
    {
        full_inst_path = ""s;
        full_inst_path = ((""s == parent_inst_path)
                           ? name : ((""s != name) ? 
                                     VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(parent_inst_path, "."s), name)
                                      : parent_inst_path));
        this->__PVT__m_override_info.clear();
        if ((VlNull{} == requested_type)) {
            if (((! this->__PVT__m_type_names.exists(requested_type_name)) 
                 & (! this->__PVT__m_lookup_strs.exists(requested_type_name)))) {
                __Vtask_uvm_report_warning__166__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__166__context_name = ""s;
                __Vtask_uvm_report_warning__166__line = 0U;
                this->__Vtask_uvm_report_warning__166__filename = ""s;
                __Vtask_uvm_report_warning__166__verbosity = 0U;
                this->__Vtask_uvm_report_warning__166__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("The factory does not recognize '"s, requested_type_name), "' as a registered type."s));
                this->__Vtask_uvm_report_warning__166__id = "Factory Warning"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__167__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__167__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__168__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__166__id, this->__Vtask_uvm_report_warning__166__message, __Vtask_uvm_report_warning__166__verbosity, this->__Vtask_uvm_report_warning__166__filename, __Vtask_uvm_report_warning__166__line, this->__Vtask_uvm_report_warning__166__context_name, (IData)(__Vtask_uvm_report_warning__166__report_enabled_checked));
                goto __Vlabel0;
            }
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            this->__VnoInFunc_find_override_by_name(vlProcess, vlSymsp, requested_type_name, full_inst_path, result);
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 1U;
            if ((! this->__PVT__m_types.exists(requested_type))) {
                this->__VnoInFunc_register(vlProcess, vlSymsp, requested_type);
            }
            this->__VnoInFunc_find_override_by_type(vlProcess, vlSymsp, requested_type, full_inst_path, result);
            if ((""s == requested_type_name)) {
                VL_NULL_CHECK(requested_type, "../../uvm/distrib/src/base/uvm_factory.svh", 1707)->__VnoInFunc_get_type_name(vlSymsp, requested_type_name);
            }
        }
        this->__VnoInFunc_m_debug_display(vlProcess, vlSymsp, requested_type_name, result, full_inst_path);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_default_factory__Vclpkg.__PVT__m_debug_pass = 0U;
        unnamedblk35__DOT__index = 0U;
        while (VL_LTS_III(32, unnamedblk35__DOT__index, this->__PVT__m_override_info.size())) {
            unnamedblk35__DOT__index__Vloopsize = this->__PVT__m_override_info.size();
            VL_NULL_CHECK(this->__PVT__m_override_info.atWriteAppend(unnamedblk35__DOT__index), "../../uvm/distrib/src/base/uvm_factory.svh", 1714)->__PVT__selected = 0U;
            if ((unnamedblk35__DOT__index__Vloopsize 
                 <= this->__PVT__m_override_info.size())) {
                unnamedblk35__DOT__index = ((IData)(1U) 
                                            + unnamedblk35__DOT__index);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::__VnoInFunc_m_debug_display\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__176__verbosity;
    __Vfunc_uvm_report_enabled__176__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__176__severity;
    __Vfunc_uvm_report_enabled__176__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__177__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__178__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__181__verbosity;
    __Vtask_uvm_report_info__181__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__181__line;
    __Vtask_uvm_report_info__181__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__181__report_enabled_checked;
    __Vtask_uvm_report_info__181__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    IData/*31:0*/ unnamedblk36__DOT__i;
    unnamedblk36__DOT__i = 0;
    IData/*31:0*/ unnamedblk37__DOT__i;
    unnamedblk37__DOT__i = 0;
    IData/*31:0*/ max1;
    IData/*31:0*/ max2;
    IData/*31:0*/ max3;
    std::string dash;
    std::string space;
    VlQueue<std::string> qs;
    max1 = 0U;
    max2 = 0U;
    max3 = 0U;
    dash = "---------------------------------------------------------------------------------------------------"s;
    space = "                                                                                                   "s;
    qs.clear();
    qs.atDefault().clear();
    qs.push_back("\n#### Factory Override Information (*)\n\n"s);
    qs.push_back(VL_SFORMATF_N_NX("Given a request for an object of type '%s' with an instance\npath of '%s' the factory encountered\n\n",2
                                  , 'S',&(requested_type_name)
                                  , 'S',&(full_inst_path)) );
    if ((0U == this->__PVT__m_override_info.size())) {
        qs.push_back("no relevant overrides.\n\n"s);
    } else {
        qs.push_back("the following relevant overrides. An 'x' next to a match indicates a\nmatch that was ignored.\n\n"s);
        unnamedblk36__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk36__DOT__i, this->__PVT__m_override_info.size())) {
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1743)
                                         ->__PVT__orig_type_name), max1)) {
                max1 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1744)
                                 ->__PVT__orig_type_name);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1745)
                                         ->__PVT__full_inst_path), max2)) {
                max2 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1746)
                                 ->__PVT__full_inst_path);
            }
            if (VL_GTS_III(32, VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1747)
                                         ->__PVT__ovrd_type_name), max3)) {
                max3 = VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk36__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1748)
                                 ->__PVT__ovrd_type_name);
            }
            unnamedblk36__DOT__i = ((IData)(1U) + unnamedblk36__DOT__i);
        }
        if (VL_GTS_III(32, 0x0000000dU, max1)) {
            max1 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max2)) {
            max2 = 0x0000000dU;
        }
        if (VL_GTS_III(32, 0x0000000dU, max3)) {
            max3 = 0x0000000dU;
        }
        __Vtemp_1 = VL_SUBSTR_N(space,1U,(max1 - (IData)(0x0000000dU)));
        __Vtemp_2 = VL_SUBSTR_N(space,1U,(max2 - (IData)(0x0000000dU)));
        __Vtemp_3 = VL_SUBSTR_N(space,1U,(max3 - (IData)(0x0000000dU)));
        qs.push_back(VL_SFORMATF_N_NX("Original Type%0s  Instance Path%0s  Override Type%0s\n",3
                                      , 'S',&(__Vtemp_1)
                                      , 'S',&(__Vtemp_2)
                                      , 'S',&(__Vtemp_3)) );
        __Vtemp_4 = VL_SUBSTR_N(dash,1U,max1);
        __Vtemp_5 = VL_SUBSTR_N(dash,1U,max2);
        __Vtemp_6 = VL_SUBSTR_N(dash,1U,max3);
        qs.push_back(VL_SFORMATF_N_NX("  %0s  %0s  %0s\n",3
                                      , 'S',&(__Vtemp_4)
                                      , 'S',&(__Vtemp_5)
                                      , 'S',&(__Vtemp_6)) );
        unnamedblk37__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk37__DOT__i, this->__PVT__m_override_info.size())) {
            __Vtemp_7 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1765)
                ->__PVT__orig_type_name;
            __Vtemp_8 = VL_SUBSTR_N(space,1U,(max1 
                                              - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1766)
                                                          ->__PVT__orig_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("%s%0s%0s\n",3
                                          , '#',16,
                                          (VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1764)
                                           ->__PVT__selected
                                            ? 0x2020U
                                            : 0x7820U)
                                          , 'S',&(__Vtemp_7)
                                          , 'S',&(__Vtemp_8)) );
            __Vtemp_9 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1767)
                ->__PVT__full_inst_path;
            __Vtemp_10 = VL_SUBSTR_N(space,1U,(max2 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1768)
                                                           ->__PVT__full_inst_path)));
            qs.push_back(VL_SFORMATF_N_NX("  %0s%0s",2
                                          , 'S',&(__Vtemp_9)
                                          , 'S',&(__Vtemp_10)) );
            __Vtemp_11 = VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1769)
                ->__PVT__ovrd_type_name;
            __Vtemp_12 = VL_SUBSTR_N(space,1U,(max3 
                                               - VL_LEN_IN(VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1770)
                                                           ->__PVT__ovrd_type_name)));
            qs.push_back(VL_SFORMATF_N_NX("  %0s%0s",2
                                          , 'S',&(__Vtemp_11)
                                          , 'S',&(__Vtemp_12)) );
            if (("*"s == VL_NULL_CHECK(this->__PVT__m_override_info.at(unnamedblk37__DOT__i), "../../uvm/distrib/src/base/uvm_factory.svh", 1771)
                 ->__PVT__full_inst_path)) {
                qs.push_back("  <type override>"s);
            } else {
                qs.push_back("\n"s);
            }
            unnamedblk37__DOT__i = ((IData)(1U) + unnamedblk37__DOT__i);
        }
        qs.push_back("\n"s);
    }
    qs.push_back("Result:\n\n"s);
    if ((VlNull{} == result)) {
        __VlefCall_0__get_type_name = requested_type_name;
    } else {
        VL_NULL_CHECK(result, "../../uvm/distrib/src/base/uvm_factory.svh", 1782)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    }
    qs.push_back(VL_SFORMATF_N_NX("  The factory will produce an object of type '%0s'\n",1
                                  , 'S',&(__VlefCall_0__get_type_name)) );
    qs.push_back("\n(*) Types with no associated type name will be printed as <unknown>\n\n####\n\n"s);
    this->__Vfunc_uvm_report_enabled__176__id = "UVM/FACTORY/DUMP"s;
    __Vfunc_uvm_report_enabled__176__severity = 0U;
    __Vfunc_uvm_report_enabled__176__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__177__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__177__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__178__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__178__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__176__verbosity, (IData)(__Vfunc_uvm_report_enabled__176__severity), this->__Vfunc_uvm_report_enabled__176__id, __VlefCall_1__uvm_report_enabled);
    if ((0U != __VlefCall_1__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__180__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__180__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
        __VlefCall_2__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__180__Vfuncout;
        __Vtask_uvm_report_info__181__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__181__context_name = ""s;
        __Vtask_uvm_report_info__181__line = 0x000006faU;
        this->__Vtask_uvm_report_info__181__filename = "../../uvm/distrib/src/base/uvm_factory.svh"s;
        __Vtask_uvm_report_info__181__verbosity = 0U;
        this->__Vtask_uvm_report_info__181__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_2__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__181__id = "UVM/FACTORY/DUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__182__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__182__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__183__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__181__id, this->__Vtask_uvm_report_info__181__message, __Vtask_uvm_report_info__181__verbosity, this->__Vtask_uvm_report_info__181__filename, __Vtask_uvm_report_info__181__line, this->__Vtask_uvm_report_info__181__context_name, (IData)(__Vtask_uvm_report_info__181__report_enabled_checked));
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_types.atDefault() = 0;
    __PVT__m_lookup_strs.atDefault() = 0;
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_default_factory::~\n"); );
}
