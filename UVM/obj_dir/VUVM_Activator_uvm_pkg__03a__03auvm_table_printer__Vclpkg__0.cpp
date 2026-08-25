// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::init(VUVM_Activator__Syms* __restrict vlSymsp) {
    VUVM_Activator_uvm_pkg__03a__03auvm_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_calculate_max_widths(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_calculate_max_widths\n"); );
    // Body
    IData/*31:0*/ unnamedblk39__DOT__j;
    unnamedblk39__DOT__j = 0;
    IData/*31:0*/ unnamedblk39__DOT__unnamedblk40__DOT__name_len;
    VUVM_Activator_uvm_printer_row_info__struct__0 unnamedblk39__DOT__unnamedblk40__DOT__row;
    this->__PVT__m_max_name = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_value = 5U;
    unnamedblk39__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk39__DOT__j, VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
        unnamedblk39__DOT__unnamedblk40__DOT__name_len = 0U;
        unnamedblk39__DOT__unnamedblk40__DOT__row = VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(unnamedblk39__DOT__j);
        unnamedblk39__DOT__unnamedblk40__DOT__name_len 
            = (VL_MULS_III(32, VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1021)
                           ->__PVT__indent, unnamedblk39__DOT__unnamedblk40__DOT__row
                           .__PVT__level) + VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                                      .__PVT__name));
        if (VL_GTS_III(32, unnamedblk39__DOT__unnamedblk40__DOT__name_len, this->__PVT__m_max_name)) {
            this->__PVT__m_max_name = unnamedblk39__DOT__unnamedblk40__DOT__name_len;
        }
        if (VL_GTS_III(32, VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                     .__PVT__type_name), this->__PVT__m_max_type)) {
            this->__PVT__m_max_type = VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                                .__PVT__type_name);
        }
        if (VL_GTS_III(32, VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                     .__PVT__size), this->__PVT__m_max_size)) {
            this->__PVT__m_max_size = VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                                .__PVT__size);
        }
        if (VL_GTS_III(32, VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                     .__PVT__val), this->__PVT__m_max_value)) {
            this->__PVT__m_max_value = VL_LEN_IN(unnamedblk39__DOT__unnamedblk40__DOT__row
                                                 .__PVT__val);
        }
        unnamedblk39__DOT__j = ((IData)(1U) + unnamedblk39__DOT__j);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlUnpacked<IData/*31:0*/, 5> unnamedblk41__DOT__q;
    IData/*31:0*/ unnamedblk41__DOT__m;
    VlQueue<IData/*31:0*/> unnamedblk41__DOT__qq;
    std::string unnamedblk42__DOT__header;
    IData/*31:0*/ unnamedblk44__DOT__i;
    unnamedblk44__DOT__i = 0;
    IData/*31:0*/ unnamedblk44__DOT__i__Vloopsize;
    unnamedblk44__DOT__i__Vloopsize = 0;
    VUVM_Activator_uvm_printer_row_info__struct__0 unnamedblk44__DOT__unnamedblk45__DOT__row;
    std::string unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str;
    emit__Vfuncrtn = ""s;
    std::string s;
    std::string user_format;
    std::string dashes;
    std::string linefeed;
    s = ""s;
    user_format = ""s;
    dashes = ""s;
    linefeed = VL_CONCATN_NNN("\n"s, VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1044)
                              ->__PVT__prefix);
    {
        // Inlined CFunc: __VnoInFunc_calculate_max_widths
        IData/*31:0*/ __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j;
        __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__name_len;
        VUVM_Activator_uvm_printer_row_info__struct__0 __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row;
        this->__PVT__m_max_name = 4U;
        this->__PVT__m_max_type = 4U;
        this->__PVT__m_max_size = 4U;
        this->__PVT__m_max_value = 5U;
        __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j, VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
            __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__name_len = 0U;
            __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row 
                = VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j);
            __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__name_len 
                = (VL_MULS_III(32, VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1021)
                               ->__PVT__indent, __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                               .__PVT__level) + VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                                          .__PVT__name));
            if (VL_GTS_III(32, __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__name_len, this->__PVT__m_max_name)) {
                this->__PVT__m_max_name = __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__name_len;
            }
            if (VL_GTS_III(32, VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                         .__PVT__type_name), this->__PVT__m_max_type)) {
                this->__PVT__m_max_type = VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                                    .__PVT__type_name);
            }
            if (VL_GTS_III(32, VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                         .__PVT__size), this->__PVT__m_max_size)) {
                this->__PVT__m_max_size = VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                                    .__PVT__size);
            }
            if (VL_GTS_III(32, VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                         .__PVT__val), this->__PVT__m_max_value)) {
                this->__PVT__m_max_value = VL_LEN_IN(__Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__unnamedblk40__DOT__row
                                                     .__PVT__val);
            }
            __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j 
                = ((IData)(1U) + __Vinline_0___VnoInFunc_calculate_max_widths_unnamedblk39__DOT__j);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        unnamedblk41__DOT__q[__Vi0] = 0;
    }
    unnamedblk41__DOT__m = 0U;
    unnamedblk41__DOT__qq.clear();
    unnamedblk41__DOT__qq.atDefault() = 0;
    unnamedblk41__DOT__q[0U] = this->__PVT__m_max_name;
    unnamedblk41__DOT__q[1U] = this->__PVT__m_max_type;
    unnamedblk41__DOT__q[2U] = this->__PVT__m_max_size;
    unnamedblk41__DOT__q[3U] = this->__PVT__m_max_value;
    unnamedblk41__DOT__q[4U] = 0x00000064U;
    unnamedblk41__DOT__qq = unnamedblk41__DOT__q.max();
    unnamedblk41__DOT__m = unnamedblk41__DOT__qq.at(0U);
    if (VL_LTS_III(32, VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash), unnamedblk41__DOT__m)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash 
            = VL_REPLICATEN_NNI("-"s, unnamedblk41__DOT__m);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space 
            = VL_REPLICATEN_NNI(" "s, unnamedblk41__DOT__m);
    }
    if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1062)
        ->__PVT__header) {
        unnamedblk42__DOT__header = ""s;
        this->__VnoInFunc_format_header(vlSymsp, user_format);
        if ((""s == user_format)) {
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1068)
                ->__PVT__identifier) {
                dashes = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                     ((IData)(2U) + this->__PVT__m_max_name));
                unnamedblk42__DOT__header = VL_CONCATN_NNN("Name"s, 
                                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                                       (this->__PVT__m_max_name 
                                                                        - (IData)(2U))));
            }
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1072)
                ->__PVT__type_name) {
                dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                            ((IData)(2U) 
                                                             + this->__PVT__m_max_type)));
                unnamedblk42__DOT__header = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk42__DOT__header, "Type"s), 
                                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                                       (this->__PVT__m_max_type 
                                                                        - (IData)(2U))));
            }
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1076)
                ->__PVT__size) {
                dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                            ((IData)(2U) 
                                                             + this->__PVT__m_max_size)));
                unnamedblk42__DOT__header = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk42__DOT__header, "Size"s), 
                                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                                       (this->__PVT__m_max_size 
                                                                        - (IData)(2U))));
            }
            dashes = VL_CONCATN_NNN(VL_CONCATN_NNN(dashes, 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,this->__PVT__m_max_value)), linefeed);
            unnamedblk42__DOT__header = VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(
                                                                      VL_CONCATN_NNN(unnamedblk42__DOT__header, "Value"s), 
                                                                      VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                                                (this->__PVT__m_max_value 
                                                                                - (IData)(5U)))), linefeed);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, dashes), unnamedblk42__DOT__header), dashes);
        } else {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
    }
    unnamedblk44__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk44__DOT__i, VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
        unnamedblk44__DOT__i__Vloopsize = VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size();
        unnamedblk44__DOT__unnamedblk45__DOT__row = VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(unnamedblk44__DOT__i);
        this->__VnoInFunc_format_row(vlSymsp, unnamedblk44__DOT__unnamedblk45__DOT__row, user_format);
        if ((""s == user_format)) {
            unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str = ""s;
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1095)
                ->__PVT__identifier) {
                unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                    VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                                VL_MULS_III(32, unnamedblk44__DOT__unnamedblk45__DOT__row
                                                                            .__PVT__level, VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1096)
                                                                            ->__PVT__indent)), unnamedblk44__DOT__unnamedblk45__DOT__row
                                                    .__PVT__name), 
                                     VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                 ((IData)(2U) 
                                                  + 
                                                  ((this->__PVT__m_max_name 
                                                    - 
                                                    VL_LEN_IN(unnamedblk44__DOT__unnamedblk45__DOT__row
                                                              .__PVT__name)) 
                                                   - 
                                                   VL_MULS_III(32, unnamedblk44__DOT__unnamedblk45__DOT__row
                                                               .__PVT__level, VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1097)
                                                               ->__PVT__indent)))));
            }
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1098)
                ->__PVT__type_name) {
                unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str, unnamedblk44__DOT__unnamedblk45__DOT__row
                                                    .__PVT__type_name), 
                                     VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                 ((IData)(2U) 
                                                  + 
                                                  (this->__PVT__m_max_type 
                                                   - 
                                                   VL_LEN_IN(unnamedblk44__DOT__unnamedblk45__DOT__row
                                                             .__PVT__type_name)))));
            }
            if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1100)
                ->__PVT__size) {
                unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str 
                    = VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str, unnamedblk44__DOT__unnamedblk45__DOT__row
                                                    .__PVT__size), 
                                     VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                 ((IData)(2U) 
                                                  + 
                                                  (this->__PVT__m_max_size 
                                                   - 
                                                   VL_LEN_IN(unnamedblk44__DOT__unnamedblk45__DOT__row
                                                             .__PVT__size)))));
            }
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(s, unnamedblk44__DOT__unnamedblk45__DOT__unnamedblk46__DOT__row_str), unnamedblk44__DOT__unnamedblk45__DOT__row
                                                             .__PVT__val), 
                                              VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__space,1U,
                                                          (this->__PVT__m_max_value 
                                                           - 
                                                           VL_LEN_IN(unnamedblk44__DOT__unnamedblk45__DOT__row
                                                                     .__PVT__val)))), linefeed);
        } else {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
        if ((unnamedblk44__DOT__i__Vloopsize <= VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
            unnamedblk44__DOT__i = ((IData)(1U) + unnamedblk44__DOT__i);
        }
    }
    if (VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1108)
        ->__PVT__footer) {
        this->__VnoInFunc_format_footer(vlSymsp, user_format);
        s = ((""s == user_format) ? VL_CONCATN_NNN(s, dashes)
              : VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed));
    }
    emit__Vfuncrtn = VL_CONCATN_NNN(VL_NULL_CHECK(VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1116)
                                    ->__PVT__prefix, s);
    VUVM_Activator_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.clear();
}

void VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_name = 0;
    __PVT__m_max_type = 0;
    __PVT__m_max_size = 0;
    __PVT__m_max_value = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::~VUVM_Activator_uvm_pkg__03a__03auvm_table_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_table_printer::~\n"); );
}
