// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_get_report_catcher(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> &get_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_get_report_catcher\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    {
        VL_NULL_CHECK(this->__PVT__get_report_catcher__Vstatic__iter, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 367)->__VnoInFunc_first(vlSymsp, get_report_catcher__Vfuncrtn);
        while ((VlNull{} != get_report_catcher__Vfuncrtn)) {
            VL_NULL_CHECK(get_report_catcher__Vfuncrtn, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 369)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__get_report_catcher__Vstatic__iter, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 371)->__VnoInFunc_next(vlSymsp, get_report_catcher__Vfuncrtn);
        }
        get_report_catcher__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_print_catcher\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__callback_mode;
    std::string enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> catcher;
    VlQueue<std::string> q;
    enabled = ""s;
    q.clear();
    q.atDefault().clear();
    q.push_back("-------------UVM REPORT CATCHERS----------------------------\n"s);
    VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 392)->__VnoInFunc_first(vlSymsp, catcher);
    while ((VlNull{} != catcher)) {
        VL_NULL_CHECK(catcher, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 394)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_0__callback_mode);
        enabled = ((IData)(__VlefCall_0__callback_mode)
                    ? "ON"s : "OFF"s);
        VL_NULL_CHECK(catcher, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 399)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        q.push_back(VL_SFORMATF_N_NX("%20s : %s\n",2
                                     , 'S',&(__VlefCall_1__get_name)
                                     , 'S',&(enabled)) );
        VL_NULL_CHECK(this->__PVT__print_catcher__Vstatic__iter, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 400)->__VnoInFunc_next(vlSymsp, catcher);
    }
    q.push_back("--------------------------------------------------------------\n"s);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_top, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 404)->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__11__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__11__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
        __VlefCall_3__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_top, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 404)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__m_uvm_string_queue_join), 0x00000064U, "../../uvm/distrib/src/base/uvm_report_catcher.svh"s, 0x00000194U, ""s, 1U);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ what) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_debug_report_catcher\n"); );
    // Body
    this->__PVT__m_debug_flags = what;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message> rm, IData/*31:0*/ &process_all_report_catchers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_process_all_report_catchers\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_first__15__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__21__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> __Vfunc_get_next__30__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*1:0*/ __VlefCall_11__get_severity;
    CData/*1:0*/ __VlefCall_10__get_severity;
    CData/*1:0*/ __VlefCall_9__get_severity;
    IData/*31:0*/ __VlefCall_8__get_report_action;
    CData/*1:0*/ __VlefCall_7__get_severity;
    IData/*31:0*/ __VlefCall_6__get_report_action;
    IData/*31:0*/ __VlefCall_5__get_action;
    CData/*0:0*/ __VlefLogAnd_4;
    CData/*1:0*/ __VlefCall_3__get_severity;
    CData/*0:0*/ __VlefCall_2__callback_mode;
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __VlefCall_0__clone;
    VlClassRef<Vhello_uvm_std__03a__03aprocess> unnamedblk3__DOT__p;
    std::string unnamedblk3__DOT__randstate;
    CData/*1:0*/ unnamedblk4__DOT__prev_sev;
    IData/*31:0*/ iter;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher> catcher;
    IData/*31:0*/ thrown;
    CData/*1:0*/ orig_severity;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        process_all_report_catchers__Vfuncrtn = 0U;
        iter = 0U;
        thrown = 1U;
        orig_severity = 0U;
        VL_NULL_CHECK(rm, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 582)->__VnoInFunc_get_report_object(vlSymsp, l_report_object);
        if (this->__PVT__process_all_report_catchers__Vstatic__in_catcher) {
            process_all_report_catchers__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 0U;
        VL_NULL_CHECK(rm, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 590)->__VnoInFunc_get_severity(vlSymsp, orig_severity);
        this->__PVT__m_modified_report_message = rm;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz8__Vclpkg.__VnoInFunc_get_first(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_first__15__Vfuncout);
        catcher = __Vfunc_get_first__15__Vfuncout;
        if ((VlNull{} != catcher)) {
            if ((0U != (2U & this->__PVT__m_debug_flags))) {
                vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, unnamedblk3__DOT__p);
                unnamedblk3__DOT__randstate = ""s;
                if ((VlNull{} != unnamedblk3__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk3__DOT__p, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 599)->__VnoInFunc_get_randstate(vlSymsp, unnamedblk3__DOT__randstate);
                }
                VL_NULL_CHECK(rm, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 600)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_0__clone);
                __VlefExpr_1 = VL_CAST_DYNAMIC(__VlefCall_0__clone, this->__PVT__m_orig_report_message);
                if (VL_UNLIKELY(((! __VlefExpr_1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_report_catcher.svh:600: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_report_catcher.process_all_report_catchers.unnamedblk3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../uvm/distrib/src/base/uvm_report_catcher.svh", 600, "");
                }
                if ((VlNull{} != unnamedblk3__DOT__p)) {
                    VL_NULL_CHECK(unnamedblk3__DOT__p, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 602)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk3__DOT__randstate);
                }
            }
        }
        {
            while ((VlNull{} != catcher)) {
                {
                    unnamedblk4__DOT__prev_sev = 0U;
                    VL_NULL_CHECK(catcher, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 608)->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __VlefCall_2__callback_mode);
                    if ((1U & (~ (IData)(__VlefCall_2__callback_mode)))) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz8__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__21__Vfuncout);
                        catcher = __Vfunc_get_next__21__Vfuncout;
                        goto __Vlabel2;
                    }
                    VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 613)->__VnoInFunc_get_severity(vlSymsp, unnamedblk4__DOT__prev_sev);
                    this->__PVT__m_set_action_called = 0U;
                    VL_NULL_CHECK(catcher, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 615)->__VnoInFunc_process_report_catcher(vlProcess, vlSymsp, thrown);
                    __VlefLogAnd_4 = (1U & (~ (IData)(this->__PVT__m_set_action_called)));
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 621)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_3__get_severity);
                        __VlefLogAnd_4 = ((IData)(__VlefCall_3__get_severity) 
                                          != (IData)(unnamedblk4__DOT__prev_sev));
                    }
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 622)->__VnoInFunc_get_action(vlSymsp, __VlefCall_5__get_action);
                        VL_NULL_CHECK(l_report_object, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 623)->__VnoInFunc_get_report_action(vlSymsp, unnamedblk4__DOT__prev_sev, "*@&*^*^*#"s, __VlefCall_6__get_report_action);
                        __VlefLogAnd_4 = (__VlefCall_5__get_action 
                                          == __VlefCall_6__get_report_action);
                    }
                    if (__VlefLogAnd_4) {
                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 626)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_7__get_severity);
                        VL_NULL_CHECK(l_report_object, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 626)->__VnoInFunc_get_report_action(vlSymsp, __VlefCall_7__get_severity, "*@&*^*^*#"s, __VlefCall_8__get_report_action);
                        VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 625)->__VnoInFunc_set_action(vlSymsp, __VlefCall_8__get_report_action);
                    }
                    if ((0U == thrown)) {
                        if ((3U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_fatal 
                                = ((IData)(1U) + this->__PVT__m_caught_fatal);
                        } else if ((2U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_error 
                                = ((IData)(1U) + this->__PVT__m_caught_error);
                        } else if ((1U == (IData)(orig_severity))) {
                            this->__PVT__m_caught_warning 
                                = ((IData)(1U) + this->__PVT__m_caught_warning);
                        }
                        goto __Vlabel1;
                    }
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz7_TBz8__Vclpkg.__VnoInFunc_get_next(vlProcess, vlSymsp, iter, l_report_object, __Vfunc_get_next__30__Vfuncout);
                    catcher = __Vfunc_get_next__30__Vfuncout;
                    __Vlabel2: ;
                }
            }
            __Vlabel1: ;
        }
        if ((3U == (IData)(orig_severity))) {
            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 643)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_9__get_severity);
            if (((IData)(__VlefCall_9__get_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_fatal = ((IData)(1U) 
                                                + this->__PVT__m_demoted_fatal);
            }
        } else if ((2U == (IData)(orig_severity))) {
            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 646)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_10__get_severity);
            if (((IData)(__VlefCall_10__get_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_error = ((IData)(1U) 
                                                + this->__PVT__m_demoted_error);
            }
        } else if ((1U == (IData)(orig_severity))) {
            VL_NULL_CHECK(this->__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 649)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_11__get_severity);
            if (((IData)(__VlefCall_11__get_severity) 
                 < (IData)(orig_severity))) {
                this->__PVT__m_demoted_warning = ((IData)(1U) 
                                                  + this->__PVT__m_demoted_warning);
            }
        }
        this->__PVT__process_all_report_catchers__Vstatic__in_catcher = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_tracing = 1U;
        process_all_report_catchers__Vfuncrtn = thrown;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher__Vclpkg::__VnoInFunc_summarize\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<std::string> q;
    q.clear();
    q.atDefault().clear();
    if (this->__PVT__do_report) {
        q.push_back("\n--- UVM Report catcher Summary ---\n\n\n"s);
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_FATAL reports  :%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_ERROR reports  :%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of demoted UVM_WARNING reports:%5d\n",1
                                     , '~',32,this->__PVT__m_demoted_warning) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_FATAL reports   :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_fatal) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_ERROR reports   :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_error) );
        q.push_back(VL_SFORMATF_N_NX("Number of caught UVM_WARNING reports :%5d\n",1
                                     , '~',32,this->__PVT__m_caught_warning) );
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_top, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 705)->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, "UVM/REPORT/CATCHER"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__35__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__35__Vfuncout 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
            __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_top, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 705)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/REPORT/CATCHER"s, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__m_uvm_string_queue_join), 0x00000064U, "../../uvm/distrib/src/base/uvm_report_catcher.svh"s, 0x000002c1U, ""s, 1U);
        }
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__do_report = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_object> &get_client__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_client\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 154)->__VnoInFunc_get_report_object(vlSymsp, get_client__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity(Vhello_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 165)->__VnoInFunc_get_severity(vlSymsp, get_severity__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_context\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_handler> unnamedblk1__DOT__rh;
    std::string context_str;
    get_context__Vfuncrtn = ""s;
    context_str = ""s;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 178)->__VnoInFunc_get_context(vlSymsp, context_str);
    if ((""s == context_str)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 180)->__VnoInFunc_get_report_handler(vlSymsp, unnamedblk1__DOT__rh);
        VL_NULL_CHECK(unnamedblk1__DOT__rh, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 181)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, context_str);
    }
    get_context__Vfuncrtn = context_str;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 195)->__VnoInFunc_get_verbosity(vlSymsp, get_verbosity__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = ""s;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 206)->__VnoInFunc_get_id(vlSymsp, get_id__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = ""s;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 217)->__VnoInFunc_get_message(vlSymsp, get_message__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 228)->__VnoInFunc_get_action(vlSymsp, get_action__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_fname__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_fname\n"); );
    // Body
    get_fname__Vfuncrtn = ""s;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 236)->__VnoInFunc_get_filename(vlSymsp, get_fname__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = 0U;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 244)->__VnoInFunc_get_line(vlSymsp, get_line__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_element_container(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_get_element_container\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 252)->__VnoInFunc_get_element_container(vlSymsp, get_element_container__Vfuncrtn);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity(Vhello_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_severity\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 264)->__VnoInFunc_set_severity(vlSymsp, severity);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_verbosity\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 273)->__VnoInFunc_set_verbosity(vlSymsp, verbosity);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id(Vhello_uvm__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_id\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 282)->__VnoInFunc_set_id(vlSymsp, id);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message(Vhello_uvm__Syms* __restrict vlSymsp, std::string message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_message\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 291)->__VnoInFunc_set_message(vlSymsp, message);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_action\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 300)->__VnoInFunc_set_action(vlSymsp, action);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_set_action_called = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_context(Vhello_uvm__Syms* __restrict vlSymsp, std::string context_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_set_context\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 310)->__VnoInFunc_set_context(vlSymsp, context_str);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_int(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 327)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_string(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 341)->__VnoInFunc_add_string(vlSymsp, name, value, action);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_object(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 355)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &catch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_catch\n"); );
    // Body
    catch__Vfuncrtn = 0U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal(Vhello_uvm__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning(Vhello_uvm__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, 0U, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info(Vhello_uvm__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, fname, line, context_name, (IData)(report_enabled_checked));
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string fname, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (IData)(report_enabled_checked)))) {
            this->__Vfunc_uvm_report_enabled__26__id 
                = id;
            __Vfunc_uvm_report_enabled__26__severity 
                = severity;
            __Vfunc_uvm_report_enabled__26__verbosity 
                = verbosity;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__28__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), this->__Vfunc_uvm_report_enabled__26__id, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 524)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, fname, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_message> msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__get_report_file_handle;
    std::string __VlefCall_4__get_id;
    CData/*1:0*/ __VlefCall_3__get_severity;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_handler> __VlefCall_2__get_report_handler;
    std::string __VlefCall_1__get_id;
    CData/*1:0*/ __VlefCall_0__get_severity;
    std::string unnamedblk2__DOT__composed_message;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_server> unnamedblk2__DOT__rs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_object> ro;
    IData/*31:0*/ a;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 530)->__VnoInFunc_get_report_object(vlSymsp, ro);
    VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 531)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_0__get_severity);
    VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 531)->__VnoInFunc_get_id(vlSymsp, __VlefCall_1__get_id);
    VL_NULL_CHECK(ro, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 531)->__VnoInFunc_get_report_action(vlSymsp, __VlefCall_0__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_id), a);
    if ((0U != a)) {
        unnamedblk2__DOT__composed_message = ""s;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 535)->__VnoInFunc_get_report_server(vlSymsp, unnamedblk2__DOT__rs);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 537)->__VnoInFunc_set_report_object(vlSymsp, ro);
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 538)->__VnoInFunc_get_report_handler(vlSymsp, __VlefCall_2__get_report_handler);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 538)->__VnoInFunc_set_report_handler(vlSymsp, __VlefCall_2__get_report_handler);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 539)->__VnoInFunc_set_report_server(vlSymsp, unnamedblk2__DOT__rs);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 540)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_3__get_severity);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 540)->__VnoInFunc_get_id(vlSymsp, __VlefCall_4__get_id);
        VL_NULL_CHECK(ro, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 540)->__VnoInFunc_get_report_file_handle(vlSymsp, __VlefCall_3__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_id), __VlefCall_5__get_report_file_handle);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 540)->__VnoInFunc_set_file(vlSymsp, __VlefCall_5__get_report_file_handle);
        VL_NULL_CHECK(msg, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 541)->__VnoInFunc_set_action(vlSymsp, a);
        if ((0U != (3U & a))) {
            VL_NULL_CHECK(unnamedblk2__DOT__rs, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 545)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, msg, ""s, unnamedblk2__DOT__composed_message);
        }
        VL_NULL_CHECK(unnamedblk2__DOT__rs, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 546)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, msg, unnamedblk2__DOT__composed_message);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_issue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_action;
    IData/*31:0*/ __VlefCall_0__get_action;
    std::string composed_message;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_server> rs;
    composed_message = ""s;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 560)->__VnoInFunc_get_report_server(vlSymsp, rs);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 562)->__VnoInFunc_get_action(vlSymsp, __VlefCall_0__get_action);
    if ((0U != __VlefCall_0__get_action)) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 565)->__VnoInFunc_get_action(vlSymsp, __VlefCall_1__get_action);
        if ((0U != (3U & __VlefCall_1__get_action))) {
            VL_NULL_CHECK(rs, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 566)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, ""s, composed_message);
        }
        VL_NULL_CHECK(rs, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 567)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, composed_message);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &process_report_catcher__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_process_report_catcher\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ act;
    {
        process_report_catcher__Vfuncrtn = 0U;
        act = 0U;
        this->__VnoInFunc_catch(vlSymsp, act);
        if ((0U == act)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "RPTCTHR"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_report_this.catch() in catcher instance "s, __VlefCall_0__get_name), " must return THROW or CAUGHT"s)), 0U, "../../uvm/distrib/src/base/uvm_report_catcher.svh"s, 0x000002a0U, ""s, 0U);
        }
        if ((0U != (2U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_modified_report_message, "../../uvm/distrib/src/base/uvm_report_catcher.svh", 675)->__VnoInFunc_copy(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_orig_report_message);
        }
        if (((2U == act) & (~ (0U != (1U & vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__PVT__m_debug_flags))))) {
            process_report_catcher__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        process_report_catcher__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::~Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_report_catcher::~\n"); );
}
