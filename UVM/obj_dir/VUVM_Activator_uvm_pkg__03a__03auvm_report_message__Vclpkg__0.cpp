// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> &new_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_new_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_std__03a__03aprocess> p;
    std::string rand_state;
    rand_state = ""s;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 518)->__VnoInFunc_get_randstate(vlSymsp, rand_state);
    }
    new_report_message__Vfuncrtn = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_report_message.svh", 521)->__VnoInFunc_set_randstate(vlSymsp, rand_state);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_report_message__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT___report_message_element_container 
        = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_container, vlProcess, vlSymsp, "element_container"s);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0U;
    VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 556)->__VnoInFunc_print_generic(vlSymsp, "severity"s, "uvm_severity"s, 2U, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]), 0x2eU);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 558)->__VnoInFunc_print_string(vlSymsp, "id"s, this->__PVT___id, 0x2eU);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 559)->__VnoInFunc_print_string(vlSymsp, "message"s, this->__PVT___message, 0x2eU);
    if (VUVM_Activator___024unit::__Venumtab_enum_valid25
        .at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 561)->__VnoInFunc_print_generic(vlSymsp, "verbosity"s, "uvm_verbosity"s, 0x00000020U, __VlefExpr_1, 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___verbosity);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 564)->__VnoInFunc_print_int(vlSymsp, "verbosity"s, __Vtemp_1, 0x00000020U, 0x07000000U, 0x2eU, ""s);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 565)->__VnoInFunc_print_string(vlSymsp, "filename"s, this->__PVT___filename, 0x2eU);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT___line);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 566)->__VnoInFunc_print_int(vlSymsp, "line"s, __Vtemp_2, 0x00000020U, 0x03000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_message.svh", 567)->__VnoInFunc_print_string(vlSymsp, "context_name"s, this->__PVT___context_name, 0x2eU);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 569)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
    if ((0U != __VlefCall_2__size)) {
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 570)->__VnoInFunc_print(vlProcess, vlSymsp, printer);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi6> __Vfunc_get__13__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__13__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, "uvm_report_message"s);
    } else {
        tmp = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_report_message, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_message"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 574)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> report_message;
    {
        VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, report_message);
        if (((! __VlefExpr_0) || (VlNull{} == rhs))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 592)->__VnoInFunc_get_report_object(vlSymsp, this->__PVT___report_object);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 593)->__VnoInFunc_get_report_handler(vlSymsp, this->__PVT___report_handler);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 594)->__VnoInFunc_get_report_server(vlSymsp, this->__PVT___report_server);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 595)->__VnoInFunc_get_context(vlSymsp, this->__PVT___context_name);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 596)->__VnoInFunc_get_file(vlSymsp, this->__PVT___file);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 597)->__VnoInFunc_get_filename(vlSymsp, this->__PVT___filename);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 598)->__VnoInFunc_get_line(vlSymsp, this->__PVT___line);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 599)->__VnoInFunc_get_action(vlSymsp, this->__PVT___action);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 600)->__VnoInFunc_get_severity(vlSymsp, this->__PVT___severity);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 601)->__VnoInFunc_get_id(vlSymsp, this->__PVT___id);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 602)->__VnoInFunc_get_message(vlSymsp, this->__PVT___message);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 603)->__VnoInFunc_get_verbosity(vlSymsp, this->__PVT___verbosity);
        VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 605)->__VnoInFunc_copy(vlProcess, vlSymsp, VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_message.svh", 605)
                                                                                ->__PVT___report_message_element_container);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> &get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_object\n"); );
    // Body
    get_report_object__Vfuncrtn = this->__PVT___report_object;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> ro) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_object\n"); );
    // Body
    this->__PVT___report_object = ro;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> &get_report_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_handler\n"); );
    // Body
    get_report_handler__Vfuncrtn = this->__PVT___report_handler;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_handler> rh) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_handler\n"); );
    // Body
    this->__PVT___report_handler = rh;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_report_server\n"); );
    // Body
    get_report_server__Vfuncrtn = this->__PVT___report_server;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_server> rs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_server\n"); );
    // Body
    this->__PVT___report_server = rs;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_severity\n"); );
    // Body
    get_severity__Vfuncrtn = this->__PVT___severity;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ sev) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_severity\n"); );
    // Body
    this->__PVT___severity = sev;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_id\n"); );
    // Body
    get_id__Vfuncrtn = this->__PVT___id;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id(VUVM_Activator__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_id\n"); );
    // Body
    this->__PVT___id = id;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_message\n"); );
    // Body
    get_message__Vfuncrtn = this->__PVT___message;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message(VUVM_Activator__Syms* __restrict vlSymsp, std::string msg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_message\n"); );
    // Body
    this->__PVT___message = msg;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_verbosity\n"); );
    // Body
    get_verbosity__Vfuncrtn = this->__PVT___verbosity;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ ver) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_verbosity\n"); );
    // Body
    this->__PVT___verbosity = ver;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_filename__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_filename\n"); );
    // Body
    get_filename__Vfuncrtn = this->__PVT___filename;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename(VUVM_Activator__Syms* __restrict vlSymsp, std::string fname) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_filename\n"); );
    // Body
    this->__PVT___filename = fname;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_line__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_line\n"); );
    // Body
    get_line__Vfuncrtn = this->__PVT___line;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ ln) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_line\n"); );
    // Body
    this->__PVT___line = ln;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_context\n"); );
    // Body
    get_context__Vfuncrtn = this->__PVT___context_name;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context(VUVM_Activator__Syms* __restrict vlSymsp, std::string cn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_context\n"); );
    // Body
    this->__PVT___context_name = cn;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_action\n"); );
    // Body
    get_action__Vfuncrtn = this->__PVT___action;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ act) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_action\n"); );
    // Body
    this->__PVT___action = act;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_file\n"); );
    // Body
    get_file__Vfuncrtn = this->__PVT___file;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ fl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_file\n"); );
    // Body
    this->__PVT___file = fl;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message_element_container> &get_element_container__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_get_element_container\n"); );
    // Body
    get_element_container__Vfuncrtn = this->__PVT___report_message_element_container;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message(VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_set_report_message\n"); );
    // Body
    this->__PVT___context_name = context_name;
    this->__PVT___filename = filename;
    this->__PVT___line = line;
    this->__PVT___severity = severity;
    this->__PVT___id = id;
    this->__PVT___message = message;
    this->__PVT___verbosity = verbosity;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 853)->__VnoInFunc_record_string(vlProcess, vlSymsp, "message"s, this->__PVT___message);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_m_record_core_properties\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefExpr_1;
    IData/*31:0*/ __VlefCond_0;
    std::string l_string;
    IData/*31:0*/ l_verbosity;
    l_string = ""s;
    l_verbosity = 0U;
    if ((""s != this->__PVT___context_name)) {
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 864)->__VnoInFunc_record_string(vlProcess, vlSymsp, "context_name"s, this->__PVT___context_name);
    }
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 865)->__VnoInFunc_record_string(vlProcess, vlSymsp, "filename"s, this->__PVT___filename);
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT___line);
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 866)->__VnoInFunc_record_field(vlProcess, vlSymsp, "line"s, __Vtemp_1, 0x00000020U, 0x03000000U);
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 867)->__VnoInFunc_record_string(vlProcess, vlSymsp, "severity"s, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name21
                                                                                [this->__PVT___severity]));
    if (VUVM_Activator___024unit::__Venumtab_enum_valid25
        .at(this->__PVT___verbosity)) {
        l_verbosity = this->__PVT___verbosity;
        __VlefCond_0 = 1U;
    } else {
        __VlefCond_0 = 0U;
    }
    if ((0U != __VlefCond_0)) {
        __VlefExpr_1 = VL_CVT_PACK_STR_NN(VUVM_Activator___024unit::__Venumtab_enum_name25
                                          .at(l_verbosity));
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 869)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, __VlefExpr_1);
    } else {
        VL_SFORMAT_NX(l_string,"%0d",1, '~',32,this->__PVT___verbosity);
        VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 872)->__VnoInFunc_record_string(vlProcess, vlSymsp, "verbosity"s, l_string);
    }
    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/base/uvm_report_message.svh", 875)->__VnoInFunc_record_string(vlProcess, vlSymsp, "id"s, this->__PVT___id);
    this->__VnoInFunc_m_record_message(vlProcess, vlSymsp, recorder);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_do_record\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
    this->__VnoInFunc_m_record_core_properties(vlProcess, vlSymsp, recorder);
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 885)->__VnoInFunc_record(vlProcess, vlSymsp, recorder);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_int\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 907)->__VnoInFunc_add_int(vlSymsp, name, value, size, radix, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, std::string value, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_string\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 920)->__VnoInFunc_add_string(vlSymsp, name, value, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_add_object\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT___report_message_element_container, "../../uvm/distrib/src/base/uvm_report_message.svh", 933)->__VnoInFunc_add_object(vlSymsp, name, obj, action);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT___severity = 0;
    __PVT___verbosity = 0;
    __PVT___line = 0;
    __PVT___action = 0;
    __PVT___file = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_report_message::~VUVM_Activator_uvm_pkg__03a__03auvm_report_message() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_report_message::~\n"); );
}
