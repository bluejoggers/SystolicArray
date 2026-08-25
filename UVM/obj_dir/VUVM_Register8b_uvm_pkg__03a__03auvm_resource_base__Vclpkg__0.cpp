// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string s) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__VnoInFunc_set_scope(vlSymsp, s);
    this->__PVT__modified = 0U;
    this->__PVT__read_only = 0U;
    this->__PVT__precedence = 0x000003e8U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only\n"); );
    // Body
    this->__PVT__read_only = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write\n"); );
    // Body
    this->__PVT__read_only = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only\n"); );
    // Body
    is_read_only__Vfuncrtn = this->__PVT__read_only;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified\n"); );
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__modified)))) {
        CData/*0:0*/ __VdynTrigger_hc231df5f__0;
        __VdynTrigger_hc231df5f__0 = 0;
        __VdynTrigger_hc231df5f__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hc231df5f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                         "../../uvm/distrib/src/base/uvm_resource.svh", 
                                                         295);
            __VdynTrigger_hc231df5f__0 = this->__PVT__modified;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc231df5f__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                     "../../uvm/distrib/src/base/uvm_resource.svh", 
                                                     295);
    }
    this->__PVT__modified = 0U;
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_scope\n"); );
    // Body
    this->__Vfunc_uvm_glob_to_re__2__glob = s;
    this->__PVT__scope = this->__Vfunc_uvm_glob_to_re__2__glob;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope\n"); );
    // Body
    get_scope__Vfuncrtn = this->__PVT__scope;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_match_scope(VUVM_Register8b__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &match_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_match_scope\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_re_match__3____Vincrement1;
    __Vfunc_uvm_re_match__3____Vincrement1 = 0;
    // Body
    IData/*31:0*/ err;
    this->__Vfunc_uvm_re_match__3__str = s;
    this->__Vfunc_uvm_re_match__3__re = this->__PVT__scope;
    __Vfunc_uvm_re_match__3____Vincrement1 = 0U;
    {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
        if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__3__re))) {
            err = 0U;
            goto __Vlabel0;
        }
        if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,0U))) {
            this->__Vfunc_uvm_re_match__3__re = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__3__re,1U,
                                                            (VL_LEN_IN(this->__Vfunc_uvm_re_match__3__re) 
                                                             - (IData)(1U)));
        }
        while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                 != VL_LEN_IN(this->__Vfunc_uvm_re_match__3__str)) 
                & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            if (((VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                  != VL_GETC_N(this->__Vfunc_uvm_re_match__3__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                 & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                err = 1U;
                goto __Vlabel0;
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
        }
        while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                != VL_LEN_IN(this->__Vfunc_uvm_re_match__3__str))) {
            if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                     == VL_LEN_IN(this->__Vfunc_uvm_re_match__3__re))) {
                    err = 0U;
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
            } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                         == VL_GETC_N(this->__Vfunc_uvm_re_match__3__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                        | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
            } else {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                __Vfunc_uvm_re_match__3____Vincrement1 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                    = __Vfunc_uvm_re_match__3____Vincrement1;
            }
        }
        while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                           VL_LEN_IN(this->__Vfunc_uvm_re_match__3__re)) 
                & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__3__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
        }
        err = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                == VL_LEN_IN(this->__Vfunc_uvm_re_match__3__re))
                ? 0U : 1U);
        __Vlabel0: ;
    }
    match_scope__Vfuncrtn = (0U == err);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = "?"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_scope;
    std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_1__get_scope);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_resource.svh", 444)->__VnoInFunc_print_string(vlSymsp, ""s, VL_SFORMATF_N_NX("%s [%s] : %s",3
                                                                                , 'S',&(__VlefCall_0__get_name)
                                                                                , 'S',&(__VlefCall_1__get_scope)
                                                                                , 'S',&(__VlefCall_2__convert2string)) , 0x2eU);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access\n"); );
    // Locals
    VUVM_Register8b_access_t__struct__0 __Vtask_init_access_record__10__access_record;
    __Vtask_init_access_record__10__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__10__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__10__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__10__access_record.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_auditing;
    std::string str;
    VUVM_Register8b_access_t__struct__0 access_record;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
        if ((1U & (~ (IData)(__VlefCall_0__is_auditing)))) {
            goto __Vlabel0;
        }
        if ((VlNull{} != accessor)) {
            VL_NULL_CHECK(accessor, "../../uvm/distrib/src/base/uvm_resource.svh", 497)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
        } else {
            str = "<empty>"s;
        }
        if (this->__PVT__access.exists(str)) {
            access_record = this->__PVT__access.at(str);
        } else {
            __Vtask_init_access_record__10__access_record 
                = access_record;
            this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__10__access_record);
            access_record = __Vtask_init_access_record__10__access_record;
        }
        access_record.__PVT__read_count = ((IData)(1U) 
                                           + access_record
                                           .__PVT__read_count);
        access_record.__PVT__read_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__access.at(str) = access_record;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access\n"); );
    // Locals
    VUVM_Register8b_access_t__struct__0 __Vtask_init_access_record__13__access_record;
    __Vtask_init_access_record__13__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__13__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__13__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__13__access_record.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_auditing;
    VUVM_Register8b_access_t__struct__0 unnamedblk1__DOT__access_record;
    std::string unnamedblk1__DOT__str;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
    if (__VlefCall_0__is_auditing) {
        if ((VlNull{} != accessor)) {
            unnamedblk1__DOT__access_record.__PVT__read_time = 0;
            unnamedblk1__DOT__access_record.__PVT__write_time = 0;
            unnamedblk1__DOT__access_record.__PVT__read_count = 0;
            unnamedblk1__DOT__access_record.__PVT__write_count = 0;
            unnamedblk1__DOT__str = ""s;
            VL_NULL_CHECK(accessor, "../../uvm/distrib/src/base/uvm_resource.svh", 529)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__str);
            if (this->__PVT__access.exists(unnamedblk1__DOT__str)) {
                unnamedblk1__DOT__access_record = this->__PVT__access
                    .at(unnamedblk1__DOT__str);
            } else {
                __Vtask_init_access_record__13__access_record 
                    = unnamedblk1__DOT__access_record;
                this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__13__access_record);
                unnamedblk1__DOT__access_record = __Vtask_init_access_record__13__access_record;
            }
            unnamedblk1__DOT__access_record.__PVT__write_count 
                = ((IData)(1U) + unnamedblk1__DOT__access_record
                   .__PVT__write_count);
            unnamedblk1__DOT__access_record.__PVT__write_time 
                = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
            this->__PVT__access.at(unnamedblk1__DOT__str) 
                = unnamedblk1__DOT__access_record;
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__19__verbosity;
    __Vtask_uvm_report_info__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__19__line;
    __Vtask_uvm_report_info__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__19__report_enabled_checked;
    __Vtask_uvm_report_info__19__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk2__DOT__i;
    std::string unnamedblk2__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__i__Vmore;
    unnamedblk2__DOT__i__Vmore = 0;
    std::string str;
    VUVM_Register8b_access_t__struct__0 access_record;
    VlQueue<std::string> qs;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        qs.clear();
        qs.atDefault().clear();
        if ((0U == this->__PVT__access.size())) {
            goto __Vlabel0;
        }
        unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.first(unnamedblk2__DOT__i__Vnext));
        while (unnamedblk2__DOT__i__Vmore) {
            unnamedblk2__DOT__i = unnamedblk2__DOT__i__Vnext;
            unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.next(unnamedblk2__DOT__i__Vnext));
            str = unnamedblk2__DOT__i;
            access_record = this->__PVT__access.at(str);
            qs.push_back(VL_SFORMATF_N_NX("%s reads: %0d @ %0t  writes: %0d @ %0t\n",6, 'T',-12
                                          , 'S',&(str)
                                          , '#',32,access_record
                                          .__PVT__read_count
                                          , '#',64,access_record
                                          .__PVT__read_time
                                          , '#',32,access_record
                                          .__PVT__write_count
                                          , '#',64,access_record
                                          .__PVT__write_time) );
        }
        this->__Vfunc_uvm_report_enabled__14__id = "UVM/RESOURCE/ACCESSOR"s;
        __Vfunc_uvm_report_enabled__14__severity = 0U;
        __Vfunc_uvm_report_enabled__14__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), this->__Vfunc_uvm_report_enabled__14__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, qs, 1U));
            __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__18__Vfuncout;
            __Vtask_uvm_report_info__19__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__19__context_name = ""s;
            __Vtask_uvm_report_info__19__line = 0x00000234U;
            this->__Vtask_uvm_report_info__19__filename = "../../uvm/distrib/src/base/uvm_resource.svh"s;
            __Vtask_uvm_report_info__19__verbosity = 0U;
            this->__Vtask_uvm_report_info__19__message 
                = VL_CVT_PACK_STR_NN(__VlefCall_1__m_uvm_string_queue_join);
            this->__Vtask_uvm_report_info__19__id = "UVM/RESOURCE/ACCESSOR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__20__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__21__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__19__id, this->__Vtask_uvm_report_info__19__message, __Vtask_uvm_report_info__19__verbosity, this->__Vtask_uvm_report_info__19__filename, __Vtask_uvm_report_info__19__line, this->__Vtask_uvm_report_info__19__context_name, (IData)(__Vtask_uvm_report_info__19__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record(VUVM_Register8b__Syms* __restrict vlSymsp, VUVM_Register8b_access_t__struct__0 &access_record) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record\n"); );
    // Body
    access_record.__PVT__read_time = 0ULL;
    access_record.__PVT__write_time = 0ULL;
    access_record.__PVT__read_count = 0U;
    access_record.__PVT__write_count = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__modified = 0;
    __PVT__read_only = 0;
    __PVT__access.atDefault().__PVT__read_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__write_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__read_count = 0;
    __PVT__access.atDefault().__PVT__write_count = 0;
    __PVT__precedence = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::~VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_resource_base::~\n"); );
}
