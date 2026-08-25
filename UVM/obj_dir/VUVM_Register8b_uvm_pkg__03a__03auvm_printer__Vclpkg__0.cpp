// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_int(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_int\n"); );
    // Body
    this->__VnoInFunc_print_field(vlSymsp, name, value, size, radix, (IData)(scope_separator), type_name);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &format_header__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_header\n"); );
    // Body
    format_header__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &format_footer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_footer\n"); );
    // Body
    format_footer__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::init(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__knobs = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_printer_knobs, vlSymsp);
    this->__PVT__m_scope = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    emit__Vfuncrtn = ""s;
    this->__Vfunc_uvm_report_enabled__3__id = "NO_OVERRIDE"s;
    __Vfunc_uvm_report_enabled__3__severity = 2U;
    __Vfunc_uvm_report_enabled__3__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__7__context_name = ""s;
        __Vtask_uvm_report_error__7__line = 0x00000283U;
        this->__Vtask_uvm_report_error__7__filename = "../../uvm/distrib/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__7__verbosity = 0U;
        this->__Vtask_uvm_report_error__7__message = "emit() method not overridden in printer subtype"s;
        this->__Vtask_uvm_report_error__7__id = "NO_OVERRIDE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
    }
    emit__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row(VUVM_Register8b__Syms* __restrict vlSymsp, VUVM_Register8b_uvm_printer_row_info__struct__0 row, std::string &format_row__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_format_row\n"); );
    // Body
    format_row__Vfuncrtn = ""s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_header\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 666)->__VnoInFunc_set_arg(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 668)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 669)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = arraytype;
    row_info.__PVT__size = VL_SFORMATF_N_NX("%0d",1
                                            , '~',32,size) ;
    row_info.__PVT__val = "-"s;
    this->__PVT__m_rows.push_back(row_info);
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 676)->__VnoInFunc_down(vlSymsp, name);
    this->__PVT__m_array_stack.push_back(1U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_footer\n"); );
    // Body
    if ((0U != this->__PVT__m_array_stack.size())) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 686)->__VnoInFunc_up(vlSymsp, 0x2eU);
        std::ignore = this->__PVT__m_array_stack.pop_front();
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_array_range\n"); );
    // Body
    {
        if (((0xffffffffU == min) & (0xffffffffU == max))) {
            goto __Vlabel0;
        }
        if ((0xffffffffU == min)) {
            min = max;
        }
        if ((0xffffffffU == max)) {
            max = min;
        }
        if (VL_LTS_III(32, max, min)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_print_generic(vlSymsp, "..."s, "..."s, 0xfffffffeU, "..."s, 0x2eU);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object_header\n"); );
    // Locals
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> __Vfunc_uvm_object_value_str__27__v;
    IData/*31:0*/ __Vfunc_uvm_object_value_str__27____VlefCall_0__get_inst_id;
    __Vfunc_uvm_object_value_str__27____VlefCall_0__get_inst_id = 0;
    IData/*31:0*/ __Vtask_get_inst_id__28__Vfuncout;
    __Vtask_get_inst_id__28__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__uvm_object_value_str;
    std::string __VlefCall_6__get_type_name;
    std::string __VlefCall_5__adjust_name;
    std::string __VlefCall_4__get;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__depth;
    IData/*31:0*/ __VlefExpr_1;
    IData/*31:0*/ __VlefCall_0__depth;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s == name)) {
        if ((VlNull{} != value)) {
            VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 720)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefExpr_1 = (0U == __VlefCall_0__depth);
            if (__VlefExpr_1) {
                __VlefExpr_1 = VL_CAST_DYNAMIC(value, comp);
            }
            if (__VlefExpr_1) {
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_printer.svh", 721)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
            } else {
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_printer.svh", 724)->__VnoInFunc_get_name(vlSymsp, name);
            }
        }
    }
    if ((""s == name)) {
        name = "<unnamed>"s;
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 732)->__VnoInFunc_set_arg(vlSymsp, name);
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 734)->__VnoInFunc_depth(vlSymsp, __VlefCall_2__depth);
    row_info.__PVT__level = __VlefCall_2__depth;
    if (((0U == row_info.__PVT__level) && VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 736)
         ->__PVT__show_root)) {
        VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_printer.svh", 737)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
        row_info.__PVT__name = __VlefCall_3__get_full_name;
    } else {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 739)->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
        this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_4__get), (IData)(scope_separator), __VlefCall_5__adjust_name);
        row_info.__PVT__name = __VlefCall_5__adjust_name;
    }
    if ((VlNull{} != value)) {
        VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_printer.svh", 741)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_6__get_type_name);
    } else {
        __VlefCall_6__get_type_name = "object"s;
    }
    row_info.__PVT__type_name = __VlefCall_6__get_type_name;
    row_info.__PVT__size = "-"s;
    if (VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 743)
        ->__PVT__reference) {
        __Vfunc_uvm_object_value_str__27__v = value;
        {
            if ((VlNull{} == __Vfunc_uvm_object_value_str__27__v)) {
                __VlefCall_7__uvm_object_value_str = "<null>"s;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(__Vfunc_uvm_object_value_str__27__v, "../../uvm/distrib/src/base/uvm_misc.svh", 437)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__28__Vfuncout);
            __Vfunc_uvm_object_value_str__27____VlefCall_0__get_inst_id 
                = __Vtask_get_inst_id__28__Vfuncout;
            VL_SFORMAT_NX(__VlefCall_7__uvm_object_value_str
                          ,"%0d",1, '~',32,__Vfunc_uvm_object_value_str__27____VlefCall_0__get_inst_id);
            __VlefCall_7__uvm_object_value_str = VL_CONCATN_NNN("@"s, __VlefCall_7__uvm_object_value_str);
            __Vlabel0: ;
        }
    } else {
        __VlefCall_7__uvm_object_value_str = "-"s;
    }
    row_info.__PVT__val = __VlefCall_7__uvm_object_value_str;
    this->__PVT__m_rows.push_back(row_info);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__34__Vfuncout;
    __Vtask_get_first_child__34__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__37__Vfuncout;
    __Vtask_get_next_child__37__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__get_next_child;
    IData/*31:0*/ __VlefCall_4__get_first_child;
    IData/*31:0*/ __VlefExpr_3;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__depth;
    std::string unnamedblk38__DOT__name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> child_comp;
    this->__VnoInFunc_print_object_header(vlProcess, vlSymsp, name, value, scope_separator);
    if ((VlNull{} != value)) {
        __VlefLogOr_1 = (0xffffffffU == VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 760)
                         ->__PVT__depth);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 760)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefLogOr_1 = VL_GTS_III(32, VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 760)
                                       ->__PVT__depth, __VlefCall_0__depth);
        }
        if (((IData)(__VlefLogOr_1) && (! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_printer.svh", 761)
                                        ->__PVT__cycle_check.exists(value)))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_printer.svh", 763)->__PVT__cycle_check.at(value) = 1U;
            if (((""s == name) & (VlNull{} != value))) {
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_printer.svh", 765)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 765)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__get_name));
            } else {
                VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 767)->__VnoInFunc_down(vlSymsp, name);
            }
            __VlefExpr_3 = VL_CAST_DYNAMIC(value, comp);
            if (__VlefExpr_3) {
                unnamedblk38__DOT__name = ""s;
                VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_printer.svh", 772)->__VnoInFunc_get_first_child(vlSymsp, unnamedblk38__DOT__name, __Vtask_get_first_child__34__Vfuncout);
                __VlefCall_4__get_first_child = __Vtask_get_first_child__34__Vfuncout;
                if ((0U != __VlefCall_4__get_first_child)) {
                    do {
                        VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_printer.svh", 774)->__VnoInFunc_get_child(vlProcess, vlSymsp, unnamedblk38__DOT__name, child_comp);
                        if (VL_NULL_CHECK(child_comp, "../../uvm/distrib/src/base/uvm_printer.svh", 775)
                            ->__PVT__print_enabled) {
                            this->__VnoInFunc_print_object(vlProcess, vlSymsp, ""s, child_comp, 0x2eU);
                        }
                        VL_NULL_CHECK(comp, "../../uvm/distrib/src/base/uvm_printer.svh", 777)->__VnoInFunc_get_next_child(vlSymsp, unnamedblk38__DOT__name, __Vtask_get_next_child__37__Vfuncout);
                        __VlefCall_5__get_next_child 
                            = __Vtask_get_next_child__37__Vfuncout;
                    } while ((0U != __VlefCall_5__get_next_child));
                }
            }
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_printer.svh", 781)->__VnoInFunc_sprint(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer>{this}, this->__Vtask_sprint__38__Vfuncout);
            if (((""s != name) & (0x5bU == VL_GETC_N(name,0U)))) {
                VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 784)->__VnoInFunc_up(vlSymsp, 0x5bU);
            } else {
                VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 786)->__VnoInFunc_up(vlSymsp, 0x2eU);
            }
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_printer.svh", 787)->__PVT__cycle_check.erase(value);
        }
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_istop\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__depth;
    istop__Vfuncrtn = 0U;
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 798)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    istop__Vfuncrtn = (0U == __VlefCall_0__depth);
}

