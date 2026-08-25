// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_domains(VUVM_Activator__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain>> &domains) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_domains\n"); );
    // Body
    domains = this->__PVT__m_domains;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_schedule(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_schedule\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> __Vtask_get_uvm_domain__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __Vtask_get_uvm_domain__0__Vfuncout);
    get_uvm_schedule__Vfuncrtn = this->__PVT__m_uvm_schedule;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_common_domain\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__21__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__23__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__25__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__27__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__29__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__31__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__33__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __Vtask_find__35__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> __VlefCall_18__find;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_run_phase> __VlefCall_17__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_phase> __VlefCall_16__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_check_phase> __VlefCall_15__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_extract_phase> __VlefCall_14__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_run_phase> __VlefCall_13__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_start_of_simulation_phase> __VlefCall_12__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __VlefCall_11__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_connect_phase> __VlefCall_10__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_build_phase> __VlefCall_9__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_final_phase> __VlefCall_8__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_phase> __VlefCall_7__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_check_phase> __VlefCall_6__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_extract_phase> __VlefCall_5__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_run_phase> __VlefCall_4__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_start_of_simulation_phase> __VlefCall_3__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_end_of_elaboration_phase> __VlefCall_2__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_connect_phase> __VlefCall_1__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_build_phase> __VlefCall_0__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> domain;
    {
        if ((VlNull{} != this->__PVT__m_common_domain)) {
            get_common_domain__Vfuncrtn = this->__PVT__m_common_domain;
            goto __Vlabel0;
        }
        domain = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "common"s);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 109)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_0__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 110)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_1__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_2__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 111)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_2__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_3__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 112)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_3__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_4__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 113)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_4__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_5__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 114)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_5__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_6__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 115)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_6__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_7__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 116)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_7__get, VlNull{}, VlNull{}, VlNull{});
        vlSymsp->TOP__uvm_pkg__03a__03auvm_final_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_8__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 117)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_8__get, VlNull{}, VlNull{}, VlNull{});
        this->__PVT__m_domains.at("common"s) = domain;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_build_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_9__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 122)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_9__get, 1U, __Vtask_find__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_connect_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_10__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 123)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_10__get, 1U, __Vtask_find__23__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_end_of_elaboration_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_11__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 124)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_11__get, 1U, __Vtask_find__25__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph 
            = __Vtask_find__25__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_12__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 125)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_12__get, 1U, __Vtask_find__27__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_13__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 126)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_13__get, 1U, __Vtask_find__29__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__run_ph = __Vtask_find__29__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_extract_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_14__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 127)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_14__get, 1U, __Vtask_find__31__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_check_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_15__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 128)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_15__get, 1U, __Vtask_find__33__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_16__get);
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_domain.svh", 129)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_16__get, 1U, __Vtask_find__35__Vfuncout);
        this->__PVT__m_common_domain = domain;
        this->__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, domain);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_run_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_17__get);
        VL_NULL_CHECK(this->__PVT__m_common_domain, "../../uvm/distrib/src/base/uvm_domain.svh", 134)->__VnoInFunc_find(vlProcess, vlSymsp, __VlefCall_17__get, 1U, __VlefCall_18__find);
        VL_NULL_CHECK(this->__PVT__m_common_domain, "../../uvm/distrib/src/base/uvm_domain.svh", 133)->__VnoInFunc_add(vlProcess, vlSymsp, domain, __VlefCall_18__find, VlNull{}, VlNull{});
        get_common_domain__Vfuncrtn = this->__PVT__m_common_domain;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> schedule) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_add_uvm_phases\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_post_shutdown_phase> __VlefCall_11__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_shutdown_phase> __VlefCall_10__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pre_shutdown_phase> __VlefCall_9__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_post_main_phase> __VlefCall_8__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_main_phase> __VlefCall_7__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pre_main_phase> __VlefCall_6__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_post_configure_phase> __VlefCall_5__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_configure_phase> __VlefCall_4__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pre_configure_phase> __VlefCall_3__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_post_reset_phase> __VlefCall_2__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reset_phase> __VlefCall_1__get;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pre_reset_phase> __VlefCall_0__get;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_0__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 148)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_0__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_1__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 149)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_1__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_post_reset_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_2__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 150)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_2__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_3__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 151)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_3__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_4__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 152)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_4__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_post_configure_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_5__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 153)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_5__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_6__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 154)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_6__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_7__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 155)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_7__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_post_main_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_8__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 156)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_8__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_pre_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_9__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 157)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_9__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_10__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 158)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_10__get, VlNull{}, VlNull{}, VlNull{});
    vlSymsp->TOP__uvm_pkg__03a__03auvm_post_shutdown_phase__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_11__get);
    VL_NULL_CHECK(schedule, "../../uvm/distrib/src/base/uvm_domain.svh", 159)->__VnoInFunc_add(vlProcess, vlSymsp, __VlefCall_11__get, VlNull{}, VlNull{}, VlNull{});
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_get_uvm_domain\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_uvm_domain)) {
        this->__PVT__m_uvm_domain = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_domain, vlProcess, vlSymsp, "uvm"s);
        this->__PVT__m_uvm_schedule = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, "uvm_sched"s, 3U, VlNull{});
        this->__VnoInFunc_add_uvm_phases(vlProcess, vlSymsp, this->__PVT__m_uvm_schedule);
        VL_NULL_CHECK(this->__PVT__m_uvm_domain, "../../uvm/distrib/src/base/uvm_domain.svh", 174)->__VnoInFunc_add(vlProcess, vlSymsp, this->__PVT__m_uvm_schedule, VlNull{}, VlNull{}, VlNull{});
    }
    get_uvm_domain__Vfuncrtn = this->__PVT__m_uvm_domain;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_jump_all(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_domain__Vclpkg::__VnoInFunc_jump_all\n"); );
    // Locals
    VlAssocArray<std::string, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain>> __Vtask_get_domains__68__domains;
    // Body
    std::string unnamedblk2__DOT__idx;
    std::string unnamedblk2__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vmore;
    unnamedblk2__DOT__idx__Vmore = 0;
    VlAssocArray<std::string, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain>> domains;
    domains.clear();
    this->__VnoInFunc_get_domains(vlSymsp, __Vtask_get_domains__68__domains);
    domains = __Vtask_get_domains__68__domains;
    unnamedblk2__DOT__idx__Vmore = (0U != domains.first(unnamedblk2__DOT__idx__Vnext));
    while (unnamedblk2__DOT__idx__Vmore) {
        unnamedblk2__DOT__idx = unnamedblk2__DOT__idx__Vnext;
        unnamedblk2__DOT__idx__Vmore = (0U != domains.next(unnamedblk2__DOT__idx__Vnext));
        VL_NULL_CHECK(domains.at(unnamedblk2__DOT__idx), "../../uvm/distrib/src/base/uvm_domain.svh", 215)->__VnoInFunc_jump(vlSymsp, phase);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_phase::init(vlProcess, vlSymsp, name, 4U, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__PVT__m_domains.exists(name)) {
        this->__Vfunc_uvm_report_enabled__1__id = "UNIQDOMNAM"s;
        __Vfunc_uvm_report_enabled__1__severity = 2U;
        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), this->__Vfunc_uvm_report_enabled__1__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__5__context_name = ""s;
            __Vtask_uvm_report_error__5__line = 0x000000baU;
            this->__Vtask_uvm_report_error__5__filename = "../../uvm/distrib/src/base/uvm_domain.svh"s;
            __Vtask_uvm_report_error__5__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__5__message
                          ,"Domain created with non-unique name '%s'",1
                          , 'S',&(name));
            this->__Vtask_uvm_report_error__5__id = "UNIQDOMNAM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__5__id, this->__Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, this->__Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, this->__Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__PVT__m_domains.at(name) 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_domain>{this};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc_jump(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc_jump\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_state__10__Vfuncout;
    __Vtask_get_state__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_state__11__Vfuncout;
    __Vtask_get_state__11__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_before;
    IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    IData/*31:0*/ unnamedblk1__DOT__idx__Vloopsize;
    unnamedblk1__DOT__idx__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase>> phases;
    phases.clear();
    this->__VnoInFunc_m_get_transitive_children(vlSymsp, phases);
    phases = phases.find([&](IData/*31:0*/ item__DOT__index, 
                             VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> item) -> 
                         CData/*31:0*/ {
            return ((VL_LTES_III(32, 8U, ([&]() {
                                VL_NULL_CHECK(item, "../../uvm/distrib/src/base/uvm_domain.svh", 199)
                                          ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__10__Vfuncout);
                            }(), __Vtask_get_state__10__Vfuncout)) 
                     && VL_GTES_III(32, 0x00000080U, 
                                    ([&]() {
                                VL_NULL_CHECK(item, "../../uvm/distrib/src/base/uvm_domain.svh", 199)
                                     ->__VnoInFunc_get_state(vlSymsp, __Vtask_get_state__11__Vfuncout);
                            }(), __Vtask_get_state__11__Vfuncout))));
        }
    );
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, phases.size())) {
        unnamedblk1__DOT__idx__Vloopsize = phases.size();
        VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "../../uvm/distrib/src/base/uvm_domain.svh", 202)->__VnoInFunc_is_before(vlProcess, vlSymsp, phase, __VlefCall_0__is_before);
        if ((1U & (~ (IData)(__VlefCall_0__is_before)))) {
            VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "../../uvm/distrib/src/base/uvm_domain.svh", 202)->__VnoInFunc_is_after(vlSymsp, phase, __VlefCall_0__is_before);
        }
        if (__VlefCall_0__is_before) {
            VL_NULL_CHECK(phases.at(unnamedblk1__DOT__idx), "../../uvm/distrib/src/base/uvm_domain.svh", 203)->__VnoInFunc_jump(vlSymsp, phase);
        }
        if ((unnamedblk1__DOT__idx__Vloopsize <= phases.size())) {
            unnamedblk1__DOT__idx = ((IData)(1U) + unnamedblk1__DOT__idx);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_domain::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_domain::~VUVM_Activator_uvm_pkg__03a__03auvm_domain() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_domain::~\n"); );
}
