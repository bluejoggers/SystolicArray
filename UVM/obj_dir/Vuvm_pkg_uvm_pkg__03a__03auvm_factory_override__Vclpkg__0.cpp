// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_fatal__0__verbosity;
    __Vtask_uvm_report_fatal__0__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__0__line;
    __Vtask_uvm_report_fatal__0__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__0__report_enabled_checked;
    __Vtask_uvm_report_fatal__0__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_0__get_type_name;
    if ((VlNull{} == ovrd_type)) {
        __Vtask_uvm_report_fatal__0__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_fatal__0__context_name = ""s;
        __Vtask_uvm_report_fatal__0__line = 0U;
        this->__Vtask_uvm_report_fatal__0__filename = ""s;
        __Vtask_uvm_report_fatal__0__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__0__message = "Attempting to register a null override object with the factory"s;
        this->__Vtask_uvm_report_fatal__0__id = "NULLWR"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__1__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__2__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__0__id, this->__Vtask_uvm_report_fatal__0__message, __Vtask_uvm_report_fatal__0__verbosity, this->__Vtask_uvm_report_fatal__0__filename, __Vtask_uvm_report_fatal__0__line, this->__Vtask_uvm_report_fatal__0__context_name, (IData)(__Vtask_uvm_report_fatal__0__report_enabled_checked));
    }
    this->__PVT__full_inst_path = full_inst_path;
    if ((VlNull{} == orig_type)) {
        __VlefCall_0__get_type_name = orig_type_name;
    } else {
        VL_NULL_CHECK(orig_type, "../../uvm/distrib/src/base/uvm_factory.svh", 869)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
    }
    this->__PVT__orig_type_name = __VlefCall_0__get_type_name;
    this->__PVT__orig_type = orig_type;
    VL_NULL_CHECK(ovrd_type, "../../uvm/distrib/src/base/uvm_factory.svh", 871)->__VnoInFunc_get_type_name(vlSymsp, this->__PVT__ovrd_type_name);
    this->__PVT__ovrd_type = ovrd_type;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__selected = 0;
    __PVT__used = 0;
}
