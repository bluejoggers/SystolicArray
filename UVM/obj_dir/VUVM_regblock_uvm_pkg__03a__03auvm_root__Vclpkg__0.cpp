// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_m_uvm_get_root\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> __Vtask_get_common_domain__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_domain> __VlefCall_0__get_uvm_domain;
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_root, vlProcess, vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vtask_get_common_domain__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __VlefCall_0__get_uvm_domain);
        VL_NULL_CHECK(this->__PVT__m_inst, "../../uvm/distrib/src/base/uvm_root.svh", 273)->__PVT__m_domain 
            = __VlefCall_0__get_uvm_domain;
    }
    m_uvm_get_root__Vfuncrtn = this->__PVT__m_inst;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 326)->__VnoInFunc_get_root(vlProcess, vlSymsp, get__Vfuncrtn);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_root"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_die(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_die\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
    this->__VnoInFunc_m_do_pre_abort(vlSymsp);
    VL_NULL_CHECK(l_rs, "../../uvm/distrib/src/base/uvm_root.svh", 134)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0U);
    vlProcess->disableFork();
    VL_FINISH_MT("../../uvm/distrib/src/base/uvm_root.svh", 135, "");
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_severity_count;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> unnamedblk1__DOT__srvr;
    if ((phase == vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph)) {
        this->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
        if (this->__PVT__enable_print_topology) {
            this->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, unnamedblk1__DOT__srvr);
        VL_NULL_CHECK(unnamedblk1__DOT__srvr, "../../uvm/distrib/src/base/uvm_root.svh", 258)->__VnoInFunc_get_severity_count(vlSymsp, 2U, __VlefCall_0__get_severity_count);
        if (VL_LTS_III(32, 0U, __VlefCall_0__get_severity_count)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BUILDERR"s, "stopping due to build errors"s, 0U, ""s, 0U, ""s, 0U);
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_stop_request(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_stop_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_test_done_objection> tdo;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_test_done_objection__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, tdo);
    VL_NULL_CHECK(tdo, "../../uvm/distrib/src/base/uvm_root.svh", 287)->__VnoInFunc_stop_request(vlSymsp);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_end_of_elaboration_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_proxy> p;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_top_down_visitor_adapter_> adapter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_visitor_> v;
    p = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_component_proxy, vlProcess, vlSymsp, "proxy"s);
    adapter = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_top_down_visitor_adapter_, vlProcess, vlSymsp, "adapter"s);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 297)->__VnoInFunc_get_component_visitor(vlProcess, vlSymsp, v);
    VL_NULL_CHECK(adapter, "../../uvm/distrib/src/base/uvm_root.svh", 298)->__VnoInFunc_accept(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root>{this}, v, p, 1U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
    VUVM_regblock_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, "__top__"s, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__finish_on_completion = 1U;
    this->__PVT__enable_print_topology = 0U;
    this->__PVT__phase_timeout = 0x0020af59ebef0000ULL;
    /*super.new*/;
    VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_report_object::__PVT__m_rh, "../../uvm/distrib/src/base/uvm_root.svh", 337)->__VnoInFunc_set_name(vlProcess, vlSymsp, "reporter"s);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, this->__PVT__clp);
    this->__VnoInFunc_report_header(vlProcess, vlSymsp, 0U);
    this->__VnoInFunc_m_check_verbosity(vlProcess, vlSymsp);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_report_header\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__22__Vfuncout;
    __Vtask_get_arg_matches__22__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__uvm_revision_string;
    IData/*31:0*/ __VlefCall_0__get_arg_matches;
    VlQueue<std::string> q;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> srvr;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlQueue<std::string> args;
    {
        q.clear();
        q.atDefault().clear();
        args.clear();
        args.atDefault().clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, clp);
        VL_NULL_CHECK(clp, "../../uvm/distrib/src/base/uvm_root.svh", 357)->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_NO_RELNOTES"s, args, __Vtask_get_arg_matches__22__Vfuncout);
        __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__22__Vfuncout;
        if ((0U != __VlefCall_0__get_arg_matches)) {
            goto __Vlabel0;
        }
        q.push_back("\n----------------------------------------------------------------\n"s);
        __VlefCall_1__uvm_revision_string = "UVM-1.2"s;
        q.push_back(VL_CONCATN_NNN(__VlefCall_1__uvm_revision_string, "\n"s));
        q.push_back("(C) 2007-2014 Mentor Graphics Corporation\n"s);
        q.push_back("(C) 2007-2014 Cadence Design Systems, Inc.\n"s);
        q.push_back("(C) 2006-2014 Synopsys, Inc.\n"s);
        q.push_back("(C) 2011-2013 Cypress Semiconductor Corp.\n"s);
        q.push_back("(C) 2013-2014 NVIDIA Corporation\n"s);
        q.push_back("----------------------------------------------------------------\n"s);
        if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done)))) {
            q.push_back("\n  ***********       IMPORTANT RELEASE NOTES         ************\n"s);
        }
        q.push_back("\n  You are using a version of the UVM library that has been compiled\n"s);
        q.push_back("  with `UVM_NO_DEPRECATED undefined.\n"s);
        q.push_back("  See http://www.eda.org/svdb/view.php?id=3313 for more details.\n"s);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done = 1U;
        if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done)))) {
            q.push_back("\n  ***********       IMPORTANT RELEASE NOTES         ************\n"s);
        }
        q.push_back("\n  You are using a version of the UVM library that has been compiled\n"s);
        q.push_back("  with `UVM_OBJECT_DO_NOT_NEED_CONSTRUCTOR undefined.\n"s);
        q.push_back("  See http://www.eda.org/svdb/view.php?id=3770 for more details.\n"s);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__m_relnotes_done) {
            q.push_back("\n      (Specify +UVM_NO_RELNOTES to turn off this notice)\n"s);
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000064U, 0U, "UVM/RELNOTES"s, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout = ""s;
            this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout 
                = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
            __VlefCall_3__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__25__Vfuncout;
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/RELNOTES"s, 
                                              VL_CVT_PACK_STR_NN(__VlefCall_3__m_uvm_string_queue_join), 0x00000064U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x00000188U, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string test_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_3__get_type_name;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk154__DOT__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> unnamedblk154__DOT__factory;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> l_rs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
    CData/*0:0*/ testname_plusarg;
    std::string msg;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> uvm_test_top;
    __VDynScope_run_test_0 = VL_NEW(VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 404)->__VnoInFunc_get_factory(vlSymsp, factory);
        testname_plusarg = 0U;
        msg = ""s;
        testname_plusarg = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__VnoInFunc_m_init_objections(vlProcess, vlSymsp);
        __VlefExpr_0 = VL_VALUEPLUSARGS_INN(64, "UVM_TESTNAME=%s"s, 
                                            test_name);
        if (__VlefExpr_0) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "NO_DPI_TSTNAME"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NO_DPI_TSTNAME"s, "UVM_NO_DPI defined--getting UVM_TESTNAME directly, without DPI"s, 0U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x000001c5U, ""s, 1U);
            }
            testname_plusarg = 1U;
        }
        if ((""s != test_name)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk154__DOT__cs);
            VL_NULL_CHECK(unnamedblk154__DOT__cs, "../../uvm/distrib/src/base/uvm_root.svh", 462)->__VnoInFunc_get_factory(vlSymsp, unnamedblk154__DOT__factory);
            if (VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children.exists("uvm_test_top"s)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TTINST"s, "An uvm_test_top already exists via a previous call to run_test"s, 0U, ""s, 0U, ""s, 0U);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_root.svh", 
                                                        467);
            }
            VL_NULL_CHECK(unnamedblk154__DOT__factory, "../../uvm/distrib/src/base/uvm_root.svh", 469)->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, test_name, ""s, "uvm_test_top"s, VlNull{}, uvm_test_top);
            if ((VlNull{} == uvm_test_top)) {
                msg = ((IData)(testname_plusarg) ? 
                       VL_CONCATN_NNN("command line +UVM_TESTNAME="s, test_name)
                        : VL_CONCATN_NNN(VL_CONCATN_NNN("call to run_test("s, test_name), ")"s));
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INVTST"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Requested test from "s, msg), " not found."s)), 0U, ""s, 0U, ""s, 0U);
            }
        }
        if ((0U == VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCOMP"s, "No components instantiated. You must either instantiate at least one component before calling run_test or use run_test to do so. To run a test using run_test, use +UVM_TESTNAME or supply the test name in the argument to run_test(). Exiting simulation."s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((""s == test_name)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, "Running test ..."s, 0x00000064U, ""s, 0U, ""s, 0U);
        } else {
            VL_NULL_CHECK(uvm_test_top, "../../uvm/distrib/src/base/uvm_root.svh", 493)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
            if ((test_name == __VlefCall_2__get_type_name)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, test_name), "..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
            } else {
                VL_NULL_CHECK(uvm_test_top, "../../uvm/distrib/src/base/uvm_root.svh", 496)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_3__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, __VlefCall_3__get_type_name), " (via factory override for test \""s), test_name), "\")..."s)), 0x00000064U, ""s, 0U, ""s, 0U);
                    }
                }
                this->__VnoInFunc_run_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_run_test_0);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_root.svh", 
                                                        506);
                if ((1U & (~ (IData)(this->__PVT__m_phase_all_done)))) {
                    CData/*0:0*/ __VdynTrigger_hc2253aae__0;
                    __VdynTrigger_hc2253aae__0 = 0;
                    __VdynTrigger_hc2253aae__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_hc2253aae__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                     "../../uvm/distrib/src/base/uvm_root.svh", 
                                                                     508);
                        __VdynTrigger_hc2253aae__0 
                            = this->__PVT__m_phase_all_done;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc2253aae__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                                 "../../uvm/distrib/src/base/uvm_root.svh", 
                                                                 508);
                }
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_run_test_0, "../../uvm/distrib/src/base/uvm_root.svh", 511)
                              ->__PVT__phase_runner_proc, "../../uvm/distrib/src/base/uvm_root.svh", 511)
                                                                     ->__VnoInFunc_kill(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
                VL_NULL_CHECK(l_rs, "../../uvm/distrib/src/base/uvm_root.svh", 514)
                                                                     ->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0U);
                if (VL_UNLIKELY((this->__PVT__finish_on_completion))) {
                    vlProcess->disableFork();
                    VL_FINISH_MT("../../uvm/distrib/src/base/uvm_root.svh", 517, "");
                }
                __Vlabel0: ;
            }
            co_return;
        }

        VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0\n"); );
            // Locals
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23> __Vtask___VforkTask_0__44____VDynScope_run_test_0;
            VlClassRef<VUVM_regblock_std__03a__03aprocess> __Vtask___VforkTask_0__44____VlefCall_0__self;
            VlClassRef<VUVM_regblock_std__03a__03aprocess> __Vfunc_self__45__Vfuncout;
            // Body
            VlProcess::currentp(vlProcess.get());
            VL_KEEP_THIS;
            __Vtask___VforkTask_0__44____VDynScope_run_test_0 
                = __VDynScope_run_test_0;
            co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_root.svh", 
                                                    500);
            vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__45__Vfuncout);
            __Vtask___VforkTask_0__44____VlefCall_0__self 
                = __Vfunc_self__45__Vfuncout;
            VL_NULL_CHECK(__Vtask___VforkTask_0__44____VDynScope_run_test_0, "../../uvm/distrib/src/base/uvm_root.svh", 502)
                                                                     ->__PVT__phase_runner_proc 
                = __Vtask___VforkTask_0__44____VlefCall_0__self;
            co_await vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_m_run_phases(vlProcess, vlSymsp);
            vlProcess->state(VlProcess::FINISHED);
            co_return;
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            if ((VlNull{} == comp)) {
                comp = VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root>{this};
            }
            this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, comp);
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_find(VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_find\n"); );
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_0__get_full_name;
            VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> comp_list;
            {
                comp_list.clear();
                this->__VnoInFunc_find_all(vlProcess, vlSymsp, comp_match, comp_list, VlNull{});
                if (VL_LTS_III(32, 1U, comp_list.size())) {
                    VL_NULL_CHECK(comp_list.at(0U), "../../uvm/distrib/src/base/uvm_root.svh", 546)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MMATCH"s, VL_SFORMATF_N_NX("Found %0d components matching '%s'. Returning first match, %0s.",3
                                                                                , '~',32,comp_list.size()
                                                                                , 'S',&(comp_match)
                                                                                , 'S',&(__VlefCall_0__get_full_name)) , 0U, ""s, 0U, ""s, 0U);
                }
                if ((0U == comp_list.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "CMPNFD"s, 
                                                         VL_CVT_PACK_STR_NN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component matching '"s, comp_match), "' was not found in the list of uvm_components"s)), 0U, ""s, 0U, ""s, 0U);
                    find__Vfuncrtn = VlNull{};
                    goto __Vlabel0;
                }
                find__Vfuncrtn = comp_list.at(0U);
                __Vlabel0: ;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_1__emit;
            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
            std::string unnamedblk155__DOT__c;
            std::string unnamedblk155__DOT__c__Vnext;
            CData/*0:0*/ unnamedblk155__DOT__c__Vmore;
            unnamedblk155__DOT__c__Vmore = 0;
            {
                if ((0U == VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "EMTCOMP"s, "print_topology - No UVM components to print."s, 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                if ((VlNull{} == printer)) {
                    printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
                }
                unnamedblk155__DOT__c__Vmore = (0U 
                                                != VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children.first(unnamedblk155__DOT__c__Vnext));
                while (unnamedblk155__DOT__c__Vmore) {
                    unnamedblk155__DOT__c = unnamedblk155__DOT__c__Vnext;
                    unnamedblk155__DOT__c__Vmore = 
                        (0U != VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children.next(unnamedblk155__DOT__c__Vnext));
                    if (VL_NULL_CHECK(VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children
                                      .at(unnamedblk155__DOT__c), "../../uvm/distrib/src/base/uvm_root.svh", 575)
                        ->__PVT__print_enabled) {
                        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_root.svh", 576)
                                                                     ->__VnoInFunc_print_object(vlProcess, vlSymsp, ""s, VUVM_regblock_uvm_pkg__03a__03auvm_component::__PVT__m_children
                                                                                .at(unnamedblk155__DOT__c), 0x2eU);
                    }
                }
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 0U, "UVMTOP"s, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_root.svh", 579)
                                                                     ->__VnoInFunc_emit(vlProcess, vlSymsp, __VlefCall_1__emit);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVMTOP"s, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_CONCATN_NNN("UVM testbench topology:\n"s, __VlefCall_1__emit)), 0U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x00000243U, ""s, 1U);
                }
                __Vlabel0: ;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            {
                if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable)))) {
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NOTIMOUTOVR"s, VL_SFORMATF_N_NX("The global timeout setting of %0d is not overridable to %0d due to a previous setting.",2
                                                                                , '#',64,this->__PVT__phase_timeout
                                                                                , '#',64,timeout) , 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable 
                    = overridable;
                this->__PVT__phase_timeout = timeout;
                __Vlabel0: ;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_first_child__61__Vfuncout;
            __Vtask_get_first_child__61__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_next_child__64__Vfuncout;
            __Vtask_get_next_child__64__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_is_match__66____VlefCall_0__uvm_re_match;
            __Vfunc_uvm_is_match__66____VlefCall_0__uvm_re_match = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__68__Vfuncout;
            __Vfunc_uvm_re_match__68__Vfuncout = 0;
            IData/*31:0*/ __Vfunc_uvm_re_match__68____Vincrement1;
            __Vfunc_uvm_re_match__68____Vincrement1 = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_5__get_name;
            CData/*0:0*/ __VlefCall_4__uvm_is_match;
            std::string __VlefCall_3__get_full_name;
            IData/*31:0*/ __VlefCall_2__get_next_child;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
            IData/*31:0*/ __VlefCall_0__get_first_child;
            std::string name;
            name = ""s;
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_root.svh", 608)
                                                                     ->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__61__Vfuncout);
            __VlefCall_0__get_first_child = __Vtask_get_first_child__61__Vfuncout;
            if ((0U != __VlefCall_0__get_first_child)) {
                do {
                    VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_root.svh", 610)
                                                                     ->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
                    this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, __VlefCall_1__get_child);
                    VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_root.svh", 612)
                                                                     ->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__64__Vfuncout);
                    __VlefCall_2__get_next_child = __Vtask_get_next_child__64__Vfuncout;
                } while ((0U != __VlefCall_2__get_next_child));
            }
            VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_root.svh", 613)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            this->__Vfunc_uvm_is_match__66__str = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
            this->__Vfunc_uvm_is_match__66__expr = comp_match;
            this->__Vfunc_uvm_glob_to_re__67__glob 
                = this->__Vfunc_uvm_is_match__66__expr;
            this->__Vfunc_uvm_glob_to_re__67__Vfuncout 
                = this->__Vfunc_uvm_glob_to_re__67__glob;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                = this->__Vfunc_uvm_glob_to_re__67__Vfuncout;
            this->__Vfunc_uvm_re_match__68__str = this->__Vfunc_uvm_is_match__66__str;
            this->__Vfunc_uvm_re_match__68__re = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
            __Vfunc_uvm_re_match__68____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__68__re))) {
                    __Vfunc_uvm_re_match__68__Vfuncout = 0U;
                    goto __Vlabel0;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,0U))) {
                    this->__Vfunc_uvm_re_match__68__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__68__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__68__re) 
                                       - (IData)(1U)));
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__68__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__68__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __Vfunc_uvm_re_match__68__Vfuncout = 1U;
                        goto __Vlabel0;
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__68__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__68__re))) {
                            __Vfunc_uvm_re_match__68__Vfuncout = 0U;
                            goto __Vlabel0;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__68__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__68____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__68____Vincrement1;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__68__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__68__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __Vfunc_uvm_re_match__68__Vfuncout 
                    = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        == VL_LEN_IN(this->__Vfunc_uvm_re_match__68__re))
                        ? 0U : 1U);
                __Vlabel0: ;
            }
            __Vfunc_uvm_is_match__66____VlefCall_0__uvm_re_match 
                = __Vfunc_uvm_re_match__68__Vfuncout;
            __VlefCall_4__uvm_is_match = (0U == __Vfunc_uvm_is_match__66____VlefCall_0__uvm_re_match);
            if (__VlefCall_4__uvm_is_match) {
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_root.svh", 614)
                                                                     ->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                __VlefCall_4__uvm_is_match = (""s != __VlefCall_5__get_name);
            }
            if (__VlefCall_4__uvm_is_match) {
                comps.push_back(comp);
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string __VlefCall_1__get_name;
            CData/*0:0*/ __VlefCall_0__m_add_child;
            m_add_child__Vfuncrtn = 0U;
            VUVM_regblock_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(vlProcess, vlSymsp, child, __VlefCall_0__m_add_child);
            if (__VlefCall_0__m_add_child) {
                VL_NULL_CHECK(child, "../../uvm/distrib/src/base/uvm_root.svh", 626)
                                                                     ->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if (("uvm_test_top"s == __VlefCall_1__get_name)) {
                    this->__PVT__top_levels.push_front(child);
                } else {
                    this->__PVT__top_levels.push_back(child);
                }
                m_add_child__Vfuncrtn = 1U;
            } else {
                m_add_child__Vfuncrtn = 0U;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase\n"); );
            // Body
            VlProcess::currentp(vlProcess.get());
            VUVM_regblock_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
            this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
            {
                // Inlined CFunc: __VnoInFunc_m_do_verbosity_settings
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__80__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__80__Vfuncout = 0;
                CData/*7:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__sep;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__sep = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__83__verb_enum;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__83__verb_enum = 0;
                std::string __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1;
                std::string __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2;
                CData/*0:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.clear();
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.atDefault().clear();
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.clear();
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.atDefault().clear();
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 665)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__80__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i = 0U;
                __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i, __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.size())) {
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__sep = 0x2cU;
                    this->__Vtask_uvm_split_string__81__str 
                        = VL_CVT_PACK_STR_NN(__Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i));
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s = 0U;
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e = 0U;
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.clear();
                    while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__81__str))) {
                        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s 
                            = __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e;
                        {
                            while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e, 
                                              VL_LEN_IN(this->__Vtask_uvm_split_string__81__str))) {
                                if ((VL_GETC_N(this->__Vtask_uvm_split_string__81__str,__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e) 
                                     == __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__sep)) {
                                    goto __Vlabel0;
                                }
                                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e 
                                    = ((IData)(1U) 
                                       + __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e);
                            }
                            __Vlabel0: ;
                        }
                        if ((__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s 
                             != __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e)) {
                            __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__81__str,__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__s,
                                                                                (__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e 
                                                                                - (IData)(1U))));
                        }
                        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__81__e);
                    }
                    if ((VL_GTS_III(32, 4U, __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.size()) 
                         | VL_LTS_III(32, 5U, __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.size()))) {
                        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1 
                            = __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%s'.  Setting ignored.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                    }
                    VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 675)
                                                                     ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.at(2U)), __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__83__verb_enum, __Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb);
                    if ((1U & (~ (IData)(__Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb)))) {
                        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2 
                            = __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%s'.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2)) , 0U, ""s, 0U, ""s, 0U);
                    }
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i 
                        = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk156__DOT__i);
                }
            }
            {
                // Inlined CFunc: __VnoInFunc_m_do_timeout_settings
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__85__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__85__Vfuncout = 0;
                std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__timeout_list;
                std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__sep;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings;
                std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count;
                QData/*63:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int;
                std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.clear();
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.atDefault().clear();
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout = ""s;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count = 0U;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int = 0;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec = ""s;
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 694)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings, __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__85__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count 
                    = __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__85__Vfuncout;
                if ((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)) {
                    __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout 
                        = __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(0U);
                    if (VL_LTS_III(32, 1U, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)) {
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__timeout_list = ""s;
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__sep = ""s;
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i = 0U;
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i = 0U;
                        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.size())) {
                            if ((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i)) {
                                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__sep = "; "s;
                            }
                            __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__timeout_list 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__timeout_list, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__sep), __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i));
                            __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i 
                                = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__unnamedblk158__DOT__i);
                        }
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk157__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
                    }
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)) , 0U, ""s, 0U, ""s, 0U);
                    std::ignore = VL_SSCANF_INNX(64,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout,"%d,%s",2
                                                 , '#',64,&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int)
                                                 , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) ;
                    if (("YES"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                        this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
                    } else if (("NO"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                        this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 0U);
                    } else {
                        this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
                    }
                }
            }
            {
                // Inlined CFunc: __VnoInFunc_m_do_factory_settings
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__91__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__91__Vfuncout = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__93__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__93__Vfuncout = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i;
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i__Vloopsize;
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i__Vloopsize = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i;
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i__Vloopsize;
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i__Vloopsize = 0;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_factory_settings_args;
                __Vinline_0___VnoInFunc_m_do_factory_settings_args.clear();
                __Vinline_0___VnoInFunc_m_do_factory_settings_args.atDefault().clear();
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 729)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__91__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
                    this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i)) 
                                                                                - (IData)(1U)))));
                    if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk159__DOT__i);
                    }
                }
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 733)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__93__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
                    this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i)) 
                                                                                - (IData)(1U)))));
                    if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk160__DOT__i);
                    }
                }
            }
            {
                // Inlined CFunc: __VnoInFunc_m_do_config_settings
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__129__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__129__Vfuncout = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__131__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__131__Vfuncout = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__133__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__133__Vfuncout = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i__Vloopsize;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i__Vloopsize = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i__Vloopsize;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i__Vloopsize = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i = 0;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i__Vloopsize;
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i__Vloopsize = 0;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_config_settings_args;
                __Vinline_0___VnoInFunc_m_do_config_settings_args.clear();
                __Vinline_0___VnoInFunc_m_do_config_settings_args.atDefault().clear();
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 903)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, __Vinline_0___VnoInFunc_m_do_config_settings_args, __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__129__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i, __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_config_settings_args.size();
                    this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i),0x00000014U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i)) 
                                                                                - (IData)(1U)))), 1U);
                    if ((__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk162__DOT__i);
                    }
                }
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 907)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, __Vinline_0___VnoInFunc_m_do_config_settings_args, __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__131__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i, __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_config_settings_args.size();
                    this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i)) 
                                                                                - (IData)(1U)))), 0U);
                    if ((__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk163__DOT__i);
                    }
                }
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 911)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_DEFAULT_SEQUENCE|uvm_set_default_sequence)=/"s, __Vinline_0___VnoInFunc_m_do_config_settings_args, __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__133__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i, __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                    __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i__Vloopsize 
                        = __Vinline_0___VnoInFunc_m_do_config_settings_args.size();
                    this->__VnoInFunc_m_process_default_sequence(vlProcess, vlSymsp, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i),0x0000001aU,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i)) 
                                                                                - (IData)(1U)))));
                    if ((__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i__Vloopsize 
                         <= __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk164__DOT__i);
                    }
                }
            }
            this->__VnoInFunc_m_do_max_quit_settings(vlProcess, vlSymsp);
            {
                // Inlined CFunc: __VnoInFunc_m_do_dump_args
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__143__Vfuncout;
                __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__143__Vfuncout = 0;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__144__args;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches;
                IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args_dump_args;
                VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args_all_args;
                std::string __Vinline_0___VnoInFunc_m_do_dump_args_out_string;
                __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.clear();
                __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.atDefault().clear();
                __Vinline_0___VnoInFunc_m_do_dump_args_all_args.clear();
                __Vinline_0___VnoInFunc_m_do_dump_args_all_args.atDefault().clear();
                __Vinline_0___VnoInFunc_m_do_dump_args_out_string = ""s;
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 966)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, __Vinline_0___VnoInFunc_m_do_dump_args_dump_args, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__143__Vfuncout);
                __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches 
                    = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__143__Vfuncout;
                if ((0U != __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches)) {
                    VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 967)
                                                                     ->__VnoInFunc_get_args(vlSymsp, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__144__args);
                    __Vinline_0___VnoInFunc_m_do_dump_args_all_args 
                        = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__144__args;
                    __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i = 0U;
                    __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i = 0U;
                    while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i, __Vinline_0___VnoInFunc_m_do_dump_args_all_args.size())) {
                        {
                            if (("__-f__"s == __Vinline_0___VnoInFunc_m_do_dump_args_all_args.at(__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i))) {
                                goto __Vlabel1;
                            }
                            __Vinline_0___VnoInFunc_m_do_dump_args_out_string 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vinline_0___VnoInFunc_m_do_dump_args_out_string, __Vinline_0___VnoInFunc_m_do_dump_args_all_args.at(__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i)), " "s);
                            __Vlabel1: ;
                        }
                        __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk167__DOT__i);
                    }
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, __Vinline_0___VnoInFunc_m_do_dump_args_out_string, 0U, ""s, 0U, ""s, 0U);
                }
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__80__Vfuncout;
            __Vtask_get_arg_values__80__Vfuncout = 0;
            CData/*7:0*/ __Vtask_uvm_split_string__81__sep;
            __Vtask_uvm_split_string__81__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__81__s;
            __Vtask_uvm_split_string__81__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__81__e;
            __Vtask_uvm_split_string__81__e = 0;
            IData/*31:0*/ __Vtask_m_convert_verb__83__verb_enum;
            __Vtask_m_convert_verb__83__verb_enum = 0;
            std::string __Vtemp_1;
            std::string __Vtemp_2;
            // Body
            VlProcess::currentp(vlProcess.get());
            CData/*0:0*/ __VlefCall_0__m_convert_verb;
            IData/*31:0*/ unnamedblk156__DOT__i;
            VlQueue<std::string> set_verbosity_settings;
            VlQueue<std::string> split_vals;
            set_verbosity_settings.clear();
            set_verbosity_settings.atDefault().clear();
            split_vals.clear();
            split_vals.atDefault().clear();
            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 665)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, set_verbosity_settings, __Vtask_get_arg_values__80__Vfuncout);
            unnamedblk156__DOT__i = 0U;
            unnamedblk156__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk156__DOT__i, set_verbosity_settings.size())) {
                __Vtask_uvm_split_string__81__sep = 0x2cU;
                this->__Vtask_uvm_split_string__81__str 
                    = VL_CVT_PACK_STR_NN(set_verbosity_settings.at(unnamedblk156__DOT__i));
                __Vtask_uvm_split_string__81__s = 0U;
                __Vtask_uvm_split_string__81__e = 0U;
                split_vals.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__81__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__81__str))) {
                    __Vtask_uvm_split_string__81__s 
                        = __Vtask_uvm_split_string__81__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__81__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__81__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__81__str,__Vtask_uvm_split_string__81__e) 
                                 == (IData)(__Vtask_uvm_split_string__81__sep))) {
                                goto __Vlabel0;
                            }
                            __Vtask_uvm_split_string__81__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__81__e);
                        }
                        __Vlabel0: ;
                    }
                    if ((__Vtask_uvm_split_string__81__s 
                         != __Vtask_uvm_split_string__81__e)) {
                        split_vals.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__81__str,__Vtask_uvm_split_string__81__s,
                                                         (__Vtask_uvm_split_string__81__e 
                                                          - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__81__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__81__e);
                }
                if ((VL_GTS_III(32, 4U, split_vals.size()) 
                     | VL_LTS_III(32, 5U, split_vals.size()))) {
                    __Vtemp_1 = set_verbosity_settings.at(unnamedblk156__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%s'.  Setting ignored.",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                }
                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 675)
                                                                     ->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_vals.at(2U)), __Vtask_m_convert_verb__83__verb_enum, __VlefCall_0__m_convert_verb);
                if ((1U & (~ (IData)(__VlefCall_0__m_convert_verb)))) {
                    __Vtemp_2 = set_verbosity_settings.at(unnamedblk156__DOT__i);
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%s'.",1
                                                                                , 'S',&(__Vtemp_2)) , 0U, ""s, 0U, ""s, 0U);
                }
                unnamedblk156__DOT__i = ((IData)(1U) 
                                         + unnamedblk156__DOT__i);
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_values__85__Vfuncout;
            __Vtask_get_arg_values__85__Vfuncout = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string unnamedblk157__DOT__timeout_list;
            std::string unnamedblk157__DOT__sep;
            IData/*31:0*/ unnamedblk157__DOT__unnamedblk158__DOT__i;
            VlQueue<std::string> timeout_settings;
            std::string timeout;
            IData/*31:0*/ timeout_count;
            QData/*63:0*/ timeout_int;
            std::string override_spec;
            timeout_settings.clear();
            timeout_settings.atDefault().clear();
            timeout = ""s;
            timeout_count = 0U;
            timeout_int = 0;
            override_spec = ""s;
            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 694)
                                                                     ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, timeout_settings, __Vtask_get_arg_values__85__Vfuncout);
            timeout_count = __Vtask_get_arg_values__85__Vfuncout;
            if ((0U != timeout_count)) {
                timeout = timeout_settings.at(0U);
                if (VL_LTS_III(32, 1U, timeout_count)) {
                    unnamedblk157__DOT__timeout_list = ""s;
                    unnamedblk157__DOT__sep = ""s;
                    unnamedblk157__DOT__unnamedblk158__DOT__i = 0U;
                    unnamedblk157__DOT__unnamedblk158__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk157__DOT__unnamedblk158__DOT__i, timeout_settings.size())) {
                        if ((0U != unnamedblk157__DOT__unnamedblk158__DOT__i)) {
                            unnamedblk157__DOT__sep = "; "s;
                        }
                        unnamedblk157__DOT__timeout_list 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk157__DOT__timeout_list, unnamedblk157__DOT__sep), timeout_settings.at(unnamedblk157__DOT__unnamedblk158__DOT__i));
                        unnamedblk157__DOT__unnamedblk158__DOT__i 
                            = ((IData)(1U) + unnamedblk157__DOT__unnamedblk158__DOT__i);
                    }
                    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,timeout_count
                                                                                , 'S',&(timeout)
                                                                                , 'S',&(unnamedblk157__DOT__timeout_list)) , 0U, ""s, 0U, ""s, 0U);
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(timeout)) , 0U, ""s, 0U, ""s, 0U);
                std::ignore = VL_SSCANF_INNX(64,timeout,"%d,%s",2
                                             , '#',64,&(timeout_int)
                                             , 'S',&(override_spec)) ;
                if (("YES"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                } else if (("NO"s == override_spec)) {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 0U);
                } else {
                    this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
                }
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings\n"); );
            // Locals
            IData/*31:0*/ __Vtask_get_arg_matches__91__Vfuncout;
            __Vtask_get_arg_matches__91__Vfuncout = 0;
            IData/*31:0*/ __Vtask_get_arg_matches__93__Vfuncout;
            __Vtask_get_arg_matches__93__Vfuncout = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            IData/*31:0*/ unnamedblk159__DOT__i;
            unnamedblk159__DOT__i = 0;
            IData/*31:0*/ unnamedblk159__DOT__i__Vloopsize;
            unnamedblk159__DOT__i__Vloopsize = 0;
            IData/*31:0*/ unnamedblk160__DOT__i;
            unnamedblk160__DOT__i = 0;
            IData/*31:0*/ unnamedblk160__DOT__i__Vloopsize;
            unnamedblk160__DOT__i__Vloopsize = 0;
            VlQueue<std::string> args;
            args.clear();
            args.atDefault().clear();
            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 729)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, args, __Vtask_get_arg_matches__91__Vfuncout);
            unnamedblk159__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk159__DOT__i, args.size())) {
                unnamedblk159__DOT__i__Vloopsize = args.size();
                this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk159__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk159__DOT__i)) 
                                                                                - (IData)(1U)))));
                if ((unnamedblk159__DOT__i__Vloopsize 
                     <= args.size())) {
                    unnamedblk159__DOT__i = ((IData)(1U) 
                                             + unnamedblk159__DOT__i);
                }
            }
            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 733)
                                                                     ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, args, __Vtask_get_arg_matches__93__Vfuncout);
            unnamedblk160__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk160__DOT__i, args.size())) {
                unnamedblk160__DOT__i__Vloopsize = args.size();
                this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_SUBSTR_N(args.at(unnamedblk160__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk160__DOT__i)) 
                                                                                - (IData)(1U)))));
                if ((unnamedblk160__DOT__i__Vloopsize 
                     <= args.size())) {
                    unnamedblk160__DOT__i = ((IData)(1U) 
                                             + unnamedblk160__DOT__i);
                }
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__97__sep;
            __Vtask_uvm_split_string__97__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__97__s;
            __Vtask_uvm_split_string__97__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__97__e;
            __Vtask_uvm_split_string__97__e = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            VlQueue<std::string> split_val;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
            {
                split_val.clear();
                split_val.atDefault().clear();
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 746)
                                                                     ->__VnoInFunc_get_factory(vlSymsp, factory);
                __Vtask_uvm_split_string__97__sep = 0x2cU;
                this->__Vtask_uvm_split_string__97__str 
                    = ovr;
                __Vtask_uvm_split_string__97__s = 0U;
                __Vtask_uvm_split_string__97__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__97__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__97__str))) {
                    __Vtask_uvm_split_string__97__s 
                        = __Vtask_uvm_split_string__97__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__97__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__97__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__97__str,__Vtask_uvm_split_string__97__e) 
                                 == (IData)(__Vtask_uvm_split_string__97__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__97__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__97__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__97__s 
                         != __Vtask_uvm_split_string__97__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__97__str,__Vtask_uvm_split_string__97__s,
                                                        (__Vtask_uvm_split_string__97__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__97__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__97__e);
                }
                if ((3U != split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_inst_override="s, ovr), ", setting must specify <requested_type>,<override_type>,<instance_path>"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "INSTOVR"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying instance override from the command line: +uvm_set_inst_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_root.svh", 757)
                                                                     ->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                __Vlabel0: ;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string ovr) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__103__sep;
            __Vtask_uvm_split_string__103__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__103__s;
            __Vtask_uvm_split_string__103__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__103__e;
            __Vtask_uvm_split_string__103__e = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            VlQueue<std::string> split_val;
            IData/*31:0*/ replace;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> factory;
            {
                split_val.clear();
                split_val.atDefault().clear();
                replace = 1U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 768)
                                                                     ->__VnoInFunc_get_factory(vlSymsp, factory);
                __Vtask_uvm_split_string__103__sep = 0x2cU;
                this->__Vtask_uvm_split_string__103__str 
                    = ovr;
                __Vtask_uvm_split_string__103__s = 0U;
                __Vtask_uvm_split_string__103__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__103__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__103__str))) {
                    __Vtask_uvm_split_string__103__s 
                        = __Vtask_uvm_split_string__103__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__103__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__103__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__103__str,__Vtask_uvm_split_string__103__e) 
                                 == (IData)(__Vtask_uvm_split_string__103__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__103__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__103__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__103__s 
                         != __Vtask_uvm_split_string__103__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__103__str,__Vtask_uvm_split_string__103__s,
                                                        (__Vtask_uvm_split_string__103__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__103__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__103__e);
                }
                if ((VL_LTS_III(32, 3U, split_val.size()) 
                     | VL_GTS_III(32, 2U, split_val.size()))) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_type_override="s, ovr), ", setting must specify <requested_type>,<override_type>[,<replace>]"s)), 0U, ""s, 0U, ""s, 0U);
                    goto __Vlabel0;
                }
                if ((3U == split_val.size())) {
                    if (("0"s == split_val.at(2U))) {
                        replace = 0U;
                    } else if (("1"s == split_val.at(2U))) {
                        replace = 1U;
                    } else {
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                           VL_CVT_PACK_STR_NN(
                                                                              VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid replace arg for +uvm_set_type_override="s, ovr), " value must be 0 or 1"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    }
                }
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN("Applying type override from the command line: +uvm_set_type_override="s, ovr)), 0U, ""s, 0U, ""s, 0U);
                VL_NULL_CHECK(factory, "../../uvm/distrib/src/base/uvm_root.svh", 789)
                                                                     ->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                (1U 
                                                                                & replace));
                __Vlabel0: ;
            }
        }

        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config\n"); );
            // Locals
            CData/*7:0*/ __Vtask_uvm_split_string__110__sep;
            __Vtask_uvm_split_string__110__sep = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__110__s;
            __Vtask_uvm_split_string__110__s = 0;
            IData/*31:0*/ __Vtask_uvm_split_string__110__e;
            __Vtask_uvm_split_string__110__e = 0;
            // Body
            VlProcess::currentp(vlProcess.get());
            std::string unnamedblk161__DOT__base;
            std::string unnamedblk161__DOT__extval;
            VlWide<128>/*4095:0*/ v;
            VlQueue<std::string> split_val;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> m_uvm_top;
            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
            {
                VL_ZERO_W(4096, v);
                split_val.clear();
                split_val.atDefault().clear();
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 802)
                                                                     ->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
                __Vtask_uvm_split_string__110__sep = 0x2cU;
                this->__Vtask_uvm_split_string__110__str 
                    = cfg;
                __Vtask_uvm_split_string__110__s = 0U;
                __Vtask_uvm_split_string__110__e = 0U;
                split_val.clear();
                while (VL_LTS_III(32, __Vtask_uvm_split_string__110__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__110__str))) {
                    __Vtask_uvm_split_string__110__s 
                        = __Vtask_uvm_split_string__110__e;
                    {
                        while (VL_LTS_III(32, __Vtask_uvm_split_string__110__e, 
                                          VL_LEN_IN(this->__Vtask_uvm_split_string__110__str))) {
                            if ((VL_GETC_N(this->__Vtask_uvm_split_string__110__str,__Vtask_uvm_split_string__110__e) 
                                 == (IData)(__Vtask_uvm_split_string__110__sep))) {
                                goto __Vlabel1;
                            }
                            __Vtask_uvm_split_string__110__e 
                                = ((IData)(1U) + __Vtask_uvm_split_string__110__e);
                        }
                        __Vlabel1: ;
                    }
                    if ((__Vtask_uvm_split_string__110__s 
                         != __Vtask_uvm_split_string__110__e)) {
                        split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__110__str,__Vtask_uvm_split_string__110__s,
                                                        (__Vtask_uvm_split_string__110__e 
                                                         - (IData)(1U))));
                    }
                    __Vtask_uvm_split_string__110__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__110__e);
                }
                if ((1U == split_val.size())) {
                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing field and value: component is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                goto __Vlabel0;
                            }
                            if ((2U == split_val.size())) {
                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                   VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing value: component is \""s), split_val.at(0U)), "\"  field is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                }
                                                if (
                                                    VL_LTS_III(32, 3U, split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_config command\"%s\" : expected only 3 fields (component, field and value).",1
                                                                                , 'S',&(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                    goto __Vlabel0;
                                                }
                                                if (is_int) {
                                                    if (
                                                        VL_LTS_III(32, 2U, 
                                                                   VL_LEN_IN(split_val.at(2U)))) {
                                                        unnamedblk161__DOT__base = ""s;
                                                        unnamedblk161__DOT__extval = ""s;
                                                        unnamedblk161__DOT__base 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),0U,1U);
                                                        unnamedblk161__DOT__extval 
                                                            = 
                                                            VL_SUBSTR_N(split_val.at(2U),2U,
                                                                        (VL_LEN_IN(split_val.at(2U)) 
                                                                         - (IData)(1U)));
                                                        if (
                                                            ("'b"s 
                                                             == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 2));
                                                        } else if (
                                                                   ("0b"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 2));
                                                        } else if (
                                                                   ("'o"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 8));
                                                        } else if (
                                                                   ("'d"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 10));
                                                        } else if (
                                                                   ("'h"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 16));
                                                        } else if (
                                                                   ("'x"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 16));
                                                        } else if (
                                                                   ("0x"s 
                                                                    == unnamedblk161__DOT__base)) {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(unnamedblk161__DOT__extval, 16));
                                                        } else {
                                                            VL_EXTENDS_WI(4096,32, v, 
                                                                          VL_ATOI_N(split_val.at(2U), 10));
                                                        }
                                                    } else {
                                                        VL_EXTENDS_WI(4096,32, v, 
                                                                      VL_ATOI_N(split_val.at(2U), 10));
                                                    }
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_int="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz7__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
                                                } else {
                                                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_string="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz2__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, m_uvm_top, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
                                                }
                                                __Vlabel0: ;
                                            }
                                        }

                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string cfg) {
                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_default_sequence\n"); );
                                            // Locals
                                            CData/*7:0*/ __Vtask_uvm_split_string__121__sep;
                                            __Vtask_uvm_split_string__121__sep = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__121__s;
                                            __Vtask_uvm_split_string__121__s = 0;
                                            IData/*31:0*/ __Vtask_uvm_split_string__121__e;
                                            __Vtask_uvm_split_string__121__e = 0;
                                            std::string __Vtemp_1;
                                            // Body
                                            VlProcess::currentp(vlProcess.get());
                                            VlQueue<std::string> split_val;
                                            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> cs;
                                            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> m_uvm_top;
                                            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_factory> f;
                                            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> w;
                                            {
                                                split_val.clear();
                                                split_val.atDefault().clear();
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
                                                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 859)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, m_uvm_top);
                                                VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_root.svh", 860)
                                                                                ->__VnoInFunc_get_factory(vlSymsp, f);
                                                __Vtask_uvm_split_string__121__sep = 0x2cU;
                                                this->__Vtask_uvm_split_string__121__str 
                                                    = cfg;
                                                __Vtask_uvm_split_string__121__s = 0U;
                                                __Vtask_uvm_split_string__121__e = 0U;
                                                split_val.clear();
                                                while (
                                                       VL_LTS_III(32, __Vtask_uvm_split_string__121__e, 
                                                                  VL_LEN_IN(this->__Vtask_uvm_split_string__121__str))) {
                                                    __Vtask_uvm_split_string__121__s 
                                                        = __Vtask_uvm_split_string__121__e;
                                                    {
                                                        while (
                                                               VL_LTS_III(32, __Vtask_uvm_split_string__121__e, 
                                                                          VL_LEN_IN(this->__Vtask_uvm_split_string__121__str))) {
                                                            if (
                                                                (VL_GETC_N(this->__Vtask_uvm_split_string__121__str,__Vtask_uvm_split_string__121__e) 
                                                                 == (IData)(__Vtask_uvm_split_string__121__sep))) {
                                                                goto __Vlabel1;
                                                            }
                                                            __Vtask_uvm_split_string__121__e 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + __Vtask_uvm_split_string__121__e);
                                                        }
                                                        __Vlabel1: ;
                                                    }
                                                    if (
                                                        (__Vtask_uvm_split_string__121__s 
                                                         != __Vtask_uvm_split_string__121__e)) {
                                                        split_val.push_back(
                                                                            VL_SUBSTR_N(this->__Vtask_uvm_split_string__121__str,__Vtask_uvm_split_string__121__s,
                                                                                (__Vtask_uvm_split_string__121__e 
                                                                                - (IData)(1U))));
                                                    }
                                                    __Vtask_uvm_split_string__121__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + __Vtask_uvm_split_string__121__e);
                                                }
                                                if (
                                                    (1U 
                                                     == split_val.size())) {
                                                    this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing phase and type: sequencer is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                goto __Vlabel0;
                                                            }
                                                            if (
                                                                (2U 
                                                                 == split_val.size())) {
                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_default_sequence command\""s, cfg), "\" missing type: sequencer is \""s), split_val.at(0U)), "\"  phase is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                }
                                                                                if (
                                                                                VL_LTS_III(32, 3U, split_val.size())) {
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_default_sequence command\"%s\" : expected only 3 fields (sequencer, phase and type).",1
                                                                                , 'S',&(cfg)) , 0U, ""s, 0U, ""s, 0U);
                                                                                goto __Vlabel0;
                                                                                }
                                                                                VL_NULL_CHECK(f, "../../uvm/distrib/src/base/uvm_root.svh", 882)
                                                                                ->__VnoInFunc_find_wrapper_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)), w);
                                                                                if (
                                                                                (VlNull{} 
                                                                                == w)) {
                                                                                __Vtemp_1 
                                                                                = split_val.at(2U);
                                                                                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid type '%s' provided to +uvm_set_default_sequence",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, ""s, 0U, ""s, 0U);
                                                                                } else {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("Setting default sequence from the command line: +uvm_set_default_sequence="s, cfg)), 0U, ""s, 0U, ""s, 0U);
                                                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(split_val.at(0U), "."s), split_val.at(1U))), "default_sequence"s, w);
                                                                                }
                                                                                __Vlabel0: ;
                                                                            }
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__129__Vfuncout;
                                                                            __Vtask_get_arg_matches__129__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__131__Vfuncout;
                                                                            __Vtask_get_arg_matches__131__Vfuncout = 0;
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__133__Vfuncout;
                                                                            __Vtask_get_arg_matches__133__Vfuncout = 0;
                                                                            // Body
                                                                            VlProcess::currentp(vlProcess.get());
                                                                            IData/*31:0*/ unnamedblk162__DOT__i;
                                                                            unnamedblk162__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk162__DOT__i__Vloopsize;
                                                                            unnamedblk162__DOT__i__Vloopsize = 0;
                                                                            IData/*31:0*/ unnamedblk163__DOT__i;
                                                                            unnamedblk163__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk163__DOT__i__Vloopsize;
                                                                            unnamedblk163__DOT__i__Vloopsize = 0;
                                                                            IData/*31:0*/ unnamedblk164__DOT__i;
                                                                            unnamedblk164__DOT__i = 0;
                                                                            IData/*31:0*/ unnamedblk164__DOT__i__Vloopsize;
                                                                            unnamedblk164__DOT__i__Vloopsize = 0;
                                                                            VlQueue<std::string> args;
                                                                            args.clear();
                                                                            args.atDefault().clear();
                                                                            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 903)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, args, __Vtask_get_arg_matches__129__Vfuncout);
                                                                            unnamedblk162__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk162__DOT__i, args.size())) {
                                                                                unnamedblk162__DOT__i__Vloopsize 
                                                                                = args.size();
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk162__DOT__i),0x00000014U,
                                                                                (VL_LEN_IN(args.at(unnamedblk162__DOT__i)) 
                                                                                - (IData)(1U)))), 1U);
                                                                                if (
                                                                                (unnamedblk162__DOT__i__Vloopsize 
                                                                                <= args.size())) {
                                                                                unnamedblk162__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk162__DOT__i);
                                                                                }
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 907)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, args, __Vtask_get_arg_matches__131__Vfuncout);
                                                                            unnamedblk163__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk163__DOT__i, args.size())) {
                                                                                unnamedblk163__DOT__i__Vloopsize 
                                                                                = args.size();
                                                                                this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk163__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk163__DOT__i)) 
                                                                                - (IData)(1U)))), 0U);
                                                                                if (
                                                                                (unnamedblk163__DOT__i__Vloopsize 
                                                                                <= args.size())) {
                                                                                unnamedblk163__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk163__DOT__i);
                                                                                }
                                                                            }
                                                                            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 911)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "/^\\+(UVM_SET_DEFAULT_SEQUENCE|uvm_set_default_sequence)=/"s, args, __Vtask_get_arg_matches__133__Vfuncout);
                                                                            unnamedblk164__DOT__i = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk164__DOT__i, args.size())) {
                                                                                unnamedblk164__DOT__i__Vloopsize 
                                                                                = args.size();
                                                                                this->__VnoInFunc_m_process_default_sequence(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_SUBSTR_N(args.at(unnamedblk164__DOT__i),0x0000001aU,
                                                                                (VL_LEN_IN(args.at(unnamedblk164__DOT__i)) 
                                                                                - (IData)(1U)))));
                                                                                if (
                                                                                (unnamedblk164__DOT__i__Vloopsize 
                                                                                <= args.size())) {
                                                                                unnamedblk164__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk164__DOT__i);
                                                                                }
                                                                            }
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_values__136__Vfuncout;
                                                                            __Vtask_get_arg_values__136__Vfuncout = 0;
                                                                            CData/*7:0*/ __Vtask_uvm_split_string__139__sep;
                                                                            __Vtask_uvm_split_string__139__sep = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__139__s;
                                                                            __Vtask_uvm_split_string__139__s = 0;
                                                                            IData/*31:0*/ __Vtask_uvm_split_string__139__e;
                                                                            __Vtask_uvm_split_string__139__e = 0;
                                                                            // Body
                                                                            VlProcess::currentp(vlProcess.get());
                                                                            std::string unnamedblk165__DOT__max_quit_list;
                                                                            std::string unnamedblk165__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk165__DOT__unnamedblk166__DOT__i;
                                                                            VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> srvr;
                                                                            VlQueue<std::string> max_quit_settings;
                                                                            IData/*31:0*/ max_quit_count;
                                                                            std::string max_quit;
                                                                            VlQueue<std::string> split_max_quit;
                                                                            IData/*31:0*/ max_quit_int;
                                                                            max_quit_settings.clear();
                                                                            max_quit_settings.atDefault().clear();
                                                                            max_quit_count = 0U;
                                                                            max_quit = ""s;
                                                                            split_max_quit.clear();
                                                                            split_max_quit.atDefault().clear();
                                                                            max_quit_int = 0U;
                                                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, srvr);
                                                                            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 929)
                                                                                ->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_MAX_QUIT_COUNT="s, max_quit_settings, __Vtask_get_arg_values__136__Vfuncout);
                                                                            max_quit_count 
                                                                                = __Vtask_get_arg_values__136__Vfuncout;
                                                                            if (
                                                                                (0U 
                                                                                != max_quit_count)) {
                                                                                max_quit 
                                                                                = max_quit_settings.at(0U);
                                                                                if (
                                                                                VL_LTS_III(32, 1U, max_quit_count)) {
                                                                                unnamedblk165__DOT__max_quit_list = ""s;
                                                                                unnamedblk165__DOT__sep = ""s;
                                                                                unnamedblk165__DOT__unnamedblk166__DOT__i = 0U;
                                                                                unnamedblk165__DOT__unnamedblk166__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk165__DOT__unnamedblk166__DOT__i, max_quit_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk165__DOT__unnamedblk166__DOT__i)) {
                                                                                unnamedblk165__DOT__sep = "; "s;
                                                                                }
                                                                                unnamedblk165__DOT__max_quit_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk165__DOT__max_quit_list, unnamedblk165__DOT__sep), max_quit_settings.at(unnamedblk165__DOT__unnamedblk166__DOT__i));
                                                                                unnamedblk165__DOT__unnamedblk166__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk165__DOT__unnamedblk166__DOT__i);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTMAXQUIT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,max_quit_count
                                                                                , 'S',&(max_quit)
                                                                                , 'S',&(unnamedblk165__DOT__max_quit_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MAXQUITSET"s, VL_SFORMATF_N_NX("'+UVM_MAX_QUIT_COUNT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(max_quit)) , 0U, ""s, 0U, ""s, 0U);
                                                                                __Vtask_uvm_split_string__139__sep = 0x2cU;
                                                                                this->__Vtask_uvm_split_string__139__str 
                                                                                = max_quit;
                                                                                __Vtask_uvm_split_string__139__s = 0U;
                                                                                __Vtask_uvm_split_string__139__e = 0U;
                                                                                split_max_quit.clear();
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__139__e, 
                                                                                VL_LEN_IN(this->__Vtask_uvm_split_string__139__str))) {
                                                                                __Vtask_uvm_split_string__139__s 
                                                                                = __Vtask_uvm_split_string__139__e;
                                                                                {
                                                                                while (
                                                                                VL_LTS_III(32, __Vtask_uvm_split_string__139__e, 
                                                                                VL_LEN_IN(this->__Vtask_uvm_split_string__139__str))) {
                                                                                if (
                                                                                (VL_GETC_N(this->__Vtask_uvm_split_string__139__str,__Vtask_uvm_split_string__139__e) 
                                                                                == (IData)(__Vtask_uvm_split_string__139__sep))) {
                                                                                goto __Vlabel0;
                                                                                }
                                                                                __Vtask_uvm_split_string__139__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__139__e);
                                                                                }
                                                                                __Vlabel0: ;
                                                                                }
                                                                                if (
                                                                                (__Vtask_uvm_split_string__139__s 
                                                                                != __Vtask_uvm_split_string__139__e)) {
                                                                                split_max_quit.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__139__str,__Vtask_uvm_split_string__139__s,
                                                                                (__Vtask_uvm_split_string__139__e 
                                                                                - (IData)(1U))));
                                                                                }
                                                                                __Vtask_uvm_split_string__139__e 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + __Vtask_uvm_split_string__139__e);
                                                                                }
                                                                                max_quit_int 
                                                                                = 
                                                                                VL_ATOI_N(split_max_quit.at(0U), 10);
                                                                                if (
                                                                                ("YES"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "../../uvm/distrib/src/base/uvm_root.svh", 951)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                } else if (
                                                                                ("NO"s 
                                                                                == split_max_quit.at(1U))) {
                                                                                VL_NULL_CHECK(srvr, "../../uvm/distrib/src/base/uvm_root.svh", 952)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 0U);
                                                                                } else {
                                                                                VL_NULL_CHECK(srvr, "../../uvm/distrib/src/base/uvm_root.svh", 953)
                                                                                ->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
                                                                                }
                                                                            }
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args\n"); );
                                                                            // Locals
                                                                            IData/*31:0*/ __Vtask_get_arg_matches__143__Vfuncout;
                                                                            __Vtask_get_arg_matches__143__Vfuncout = 0;
                                                                            VlQueue<std::string> __Vtask_get_args__144__args;
                                                                            // Body
                                                                            VlProcess::currentp(vlProcess.get());
                                                                            IData/*31:0*/ __VlefCall_0__get_arg_matches;
                                                                            IData/*31:0*/ unnamedblk167__DOT__i;
                                                                            VlQueue<std::string> dump_args;
                                                                            VlQueue<std::string> all_args;
                                                                            std::string out_string;
                                                                            dump_args.clear();
                                                                            dump_args.atDefault().clear();
                                                                            all_args.clear();
                                                                            all_args.atDefault().clear();
                                                                            out_string = ""s;
                                                                            VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 966)
                                                                                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, dump_args, __Vtask_get_arg_matches__143__Vfuncout);
                                                                            __VlefCall_0__get_arg_matches 
                                                                                = __Vtask_get_arg_matches__143__Vfuncout;
                                                                            if (
                                                                                (0U 
                                                                                != __VlefCall_0__get_arg_matches)) {
                                                                                VL_NULL_CHECK(this->__PVT__clp, "../../uvm/distrib/src/base/uvm_root.svh", 967)
                                                                                ->__VnoInFunc_get_args(vlSymsp, __Vtask_get_args__144__args);
                                                                                all_args 
                                                                                = __Vtask_get_args__144__args;
                                                                                unnamedblk167__DOT__i = 0U;
                                                                                unnamedblk167__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk167__DOT__i, all_args.size())) {
                                                                                {
                                                                                if (
                                                                                ("__-f__"s 
                                                                                == all_args.at(unnamedblk167__DOT__i))) {
                                                                                goto __Vlabel0;
                                                                                }
                                                                                out_string 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(out_string, all_args.at(unnamedblk167__DOT__i)), " "s);
                                                                                __Vlabel0: ;
                                                                                }
                                                                                unnamedblk167__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk167__DOT__i);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, out_string, 0U, ""s, 0U, ""s, 0U);
                                                                            }
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity\n"); );
                                                                            // Body
                                                                            VlProcess::currentp(vlProcess.get());
                                                                            std::string unnamedblk168__DOT__verb_list;
                                                                            std::string unnamedblk168__DOT__sep;
                                                                            IData/*31:0*/ unnamedblk168__DOT__unnamedblk169__DOT__i;
                                                                            std::string verb_string;
                                                                            VlQueue<std::string> verb_settings;
                                                                            IData/*31:0*/ verb_count;
                                                                            IData/*31:0*/ plusarg;
                                                                            IData/*31:0*/ verbosity;
                                                                            verb_string = ""s;
                                                                            verb_settings.clear();
                                                                            verb_settings.atDefault().clear();
                                                                            verb_count = 0U;
                                                                            plusarg = 0U;
                                                                            verbosity = 0x000000c8U;
                                                                            verb_count 
                                                                                = VL_VALUEPLUSARGS_INN(64, "UVM_VERBOSITY=%s"s, 
                                                                                verb_string);
                                                                            if (
                                                                                (0U 
                                                                                != verb_count)) {
                                                                                verb_settings.push_back(verb_string);
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 0U, verb_count)) {
                                                                                verb_string 
                                                                                = verb_settings.at(0U);
                                                                                plusarg = 1U;
                                                                            }
                                                                            if (
                                                                                VL_LTS_III(32, 1U, verb_count)) {
                                                                                unnamedblk168__DOT__verb_list = ""s;
                                                                                unnamedblk168__DOT__sep = ""s;
                                                                                unnamedblk168__DOT__unnamedblk169__DOT__i = 0U;
                                                                                while (
                                                                                VL_LTS_III(32, unnamedblk168__DOT__unnamedblk169__DOT__i, verb_settings.size())) {
                                                                                if (
                                                                                (0U 
                                                                                != unnamedblk168__DOT__unnamedblk169__DOT__i)) {
                                                                                unnamedblk168__DOT__sep = ", "s;
                                                                                }
                                                                                unnamedblk168__DOT__verb_list 
                                                                                = 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk168__DOT__verb_list, unnamedblk168__DOT__sep), verb_settings.at(unnamedblk168__DOT__unnamedblk169__DOT__i));
                                                                                unnamedblk168__DOT__unnamedblk169__DOT__i 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk168__DOT__unnamedblk169__DOT__i);
                                                                                }
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTVERB"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,verb_count
                                                                                , 'S',&(verb_string)
                                                                                , 'S',&(unnamedblk168__DOT__verb_list)) , 0U, ""s, 0U, ""s, 0U);
                                                                            }
                                                                            if (
                                                                                (1U 
                                                                                == plusarg)) {
                                                                                if (
                                                                                (((((((("UVM_NONE"s 
                                                                                == verb_string) 
                                                                                | ("NONE"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_LOW"s 
                                                                                == verb_string)) 
                                                                                | ("LOW"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("MEDIUM"s 
                                                                                == verb_string)) 
                                                                                | ("UVM_HIGH"s 
                                                                                == verb_string)) 
                                                                                | ("HIGH"s 
                                                                                == verb_string))) {
                                                                                verbosity 
                                                                                = 
                                                                                (("UVM_NONE"s 
                                                                                == verb_string)
                                                                                 ? 0U
                                                                                 : 
                                                                                (("NONE"s 
                                                                                == verb_string)
                                                                                 ? 0U
                                                                                 : 
                                                                                (("UVM_LOW"s 
                                                                                == verb_string)
                                                                                 ? 0x00000064U
                                                                                 : 
                                                                                (("LOW"s 
                                                                                == verb_string)
                                                                                 ? 0x00000064U
                                                                                 : 
                                                                                (("UVM_MEDIUM"s 
                                                                                == verb_string)
                                                                                 ? 0x000000c8U
                                                                                 : 
                                                                                (("MEDIUM"s 
                                                                                == verb_string)
                                                                                 ? 0x000000c8U
                                                                                 : 0x0000012cU))))));
                                                                                } else if (
                                                                                ("UVM_FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                } else if (
                                                                                ("FULL"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x00000190U;
                                                                                } else if (
                                                                                ("UVM_DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                } else if (
                                                                                ("DEBUG"s 
                                                                                == verb_string)) {
                                                                                verbosity = 0x000001f4U;
                                                                                } else {
                                                                                verbosity 
                                                                                = 
                                                                                VL_ATOI_N(verb_string, 10);
                                                                                if (
                                                                                VL_LTS_III(32, 0U, verbosity)) {
                                                                                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NSTVERB"s, VL_SFORMATF_N_NX("Non-standard verbosity value, using provided '%0d'.",1
                                                                                , '~',32,verbosity) , 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                if (
                                                                                (0U 
                                                                                == verbosity)) {
                                                                                verbosity = 0x000000c8U;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLVERB"s, "Illegal verbosity value, using default of UVM_MEDIUM."s, 0U, ""s, 0U, ""s, 0U);
                                                                                }
                                                                                }
                                                                            }
                                                                            this->__VnoInFunc_set_report_verbosity_level_hier(vlSymsp, verbosity);
                                                                        }

                                                                        VlCoroutine VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase\n"); );
                                                                            // Locals
                                                                            std::string __Vtemp_1;
                                                                            std::string __Vtemp_2;
                                                                            // Body
                                                                            VlProcess::currentp(vlProcess.get());
                                                                            VL_KEEP_THIS;
                                                                            IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
                                                                            IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                                                                            IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                                                                            IData/*31:0*/ unnamedblk170__DOT__idx;
                                                                            unnamedblk170__DOT__idx = 0;
                                                                            IData/*31:0*/ unnamedblk170__DOT__idx__Vloopsize;
                                                                            unnamedblk170__DOT__idx__Vloopsize = 0;
                                                                            IData/*31:0*/ unnamedblk171__DOT__idx;
                                                                            unnamedblk171__DOT__idx = 0;
                                                                            IData/*31:0*/ unnamedblk171__DOT__idx__Vloopsize;
                                                                            unnamedblk171__DOT__idx__Vloopsize = 0;
                                                                            unnamedblk170__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk170__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                                                                                unnamedblk170__DOT__idx__Vloopsize 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size();
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk170__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_0__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_0__uvm_report_enabled)) {
                                                                                __Vtemp_1 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.at(unnamedblk170__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_action=%s\" never took effect due to a mismatching component pattern",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x00000423U, ""s, 1U);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (unnamedblk170__DOT__idx__Vloopsize 
                                                                                <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_action.size())) {
                                                                                unnamedblk170__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk170__DOT__idx);
                                                                                }
                                                                            }
                                                                            unnamedblk171__DOT__idx = 0U;
                                                                            while (
                                                                                VL_LTS_III(32, unnamedblk171__DOT__idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                                                                                unnamedblk171__DOT__idx__Vloopsize 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size();
                                                                                if (
                                                                                (0U 
                                                                                == vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk171__DOT__idx)
                                                                                .__PVT__used)) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "INVLCMDARGS"s, __VlefCall_1__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_1__uvm_report_enabled)) {
                                                                                __Vtemp_2 
                                                                                = vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.at(unnamedblk171__DOT__idx)
                                                                                .__PVT__arg;
                                                                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("\"+uvm_set_severity=%s\" never took effect due to a mismatching component pattern",1
                                                                                , 'S',&(__Vtemp_2)) , 0U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x00000427U, ""s, 1U);
                                                                                }
                                                                                }
                                                                                if (
                                                                                (unnamedblk171__DOT__idx__Vloopsize 
                                                                                <= vlSymsp->TOP__uvm_pkg__03a__03auvm_component__Vclpkg.__PVT__m_uvm_applied_cl_sev.size())) {
                                                                                unnamedblk171__DOT__idx 
                                                                                = 
                                                                                ((IData)(1U) 
                                                                                + unnamedblk171__DOT__idx);
                                                                                }
                                                                            }
                                                                            if (
                                                                                (0ULL 
                                                                                < VL_TIME_UNITED_Q(1))) {
                                                                                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "RUNPHSTIME"s, __VlefCall_2__uvm_report_enabled);
                                                                                if (
                                                                                (0U 
                                                                                != __VlefCall_2__uvm_report_enabled)) {
                                                                                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RUNPHSTIME"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The run phase must start at time 0, current time is "s, VL_SFORMATF_N_NX("%0t",2, 'T',-12
                                                                                , 'D',VL_TIME_UNITED_D(1)) ), ". No non-zero delays are allowed before "s), "run_test(), and pre-run user defined phases may not consume "s), "simulation time before the start of the run phase."s)), 0U, "../../uvm/distrib/src/base/uvm_root.svh"s, 0x0000042eU, ""s, 1U);
                                                                                }
                                                                            }
                                                                            co_return;
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize\n"); );
                                                                            // Body
                                                                            IData/*31:0*/ __VlefCall_0____VBasicRand;
                                                                            VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                                                                            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                                                                            this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                                                                            randomize__Vfuncrtn 
                                                                                = 
                                                                                (randomize__Vfuncrtn 
                                                                                & __VlefCall_0____VBasicRand);
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints\n"); );
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand\n"); );
                                                                            // Body
                                                                            __VBasicRand__Vfuncrtn = 1U;
                                                                        }

                                                                        void VUVM_regblock_uvm_pkg__03a__03auvm_root::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::_ctor_var_reset\n"); );
                                                                            // Body
                                                                            (void)vlSymsp;  // Prevent unused variable warning
                                                                            __PVT__m_phase_all_done = 0;
                                                                        }

                                                                        VUVM_regblock_uvm_pkg__03a__03auvm_root::~VUVM_regblock_uvm_pkg__03a__03auvm_root() {
                                                                            VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_root::~\n"); );
                                                                        }
