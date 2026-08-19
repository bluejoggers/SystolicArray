// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent) {
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz117::init(vlProcess, vlSymsp, name, parent, 1U, 1U, 0xffffffffU);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz117::__PVT__m_if_mask = 0x00000100U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_export"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::__VnoInFunc_write\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz117> __Vfunc_get_if__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__verbosity;
    __Vtask_uvm_report_fatal__4__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__4__line;
    __Vtask_uvm_report_fatal__4__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__4__report_enabled_checked;
    __Vtask_uvm_report_fatal__4__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__size;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26> tif;
    unnamedblk1__DOT__i = 0U;
    while (true) {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_0__size))) break;
        this->__VnoInFunc_get_if(vlProcess, vlSymsp, unnamedblk1__DOT__i, __Vfunc_get_if__2__Vfuncout);
        tif = __Vfunc_get_if__2__Vfuncout;
        if ((VlNull{} == tif)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_fatal__4__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_fatal__4__context_name = ""s;
            __Vtask_uvm_report_fatal__4__line = 0U;
            this->__Vtask_uvm_report_fatal__4__filename = ""s;
            __Vtask_uvm_report_fatal__4__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__4__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("No uvm_tlm interface is connected to "s, __VlefCall_1__get_full_name), " for executing write()"s));
            this->__Vtask_uvm_report_fatal__4__id = "NTCONN"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__4__id, this->__Vtask_uvm_report_fatal__4__message, __Vtask_uvm_report_fatal__4__verbosity, this->__Vtask_uvm_report_fatal__4__filename, __Vtask_uvm_report_fatal__4__line, this->__Vtask_uvm_report_fatal__4__context_name, (IData)(__Vtask_uvm_report_fatal__4__report_enabled_checked));
        }
        VL_NULL_CHECK(tif, "../../uvm/distrib/src/tlm1/uvm_analysis_port.svh", 149)->__VnoInFunc_write(vlProcess, vlSymsp, t);
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::~VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_regblock_uvm_pkg__03a__03auvm_analysis_export__Tz26::~\n"); );
}
