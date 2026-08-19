// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_regblock.h for the primary calling header

#include "VUVM_regblock__pch.h"

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_default_report_server"s;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name) {
    VUVM_regblock_uvm_pkg__03a__03auvm_report_server::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__max_quit_overridable = 1U;
    this->__PVT__enable_report_id_count_summary = 1U;
    this->__PVT__record_all_messages = 0U;
    this->__PVT__show_verbosity = 0U;
    this->__PVT__show_terminator = 0U;
    /*super.new*/;
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 0U, 1U);
    {
        // Inlined CFunc: __VnoInFunc_reset_quit_count
        this->__PVT__m_quit_count = 0U;
    }
    {
        // Inlined CFunc: __VnoInFunc_reset_severity_counts
        CData/*1:0*/ __Vinline_0___VnoInFunc_reset_severity_counts_s;
        __Vinline_0___VnoInFunc_reset_severity_counts_s = 0U;
        {
            while (true) {
                this->__PVT__m_severity_count.at((IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s)) = 0U;
                if ((3U == (IData)(__Vinline_0___VnoInFunc_reset_severity_counts_s))) {
                    goto __Vlabel0;
                }
                __Vinline_0___VnoInFunc_reset_severity_counts_s 
                    = VUVM_regblock___024unit::__Venumtab_enum_next21
                    [__Vinline_0___VnoInFunc_reset_severity_counts_s];
            }
            __Vlabel0: ;
        }
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    IData/*31:0*/ __Vilp3;
    IData/*31:0*/ __Vilp4;
    IData/*31:0*/ __Vilp5;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_5;
    VlWide<128>/*4095:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefExpr_3;
    CData/*0:0*/ __VlefExpr_2;
    VlWide<128>/*4095:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    CData/*1:0*/ l_severity_count_index;
    std::string l_id_count_index;
    l_severity_count_index = 0U;
    l_id_count_index = ""s;
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_quit_count);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 336)->__VnoInFunc_print_int(vlSymsp, "quit_count"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__m_max_quit_count);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 338)->__VnoInFunc_print_int(vlSymsp, "max_quit_count"s, __Vtemp_2, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_3[0U] = this->__PVT__max_quit_overridable;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_3[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 340)->__VnoInFunc_print_int(vlSymsp, "max_quit_overridable"s, __Vtemp_3, 1U, 0x01000000U, 0x2eU, "bit"s);
    __VlefExpr_0 = (0U != this->__PVT__m_severity_count.first(l_severity_count_index));
    if (__VlefExpr_0) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 344)->__VnoInFunc_print_array_header(vlSymsp, "severity_count"s, this->__PVT__m_severity_count.size(), "severity counts"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __VlefExpr_1, this->__PVT__m_severity_count
                          .at((IData)(l_severity_count_index)));
            __Vtemp_4 = VUVM_regblock___024unit::__Venumtab_enum_name21
                [l_severity_count_index];
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 346)->__VnoInFunc_print_int(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(__Vtemp_4)) , __VlefExpr_1, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            __VlefExpr_2 = (0U != this->__PVT__m_severity_count.next(l_severity_count_index));
        } while (__VlefExpr_2);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 349)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __VlefExpr_3 = (0U != this->__PVT__m_id_count.first(l_id_count_index));
    if (__VlefExpr_3) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 353)->__VnoInFunc_print_array_header(vlSymsp, "id_count"s, this->__PVT__m_id_count.size(), "id counts"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __VlefExpr_4, this->__PVT__m_id_count
                          .at(l_id_count_index));
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 355)->__VnoInFunc_print_int(vlSymsp, VL_SFORMATF_N_NX("[%s]",1
                                                                                , 'S',&(l_id_count_index)) , __VlefExpr_4, 0x00000020U, 0x02000000U, 0x2eU, ""s);
            __VlefExpr_5 = (0U != this->__PVT__m_id_count.next(l_id_count_index));
        } while (__VlefExpr_5);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 358)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __Vtemp_5[0U] = this->__PVT__enable_report_id_count_summary;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_5[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 361)->__VnoInFunc_print_int(vlSymsp, "enable_report_id_count_summary"s, __Vtemp_5, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_6[0U] = this->__PVT__record_all_messages;
    __Vilp3 = 1U;
    while ((__Vilp3 <= 0x0000007fU)) {
        __Vtemp_6[__Vilp3] = 0U;
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 363)->__VnoInFunc_print_int(vlSymsp, "record_all_messages"s, __Vtemp_6, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_7[0U] = this->__PVT__show_verbosity;
    __Vilp4 = 1U;
    while ((__Vilp4 <= 0x0000007fU)) {
        __Vtemp_7[__Vilp4] = 0U;
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 365)->__VnoInFunc_print_int(vlSymsp, "show_verbosity"s, __Vtemp_7, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_8[0U] = this->__PVT__show_terminator;
    __Vilp5 = 1U;
    while ((__Vilp5 <= 0x0000007fU)) {
        __Vtemp_8[__Vilp5] = 0U;
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 367)->__VnoInFunc_print_int(vlSymsp, "show_terminator"s, __Vtemp_8, 1U, 0x01000000U, 0x2eU, "bit"s);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = this->__PVT__m_max_quit_count;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_info__17__verbosity;
    __Vtask_uvm_report_info__17__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__17__line;
    __Vtask_uvm_report_info__17__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__17__report_enabled_checked;
    __Vtask_uvm_report_info__17__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if ((1U & (~ (IData)(this->__PVT__max_quit_overridable)))) {
            __Vtask_uvm_report_info__17__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_info__17__context_name = ""s;
            __Vtask_uvm_report_info__17__line = 0U;
            this->__Vtask_uvm_report_info__17__filename = ""s;
            __Vtask_uvm_report_info__17__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__17__message
                          ,"The max quit count setting of %0d is not overridable to %0d due to a previous setting.",2
                          , '~',32,this->__PVT__m_max_quit_count
                          , '~',32,count);
            this->__Vtask_uvm_report_info__17__id = "NOMAXQUITOVR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__17__id, this->__Vtask_uvm_report_info__17__message, __Vtask_uvm_report_info__17__verbosity, this->__Vtask_uvm_report_info__17__filename, __Vtask_uvm_report_info__17__line, this->__Vtask_uvm_report_info__17__context_name, (IData)(__Vtask_uvm_report_info__17__report_enabled_checked));
            goto __Vlabel0;
        }
        this->__PVT__max_quit_overridable = overridable;
        this->__PVT__m_max_quit_count = (VL_GTS_III(32, 0U, count)
                                          ? 0U : count);
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = this->__PVT__m_quit_count;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = (VL_GTS_III(32, 0U, quit_count)
                                  ? 0U : quit_count);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = ((IData)(1U) + this->__PVT__m_quit_count);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = 0U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached\n"); );
    // Body
    is_quit_count_reached__Vfuncrtn = VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = this->__PVT__m_severity_count
        .at((IData)(severity));
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = (VL_GTS_III(32, 0U, count) ? 0U : count);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = ((IData)(1U) + this->__PVT__m_severity_count
                    .at((IData)(severity)));
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = __VlefExpr_0;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts\n"); );
    // Body
    CData/*1:0*/ s;
    s = 0U;
    {
        while (true) {
            this->__PVT__m_severity_count.at((IData)(s)) = 0U;
            if ((3U == (IData)(s))) {
                goto __Vlabel0;
            }
            s = VUVM_regblock___024unit::__Venumtab_enum_next21
                [s];
        }
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    {
        get_id_count__Vfuncrtn = 0U;
        if (this->__PVT__m_id_count.exists(id)) {
            get_id_count__Vfuncrtn = this->__PVT__m_id_count
                .at(id);
            goto __Vlabel0;
        }
        get_id_count__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count(VUVM_regblock__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    this->__PVT__m_id_count.at(id) = (VL_GTS_III(32, 0U, count)
                                       ? 0U : count);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count(VUVM_regblock__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    if (this->__PVT__m_id_count.exists(id)) {
        __VlefExpr_0 = ((IData)(1U) + this->__PVT__m_id_count
                        .at(id));
        this->__PVT__m_id_count.at(id) = __VlefExpr_0;
    } else {
        this->__PVT__m_id_count.at(id) = 1U;
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database\n"); );
    // Body
    this->__PVT__m_message_db = database;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
    get_message_database__Vfuncrtn = this->__PVT__m_message_db;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    CData/*1:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    CData/*1:0*/ unnamedblk1__DOT__idx__Vnext;
    unnamedblk1__DOT__idx__Vnext = 0;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vmore;
    unnamedblk1__DOT__idx__Vmore = 0;
    q.clear();
    q.atDefault() = 0;
    unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_severity_count.first(unnamedblk1__DOT__idx__Vnext));
    while (unnamedblk1__DOT__idx__Vmore) {
        unnamedblk1__DOT__idx = unnamedblk1__DOT__idx__Vnext;
        unnamedblk1__DOT__idx__Vmore = (0U != this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx__Vnext));
        q.push_back(unnamedblk1__DOT__idx);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set(VUVM_regblock__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    std::string unnamedblk2__DOT__idx;
    std::string unnamedblk2__DOT__idx__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vmore;
    unnamedblk2__DOT__idx__Vmore = 0;
    q.clear();
    q.atDefault().clear();
    unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_id_count.first(unnamedblk2__DOT__idx__Vnext));
    while (unnamedblk2__DOT__idx__Vmore) {
        unnamedblk2__DOT__idx = unnamedblk2__DOT__idx__Vnext;
        unnamedblk2__DOT__idx__Vmore = (0U != this->__PVT__m_id_count.next(unnamedblk2__DOT__idx__Vnext));
        q.push_back(unnamedblk2__DOT__idx);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%s\n",1, 'S',&(str));
    } else {
        VL_FWRITEF_NX(file,"%s\n",1, 'S',&(str));
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_10__get_action;
    IData/*31:0*/ __VlefCall_9__get_action;
    IData/*31:0*/ __VlefCall_8__process_all_report_catchers;
    IData/*31:0*/ __VlefCall_7__get_line;
    std::string __VlefCall_6__get_filename;
    IData/*31:0*/ __VlefCall_5__get_verbosity;
    std::string __VlefCall_4__get_message;
    std::string __VlefCall_3__get_id;
    CData/*1:0*/ __VlefCall_2__get_severity;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> __VlefCall_1__get_report_object;
    IData/*31:0*/ __VlefCall_0__get_action;
    std::string unnamedblk3__DOT__m;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk3__DOT__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_server> unnamedblk3__DOT__svr;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    VlClassRef<VUVM_regblock_std__03a__03aprocess> p;
    CData/*0:0*/ report_ok;
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 562)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    report_ok = 1U;
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 567)->__VnoInFunc_set_report_server(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server>{this});
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 575)->__VnoInFunc_get_action(vlSymsp, __VlefCall_0__get_action);
    if ((0U != (0x00000010U & __VlefCall_0__get_action))) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 577)->__VnoInFunc_get_report_object(vlSymsp, __VlefCall_1__get_report_object);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 578)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_2__get_severity);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 579)->__VnoInFunc_get_id(vlSymsp, __VlefCall_3__get_id);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 580)->__VnoInFunc_get_message(vlSymsp, __VlefCall_4__get_message);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 581)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_5__get_verbosity);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 582)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_6__get_filename);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 583)->__VnoInFunc_get_line(vlSymsp, __VlefCall_7__get_line);
        VL_NULL_CHECK(l_report_handler, "../../uvm/distrib/src/base/uvm_report_server.svh", 576)->__VnoInFunc_run_hooks(vlSymsp, __VlefCall_1__get_report_object, __VlefCall_2__get_severity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_3__get_id), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_message), __VlefCall_5__get_verbosity, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_6__get_filename), __VlefCall_7__get_line, report_ok);
    }
    if (report_ok) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_process_all_report_catchers(vlProcess, vlSymsp, report_message, __VlefCall_8__process_all_report_catchers);
        report_ok = (1U & __VlefCall_8__process_all_report_catchers);
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 590)->__VnoInFunc_get_action(vlSymsp, __VlefCall_9__get_action);
    if ((0U == __VlefCall_9__get_action)) {
        report_ok = 0U;
    }
    if (report_ok) {
        unnamedblk3__DOT__m = ""s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk3__DOT__cs);
        VL_NULL_CHECK(unnamedblk3__DOT__cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 597)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, unnamedblk3__DOT__svr);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 625)->__VnoInFunc_get_action(vlSymsp, __VlefCall_10__get_action);
        if ((0U != (3U & __VlefCall_10__get_action))) {
            VL_NULL_CHECK(unnamedblk3__DOT__svr, "../../uvm/distrib/src/base/uvm_report_server.svh", 626)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, report_message, ""s, unnamedblk3__DOT__m);
        }
        VL_NULL_CHECK(unnamedblk3__DOT__svr, "../../uvm/distrib/src/base/uvm_report_server.svh", 628)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, report_message, unnamedblk3__DOT__m);
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_28__get_action;
    IData/*31:0*/ __VlefCall_27__get_action;
    IData/*31:0*/ __VlefCall_26__get_action;
    CData/*0:0*/ __VlefCall_25__is_quit_count_reached;
    IData/*31:0*/ __VlefCall_24__get_max_quit_count;
    IData/*31:0*/ __VlefCall_23__get_action;
    IData/*31:0*/ __VlefCall_22__get_file;
    IData/*31:0*/ __VlefCall_21__get_file;
    CData/*0:0*/ __VlefLogOr_20;
    IData/*31:0*/ __VlefCall_19__get_file;
    IData/*31:0*/ __VlefCall_18__get_file;
    IData/*31:0*/ __VlefCall_17__get_action;
    IData/*31:0*/ __VlefCall_16__get_action;
    std::string __VlefCall_15__get_type_name;
    std::string __VlefCall_14__get_name;
    std::string __VlefCall_13__get_name;
    std::string __VlefCall_12__get_name;
    std::string __VlefCall_11__get_name;
    std::string __VlefCall_10__get_name;
    std::string __VlefCall_9__get_name;
    std::string __VlefCall_8__get_name;
    CData/*0:0*/ __VlefLogAnd_7;
    std::string __VlefCall_6__get_name;
    std::string __VlefCall_5__get_name;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__get_action;
    IData/*31:0*/ __VlefCall_2__get_action;
    std::string __VlefCall_1__get_id;
    CData/*1:0*/ __VlefCall_0__get_severity;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_stream> unnamedblk4__DOT__stream;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT__ro;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_handler> unnamedblk4__DOT__rh;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tr_database> unnamedblk4__DOT__unnamedblk5__DOT__db;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__unnamedblk7__DOT__recorder;
    IData/*31:0*/ unnamedblk8__DOT__tmp_file;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> unnamedblk9__DOT__l_root;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk9__DOT__cs;
    VlClassRef<VUVM_regblock_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 653)->__VnoInFunc_get_severity(vlSymsp, __VlefCall_0__get_severity);
    this->__VnoInFunc_incr_severity_count(vlSymsp, __VlefCall_0__get_severity);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 654)->__VnoInFunc_get_id(vlSymsp, __VlefCall_1__get_id);
    this->__VnoInFunc_incr_id_count(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get_id));
    if (this->__PVT__record_all_messages) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 657)->__VnoInFunc_get_action(vlSymsp, __VlefCall_2__get_action);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 657)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (0x00000040U 
                                                                                | __VlefCall_2__get_action));
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 660)->__VnoInFunc_get_action(vlSymsp, __VlefCall_3__get_action);
    if ((0U != (0x00000040U & __VlefCall_3__get_action))) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 662)->__VnoInFunc_get_report_object(vlSymsp, unnamedblk4__DOT__ro);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 663)->__VnoInFunc_get_report_handler(vlSymsp, unnamedblk4__DOT__rh);
        VL_NULL_CHECK(unnamedblk4__DOT__ro, "../../uvm/distrib/src/base/uvm_report_server.svh", 666)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __VlefLogAnd_7 = this->__PVT__m_streams.exists(__VlefCall_4__get_name);
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "../../uvm/distrib/src/base/uvm_report_server.svh", 666)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "../../uvm/distrib/src/base/uvm_report_server.svh", 666)->__VnoInFunc_get_name(vlSymsp, __VlefCall_6__get_name);
            __VlefLogAnd_7 = this->__PVT__m_streams
                .at(__VlefCall_5__get_name).exists(__VlefCall_6__get_name);
        }
        if (__VlefLogAnd_7) {
            VL_NULL_CHECK(unnamedblk4__DOT__ro, "../../uvm/distrib/src/base/uvm_report_server.svh", 667)->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
            VL_NULL_CHECK(unnamedblk4__DOT__rh, "../../uvm/distrib/src/base/uvm_report_server.svh", 667)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
            unnamedblk4__DOT__stream = this->__PVT__m_streams
                .at(__VlefCall_8__get_name).at(__VlefCall_9__get_name);
        }
        if ((VlNull{} == unnamedblk4__DOT__stream)) {
            this->__VnoInFunc_get_message_database(vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
            if ((VlNull{} == unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 679)->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk5__DOT__db);
            }
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "../../uvm/distrib/src/base/uvm_report_server.svh", 683)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "../../uvm/distrib/src/base/uvm_report_server.svh", 683)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__db, "../../uvm/distrib/src/base/uvm_report_server.svh", 683)->__VnoInFunc_open_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_10__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_name), "MESSAGES"s, unnamedblk4__DOT__stream);
                VL_NULL_CHECK(unnamedblk4__DOT__ro, "../../uvm/distrib/src/base/uvm_report_server.svh", 685)->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                VL_NULL_CHECK(unnamedblk4__DOT__rh, "../../uvm/distrib/src/base/uvm_report_server.svh", 685)->__VnoInFunc_get_name(vlSymsp, __VlefCall_13__get_name);
                this->__PVT__m_streams.at(__VlefCall_12__get_name).at(__VlefCall_13__get_name) 
                    = unnamedblk4__DOT__stream;
            }
        }
        if ((VlNull{} != unnamedblk4__DOT__stream)) {
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 689)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 689)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_15__get_type_name);
            VL_NULL_CHECK(unnamedblk4__DOT__stream, "../../uvm/distrib/src/base/uvm_report_server.svh", 689)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_14__get_name), 0ULL, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_15__get_type_name), unnamedblk4__DOT__unnamedblk7__DOT__recorder);
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk7__DOT__recorder)) {
                VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 691)->__VnoInFunc_record(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk7__DOT__recorder);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk7__DOT__recorder, "../../uvm/distrib/src/base/uvm_report_server.svh", 692)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            }
        }
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 698)->__VnoInFunc_get_action(vlSymsp, __VlefCall_16__get_action);
    if (VL_UNLIKELY(((0U != (1U & __VlefCall_16__get_action))))) {
        VL_WRITEF_NX("%s\n",1, 'S',&(composed_message));
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 705)->__VnoInFunc_get_action(vlSymsp, __VlefCall_17__get_action);
    if ((0U != (2U & __VlefCall_17__get_action))) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 706)->__VnoInFunc_get_file(vlSymsp, __VlefCall_18__get_file);
        __VlefLogOr_20 = (0U == __VlefCall_18__get_file);
        if ((1U & (~ (IData)(__VlefLogOr_20)))) {
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 707)->__VnoInFunc_get_file(vlSymsp, __VlefCall_19__get_file);
            __VlefLogOr_20 = (0x80000001U != __VlefCall_19__get_file);
        }
        if (__VlefLogOr_20) {
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 708)->__VnoInFunc_get_file(vlSymsp, unnamedblk8__DOT__tmp_file);
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 709)->__VnoInFunc_get_file(vlSymsp, __VlefCall_21__get_file);
            if ((0U == (0x80000000U & __VlefCall_21__get_file))) {
                VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 710)->__VnoInFunc_get_file(vlSymsp, __VlefCall_22__get_file);
                unnamedblk8__DOT__tmp_file = (0xfffffffeU 
                                              & __VlefCall_22__get_file);
            }
            this->__VnoInFunc_f_display(vlSymsp, unnamedblk8__DOT__tmp_file, composed_message);
        }
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 716)->__VnoInFunc_get_action(vlSymsp, __VlefCall_23__get_action);
    if ((0U != (4U & __VlefCall_23__get_action))) {
        this->__VnoInFunc_get_max_quit_count(vlSymsp, __VlefCall_24__get_max_quit_count);
        if ((0U != __VlefCall_24__get_max_quit_count)) {
            {
                // Inlined CFunc: __VnoInFunc_incr_quit_count
                this->__PVT__m_quit_count = ((IData)(1U) 
                                             + this->__PVT__m_quit_count);
            }
            this->__VnoInFunc_is_quit_count_reached(vlSymsp, __VlefCall_25__is_quit_count_reached);
            if (__VlefCall_25__is_quit_count_reached) {
                VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 721)->__VnoInFunc_get_action(vlSymsp, __VlefCall_26__get_action);
                VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 721)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (8U 
                                                                                | __VlefCall_26__get_action));
            }
        }
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 727)->__VnoInFunc_get_action(vlSymsp, __VlefCall_27__get_action);
    if ((0U != (8U & __VlefCall_27__get_action))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk9__DOT__cs);
        VL_NULL_CHECK(unnamedblk9__DOT__cs, "../../uvm/distrib/src/base/uvm_report_server.svh", 731)->__VnoInFunc_get_root(vlProcess, vlSymsp, unnamedblk9__DOT__l_root);
        VL_NULL_CHECK(unnamedblk9__DOT__l_root, "../../uvm/distrib/src/base/uvm_report_server.svh", 732)->__VnoInFunc_die(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 736)->__VnoInFunc_get_action(vlSymsp, __VlefCall_28__get_action);
    if (VL_UNLIKELY(((0U != (0x00000020U & __VlefCall_28__get_action))))) {
        VL_STOP_MT("../../uvm/distrib/src/base/uvm_report_server.svh", 737, "");
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_11__get_id;
    std::string __VlefCall_10__sprint;
    std::string __VlefCall_9__get_message;
    IData/*31:0*/ __VlefCall_8__size;
    IData/*31:0*/ __VlefCall_7__get_verbosity;
    IData/*31:0*/ __VlefCond_6;
    IData/*31:0*/ __VlefCall_5__get_verbosity;
    std::string __VlefCall_4__get_context;
    std::string __VlefCall_3__get_context;
    std::string __VlefCall_2__get_filename;
    IData/*31:0*/ __VlefCall_1__get_line;
    std::string __VlefCall_0__get_filename;
    compose_report_message__Vfuncrtn = ""s;
    std::string sev_string;
    CData/*1:0*/ l_severity;
    IData/*31:0*/ l_verbosity;
    std::string filename_line_string;
    std::string time_str;
    std::string line_str;
    std::string context_str;
    std::string verbosity_str;
    std::string terminator_str;
    std::string msg_body_str;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message_element_container> el_container;
    std::string prefix;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    sev_string = ""s;
    l_severity = 0U;
    l_verbosity = 0U;
    filename_line_string = ""s;
    time_str = ""s;
    line_str = ""s;
    context_str = ""s;
    verbosity_str = ""s;
    terminator_str = ""s;
    msg_body_str = ""s;
    prefix = ""s;
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 766)->__VnoInFunc_get_severity(vlSymsp, l_severity);
    sev_string = VUVM_regblock___024unit::__Venumtab_enum_name21
        [l_severity];
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 769)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_0__get_filename);
    if ((""s != __VlefCall_0__get_filename)) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 770)->__VnoInFunc_get_line(vlSymsp, __VlefCall_1__get_line);
        VL_SFORMAT_NX(line_str,"%0d",1, '~',32,__VlefCall_1__get_line);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 771)->__VnoInFunc_get_filename(vlSymsp, __VlefCall_2__get_filename);
        filename_line_string = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(__VlefCall_2__get_filename, "("s), line_str), ") "s);
    }
    VL_SFORMAT_NX(time_str,"%0t",2, 'T',-12, '#',64,VL_TIME_UNITED_Q(1));
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 777)->__VnoInFunc_get_context(vlSymsp, __VlefCall_3__get_context);
    if ((""s != __VlefCall_3__get_context)) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 778)->__VnoInFunc_get_context(vlSymsp, __VlefCall_4__get_context);
        context_str = VL_CONCATN_NNN("@@"s, __VlefCall_4__get_context);
    }
    if (this->__PVT__show_verbosity) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 781)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_5__get_verbosity);
        if (VUVM_regblock___024unit::__Venumtab_enum_valid25
            .at(__VlefCall_5__get_verbosity)) {
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 781)->__VnoInFunc_get_verbosity(vlSymsp, l_verbosity);
            __VlefCond_6 = 1U;
        } else {
            __VlefCond_6 = 0U;
        }
        if ((0U != __VlefCond_6)) {
            verbosity_str = VUVM_regblock___024unit::__Venumtab_enum_name25
                .at(l_verbosity);
        } else {
            VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 784)->__VnoInFunc_get_verbosity(vlSymsp, __VlefCall_7__get_verbosity);
            VL_SFORMAT_NX(verbosity_str,"%0d",1, '~',32,__VlefCall_7__get_verbosity);
        }
        verbosity_str = VL_CONCATN_NNN(VL_CONCATN_NNN("("s, verbosity_str), ")"s);
    }
    if (this->__PVT__show_terminator) {
        terminator_str = VL_CONCATN_NNN(" -"s, sev_string);
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 791)->__VnoInFunc_get_element_container(vlSymsp, el_container);
    VL_NULL_CHECK(el_container, "../../uvm/distrib/src/base/uvm_report_server.svh", 792)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
    if ((0U == __VlefCall_8__size)) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 793)->__VnoInFunc_get_message(vlSymsp, msg_body_str);
    } else {
        prefix = VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 795)
                               ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_report_server.svh", 795)
            ->__PVT__prefix;
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 796)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_report_server.svh", 796)->__PVT__prefix = " +"s;
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 797)->__VnoInFunc_get_message(vlSymsp, __VlefCall_9__get_message);
        VL_NULL_CHECK(el_container, "../../uvm/distrib/src/base/uvm_report_server.svh", 797)->__VnoInFunc_sprint(vlProcess, vlSymsp, VlNull{}, __VlefCall_10__sprint);
        msg_body_str = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_9__get_message, "\n"s), __VlefCall_10__sprint);
        VL_NULL_CHECK(VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer, "../../uvm/distrib/src/base/uvm_report_server.svh", 798)
                      ->__PVT__knobs, "../../uvm/distrib/src/base/uvm_report_server.svh", 798)->__PVT__prefix 
            = prefix;
    }
    if ((""s == report_object_name)) {
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 802)->__VnoInFunc_get_report_handler(vlSymsp, l_report_handler);
        VL_NULL_CHECK(l_report_handler, "../../uvm/distrib/src/base/uvm_report_server.svh", 803)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, report_object_name);
    }
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 808)->__VnoInFunc_get_id(vlSymsp, __VlefCall_11__get_id);
    compose_report_message__Vfuncrtn = VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(sev_string, verbosity_str), " "s), filename_line_string), "@ "s), time_str), ": "s), report_object_name), context_str), " ["s), __VlefCall_11__get_id), "] "s), msg_body_str), terminator_str);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__105__verbosity;
    __Vfunc_uvm_report_enabled__105__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__105__severity;
    __Vfunc_uvm_report_enabled__105__severity = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__110__verbosity;
    __Vtask_uvm_report_info__110__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__110__line;
    __Vtask_uvm_report_info__110__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__110__report_enabled_checked;
    __Vtask_uvm_report_info__110__report_enabled_checked = 0;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__m_uvm_string_queue_join;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    CData/*1:0*/ unnamedblk10__DOT__s;
    unnamedblk10__DOT__s = 0;
    CData/*1:0*/ unnamedblk10__DOT__s__Vnext;
    unnamedblk10__DOT__s__Vnext = 0;
    CData/*0:0*/ unnamedblk10__DOT__s__Vmore;
    unnamedblk10__DOT__s__Vmore = 0;
    std::string unnamedblk11__DOT__id;
    std::string unnamedblk11__DOT__id__Vnext;
    CData/*0:0*/ unnamedblk11__DOT__id__Vmore;
    unnamedblk11__DOT__id__Vmore = 0;
    VlQueue<std::string> q;
    q.clear();
    q.atDefault().clear();
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_summarize(vlProcess, vlSymsp);
    q.push_back("\n--- UVM Report Summary ---\n\n"s);
    if ((0U != this->__PVT__m_max_quit_count)) {
        if (VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count)) {
            q.push_back("Quit count reached!\n"s);
        }
        q.push_back(VL_SFORMATF_N_NX("Quit count : %5d of %5d\n",2
                                     , '~',32,this->__PVT__m_quit_count
                                     , '~',32,this->__PVT__m_max_quit_count) );
    }
    q.push_back("** Report counts by severity\n"s);
    unnamedblk10__DOT__s__Vmore = (0U != this->__PVT__m_severity_count.first(unnamedblk10__DOT__s__Vnext));
    while (unnamedblk10__DOT__s__Vmore) {
        unnamedblk10__DOT__s = unnamedblk10__DOT__s__Vnext;
        unnamedblk10__DOT__s__Vmore = (0U != this->__PVT__m_severity_count.next(unnamedblk10__DOT__s__Vnext));
        __Vtemp_1 = VUVM_regblock___024unit::__Venumtab_enum_name21
            [unnamedblk10__DOT__s];
        q.push_back(VL_SFORMATF_N_NX("%s :%5d\n",2, 'S',&(__Vtemp_1)
                                     , '~',32,this->__PVT__m_severity_count
                                     .at((IData)(unnamedblk10__DOT__s))) );
    }
    if (this->__PVT__enable_report_id_count_summary) {
        q.push_back("** Report counts by id\n"s);
        unnamedblk11__DOT__id__Vmore = (0U != this->__PVT__m_id_count.first(unnamedblk11__DOT__id__Vnext));
        while (unnamedblk11__DOT__id__Vmore) {
            unnamedblk11__DOT__id = unnamedblk11__DOT__id__Vnext;
            unnamedblk11__DOT__id__Vmore = (0U != this->__PVT__m_id_count.next(unnamedblk11__DOT__id__Vnext));
            q.push_back(VL_SFORMATF_N_NX("[%s] %5d\n",2
                                         , 'S',&(unnamedblk11__DOT__id)
                                         , '~',32,this->__PVT__m_id_count
                                         .at(unnamedblk11__DOT__id)) );
        }
    }
    this->__Vfunc_uvm_report_enabled__105__id = "UVM/REPORT/SERVER"s;
    __Vfunc_uvm_report_enabled__105__severity = 0U;
    __Vfunc_uvm_report_enabled__105__verbosity = 0x00000064U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__106__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__106__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__107__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__105__verbosity, (IData)(__Vfunc_uvm_report_enabled__105__severity), this->__Vfunc_uvm_report_enabled__105__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__Vfunc_m_uvm_string_queue_join__109__Vfuncout = ""s;
        this->__Vfunc_m_uvm_string_queue_join__109__Vfuncout 
            = VL_CVT_PACK_STR_ND(VL_STREAMR_NRI(0, q, 1U));
        __VlefCall_1__m_uvm_string_queue_join = this->__Vfunc_m_uvm_string_queue_join__109__Vfuncout;
        __Vtask_uvm_report_info__110__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__110__context_name = ""s;
        __Vtask_uvm_report_info__110__line = 0x0000034fU;
        this->__Vtask_uvm_report_info__110__filename = "../../uvm/distrib/src/base/uvm_report_server.svh"s;
        __Vtask_uvm_report_info__110__verbosity = 0x00000064U;
        this->__Vtask_uvm_report_info__110__message 
            = VL_CVT_PACK_STR_NN(__VlefCall_1__m_uvm_string_queue_join);
        this->__Vtask_uvm_report_info__110__id = "UVM/REPORT/SERVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__111__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__111__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__112__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__110__id, this->__Vtask_uvm_report_info__110__message, __Vtask_uvm_report_info__110__verbosity, this->__Vtask_uvm_report_info__110__filename, __Vtask_uvm_report_info__110__line, this->__Vtask_uvm_report_info__110__context_name, (IData)(__Vtask_uvm_report_info__110__report_enabled_checked));
    }
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ action, IData/*31:0*/ file, std::string filename, IData/*31:0*/ line, std::string composed_message, IData/*31:0*/ verbosity_level, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_handler> __VlefCall_0__get_report_handler;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> l_report_message;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 878)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity_level, filename, line, ""s);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 880)->__VnoInFunc_set_report_object(vlSymsp, client);
    VL_NULL_CHECK(client, "../../uvm/distrib/src/base/uvm_report_server.svh", 881)->__VnoInFunc_get_report_handler(vlSymsp, __VlefCall_0__get_report_handler);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 881)->__VnoInFunc_set_report_handler(vlSymsp, __VlefCall_0__get_report_handler);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 882)->__VnoInFunc_set_file(vlSymsp, file);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 883)->__VnoInFunc_set_action(vlSymsp, action);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 884)->__VnoInFunc_set_report_server(vlSymsp, 
                                                                                VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server>{this});
    this->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, l_report_message, composed_message);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_message(VUVM_regblock__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, std::string filename, IData/*31:0*/ line, std::string &compose_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_message\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_message> l_report_message;
    compose_message__Vfuncrtn = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
    VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/base/uvm_report_server.svh", 908)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, 0U, filename, line, ""s);
    this->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, l_report_message, name, compose_message__Vfuncrtn);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_regblock_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_quit_count = 0;
    __PVT__m_max_quit_count = 0;
    __PVT__m_severity_count.atDefault() = 0;
    __PVT__m_id_count.atDefault() = 0;
}

VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::~VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_regblock_uvm_pkg__03a__03auvm_default_report_server::~\n"); );
}
