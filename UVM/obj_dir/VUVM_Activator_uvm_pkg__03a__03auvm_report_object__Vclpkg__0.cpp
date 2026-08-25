// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, this->__PVT__m_rh);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_get_report_object\n"); );
    // Body
    uvm_get_report_object__Vfuncrtn = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object>{this};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    {
        uvm_report_enabled__Vfuncrtn = 0U;
        this->__VnoInFunc_get_report_verbosity_level(vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
        if (VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (IData)(report_enabled_checked)))) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, verbosity, (IData)(severity), id, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_object.svh", 144)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_object.svh", 250)->__VnoInFunc_set_report_object(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object>{this});
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 251)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_verbosity_level\n"); );
    // Body
    get_report_verbosity_level__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 268)->__VnoInFunc_get_verbosity_level(vlSymsp, severity, id, get_report_verbosity_level__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_report_max_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_max_verbosity_level\n"); );
    // Body
    get_report_max_verbosity_level__Vfuncrtn = VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 279)
        ->__PVT__m_max_verbosity_level;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_verbosity_level\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 290)->__VnoInFunc_set_verbosity_level(vlSymsp, verbosity_level);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 296)->__VnoInFunc_set_id_verbosity(vlSymsp, id, verbosity);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 314)->__VnoInFunc_set_severity_id_verbosity(vlSymsp, severity, id, verbosity);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_action\n"); );
    // Body
    get_report_action__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 329)->__VnoInFunc_get_action(vlSymsp, severity, id, get_report_action__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 337)->__VnoInFunc_set_severity_action(vlSymsp, severity, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 343)->__VnoInFunc_set_id_action(vlSymsp, id, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_action\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 359)->__VnoInFunc_set_severity_id_action(vlProcess, vlSymsp, severity, id, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_report_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_file_handle\n"); );
    // Body
    get_report_file_handle__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 374)->__VnoInFunc_get_file_handle(vlSymsp, severity, id, get_report_file_handle__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_default_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 381)->__VnoInFunc_set_default_file(vlSymsp, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 387)->__VnoInFunc_set_id_file(vlSymsp, id, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 393)->__VnoInFunc_set_severity_file(vlSymsp, severity, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 414)->__VnoInFunc_set_severity_id_file(vlSymsp, severity, id, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 427)->__VnoInFunc_set_severity_override(vlSymsp, cur_severity, (IData)(new_severity));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_severity_id_override\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 439)->__VnoInFunc_set_severity_id_override(vlProcess, vlSymsp, cur_severity, id, (IData)(new_severity));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> handler) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT__m_rh = handler;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT__m_rh;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_reset_report_handler\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 473)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_info_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_info_hook\n"); );
    // Body
    report_info_hook__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_error_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_error_hook\n"); );
    // Body
    report_error_hook__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_warning_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_warning_hook\n"); );
    // Body
    report_warning_hook__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_fatal_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_fatal_hook\n"); );
    // Body
    report_fatal_hook__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook(VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, CData/*0:0*/ &report_hook__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_hook\n"); );
    // Body
    report_hook__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_header\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> l_root;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_object.svh", 552)->__VnoInFunc_get_root(vlProcess, vlSymsp, l_root);
    VL_NULL_CHECK(l_root, "../../uvm/distrib/src/base/uvm_report_object.svh", 553)->__VnoInFunc_report_header(vlProcess, vlSymsp, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_report_summarize\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
    VL_NULL_CHECK(l_rs, "../../uvm/distrib/src/base/uvm_report_object.svh", 571)->__VnoInFunc_report_summarize(vlProcess, vlSymsp, file);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_die\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> l_root;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_report_object.svh", 594)->__VnoInFunc_get_root(vlProcess, vlSymsp, l_root);
    VL_NULL_CHECK(l_root, "../../uvm/distrib/src/base/uvm_report_object.svh", 595)->__VnoInFunc_die(vlProcess, vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_max_quit_count(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ max_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_set_report_max_quit_count\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
    VL_NULL_CHECK(l_rs, "../../uvm/distrib/src/base/uvm_report_object.svh", 613)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_count, 1U);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_server(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_get_report_server\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> l_rs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, l_rs);
    get_report_server__Vfuncrtn = l_rs;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_dump_report_state(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_dump_report_state\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_rh, "../../uvm/distrib/src/base/uvm_report_object.svh", 640)->__VnoInFunc_dump_state(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_get_report_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_m_get_report_object\n"); );
    // Body
    m_get_report_object__Vfuncrtn = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object>{this};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Activator_uvm_pkg__03a__03auvm_report_object::~VUVM_Activator_uvm_pkg__03a__03auvm_report_object() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_object::~\n"); );
}
