// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg::__VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi28> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi28__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload, vlProcess, vlSymsp, ""s);
    } else {
        tmp = VL_NEW(VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tlm_generic_payload"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 364)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__m_address = 0ULL;
    this->__PVT__m_command = 2U;
    this->__PVT__m_length = 0U;
    this->__PVT__m_response_status = 0U;
    this->__PVT__m_dmi = 0U;
    this->__PVT__m_byte_enable_length = 0U;
    this->__PVT__m_streaming_width = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefExpr_0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    std::string unnamedblk3__DOT__name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk3__DOT__unnamedblk4__DOT__ext_;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk3__DOT__unnamedblk4__DOT__ext___Vnext;
    CData/*0:0*/ unnamedblk3__DOT__unnamedblk4__DOT__ext___Vmore;
    unnamedblk3__DOT__unnamedblk4__DOT__ext___Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ext;
    CData/*7:0*/ be;
    be = 0U;
    VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 389)->__VnoInFunc_print_field_int(vlSymsp, "address"s, this->__PVT__m_address, 0x00000040U, 0x07000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 390)->__VnoInFunc_print_generic(vlSymsp, "command"s, "uvm_tlm_command_e"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_regblock___024unit::__Venumtab_enum_name63
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__m_command)]), 0x2eU);
    __VlefExpr_0 = VL_CVT_PACK_STR_NN(VUVM_regblock___024unit::__Venumtab_enum_name65
                                      .at(this->__PVT__m_response_status));
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 391)->__VnoInFunc_print_generic(vlSymsp, "response_status"s, "uvm_tlm_response_status_e"s, 0x00000020U, __VlefExpr_0, 0x2eU);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 393)->__VnoInFunc_print_field_int(vlSymsp, "streaming_width"s, (QData)((IData)(this->__PVT__m_streaming_width)), 0x00000020U, 0x07000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 395)->__VnoInFunc_print_array_header(vlSymsp, "data"s, this->__PVT__m_length, "darray(byte)"s, 0x2eU);
    unnamedblk2__DOT__i = 0U;
    unnamedblk2__DOT__i = 0U;
    while (((unnamedblk2__DOT__i < this->__PVT__m_length) 
            & VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_data.size()))) {
        if ((0U != this->__PVT__m_byte_enable_length)) {
            be = this->__PVT__m_byte_enable.at(VL_MODDIV_III(32, unnamedblk2__DOT__i, this->__PVT__m_byte_enable_length));
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 399)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk2__DOT__i) , "byte"s, 8U, VL_SFORMATF_N_NX("'h%h%s",2
                                                                                , '#',8,this->__PVT__m_data.at(unnamedblk2__DOT__i)
                                                                                , '#',16,
                                                                                ((0xffU 
                                                                                == (IData)(be))
                                                                                 ? 0U
                                                                                 : 0x2078U)) , 0x2eU);
        } else {
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 403)->__VnoInFunc_print_generic(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk2__DOT__i) , "byte"s, 8U, VL_SFORMATF_N_NX("'h%h",1
                                                                                , '#',8,this->__PVT__m_data.at(unnamedblk2__DOT__i)) , 0x2eU);
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 406)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    unnamedblk3__DOT__name = ""s;
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 410)->__VnoInFunc_print_array_header(vlSymsp, "extensions"s, this->__PVT__m_extensions.size(), "aa(obj,obj)"s, 0x2eU);
    unnamedblk3__DOT__unnamedblk4__DOT__ext___Vmore 
        = (0U != this->__PVT__m_extensions.first(unnamedblk3__DOT__unnamedblk4__DOT__ext___Vnext));
    while (unnamedblk3__DOT__unnamedblk4__DOT__ext___Vmore) {
        unnamedblk3__DOT__unnamedblk4__DOT__ext_ = unnamedblk3__DOT__unnamedblk4__DOT__ext___Vnext;
        unnamedblk3__DOT__unnamedblk4__DOT__ext___Vmore 
            = (0U != this->__PVT__m_extensions.next(unnamedblk3__DOT__unnamedblk4__DOT__ext___Vnext));
        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ext 
            = this->__PVT__m_extensions.at(unnamedblk3__DOT__unnamedblk4__DOT__ext_);
        VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ext, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 413)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        unnamedblk3__DOT__name = VL_CONCATN_NNN(VL_CONCATN_NNN("["s, __VlefCall_1__get_name), "]"s);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 414)->__VnoInFunc_print_object(vlProcess, vlSymsp, unnamedblk3__DOT__name, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ext, 0x5bU);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 416)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_2;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> __VlefCall_1__clone;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk6__DOT__ext;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk6__DOT__ext__Vnext;
    CData/*0:0*/ unnamedblk6__DOT__ext__Vmore;
    unnamedblk6__DOT__ext__Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    VUVM_regblock_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, gp);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_tlm2_generic_payload.svh:426: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_tlm_generic_payload.do_copy", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 426, "");
    }
    this->__PVT__m_address = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 427)
        ->__PVT__m_address;
    this->__PVT__m_command = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 428)
        ->__PVT__m_command;
    this->__PVT__m_data = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 429)
        ->__PVT__m_data;
    this->__PVT__m_dmi = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 430)
        ->__PVT__m_dmi;
    this->__PVT__m_length = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 431)
        ->__PVT__m_length;
    this->__PVT__m_response_status = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 432)
        ->__PVT__m_response_status;
    this->__PVT__m_byte_enable = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 433)
        ->__PVT__m_byte_enable;
    this->__PVT__m_streaming_width = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 434)
        ->__PVT__m_streaming_width;
    this->__PVT__m_byte_enable_length = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 435)
        ->__PVT__m_byte_enable_length;
    this->__PVT__m_extensions.clear();
    unnamedblk6__DOT__ext__Vmore = (0U != VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 438)
                                    ->__PVT__m_extensions.first(unnamedblk6__DOT__ext__Vnext));
    while (unnamedblk6__DOT__ext__Vmore) {
        unnamedblk6__DOT__ext = unnamedblk6__DOT__ext__Vnext;
        unnamedblk6__DOT__ext__Vmore = (0U != VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 438)
                                        ->__PVT__m_extensions.next(unnamedblk6__DOT__ext__Vnext));
        VL_NULL_CHECK(VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 439)
                      ->__PVT__m_extensions.at(unnamedblk6__DOT__ext), "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 439)->__VnoInFunc_clone(vlProcess, vlSymsp, __VlefCall_1__clone);
        __VlefExpr_2 = VL_CAST_DYNAMIC(__VlefCall_1__clone, this->__PVT__m_extensions
                                       .at(unnamedblk6__DOT__ext));
        if (VL_UNLIKELY(((! __VlefExpr_2)))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_tlm2_generic_payload.svh:439: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_tlm_generic_payload.do_copy.unnamedblk6", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 439, "");
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_compare(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_compare\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__convert2string;
    std::string __VlefCall_5__convert2string;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefExpr_0;
    CData/*7:0*/ unnamedblk7__DOT__lhs_be;
    CData/*7:0*/ unnamedblk7__DOT__rhs_be;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__i;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk9__DOT__ext_;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk9__DOT__ext___Vnext;
    CData/*0:0*/ unnamedblk9__DOT__ext___Vmore;
    unnamedblk9__DOT__ext___Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk9__DOT__unnamedblk10__DOT__ext;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk9__DOT__unnamedblk10__DOT__rhs_ext;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk11__DOT__ext_;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk11__DOT__ext___Vnext;
    CData/*0:0*/ unnamedblk11__DOT__ext___Vmore;
    unnamedblk11__DOT__ext___Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk11__DOT__unnamedblk12__DOT__ext;
    std::string unnamedblk13__DOT__msg;
    do_compare__Vfuncrtn = 0U;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload> gp;
    VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_compare(vlSymsp, rhs, comparer, do_compare__Vfuncrtn);
    __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, gp);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_tlm2_generic_payload.svh:449: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_tlm_generic_payload.do_compare", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 449, "");
    }
    do_compare__Vfuncrtn = (((((((this->__PVT__m_address 
                                  == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 451)
                                  ->__PVT__m_address) 
                                 && (this->__PVT__m_command 
                                     == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 452)
                                     ->__PVT__m_command)) 
                                && (this->__PVT__m_length 
                                    == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 453)
                                    ->__PVT__m_length)) 
                               && ((IData)(this->__PVT__m_dmi) 
                                   == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 454)
                                   ->__PVT__m_dmi)) 
                              && (this->__PVT__m_byte_enable_length 
                                  == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 455)
                                  ->__PVT__m_byte_enable_length)) 
                             && (this->__PVT__m_response_status 
                                 == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 456)
                                 ->__PVT__m_response_status)) 
                            && (this->__PVT__m_streaming_width 
                                == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 457)
                                ->__PVT__m_streaming_width));
    if (((IData)(do_compare__Vfuncrtn) && (this->__PVT__m_length 
                                           == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 459)
                                           ->__PVT__m_length))) {
        unnamedblk7__DOT__lhs_be = 0U;
        unnamedblk7__DOT__rhs_be = 0U;
        unnamedblk7__DOT__unnamedblk8__DOT__i = 0U;
        unnamedblk7__DOT__unnamedblk8__DOT__i = 0U;
        while ((((IData)(do_compare__Vfuncrtn) & (unnamedblk7__DOT__unnamedblk8__DOT__i 
                                                  < this->__PVT__m_length)) 
                & VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__i, this->__PVT__m_data.size()))) {
            if ((0U != this->__PVT__m_byte_enable_length)) {
                unnamedblk7__DOT__lhs_be = this->__PVT__m_byte_enable.at(
                                                                         VL_MODDIV_III(32, unnamedblk7__DOT__unnamedblk8__DOT__i, this->__PVT__m_byte_enable_length));
                unnamedblk7__DOT__rhs_be = VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 464)
                    ->__PVT__m_byte_enable.at(VL_MODDIV_III(32, unnamedblk7__DOT__unnamedblk8__DOT__i, VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 464)
                                                            ->__PVT__m_byte_enable_length));
                do_compare__Vfuncrtn = ((this->__PVT__m_data.at(unnamedblk7__DOT__unnamedblk8__DOT__i) 
                                         & (IData)(unnamedblk7__DOT__lhs_be)) 
                                        == (VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 465)
                                            ->__PVT__m_data.at(unnamedblk7__DOT__unnamedblk8__DOT__i) 
                                            & (IData)(unnamedblk7__DOT__rhs_be)));
            } else {
                do_compare__Vfuncrtn = (this->__PVT__m_data.at(unnamedblk7__DOT__unnamedblk8__DOT__i) 
                                        == VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 468)
                                        ->__PVT__m_data.at(unnamedblk7__DOT__unnamedblk8__DOT__i));
            }
            unnamedblk7__DOT__unnamedblk8__DOT__i = 
                ((IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__i);
        }
    }
    if (do_compare__Vfuncrtn) {
        {
            unnamedblk9__DOT__ext___Vmore = (0U != this->__PVT__m_extensions.first(unnamedblk9__DOT__ext___Vnext));
            while (unnamedblk9__DOT__ext___Vmore) {
                unnamedblk9__DOT__ext_ = unnamedblk9__DOT__ext___Vnext;
                unnamedblk9__DOT__ext___Vmore = (0U 
                                                 != this->__PVT__m_extensions.next(unnamedblk9__DOT__ext___Vnext));
                unnamedblk9__DOT__unnamedblk10__DOT__ext 
                    = unnamedblk9__DOT__ext_;
                unnamedblk9__DOT__unnamedblk10__DOT__rhs_ext 
                    = (VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 476)
                       ->__PVT__m_extensions.exists(unnamedblk9__DOT__unnamedblk10__DOT__ext)
                        ? VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 477)
                       ->__PVT__m_extensions.at(unnamedblk9__DOT__unnamedblk10__DOT__ext)
                        : VlNull{});
                VL_NULL_CHECK(unnamedblk9__DOT__unnamedblk10__DOT__ext, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 478)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(comparer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 478)->__VnoInFunc_compare_object(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), this->__PVT__m_extensions
                                                                                .at(unnamedblk9__DOT__unnamedblk10__DOT__ext), unnamedblk9__DOT__unnamedblk10__DOT__rhs_ext, do_compare__Vfuncrtn);
                if ((1U & (~ (IData)(do_compare__Vfuncrtn)))) {
                    goto __Vlabel0;
                }
            }
            __Vlabel0: ;
        }
    }
    if (do_compare__Vfuncrtn) {
        {
            unnamedblk11__DOT__ext___Vmore = (0U != VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 484)
                                              ->__PVT__m_extensions.first(unnamedblk11__DOT__ext___Vnext));
            while (unnamedblk11__DOT__ext___Vmore) {
                unnamedblk11__DOT__ext_ = unnamedblk11__DOT__ext___Vnext;
                unnamedblk11__DOT__ext___Vmore = (0U 
                                                  != VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 484)
                                                  ->__PVT__m_extensions.next(unnamedblk11__DOT__ext___Vnext));
                unnamedblk11__DOT__unnamedblk12__DOT__ext 
                    = unnamedblk11__DOT__ext_;
                if ((! this->__PVT__m_extensions.exists(unnamedblk11__DOT__unnamedblk12__DOT__ext))) {
                    VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__ext, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 487)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                    VL_NULL_CHECK(comparer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 487)->__VnoInFunc_compare_object(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name), VlNull{}, VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 488)
                                                                                ->__PVT__m_extensions
                                                                                .at(unnamedblk11__DOT__unnamedblk12__DOT__ext), do_compare__Vfuncrtn);
                    if ((1U & (~ (IData)(do_compare__Vfuncrtn)))) {
                        goto __Vlabel1;
                    }
                }
            }
            __Vlabel1: ;
        }
    }
    if (((1U & (~ (IData)(do_compare__Vfuncrtn))) && 
         (0U < VL_NULL_CHECK(comparer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 493)
          ->__PVT__show_max))) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 495)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_5__convert2string);
        VL_NULL_CHECK(gp, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 495)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_6__convert2string);
        VL_SFORMAT_NX(unnamedblk13__DOT__msg,"GP miscompare between '%s' and '%s':\nlhs = %s\nrhs = %s",4
                      , 'S',&(__VlefCall_3__get_full_name)
                      , 'S',&(__VlefCall_4__get_full_name)
                      , 'S',&(__VlefCall_5__convert2string)
                      , 'S',&(__VlefCall_6__convert2string));
        if ((1U == VL_NULL_CHECK(comparer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 496)
             ->__PVT__sev)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "MISCMP"s, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MISCMP"s, unnamedblk13__DOT__msg, 0U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x000001f1U, ""s, 1U);
            }
        } else if ((2U == VL_NULL_CHECK(comparer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 496)
                    ->__PVT__sev)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "MISCMP"s, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "MISCMP"s, unnamedblk13__DOT__msg, 0U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x000001f2U, ""s, 1U);
            }
        } else {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "MISCMP"s, __VlefCall_9__uvm_report_enabled);
            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MISCMP"s, unnamedblk13__DOT__msg, 0x00000064U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x000001f3U, ""s, 1U);
            }
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_pack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_pack\n"); );
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<IData/*31:0*/> unnamedblk14__DOT_____05Farray;
    QData/*63:0*/ unnamedblk14__DOT__unnamedblk15__DOT_____05Fvector;
    VlQueue<IData/*31:0*/> unnamedblk16__DOT_____05Farray;
    IData/*31:0*/ unnamedblk16__DOT__unnamedblk17__DOT_____05Fvector;
    VlQueue<IData/*31:0*/> unnamedblk18__DOT_____05Farray;
    IData/*31:0*/ unnamedblk18__DOT__unnamedblk19__DOT_____05Fvector;
    IData/*31:0*/ unnamedblk20__DOT__i;
    VlQueue<IData/*31:0*/> unnamedblk20__DOT__unnamedblk21__DOT_____05Farray;
    CData/*7:0*/ unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT_____05Fvector;
    VlQueue<IData/*31:0*/> unnamedblk23__DOT_____05Farray;
    IData/*31:0*/ unnamedblk23__DOT__unnamedblk24__DOT_____05Fvector;
    VlQueue<IData/*31:0*/> unnamedblk25__DOT_____05Farray;
    IData/*31:0*/ unnamedblk25__DOT__unnamedblk26__DOT_____05Fvector;
    IData/*31:0*/ unnamedblk27__DOT__i;
    VlQueue<IData/*31:0*/> unnamedblk27__DOT__unnamedblk28__DOT_____05Farray;
    CData/*7:0*/ unnamedblk27__DOT__unnamedblk28__DOT__unnamedblk29__DOT_____05Fvector;
    VlQueue<IData/*31:0*/> unnamedblk30__DOT_____05Farray;
    IData/*31:0*/ unnamedblk30__DOT__unnamedblk31__DOT_____05Fvector;
    VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_pack(vlSymsp, packer);
    if ((this->__PVT__m_length > this->__PVT__m_data.size())) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "PACK_DATA_ARR"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PACK_DATA_ARR"s, VL_SFORMATF_N_NX("Data array m_length property (%0d) greater than m_data.size (%0d)",2
                                                                                , '#',32,this->__PVT__m_length
                                                                                , '~',32,this->__PVT__m_data.size()) , 0U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x00000204U, ""s, 1U);
        }
    }
    if ((this->__PVT__m_byte_enable_length > this->__PVT__m_byte_enable.size())) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "PACK_DATA_ARR"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PACK_DATA_ARR"s, VL_SFORMATF_N_NX("Data array m_byte_enable_length property (%0d) greater than m_byte_enable.size (%0d)",2
                                                                                , '#',32,this->__PVT__m_byte_enable_length
                                                                                , '~',32,this->__PVT__m_byte_enable.size()) , 0U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x00000208U, ""s, 1U);
        }
    }
    unnamedblk14__DOT_____05Farray.clear();
    unnamedblk14__DOT_____05Farray.atDefault() = 0;
    unnamedblk14__DOT__unnamedblk15__DOT_____05Fvector 
        = this->__PVT__m_address;
    __Vtemp_1[0U] = (IData)(unnamedblk14__DOT__unnamedblk15__DOT_____05Fvector);
    __Vtemp_1[1U] = (IData)((unnamedblk14__DOT__unnamedblk15__DOT_____05Fvector 
                             >> 0x00000020U));
    __Vtemp_1[2U] = 0U;
    VL_STREAML_WWI(96, __Vtemp_2, __Vtemp_1, 0x00000020U);
    VL_UNPACK_RI_W(32, 96, unnamedblk14__DOT_____05Farray, __Vtemp_2);
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 521)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk14__DOT_____05Farray, 0x00000040U);
    unnamedblk16__DOT_____05Farray.clear();
    unnamedblk16__DOT_____05Farray.atDefault() = 0;
    unnamedblk16__DOT__unnamedblk17__DOT_____05Fvector 
        = this->__PVT__m_command;
    VL_UNPACK_RI_Q(32, 64, unnamedblk16__DOT_____05Farray, 
                   VL_STREAML_QQI(64, (QData)((IData)(unnamedblk16__DOT__unnamedblk17__DOT_____05Fvector)), 0x00000020U));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 522)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk16__DOT_____05Farray, 0x00000020U);
    unnamedblk18__DOT_____05Farray.clear();
    unnamedblk18__DOT_____05Farray.atDefault() = 0;
    unnamedblk18__DOT__unnamedblk19__DOT_____05Fvector 
        = this->__PVT__m_length;
    VL_UNPACK_RI_Q(32, 64, unnamedblk18__DOT_____05Farray, 
                   VL_STREAML_QQI(64, (QData)((IData)(unnamedblk18__DOT__unnamedblk19__DOT_____05Fvector)), 0x00000020U));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 523)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk18__DOT_____05Farray, 0x00000020U);
    unnamedblk20__DOT__i = 0U;
    unnamedblk20__DOT__i = 0U;
    while ((unnamedblk20__DOT__i < this->__PVT__m_length)) {
        unnamedblk20__DOT__unnamedblk21__DOT_____05Farray.clear();
        unnamedblk20__DOT__unnamedblk21__DOT_____05Farray.atDefault() = 0;
        unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT_____05Fvector 
            = this->__PVT__m_data.at(unnamedblk20__DOT__i);
        VL_UNPACK_RI_I(32, 32, unnamedblk20__DOT__unnamedblk21__DOT_____05Farray, 
                       VL_STREAML_III(32, (IData)(unnamedblk20__DOT__unnamedblk21__DOT__unnamedblk22__DOT_____05Fvector), 0x00000020U));
        VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 525)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk20__DOT__unnamedblk21__DOT_____05Farray, 8U);
        unnamedblk20__DOT__i = ((IData)(1U) + unnamedblk20__DOT__i);
    }
    unnamedblk23__DOT_____05Farray.clear();
    unnamedblk23__DOT_____05Farray.atDefault() = 0;
    unnamedblk23__DOT__unnamedblk24__DOT_____05Fvector 
        = this->__PVT__m_response_status;
    VL_UNPACK_RI_Q(32, 64, unnamedblk23__DOT_____05Farray, 
                   VL_STREAML_QQI(64, (QData)((IData)(unnamedblk23__DOT__unnamedblk24__DOT_____05Fvector)), 0x00000020U));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 526)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk23__DOT_____05Farray, 0x00000020U);
    unnamedblk25__DOT_____05Farray.clear();
    unnamedblk25__DOT_____05Farray.atDefault() = 0;
    unnamedblk25__DOT__unnamedblk26__DOT_____05Fvector 
        = this->__PVT__m_byte_enable_length;
    VL_UNPACK_RI_Q(32, 64, unnamedblk25__DOT_____05Farray, 
                   VL_STREAML_QQI(64, (QData)((IData)(unnamedblk25__DOT__unnamedblk26__DOT_____05Fvector)), 0x00000020U));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 527)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk25__DOT_____05Farray, 0x00000020U);
    unnamedblk27__DOT__i = 0U;
    unnamedblk27__DOT__i = 0U;
    while ((unnamedblk27__DOT__i < this->__PVT__m_byte_enable_length)) {
        unnamedblk27__DOT__unnamedblk28__DOT_____05Farray.clear();
        unnamedblk27__DOT__unnamedblk28__DOT_____05Farray.atDefault() = 0;
        unnamedblk27__DOT__unnamedblk28__DOT__unnamedblk29__DOT_____05Fvector 
            = this->__PVT__m_byte_enable.at(unnamedblk27__DOT__i);
        VL_UNPACK_RI_I(32, 32, unnamedblk27__DOT__unnamedblk28__DOT_____05Farray, 
                       VL_STREAML_III(32, (IData)(unnamedblk27__DOT__unnamedblk28__DOT__unnamedblk29__DOT_____05Fvector), 0x00000020U));
        VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 529)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk27__DOT__unnamedblk28__DOT_____05Farray, 8U);
        unnamedblk27__DOT__i = ((IData)(1U) + unnamedblk27__DOT__i);
    }
    unnamedblk30__DOT_____05Farray.clear();
    unnamedblk30__DOT_____05Farray.atDefault() = 0;
    unnamedblk30__DOT__unnamedblk31__DOT_____05Fvector 
        = this->__PVT__m_streaming_width;
    VL_UNPACK_RI_Q(32, 64, unnamedblk30__DOT_____05Farray, 
                   VL_STREAML_QQI(64, (QData)((IData)(unnamedblk30__DOT__unnamedblk31__DOT_____05Fvector)), 0x00000020U));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 530)->__VnoInFunc_pack_ints(vlSymsp, unnamedblk30__DOT_____05Farray, 0x00000020U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_unpack(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_unpack\n"); );
    // Body
    VlQueue<IData/*31:0*/> unnamedblk32__DOT_____05Farray;
    QData/*63:0*/ unnamedblk32__DOT_____05Fvar;
    VlQueue<IData/*31:0*/> unnamedblk33__DOT_____05Farray;
    IData/*31:0*/ unnamedblk33__DOT_____05Fvar;
    IData/*31:0*/ unnamedblk34__DOT__i;
    unnamedblk34__DOT__i = 0;
    IData/*31:0*/ unnamedblk34__DOT__i__Vloopsize;
    unnamedblk34__DOT__i__Vloopsize = 0;
    VlQueue<IData/*31:0*/> unnamedblk34__DOT__unnamedblk35__DOT_____05Farray;
    IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT_____05Fvar;
    VlQueue<IData/*31:0*/> unnamedblk36__DOT_____05Farray;
    IData/*31:0*/ unnamedblk36__DOT_____05Fvar;
    IData/*31:0*/ unnamedblk37__DOT__i;
    VlQueue<IData/*31:0*/> unnamedblk37__DOT__unnamedblk38__DOT_____05Farray;
    IData/*31:0*/ unnamedblk37__DOT__unnamedblk38__DOT_____05Fvar;
    VlQueue<IData/*31:0*/> unnamedblk39__DOT_____05Farray;
    IData/*31:0*/ unnamedblk39__DOT_____05Fvar;
    VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_unpack(vlSymsp, packer);
    unnamedblk32__DOT_____05Farray.renew(2U);
    unnamedblk32__DOT_____05Fvar = 0ULL;
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 543)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk32__DOT_____05Farray, 0x00000040U);
    unnamedblk32__DOT_____05Fvar = VL_STREAML_QQI(64, VL_PACK_Q_RI
                                                  (64, 32, unnamedblk32__DOT_____05Farray), 0x00000020U);
    this->__PVT__m_address = unnamedblk32__DOT_____05Fvar;
    this->__PVT__m_command = (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                              ->__PVT__big_endian ? VL_STREAML_FAST_III(32, 
                                                                        (((0U 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                            ->__PVT__count))
                                                                           ? 0U
                                                                           : 
                                                                          (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                           ->__PVT__m_bits
                                                                           [
                                                                           (((IData)(0x0000001fU) 
                                                                             + 
                                                                             (0x00007fffU 
                                                                              & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                              ->__PVT__count)) 
                                                                            >> 5U)] 
                                                                           << 
                                                                           ((IData)(0x00000020U) 
                                                                            - 
                                                                            (0x0000001fU 
                                                                             & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                             ->__PVT__count)))) 
                                                                         | (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                            ->__PVT__m_bits
                                                                            [
                                                                            (0x000003ffU 
                                                                             & (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                                ->__PVT__count 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x0000001fU 
                                                                             & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                                             ->__PVT__count))), 0)
                               : (((0U == (0x0000001fU 
                                           & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                           ->__PVT__count))
                                    ? 0U : (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                            ->__PVT__m_bits
                                            [(((IData)(0x0000001fU) 
                                               + (0x00007fffU 
                                                  & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                  ->__PVT__count)) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                                   ->__PVT__count)))) 
                                  | (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                     ->__PVT__m_bits
                                     [(0x000003ffU 
                                       & (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                          ->__PVT__count 
                                          >> 5U))] 
                                     >> (0x0000001fU 
                                         & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
                                         ->__PVT__count))));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)->__PVT__count 
        = ((IData)(0x00000020U) + VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 544)
           ->__PVT__count);
    unnamedblk33__DOT_____05Farray.renew(1U);
    unnamedblk33__DOT_____05Fvar = 0U;
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 545)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk33__DOT_____05Farray, 0x00000020U);
    unnamedblk33__DOT_____05Fvar = VL_STREAML_III(32, VL_PACK_I_RI
                                                  (32, 32, unnamedblk33__DOT_____05Farray), 0x00000020U);
    this->__PVT__m_length = unnamedblk33__DOT_____05Fvar;
    if ((this->__PVT__m_data.size() < this->__PVT__m_length)) {
        this->__PVT__m_data.renew(this->__PVT__m_length);
    }
    unnamedblk34__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk34__DOT__i, this->__PVT__m_data.size())) {
        unnamedblk34__DOT__i__Vloopsize = this->__PVT__m_data.size();
        unnamedblk34__DOT__unnamedblk35__DOT_____05Farray.renew(1U);
        unnamedblk34__DOT__unnamedblk35__DOT_____05Fvar = 0U;
        VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 549)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk34__DOT__unnamedblk35__DOT_____05Farray, 8U);
        unnamedblk34__DOT__unnamedblk35__DOT_____05Fvar 
            = VL_STREAML_III(32, VL_PACK_I_RI(32, 32, unnamedblk34__DOT__unnamedblk35__DOT_____05Farray), 0x00000020U);
        this->__PVT__m_data.atWrite(unnamedblk34__DOT__i) 
            = (0x000000ffU & unnamedblk34__DOT__unnamedblk35__DOT_____05Fvar);
        if ((unnamedblk34__DOT__i__Vloopsize <= this->__PVT__m_data.size())) {
            unnamedblk34__DOT__i = ((IData)(1U) + unnamedblk34__DOT__i);
        }
    }
    this->__PVT__m_response_status = (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                      ->__PVT__big_endian
                                       ? VL_STREAML_FAST_III(32, 
                                                             (((0U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                 ->__PVT__count))
                                                                ? 0U
                                                                : 
                                                               (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                ->__PVT__m_bits
                                                                [
                                                                (((IData)(0x0000001fU) 
                                                                  + 
                                                                  (0x00007fffU 
                                                                   & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                   ->__PVT__count)) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x00000020U) 
                                                                 - 
                                                                 (0x0000001fU 
                                                                  & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                  ->__PVT__count)))) 
                                                              | (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                 ->__PVT__m_bits
                                                                 [
                                                                 (0x000003ffU 
                                                                  & (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                     ->__PVT__count 
                                                                     >> 5U))] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                                  ->__PVT__count))), 0)
                                       : (((0U == (0x0000001fU 
                                                   & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                   ->__PVT__count))
                                            ? 0U : 
                                           (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                            ->__PVT__m_bits
                                            [(((IData)(0x0000001fU) 
                                               + (0x00007fffU 
                                                  & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                  ->__PVT__count)) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                   ->__PVT__count)))) 
                                          | (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                             ->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                  ->__PVT__count 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
                                                 ->__PVT__count))));
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)->__PVT__count 
        = ((IData)(0x00000020U) + VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 550)
           ->__PVT__count);
    unnamedblk36__DOT_____05Farray.renew(1U);
    unnamedblk36__DOT_____05Fvar = 0U;
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 551)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk36__DOT_____05Farray, 0x00000020U);
    unnamedblk36__DOT_____05Fvar = VL_STREAML_III(32, VL_PACK_I_RI
                                                  (32, 32, unnamedblk36__DOT_____05Farray), 0x00000020U);
    this->__PVT__m_byte_enable_length = unnamedblk36__DOT_____05Fvar;
    if ((this->__PVT__m_byte_enable.size() < this->__PVT__m_byte_enable_length)) {
        this->__PVT__m_byte_enable.renew(this->__PVT__m_byte_enable_length);
    }
    unnamedblk37__DOT__i = 0U;
    unnamedblk37__DOT__i = 0U;
    while ((unnamedblk37__DOT__i < this->__PVT__m_byte_enable_length)) {
        unnamedblk37__DOT__unnamedblk38__DOT_____05Farray.renew(1U);
        unnamedblk37__DOT__unnamedblk38__DOT_____05Fvar = 0U;
        VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 555)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk37__DOT__unnamedblk38__DOT_____05Farray, 8U);
        unnamedblk37__DOT__unnamedblk38__DOT_____05Fvar 
            = VL_STREAML_III(32, VL_PACK_I_RI(32, 32, unnamedblk37__DOT__unnamedblk38__DOT_____05Farray), 0x00000020U);
        this->__PVT__m_byte_enable.atWrite(unnamedblk37__DOT__i) 
            = (0x000000ffU & unnamedblk37__DOT__unnamedblk38__DOT_____05Fvar);
        unnamedblk37__DOT__i = ((IData)(1U) + unnamedblk37__DOT__i);
    }
    unnamedblk39__DOT_____05Farray.renew(1U);
    unnamedblk39__DOT_____05Fvar = 0U;
    VL_NULL_CHECK(packer, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 556)->__VnoInFunc_unpack_ints(vlSymsp, unnamedblk39__DOT_____05Farray, 0x00000020U);
    unnamedblk39__DOT_____05Fvar = VL_STREAML_III(32, VL_PACK_I_RI
                                                  (32, 32, unnamedblk39__DOT_____05Farray), 0x00000020U);
    this->__PVT__m_streaming_width = unnamedblk39__DOT_____05Fvar;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_do_record\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_18__get_name;
    CData/*0:0*/ __VlefCall_17__use_record_attribute;
    CData/*0:0*/ __VlefCall_16__is_open;
    CData/*0:0*/ __VlefCall_15__use_record_attribute;
    CData/*0:0*/ __VlefCall_14__is_open;
    CData/*0:0*/ __VlefCall_13__use_record_attribute;
    CData/*0:0*/ __VlefCall_12__is_open;
    std::string __VlefExpr_11;
    CData/*0:0*/ __VlefCall_10__use_record_attribute;
    CData/*0:0*/ __VlefCall_9__is_open;
    CData/*0:0*/ __VlefCall_8__use_record_attribute;
    CData/*0:0*/ __VlefCall_7__is_open;
    CData/*0:0*/ __VlefCall_6__use_record_attribute;
    CData/*0:0*/ __VlefCall_5__is_open;
    CData/*0:0*/ __VlefCall_4__use_record_attribute;
    CData/*0:0*/ __VlefCall_3__is_open;
    CData/*0:0*/ __VlefCall_2__use_record_attribute;
    CData/*0:0*/ __VlefCall_1__is_open;
    CData/*0:0*/ __VlefCall_0__is_recording_enabled;
    IData/*31:0*/ unnamedblk40__DOT__i;
    IData/*31:0*/ unnamedblk41__DOT__i;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk42__DOT__ext;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk42__DOT__ext__Vnext;
    CData/*0:0*/ unnamedblk42__DOT__ext__Vmore;
    unnamedblk42__DOT__ext__Vmore = 0;
    {
        this->__VnoInFunc_is_recording_enabled(vlSymsp, __VlefCall_0__is_recording_enabled);
        if ((1U & (~ (IData)(__VlefCall_0__is_recording_enabled)))) {
            goto __Vlabel0;
        }
        VUVM_regblock_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_record(vlProcess, vlSymsp, recorder);
        __VlefCall_1__is_open = (VlNull{} != recorder);
        if (__VlefCall_1__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_is_open(vlSymsp, __VlefCall_1__is_open);
        }
        if (__VlefCall_1__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_2__use_record_attribute);
            if (__VlefCall_2__use_record_attribute) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "address"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',64,this->__PVT__m_address) , ""s);
            } else {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 567)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "address"s, this->__PVT__m_address, 0x00000040U, 0U);
            }
        }
        __VlefCall_3__is_open = (VlNull{} != recorder);
        if (__VlefCall_3__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_is_open(vlSymsp, __VlefCall_3__is_open);
        }
        if (__VlefCall_3__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_4__use_record_attribute);
            if (__VlefCall_4__use_record_attribute) {
                __Vtemp_1 = VUVM_regblock___024unit::__Venumtab_enum_name63
                    [(3U & this->__PVT__m_command)];
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "command"s, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_1)) , ""s);
            } else {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 568)->__VnoInFunc_record_string(vlProcess, vlSymsp, "command"s, 
                                                                                VL_CVT_PACK_STR_NN(VUVM_regblock___024unit::__Venumtab_enum_name63
                                                                                [
                                                                                (3U 
                                                                                & this->__PVT__m_command)]));
            }
        }
        __VlefCall_5__is_open = (VlNull{} != recorder);
        if (__VlefCall_5__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_is_open(vlSymsp, __VlefCall_5__is_open);
        }
        if (__VlefCall_5__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_6__use_record_attribute);
            if (__VlefCall_6__use_record_attribute) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "data_length"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_length) , ""s);
            } else {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 569)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "data_length"s, (QData)((IData)(this->__PVT__m_length)), 0x00000020U, 0U);
            }
        }
        __VlefCall_7__is_open = (VlNull{} != recorder);
        if (__VlefCall_7__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_is_open(vlSymsp, __VlefCall_7__is_open);
        }
        if (__VlefCall_7__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_8__use_record_attribute);
            if (__VlefCall_8__use_record_attribute) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "byte_enable_length"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_byte_enable_length) , ""s);
            } else {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 570)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "byte_enable_length"s, (QData)((IData)(this->__PVT__m_byte_enable_length)), 0x00000020U, 0U);
            }
        }
        __VlefCall_9__is_open = (VlNull{} != recorder);
        if (__VlefCall_9__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_is_open(vlSymsp, __VlefCall_9__is_open);
        }
        if (__VlefCall_9__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_10__use_record_attribute);
            if (__VlefCall_10__use_record_attribute) {
                __Vtemp_2 = VUVM_regblock___024unit::__Venumtab_enum_name65
                    .at(this->__PVT__m_response_status);
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "response_status"s, VL_SFORMATF_N_NX("%p",1
                                                                                , 'S',&(__Vtemp_2)) , ""s);
            } else {
                __VlefExpr_11 = VL_CVT_PACK_STR_NN(VUVM_regblock___024unit::__Venumtab_enum_name65
                                                   .at(this->__PVT__m_response_status));
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 571)->__VnoInFunc_record_string(vlProcess, vlSymsp, "response_status"s, __VlefExpr_11);
            }
        }
        __VlefCall_12__is_open = (VlNull{} != recorder);
        if (__VlefCall_12__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_is_open(vlSymsp, __VlefCall_12__is_open);
        }
        if (__VlefCall_12__is_open) {
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_13__use_record_attribute);
            if (__VlefCall_13__use_record_attribute) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "streaming_width"s, VL_SFORMATF_N_NX("%p",1
                                                                                , '#',32,this->__PVT__m_streaming_width) , ""s);
            } else {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 572)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "streaming_width"s, (QData)((IData)(this->__PVT__m_streaming_width)), 0x00000020U, 0U);
            }
        }
        unnamedblk40__DOT__i = 0U;
        unnamedblk40__DOT__i = 0U;
        while ((unnamedblk40__DOT__i < this->__PVT__m_length)) {
            __VlefCall_14__is_open = (VlNull{} != recorder);
            if (__VlefCall_14__is_open) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_is_open(vlSymsp, __VlefCall_14__is_open);
            }
            if (__VlefCall_14__is_open) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_15__use_record_attribute);
                if (__VlefCall_15__use_record_attribute) {
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_record_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("\\data[%0d] ",1
                                                                                , '~',32,unnamedblk40__DOT__i) , VL_SFORMATF_N_NX("%p",1
                                                                                , '#',8,this->__PVT__m_data.at(unnamedblk40__DOT__i)) , ""s);
                } else {
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 575)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, VL_SFORMATF_N_NX("\\data[%0d] ",1
                                                                                , '~',32,unnamedblk40__DOT__i) , (QData)((IData)(this->__PVT__m_data.at(unnamedblk40__DOT__i))), 8U, 0U);
                }
            }
            unnamedblk40__DOT__i = ((IData)(1U) + unnamedblk40__DOT__i);
        }
        unnamedblk41__DOT__i = 0U;
        unnamedblk41__DOT__i = 0U;
        while ((unnamedblk41__DOT__i < this->__PVT__m_byte_enable_length)) {
            __VlefCall_16__is_open = (VlNull{} != recorder);
            if (__VlefCall_16__is_open) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_is_open(vlSymsp, __VlefCall_16__is_open);
            }
            if (__VlefCall_16__is_open) {
                VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_use_record_attribute(vlSymsp, __VlefCall_17__use_record_attribute);
                if (__VlefCall_17__use_record_attribute) {
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_record_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("\\byte_en[%0d] ",1
                                                                                , '~',32,unnamedblk41__DOT__i) , VL_SFORMATF_N_NX("%p",1
                                                                                , '#',8,this->__PVT__m_byte_enable.at(unnamedblk41__DOT__i)) , ""s);
                } else {
                    VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 578)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, VL_SFORMATF_N_NX("\\byte_en[%0d] ",1
                                                                                , '~',32,unnamedblk41__DOT__i) , (QData)((IData)(this->__PVT__m_byte_enable.at(unnamedblk41__DOT__i))), 8U, 0U);
                }
            }
            unnamedblk41__DOT__i = ((IData)(1U) + unnamedblk41__DOT__i);
        }
        unnamedblk42__DOT__ext__Vmore = (0U != this->__PVT__m_extensions.first(unnamedblk42__DOT__ext__Vnext));
        while (unnamedblk42__DOT__ext__Vmore) {
            unnamedblk42__DOT__ext = unnamedblk42__DOT__ext__Vnext;
            unnamedblk42__DOT__ext__Vmore = (0U != this->__PVT__m_extensions.next(unnamedblk42__DOT__ext__Vnext));
            VL_NULL_CHECK(unnamedblk42__DOT__ext, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 581)->__VnoInFunc_get_name(vlSymsp, __VlefCall_18__get_name);
            VL_NULL_CHECK(recorder, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 581)->__VnoInFunc_record_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_18__get_name), this->__PVT__m_extensions
                                                                                .at(unnamedblk42__DOT__ext));
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_response_string;
    std::string __VlefCall_0__convert2string;
    IData/*31:0*/ unnamedblk43__DOT__i;
    std::string msg;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    msg = ""s;
    s = ""s;
    VUVM_regblock_uvm_pkg__03a__03auvm_object::__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_0__convert2string);
    __Vtemp_1 = VUVM_regblock___024unit::__Venumtab_enum_name63
        [(3U & this->__PVT__m_command)];
    VL_SFORMAT_NX(msg,"%s %s [0x%16x] =",3, 'S',&(__VlefCall_0__convert2string)
                  , 'S',&(__Vtemp_1), '#',64,this->__PVT__m_address);
    unnamedblk43__DOT__i = 0U;
    unnamedblk43__DOT__i = 0U;
    while ((unnamedblk43__DOT__i < this->__PVT__m_length)) {
        if ((1U & ((~ (0U != this->__PVT__m_byte_enable_length)) 
                   | (0xffU == this->__PVT__m_byte_enable.at(
                                                             VL_MODDIV_III(32, unnamedblk43__DOT__i, this->__PVT__m_byte_enable_length)))))) {
            VL_SFORMAT_NX(s," %02x",1, '#',8,this->__PVT__m_data.at(unnamedblk43__DOT__i));
        } else {
            s = " --"s;
        }
        msg = VL_CONCATN_NNN(msg, s);
        unnamedblk43__DOT__i = ((IData)(1U) + unnamedblk43__DOT__i);
    }
    this->__VnoInFunc_get_response_string(vlSymsp, __VlefCall_1__get_response_string);
    msg = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(msg, " (status="s), __VlefCall_1__get_response_string), ")"s);
    convert2string__Vfuncrtn = msg;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_command(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_command__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_command\n"); );
    // Body
    get_command__Vfuncrtn = this->__PVT__m_command;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_command(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ command) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_command\n"); );
    // Body
    this->__PVT__m_command = command;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_read(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_read\n"); );
    // Body
    is_read__Vfuncrtn = (0U == this->__PVT__m_command);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_read(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_read\n"); );
    // Body
    this->__VnoInFunc_set_command(vlSymsp, 0U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_write(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_write\n"); );
    // Body
    is_write__Vfuncrtn = (1U == this->__PVT__m_command);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_write(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_write\n"); );
    // Body
    this->__VnoInFunc_set_command(vlSymsp, 1U);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_address(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_address\n"); );
    // Body
    this->__PVT__m_address = addr;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_address(VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_address\n"); );
    // Body
    get_address__Vfuncrtn = this->__PVT__m_address;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data\n"); );
    // Body
    p = this->__PVT__m_data;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data\n"); );
    // Body
    this->__PVT__m_data = p;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data_length(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_data_length__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_data_length\n"); );
    // Body
    get_data_length__Vfuncrtn = this->__PVT__m_length;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data_length(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ length) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_data_length\n"); );
    // Body
    this->__PVT__m_length = length;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_streaming_width(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_streaming_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_streaming_width\n"); );
    // Body
    get_streaming_width__Vfuncrtn = this->__PVT__m_streaming_width;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_streaming_width(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ width) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_streaming_width\n"); );
    // Body
    this->__PVT__m_streaming_width = width;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable\n"); );
    // Body
    p = this->__PVT__m_byte_enable;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable\n"); );
    // Body
    this->__PVT__m_byte_enable = p;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable_length(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_byte_enable_length__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_byte_enable_length\n"); );
    // Body
    get_byte_enable_length__Vfuncrtn = this->__PVT__m_byte_enable_length;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable_length(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ length) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_byte_enable_length\n"); );
    // Body
    this->__PVT__m_byte_enable_length = length;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_dmi_allowed(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ dmi) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_dmi_allowed\n"); );
    // Body
    this->__PVT__m_dmi = dmi;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_dmi_allowed(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_dmi_allowed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_dmi_allowed\n"); );
    // Body
    is_dmi_allowed__Vfuncrtn = this->__PVT__m_dmi;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_status(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_status\n"); );
    // Body
    get_response_status__Vfuncrtn = this->__PVT__m_response_status;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_response_status(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ status) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_response_status\n"); );
    // Body
    this->__PVT__m_response_status = status;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_ok(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_ok__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_ok\n"); );
    // Body
    is_response_ok__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_response_status);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_error(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_error__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_is_response_error\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__is_response_ok;
    is_response_error__Vfuncrtn = 0U;
    this->__VnoInFunc_is_response_ok(vlSymsp, __VlefCall_0__is_response_ok);
    is_response_error__Vfuncrtn = (1U & (~ (IData)(__VlefCall_0__is_response_ok)));
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_string(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_response_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_response_string\n"); );
    // Body
    {
        get_response_string__Vfuncrtn = ""s;
        if ((1U == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "OK"s;
            goto __Vlabel0;
        } else if ((0U == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "INCOMPLETE"s;
            goto __Vlabel0;
        } else if ((0xffffffffU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "GENERIC_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffeU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "ADDRESS_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffdU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "COMMAND_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffcU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "BURST_ERROR"s;
            goto __Vlabel0;
        } else if ((0xfffffffbU == this->__PVT__m_response_status)) {
            get_response_string__Vfuncrtn = "BYTE_ENABLE_ERROR"s;
            goto __Vlabel0;
        }
        get_response_string__Vfuncrtn = "UNKNOWN_RESPONSE"s;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_extension(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> ext, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> &set_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_set_extension\n"); );
    // Body
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle;
    VL_NULL_CHECK(ext, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 854)->__VnoInFunc_get_type_handle(vlSymsp, ext_handle);
    if (this->__PVT__m_extensions.exists(ext_handle)) {
        set_extension__Vfuncrtn = this->__PVT__m_extensions
            .at(ext_handle);
    } else {
        set_extension__Vfuncrtn = VlNull{};
    }
    this->__PVT__m_extensions.at(ext_handle) = ext;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_num_extensions(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_extensions__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_num_extensions\n"); );
    // Body
    get_num_extensions__Vfuncrtn = this->__PVT__m_extensions.size();
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_extension(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> &get_extension__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_get_extension\n"); );
    // Body
    {
        if ((! this->__PVT__m_extensions.exists(ext_handle))) {
            get_extension__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_extension__Vfuncrtn = this->__PVT__m_extensions
            .at(ext_handle);
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extension(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extension\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_extensions.exists(ext_handle)) {
        this->__PVT__m_extensions.erase(ext_handle);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "GP_EXT"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "GP_EXT"s, "Unable to find extension to clear"s, 0x000000c8U, "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh"s, 0x0000037cU, ""s, 1U);
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extensions(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_clear_extensions\n"); );
    // Body
    this->__PVT__m_extensions.clear();
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_pre_randomize(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_pre_randomize\n"); );
    // Body
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk44__DOT__ext_;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk44__DOT__ext___Vnext;
    CData/*0:0*/ unnamedblk44__DOT__ext___Vmore;
    unnamedblk44__DOT__ext___Vmore = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> unnamedblk44__DOT__unnamedblk45__DOT__ext;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    IData/*31:0*/ i;
    i = 0U;
    this->__PVT__m_rand_exts.renew(this->__PVT__m_extensions.size());
    unnamedblk44__DOT__ext___Vmore = (0U != this->__PVT__m_extensions.first(unnamedblk44__DOT__ext___Vnext));
    while (unnamedblk44__DOT__ext___Vmore) {
        unnamedblk44__DOT__ext_ = unnamedblk44__DOT__ext___Vnext;
        unnamedblk44__DOT__ext___Vmore = (0U != this->__PVT__m_extensions.next(unnamedblk44__DOT__ext___Vnext));
        unnamedblk44__DOT__unnamedblk45__DOT__ext = unnamedblk44__DOT__ext_;
        __Vincrement1 = i;
        i = ((IData)(1U) + i);
        this->__PVT__m_rand_exts.atWrite(__Vincrement1) 
            = this->__PVT__m_extensions.at(unnamedblk44__DOT__unnamedblk45__DOT__ext);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_post_randomize(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_post_randomize\n"); );
    // Body
    this->__PVT__m_rand_exts.clear();
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    {
        // Inlined CFunc: __VnoInFunc_pre_randomize
        VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext_;
        VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vnext;
        CData/*0:0*/ __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vmore;
        __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vmore = 0;
        VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_extension_base> __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__unnamedblk45__DOT__ext;
        IData/*31:0*/ __Vinline_0___VnoInFunc_pre_randomize___Vincrement1;
        __Vinline_0___VnoInFunc_pre_randomize___Vincrement1 = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_pre_randomize_i;
        __Vinline_0___VnoInFunc_pre_randomize_i = 0U;
        this->__PVT__m_rand_exts.renew(this->__PVT__m_extensions.size());
        __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vmore 
            = (0U != this->__PVT__m_extensions.first(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vnext));
        while (__Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vmore) {
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext_ 
                = __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vnext;
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vmore 
                = (0U != this->__PVT__m_extensions.next(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext___Vnext));
            __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__unnamedblk45__DOT__ext 
                = __Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__ext_;
            __Vinline_0___VnoInFunc_pre_randomize___Vincrement1 
                = __Vinline_0___VnoInFunc_pre_randomize_i;
            __Vinline_0___VnoInFunc_pre_randomize_i 
                = ((IData)(1U) + __Vinline_0___VnoInFunc_pre_randomize_i);
            this->__PVT__m_rand_exts.atWrite(__Vinline_0___VnoInFunc_pre_randomize___Vincrement1) 
                = this->__PVT__m_extensions.at(__Vinline_0___VnoInFunc_pre_randomize_unnamedblk44__DOT__unnamedblk45__DOT__ext);
        }
    }
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
    {
        // Inlined CFunc: __VnoInFunc_post_randomize
        this->__PVT__m_rand_exts.clear();
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::__VnoInFunc___VBasicRand\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0;
    unnamedblk2_1__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_1__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_1__DOT____Vrandarr___0__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2_2__DOT____Vrandarr___0;
    unnamedblk2_2__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_2__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_2__DOT____Vrandarr___0__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2_3__DOT____Vrandarr___0;
    unnamedblk2_3__DOT____Vrandarr___0 = 0;
    IData/*31:0*/ unnamedblk2_3__DOT____Vrandarr___0__Vloopsize;
    unnamedblk2_3__DOT____Vrandarr___0__Vloopsize = 0;
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__m_address = VL_RANDOM_RNG_Q(__Vm_rng);
    this->__PVT__m_command = VUVM_regblock___024unit::__Venumvaltab_0
        [VL_MODDIV_III(32, (IData)(VL_RANDOM_RNG_I(__Vm_rng)), (IData)(3U))];
    unnamedblk2_1__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_1__DOT____Vrandarr___0 < this->__PVT__m_data.size())) {
        unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_data.size();
        this->__PVT__m_data.atWrite(unnamedblk2_1__DOT____Vrandarr___0) 
            = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
        if ((unnamedblk2_1__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_data.size())) {
            unnamedblk2_1__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_1__DOT____Vrandarr___0);
        }
    }
    this->__PVT__m_length = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__m_response_status = VUVM_regblock___024unit::__Venumvaltab_1
        [VL_MODDIV_III(32, (IData)(VL_RANDOM_RNG_I(__Vm_rng)), (IData)(7U))];
    unnamedblk2_2__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_2__DOT____Vrandarr___0 < this->__PVT__m_byte_enable.size())) {
        unnamedblk2_2__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_byte_enable.size();
        this->__PVT__m_byte_enable.atWrite(unnamedblk2_2__DOT____Vrandarr___0) 
            = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
        if ((unnamedblk2_2__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_byte_enable.size())) {
            unnamedblk2_2__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_2__DOT____Vrandarr___0);
        }
    }
    this->__PVT__m_byte_enable_length = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__m_streaming_width = VL_RANDOM_RNG_I(__Vm_rng);
    unnamedblk2_3__DOT____Vrandarr___0 = 0U;
    while ((unnamedblk2_3__DOT____Vrandarr___0 < this->__PVT__m_rand_exts.size())) {
        unnamedblk2_3__DOT____Vrandarr___0__Vloopsize 
            = this->__PVT__m_rand_exts.size();
        if ((VlNull{} != this->__PVT__m_rand_exts.atWrite(unnamedblk2_3__DOT____Vrandarr___0))) {
            VL_NULL_CHECK(this->__PVT__m_rand_exts.atWrite(unnamedblk2_3__DOT____Vrandarr___0), "../../uvm/distrib/src/tlm2/uvm_tlm2_generic_payload.svh", 103)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VBasicRand__Vfuncrtn = (__VBasicRand__Vfuncrtn 
                                      & __VlefCall_0__randomize);
        }
        if ((unnamedblk2_3__DOT____Vrandarr___0__Vloopsize 
             <= this->__PVT__m_rand_exts.size())) {
            unnamedblk2_3__DOT____Vrandarr___0 = ((IData)(1U) 
                                                  + unnamedblk2_3__DOT____Vrandarr___0);
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_address = 0;
    __PVT__m_command = 0;
    __PVT__m_data.atDefault() = 0;
    __PVT__m_length = 0;
    __PVT__m_response_status = 0;
    __PVT__m_dmi = 0;
    __PVT__m_byte_enable.atDefault() = 0;
    __PVT__m_byte_enable_length = 0;
    __PVT__m_streaming_width = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::~VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_tlm_generic_payload::~\n"); );
}