extern const VlWide<256>/*8191:0*/ VUVM_Register8b__ConstPool__CONST_hbc4523fd_0;

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string id, CData/*7:0*/ scope_separator, std::string &adjust_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_adjust_name\n"); );
    // Locals
    CData/*7:0*/ __Vfunc_uvm_leaf_scope__43__scope_separator;
    __Vfunc_uvm_leaf_scope__43__scope_separator = 0;
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__depth;
    {
        adjust_name__Vfuncrtn = ""s;
        __VlefLogAnd_1 = VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 806)
            ->__PVT__show_root;
        if (__VlefLogAnd_1) {
            VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 806)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
            __VlefLogAnd_1 = (0U == __VlefCall_0__depth);
        }
        if ((((IData)(__VlefLogAnd_1) || VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 806)
              ->__PVT__full_name) || ("..."s == id))) {
            adjust_name__Vfuncrtn = id;
            goto __Vlabel0;
        }
        __Vfunc_uvm_leaf_scope__43__scope_separator 
            = scope_separator;
        this->__Vfunc_uvm_leaf_scope__43__full_name 
            = id;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match 
            = (0x000000ffU & VUVM_Register8b__ConstPool__CONST_hbc4523fd_0
               [(0x07ffffffU & (IData)(__Vfunc_uvm_leaf_scope__43__scope_separator))]);
        if (((0U != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match)) 
             & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match) 
                != VL_GETC_N(this->__Vfunc_uvm_leaf_scope__43__full_name,
                             (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__43__full_name) 
                              - (IData)(1U)))))) {
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
        }
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__43__full_name) 
               - (IData)(1U));
        {
            while (VL_LTS_III(32, 0U, vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
                if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__43__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                     == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches);
                } else if ((VL_GETC_N(this->__Vfunc_uvm_leaf_scope__43__full_name,vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos) 
                            == (IData)(__Vfunc_uvm_leaf_scope__43__scope_separator))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches 
                           - (IData)(1U));
                    if ((1U & ((~ (0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches)) 
                               | (0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match))))) {
                        goto __Vlabel1;
                    }
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        if ((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos)) {
            if ((0x2eU != (IData)(__Vfunc_uvm_leaf_scope__43__scope_separator))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos 
                       - (IData)(1U));
            }
            adjust_name__Vfuncrtn = VL_SUBSTR_N(this->__Vfunc_uvm_leaf_scope__43__full_name,
                                                ((IData)(1U) 
                                                 + vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),
                                                (VL_LEN_IN(this->__Vfunc_uvm_leaf_scope__43__full_name) 
                                                 - (IData)(1U)));
        } else {
            adjust_name__Vfuncrtn = this->__Vfunc_uvm_leaf_scope__43__full_name;
        }
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_generic\n"); );
    // Body
    std::string __VlefCall_1__adjust_name;
    IData/*31:0*/ __VlefCall_0__depth;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if (((""s != name) & ("..."s != name))) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 824)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 825)->__VnoInFunc_get(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 828)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    this->__VnoInFunc_adjust_name(vlSymsp, name, (IData)(scope_separator), __VlefCall_1__adjust_name);
    row_info.__PVT__name = __VlefCall_1__adjust_name;
    row_info.__PVT__type_name = type_name;
    row_info.__PVT__size = ((0xfffffffeU == size) ? "..."s
                             : VL_SFORMATF_N_NX("%0d",1
                                                , '~',32,size) );
    row_info.__PVT__val = ((""s == value) ? "\"\""s
                            : value);
    this->__PVT__m_rows.push_back(row_info);
}

