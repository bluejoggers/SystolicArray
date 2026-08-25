// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> __VlefCall_0__get_report_server;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 208)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, __VlefCall_0__get_report_server);
    VL_NULL_CHECK(server, "../../uvm/distrib/src/base/uvm_report_server.svh", 208)->__VnoInFunc_copy(vlProcess, vlSymsp, __VlefCall_0__get_report_server);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 209)->__VnoInFunc_set_report_server(vlSymsp, server);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 234)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, get_server__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_server"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count(VUVM_Register8b__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count(VUVM_Register8b__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    get_id_count__Vfuncrtn = 0U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    q.clear();
    q.atDefault().clear();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    q.clear();
    q.atDefault() = 0;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    VlQueue<CData/*1:0*/> __Vtask_get_severity_set__10__q;
    __Vtask_get_severity_set__10__q.atDefault() = 0;
    VlQueue<std::string> __Vtask_get_id_set__13__q;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_6__get_quit_count;
    IData/*31:0*/ __VlefCall_5__get_max_quit_count;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database> __VlefCall_4__get_message_database;
    IData/*31:0*/ __VlefCall_3__get_id_count;
    IData/*31:0*/ __VlefCall_2__get_severity_count;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlQueue<CData/*1:0*/> unnamedblk1__DOT__q;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__s;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__s__Vloopsize;
    unnamedblk1__DOT__unnamedblk2__DOT__s__Vloopsize = 0;
    VlQueue<std::string> unnamedblk3__DOT__q;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__s;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__s__Vloopsize;
    unnamedblk3__DOT__unnamedblk4__DOT__s__Vloopsize = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_server> rhs_;
    VUVM_Register8b_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, rhs_);
    if ((! __VlefExpr_0)) {
        this->__Vfunc_uvm_report_enabled__2__id = "UVM/REPORT/SERVER/RPTCOPY"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000072U;
            this->__Vtask_uvm_report_error__6__filename = "../../uvm/distrib/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            this->__Vtask_uvm_report_error__6__message = "cannot copy to report_server from the given datatype"s;
            this->__Vtask_uvm_report_error__6__id = "UVM/REPORT/SERVER/RPTCOPY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__6__id, this->__Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, this->__Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, this->__Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
    }
    unnamedblk1__DOT__q.clear();
    unnamedblk1__DOT__q.atDefault() = 0;
    VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 118)->__VnoInFunc_get_severity_set(vlSymsp, __Vtask_get_severity_set__10__q);
    unnamedblk1__DOT__q = __Vtask_get_severity_set__10__q;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__s, unnamedblk1__DOT__q.size())) {
        unnamedblk1__DOT__unnamedblk2__DOT__s__Vloopsize 
            = unnamedblk1__DOT__q.size();
        VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 120)->__VnoInFunc_get_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), __VlefCall_2__get_severity_count);
        this->__VnoInFunc_set_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), __VlefCall_2__get_severity_count);
        if ((unnamedblk1__DOT__unnamedblk2__DOT__s__Vloopsize 
             <= unnamedblk1__DOT__q.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__s = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__s);
        }
    }
    unnamedblk3__DOT__q.clear();
    unnamedblk3__DOT__q.atDefault().clear();
    VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 125)->__VnoInFunc_get_id_set(vlSymsp, __Vtask_get_id_set__13__q);
    unnamedblk3__DOT__q = __Vtask_get_id_set__13__q;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__s, unnamedblk3__DOT__q.size())) {
        unnamedblk3__DOT__unnamedblk4__DOT__s__Vloopsize 
            = unnamedblk3__DOT__q.size();
        VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 127)->__VnoInFunc_get_id_count(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), __VlefCall_3__get_id_count);
        this->__VnoInFunc_set_id_count(vlSymsp, VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), __VlefCall_3__get_id_count);
        if ((unnamedblk3__DOT__unnamedblk4__DOT__s__Vloopsize 
             <= unnamedblk3__DOT__q.size())) {
            unnamedblk3__DOT__unnamedblk4__DOT__s = 
                ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__s);
        }
    }
    VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 130)->__VnoInFunc_get_message_database(vlSymsp, __VlefCall_4__get_message_database);
    this->__VnoInFunc_set_message_database(vlSymsp, __VlefCall_4__get_message_database);
    VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 131)->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_5__get_max_quit_count);
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, __VlefCall_5__get_max_quit_count, 1U);
    VL_NULL_CHECK(rhs_, "../../uvm/distrib/src/base/uvm_report_server.svh", 132)->__VnoInFunc_get_quit_count(vlSymsp, __VlefCall_6__get_quit_count);
    this->__VnoInFunc_set_quit_count(vlSymsp, __VlefCall_6__get_quit_count);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    compose_report_message__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_summarize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_summarize\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_report_summarize(vlProcess, vlSymsp, file);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::~VUVM_Register8b_uvm_pkg__03a__03auvm_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_report_server::~\n"); );
}
