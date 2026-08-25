// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VUVM_Register8b_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg\n"); );
    // Locals
    CData/*1:0*/ __Vtask_uvm_report__8__severity;
    __Vtask_uvm_report__8__severity = 0;
    IData/*31:0*/ __Vtask_uvm_report__8__verbosity;
    __Vtask_uvm_report__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report__8__line;
    __Vtask_uvm_report__8__line = 0;
    CData/*0:0*/ __Vtask_uvm_report__8__report_enabled_checked;
    __Vtask_uvm_report__8__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report__8__report_enabled_checked = 0U;
    vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__context_name = ""s;
    __Vtask_uvm_report__8__line = line;
    vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__filename 
        = filename;
    __Vtask_uvm_report__8__verbosity = verbosity;
    vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__message 
        = message;
    vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__id 
        = id;
    __Vtask_uvm_report__8__severity = (3U & severity);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
        = __Vfunc_get__9__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 156)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
        = __Vtask_get_root__10__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 157)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__8__severity, vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__id, vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__message, __Vtask_uvm_report__8__verbosity, vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__filename, __Vtask_uvm_report__8__line, vlSymsp->TOP__uvm_pkg.__Vtask_uvm_report__8__context_name, (IData)(__Vtask_uvm_report__8__report_enabled_checked));
}