extern const VlWide<128>/*4095:0*/ VUVM_Register8b__ConstPool__CONST_h1958c06c_0;

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__51__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__51__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__51__size;
    __Vfunc_uvm_bitstream_to_string__51__size = 0;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__51__radix;
    __Vfunc_uvm_bitstream_to_string__51__radix = 0;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    IData/*31:0*/ __Vilp1;
    // Body
    std::string __VlefCall_2__adjust_name;
    IData/*31:0*/ __VlefCall_1__depth;
    std::string __VlefCall_0__get_radix_str;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    std::string sz_str;
    std::string val_str;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    sz_str = ""s;
    val_str = ""s;
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 853)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 854)->__VnoInFunc_get(vlSymsp, name);
    }
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    VL_SFORMAT_NX(sz_str,"%0d",1, '~',32,size);
    if ((0U == radix)) {
        radix = VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 869)
            ->__PVT__default_radix;
    }
    VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 872)->__VnoInFunc_get_radix_str(vlSymsp, radix, __VlefCall_0__get_radix_str);
    this->__Vfunc_uvm_bitstream_to_string__51__radix_str 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_str);
    __Vfunc_uvm_bitstream_to_string__51__radix = radix;
    __Vfunc_uvm_bitstream_to_string__51__size = size;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_uvm_bitstream_to_string__51__value[__Vilp1] 
            = value[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    {
        if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__51__radix) 
             & (__Vfunc_uvm_bitstream_to_string__51__value
                [(0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__51__size 
                                  - (IData)(1U)) >> 5U))] 
                >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__51__size 
                                   - (IData)(1U)))))) {
            VL_SFORMAT_NX(val_str,"%0d",1, '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
            goto __Vlabel0;
        }
        VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, VUVM_Register8b__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__51__size);
        VL_SUB_W(128, __Vtemp_3, __Vtemp_2, VUVM_Register8b__ConstPool__CONST_h1958c06c_0);
        __Vfunc_uvm_bitstream_to_string__51__value[0U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[0U] 
               & __Vtemp_3[0U]);
        __Vfunc_uvm_bitstream_to_string__51__value[1U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[1U] 
               & __Vtemp_3[1U]);
        __Vfunc_uvm_bitstream_to_string__51__value[2U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[2U] 
               & __Vtemp_3[2U]);
        __Vfunc_uvm_bitstream_to_string__51__value[3U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[3U] 
               & __Vtemp_3[3U]);
        __Vfunc_uvm_bitstream_to_string__51__value[4U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[4U] 
               & __Vtemp_3[4U]);
        __Vfunc_uvm_bitstream_to_string__51__value[5U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[5U] 
               & __Vtemp_3[5U]);
        __Vfunc_uvm_bitstream_to_string__51__value[6U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[6U] 
               & __Vtemp_3[6U]);
        __Vfunc_uvm_bitstream_to_string__51__value[7U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[7U] 
               & __Vtemp_3[7U]);
        __Vfunc_uvm_bitstream_to_string__51__value[8U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[8U] 
               & __Vtemp_3[8U]);
        __Vfunc_uvm_bitstream_to_string__51__value[9U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[9U] 
               & __Vtemp_3[9U]);
        __Vfunc_uvm_bitstream_to_string__51__value[10U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[10U] 
               & __Vtemp_3[10U]);
        __Vfunc_uvm_bitstream_to_string__51__value[11U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[11U] 
               & __Vtemp_3[11U]);
        __Vfunc_uvm_bitstream_to_string__51__value[12U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[12U] 
               & __Vtemp_3[12U]);
        __Vfunc_uvm_bitstream_to_string__51__value[13U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[13U] 
               & __Vtemp_3[13U]);
        __Vfunc_uvm_bitstream_to_string__51__value[14U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[14U] 
               & __Vtemp_3[14U]);
        __Vfunc_uvm_bitstream_to_string__51__value[15U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[15U] 
               & __Vtemp_3[15U]);
        __Vfunc_uvm_bitstream_to_string__51__value[16U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[16U] 
               & __Vtemp_3[16U]);
        __Vfunc_uvm_bitstream_to_string__51__value[17U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[17U] 
               & __Vtemp_3[17U]);
        __Vfunc_uvm_bitstream_to_string__51__value[18U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[18U] 
               & __Vtemp_3[18U]);
        __Vfunc_uvm_bitstream_to_string__51__value[19U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[19U] 
               & __Vtemp_3[19U]);
        __Vfunc_uvm_bitstream_to_string__51__value[20U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[20U] 
               & __Vtemp_3[20U]);
        __Vfunc_uvm_bitstream_to_string__51__value[21U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[21U] 
               & __Vtemp_3[21U]);
        __Vfunc_uvm_bitstream_to_string__51__value[22U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[22U] 
               & __Vtemp_3[22U]);
        __Vfunc_uvm_bitstream_to_string__51__value[23U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[23U] 
               & __Vtemp_3[23U]);
        __Vfunc_uvm_bitstream_to_string__51__value[24U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[24U] 
               & __Vtemp_3[24U]);
        __Vfunc_uvm_bitstream_to_string__51__value[25U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[25U] 
               & __Vtemp_3[25U]);
        __Vfunc_uvm_bitstream_to_string__51__value[26U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[26U] 
               & __Vtemp_3[26U]);
        __Vfunc_uvm_bitstream_to_string__51__value[27U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[27U] 
               & __Vtemp_3[27U]);
        __Vfunc_uvm_bitstream_to_string__51__value[28U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[28U] 
               & __Vtemp_3[28U]);
        __Vfunc_uvm_bitstream_to_string__51__value[29U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[29U] 
               & __Vtemp_3[29U]);
        __Vfunc_uvm_bitstream_to_string__51__value[30U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[30U] 
               & __Vtemp_3[30U]);
        __Vfunc_uvm_bitstream_to_string__51__value[31U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[31U] 
               & __Vtemp_3[31U]);
        __Vfunc_uvm_bitstream_to_string__51__value[32U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[32U] 
               & __Vtemp_3[32U]);
        __Vfunc_uvm_bitstream_to_string__51__value[33U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[33U] 
               & __Vtemp_3[33U]);
        __Vfunc_uvm_bitstream_to_string__51__value[34U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[34U] 
               & __Vtemp_3[34U]);
        __Vfunc_uvm_bitstream_to_string__51__value[35U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[35U] 
               & __Vtemp_3[35U]);
        __Vfunc_uvm_bitstream_to_string__51__value[36U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[36U] 
               & __Vtemp_3[36U]);
        __Vfunc_uvm_bitstream_to_string__51__value[37U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[37U] 
               & __Vtemp_3[37U]);
        __Vfunc_uvm_bitstream_to_string__51__value[38U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[38U] 
               & __Vtemp_3[38U]);
        __Vfunc_uvm_bitstream_to_string__51__value[39U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[39U] 
               & __Vtemp_3[39U]);
        __Vfunc_uvm_bitstream_to_string__51__value[40U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[40U] 
               & __Vtemp_3[40U]);
        __Vfunc_uvm_bitstream_to_string__51__value[41U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[41U] 
               & __Vtemp_3[41U]);
        __Vfunc_uvm_bitstream_to_string__51__value[42U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[42U] 
               & __Vtemp_3[42U]);
        __Vfunc_uvm_bitstream_to_string__51__value[43U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[43U] 
               & __Vtemp_3[43U]);
        __Vfunc_uvm_bitstream_to_string__51__value[44U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[44U] 
               & __Vtemp_3[44U]);
        __Vfunc_uvm_bitstream_to_string__51__value[45U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[45U] 
               & __Vtemp_3[45U]);
        __Vfunc_uvm_bitstream_to_string__51__value[46U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[46U] 
               & __Vtemp_3[46U]);
        __Vfunc_uvm_bitstream_to_string__51__value[47U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[47U] 
               & __Vtemp_3[47U]);
        __Vfunc_uvm_bitstream_to_string__51__value[48U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[48U] 
               & __Vtemp_3[48U]);
        __Vfunc_uvm_bitstream_to_string__51__value[49U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[49U] 
               & __Vtemp_3[49U]);
        __Vfunc_uvm_bitstream_to_string__51__value[50U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[50U] 
               & __Vtemp_3[50U]);
        __Vfunc_uvm_bitstream_to_string__51__value[51U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[51U] 
               & __Vtemp_3[51U]);
        __Vfunc_uvm_bitstream_to_string__51__value[52U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[52U] 
               & __Vtemp_3[52U]);
        __Vfunc_uvm_bitstream_to_string__51__value[53U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[53U] 
               & __Vtemp_3[53U]);
        __Vfunc_uvm_bitstream_to_string__51__value[54U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[54U] 
               & __Vtemp_3[54U]);
        __Vfunc_uvm_bitstream_to_string__51__value[55U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[55U] 
               & __Vtemp_3[55U]);
        __Vfunc_uvm_bitstream_to_string__51__value[56U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[56U] 
               & __Vtemp_3[56U]);
        __Vfunc_uvm_bitstream_to_string__51__value[57U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[57U] 
               & __Vtemp_3[57U]);
        __Vfunc_uvm_bitstream_to_string__51__value[58U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[58U] 
               & __Vtemp_3[58U]);
        __Vfunc_uvm_bitstream_to_string__51__value[59U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[59U] 
               & __Vtemp_3[59U]);
        __Vfunc_uvm_bitstream_to_string__51__value[60U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[60U] 
               & __Vtemp_3[60U]);
        __Vfunc_uvm_bitstream_to_string__51__value[61U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[61U] 
               & __Vtemp_3[61U]);
        __Vfunc_uvm_bitstream_to_string__51__value[62U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[62U] 
               & __Vtemp_3[62U]);
        __Vfunc_uvm_bitstream_to_string__51__value[63U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[63U] 
               & __Vtemp_3[63U]);
        __Vfunc_uvm_bitstream_to_string__51__value[64U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[64U] 
               & __Vtemp_3[64U]);
        __Vfunc_uvm_bitstream_to_string__51__value[65U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[65U] 
               & __Vtemp_3[65U]);
        __Vfunc_uvm_bitstream_to_string__51__value[66U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[66U] 
               & __Vtemp_3[66U]);
        __Vfunc_uvm_bitstream_to_string__51__value[67U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[67U] 
               & __Vtemp_3[67U]);
        __Vfunc_uvm_bitstream_to_string__51__value[68U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[68U] 
               & __Vtemp_3[68U]);
        __Vfunc_uvm_bitstream_to_string__51__value[69U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[69U] 
               & __Vtemp_3[69U]);
        __Vfunc_uvm_bitstream_to_string__51__value[70U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[70U] 
               & __Vtemp_3[70U]);
        __Vfunc_uvm_bitstream_to_string__51__value[71U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[71U] 
               & __Vtemp_3[71U]);
        __Vfunc_uvm_bitstream_to_string__51__value[72U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[72U] 
               & __Vtemp_3[72U]);
        __Vfunc_uvm_bitstream_to_string__51__value[73U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[73U] 
               & __Vtemp_3[73U]);
        __Vfunc_uvm_bitstream_to_string__51__value[74U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[74U] 
               & __Vtemp_3[74U]);
        __Vfunc_uvm_bitstream_to_string__51__value[75U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[75U] 
               & __Vtemp_3[75U]);
        __Vfunc_uvm_bitstream_to_string__51__value[76U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[76U] 
               & __Vtemp_3[76U]);
        __Vfunc_uvm_bitstream_to_string__51__value[77U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[77U] 
               & __Vtemp_3[77U]);
        __Vfunc_uvm_bitstream_to_string__51__value[78U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[78U] 
               & __Vtemp_3[78U]);
        __Vfunc_uvm_bitstream_to_string__51__value[79U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[79U] 
               & __Vtemp_3[79U]);
        __Vfunc_uvm_bitstream_to_string__51__value[80U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[80U] 
               & __Vtemp_3[80U]);
        __Vfunc_uvm_bitstream_to_string__51__value[81U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[81U] 
               & __Vtemp_3[81U]);
        __Vfunc_uvm_bitstream_to_string__51__value[82U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[82U] 
               & __Vtemp_3[82U]);
        __Vfunc_uvm_bitstream_to_string__51__value[83U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[83U] 
               & __Vtemp_3[83U]);
        __Vfunc_uvm_bitstream_to_string__51__value[84U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[84U] 
               & __Vtemp_3[84U]);
        __Vfunc_uvm_bitstream_to_string__51__value[85U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[85U] 
               & __Vtemp_3[85U]);
        __Vfunc_uvm_bitstream_to_string__51__value[86U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[86U] 
               & __Vtemp_3[86U]);
        __Vfunc_uvm_bitstream_to_string__51__value[87U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[87U] 
               & __Vtemp_3[87U]);
        __Vfunc_uvm_bitstream_to_string__51__value[88U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[88U] 
               & __Vtemp_3[88U]);
        __Vfunc_uvm_bitstream_to_string__51__value[89U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[89U] 
               & __Vtemp_3[89U]);
        __Vfunc_uvm_bitstream_to_string__51__value[90U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[90U] 
               & __Vtemp_3[90U]);
        __Vfunc_uvm_bitstream_to_string__51__value[91U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[91U] 
               & __Vtemp_3[91U]);
        __Vfunc_uvm_bitstream_to_string__51__value[92U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[92U] 
               & __Vtemp_3[92U]);
        __Vfunc_uvm_bitstream_to_string__51__value[93U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[93U] 
               & __Vtemp_3[93U]);
        __Vfunc_uvm_bitstream_to_string__51__value[94U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[94U] 
               & __Vtemp_3[94U]);
        __Vfunc_uvm_bitstream_to_string__51__value[95U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[95U] 
               & __Vtemp_3[95U]);
        __Vfunc_uvm_bitstream_to_string__51__value[96U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[96U] 
               & __Vtemp_3[96U]);
        __Vfunc_uvm_bitstream_to_string__51__value[97U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[97U] 
               & __Vtemp_3[97U]);
        __Vfunc_uvm_bitstream_to_string__51__value[98U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[98U] 
               & __Vtemp_3[98U]);
        __Vfunc_uvm_bitstream_to_string__51__value[99U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[99U] 
               & __Vtemp_3[99U]);
        __Vfunc_uvm_bitstream_to_string__51__value[100U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[100U] 
               & __Vtemp_3[100U]);
        __Vfunc_uvm_bitstream_to_string__51__value[101U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[101U] 
               & __Vtemp_3[101U]);
        __Vfunc_uvm_bitstream_to_string__51__value[102U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[102U] 
               & __Vtemp_3[102U]);
        __Vfunc_uvm_bitstream_to_string__51__value[103U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[103U] 
               & __Vtemp_3[103U]);
        __Vfunc_uvm_bitstream_to_string__51__value[104U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[104U] 
               & __Vtemp_3[104U]);
        __Vfunc_uvm_bitstream_to_string__51__value[105U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[105U] 
               & __Vtemp_3[105U]);
        __Vfunc_uvm_bitstream_to_string__51__value[106U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[106U] 
               & __Vtemp_3[106U]);
        __Vfunc_uvm_bitstream_to_string__51__value[107U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[107U] 
               & __Vtemp_3[107U]);
        __Vfunc_uvm_bitstream_to_string__51__value[108U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[108U] 
               & __Vtemp_3[108U]);
        __Vfunc_uvm_bitstream_to_string__51__value[109U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[109U] 
               & __Vtemp_3[109U]);
        __Vfunc_uvm_bitstream_to_string__51__value[110U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[110U] 
               & __Vtemp_3[110U]);
        __Vfunc_uvm_bitstream_to_string__51__value[111U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[111U] 
               & __Vtemp_3[111U]);
        __Vfunc_uvm_bitstream_to_string__51__value[112U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[112U] 
               & __Vtemp_3[112U]);
        __Vfunc_uvm_bitstream_to_string__51__value[113U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[113U] 
               & __Vtemp_3[113U]);
        __Vfunc_uvm_bitstream_to_string__51__value[114U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[114U] 
               & __Vtemp_3[114U]);
        __Vfunc_uvm_bitstream_to_string__51__value[115U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[115U] 
               & __Vtemp_3[115U]);
        __Vfunc_uvm_bitstream_to_string__51__value[116U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[116U] 
               & __Vtemp_3[116U]);
        __Vfunc_uvm_bitstream_to_string__51__value[117U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[117U] 
               & __Vtemp_3[117U]);
        __Vfunc_uvm_bitstream_to_string__51__value[118U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[118U] 
               & __Vtemp_3[118U]);
        __Vfunc_uvm_bitstream_to_string__51__value[119U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[119U] 
               & __Vtemp_3[119U]);
        __Vfunc_uvm_bitstream_to_string__51__value[120U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[120U] 
               & __Vtemp_3[120U]);
        __Vfunc_uvm_bitstream_to_string__51__value[121U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[121U] 
               & __Vtemp_3[121U]);
        __Vfunc_uvm_bitstream_to_string__51__value[122U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[122U] 
               & __Vtemp_3[122U]);
        __Vfunc_uvm_bitstream_to_string__51__value[123U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[123U] 
               & __Vtemp_3[123U]);
        __Vfunc_uvm_bitstream_to_string__51__value[124U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[124U] 
               & __Vtemp_3[124U]);
        __Vfunc_uvm_bitstream_to_string__51__value[125U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[125U] 
               & __Vtemp_3[125U]);
        __Vfunc_uvm_bitstream_to_string__51__value[126U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[126U] 
               & __Vtemp_3[126U]);
        __Vfunc_uvm_bitstream_to_string__51__value[127U] 
            = (__Vfunc_uvm_bitstream_to_string__51__value[127U] 
               & __Vtemp_3[127U]);
        if ((0x01000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else if ((0x06000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else if ((0x03000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else if ((0x08000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else if ((0x09000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0t",3, 'T',-12
                          , 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else if ((0x02000000U == __Vfunc_uvm_bitstream_to_string__51__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        } else {
            VL_SFORMAT_NX(val_str,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_bitstream_to_string__51__radix_str)
                          , '~',4096,__Vfunc_uvm_bitstream_to_string__51__value.data());
        }
        __Vlabel0: ;
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 874)->__VnoInFunc_depth(vlSymsp, __VlefCall_1__depth);
    row_info.__PVT__level = __VlefCall_1__depth;
    this->__VnoInFunc_adjust_name(vlSymsp, name, (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = type_name;
    row_info.__PVT__size = sz_str;
    row_info.__PVT__val = val_str;
    this->__PVT__m_rows.push_back(row_info);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_field_int\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__57__value;
    __Vfunc_uvm_integral_to_string__57__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__57__size;
    __Vfunc_uvm_integral_to_string__57__size = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__57__radix;
    __Vfunc_uvm_integral_to_string__57__radix = 0;
    // Body
    std::string __VlefCall_2__adjust_name;
    IData/*31:0*/ __VlefCall_1__depth;
    std::string __VlefCall_0__get_radix_str;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    std::string sz_str;
    std::string val_str;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    sz_str = ""s;
    val_str = ""s;
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 898)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 899)->__VnoInFunc_get(vlSymsp, name);
    }
    if ((""s == type_name)) {
        type_name = ((0x09000000U == radix) ? "time"s
                      : ((0x08000000U == radix) ? "string"s
                          : "integral"s));
    }
    VL_SFORMAT_NX(sz_str,"%0d",1, '~',32,size);
    if ((0U == radix)) {
        radix = VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 914)
            ->__PVT__default_radix;
    }
    VL_NULL_CHECK(this->__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 917)->__VnoInFunc_get_radix_str(vlSymsp, radix, __VlefCall_0__get_radix_str);
    this->__Vfunc_uvm_integral_to_string__57__radix_str 
        = VL_CVT_PACK_STR_NN(__VlefCall_0__get_radix_str);
    __Vfunc_uvm_integral_to_string__57__radix = radix;
    __Vfunc_uvm_integral_to_string__57__size = size;
    __Vfunc_uvm_integral_to_string__57__value = value;
    {
        if (((0x02000000U == __Vfunc_uvm_integral_to_string__57__radix) 
             & (IData)((__Vfunc_uvm_integral_to_string__57__value 
                        >> (0x0000003fU & (__Vfunc_uvm_integral_to_string__57__size 
                                           - (IData)(1U))))))) {
            VL_SFORMAT_NX(val_str,"%0d",1, '~',64,__Vfunc_uvm_integral_to_string__57__value);
            goto __Vlabel0;
        }
        __Vfunc_uvm_integral_to_string__57__value = 
            (__Vfunc_uvm_integral_to_string__57__value 
             & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__57__size) 
                - 1ULL));
        if ((0x01000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0b",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else if ((0x06000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0o",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else if ((0x03000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else if ((0x08000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0s",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else if ((0x09000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0t",3, 'T',-12
                          , 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else if ((0x02000000U == __Vfunc_uvm_integral_to_string__57__radix)) {
            VL_SFORMAT_NX(val_str,"%0s%0d",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        } else {
            VL_SFORMAT_NX(val_str,"%0s%0x",2, 'S',&(this->__Vfunc_uvm_integral_to_string__57__radix_str)
                          , '~',64,__Vfunc_uvm_integral_to_string__57__value);
        }
        __Vlabel0: ;
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 919)->__VnoInFunc_depth(vlSymsp, __VlefCall_1__depth);
    row_info.__PVT__level = __VlefCall_1__depth;
    this->__VnoInFunc_adjust_name(vlSymsp, name, (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = type_name;
    row_info.__PVT__size = sz_str;
    row_info.__PVT__val = val_str;
    this->__PVT__m_rows.push_back(row_info);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_time\n"); );
    // Body
    this->__VnoInFunc_print_field_int(vlSymsp, name, value, 0x00000040U, 0x09000000U, (IData)(scope_separator), ""s);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_string\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if ((""s != name)) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 950)->__VnoInFunc_set_arg(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 952)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 953)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = "string"s;
    row_info.__PVT__size = VL_SFORMATF_N_NX("%0d",1
                                            , '~',32,
                                            VL_LEN_IN(value)) ;
    row_info.__PVT__val = ((""s == value) ? "\"\""s
                            : value);
    this->__PVT__m_rows.push_back(row_info);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_print_real\n"); );
    // Body
    std::string __VlefCall_2__adjust_name;
    std::string __VlefCall_1__get;
    IData/*31:0*/ __VlefCall_0__depth;
    VUVM_Register8b_uvm_printer_row_info__struct__0 row_info;
    row_info.__PVT__level = 0;
    row_info.__PVT__name.clear();
    row_info.__PVT__type_name.clear();
    row_info.__PVT__size.clear();
    row_info.__PVT__val.clear();
    if (((""s != name) & ("..."s != name))) {
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 973)->__VnoInFunc_set_arg(vlSymsp, name);
        VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 974)->__VnoInFunc_get(vlSymsp, name);
    }
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 977)->__VnoInFunc_depth(vlSymsp, __VlefCall_0__depth);
    row_info.__PVT__level = __VlefCall_0__depth;
    VL_NULL_CHECK(this->__PVT__m_scope, "../../uvm/distrib/src/base/uvm_printer.svh", 978)->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
    this->__VnoInFunc_adjust_name(vlSymsp, VL_CVT_PACK_STR_NN(__VlefCall_1__get), (IData)(scope_separator), __VlefCall_2__adjust_name);
    row_info.__PVT__name = __VlefCall_2__adjust_name;
    row_info.__PVT__type_name = "real"s;
    row_info.__PVT__size = "64"s;
    row_info.__PVT__val = VL_SFORMATF_N_NX("%f",1, 'D',value) ;
    this->__PVT__m_rows.push_back(row_info);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::__VnoInFunc_index_string\n"); );
    // Body
    VL_SFORMAT_NX(index_string__Vfuncrtn,"%0d",1, '~',32,index);
    index_string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(name, "["s), index_string__Vfuncrtn), "]"s);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_printer::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_array_stack.atDefault() = 0;
    __PVT__m_rows.atDefault().__PVT__level = 0;
}

VUVM_Register8b_uvm_pkg__03a__03auvm_printer::~VUVM_Register8b_uvm_pkg__03a__03auvm_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_printer::~\n"); );
}
