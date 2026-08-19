// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::new\n"); );
    // Body
    this->__PVT__newline = "\n"s;
    /*super.new*/;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1132)->__PVT__size = 0U;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1133)->__PVT__type_name = 0U;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1134)->__PVT__header = 0U;
    VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1135)->__PVT__footer = 0U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk47__DOT__i;
    unnamedblk47__DOT__i = 0;
    IData/*31:0*/ unnamedblk47__DOT__i__Vloopsize;
    unnamedblk47__DOT__i__Vloopsize = 0;
    Vhello_uvm_v1_uvm_printer_row_info__struct__0 unnamedblk47__DOT__unnamedblk48__DOT__row;
    std::string unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__indent_str;
    IData/*31:0*/ unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__end_level;
    std::string unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__indent_str;
    IData/*31:0*/ unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l;
    emit__Vfuncrtn = ""s;
    std::string s;
    std::string space;
    std::string user_format;
    std::string linefeed;
    s = VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1144)
        ->__PVT__prefix;
    space = "                                                                                                   "s;
    user_format = ""s;
    linefeed = (((""s == this->__PVT__newline) | (" "s 
                                                  == this->__PVT__newline))
                 ? this->__PVT__newline : VL_CONCATN_NNN(this->__PVT__newline, VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1148)
                                                         ->__PVT__prefix));
    if (VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1151)
        ->__PVT__header) {
        this->__VnoInFunc_format_header(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
    }
    unnamedblk47__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk47__DOT__i, Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
        unnamedblk47__DOT__i__Vloopsize = Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size();
        {
            unnamedblk47__DOT__unnamedblk48__DOT__row 
                = Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(unnamedblk47__DOT__i);
            this->__VnoInFunc_format_row(vlSymsp, unnamedblk47__DOT__unnamedblk48__DOT__row, user_format);
            if ((""s == user_format)) {
                unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__indent_str = ""s;
                unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__indent_str 
                    = VL_SUBSTR_N(space,1U,VL_MULS_III(32, unnamedblk47__DOT__unnamedblk48__DOT__row
                                                       .__PVT__level, VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1162)
                                                       ->__PVT__indent));
                if (VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1165)
                    ->__PVT__identifier) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__indent_str), unnamedblk47__DOT__unnamedblk48__DOT__row
                                       .__PVT__name);
                    if (((""s != unnamedblk47__DOT__unnamedblk48__DOT__row
                          .__PVT__name) & ("..."s != unnamedblk47__DOT__unnamedblk48__DOT__row
                                           .__PVT__name))) {
                        s = VL_CONCATN_NNN(s, ": "s);
                    }
                }
                if ((0x40U == VL_GETC_N(unnamedblk47__DOT__unnamedblk48__DOT__row
                                        .__PVT__val,0U))) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(s, "("s), unnamedblk47__DOT__unnamedblk48__DOT__row
                                                                     .__PVT__type_name), unnamedblk47__DOT__unnamedblk48__DOT__row
                                                      .__PVT__val), ") "s);
                } else if ((VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1175)
                            ->__PVT__type_name && (
                                                   ((""s 
                                                     != unnamedblk47__DOT__unnamedblk48__DOT__row
                                                     .__PVT__type_name) 
                                                    | ("-"s 
                                                       != unnamedblk47__DOT__unnamedblk48__DOT__row
                                                       .__PVT__type_name)) 
                                                   | ("..."s 
                                                      != unnamedblk47__DOT__unnamedblk48__DOT__row
                                                      .__PVT__type_name)))) {
                    s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(s, "("s), unnamedblk47__DOT__unnamedblk48__DOT__row
                                                      .__PVT__type_name), ") "s);
                }
                if (VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1182)
                    ->__PVT__size) {
                    if (((""s != unnamedblk47__DOT__unnamedblk48__DOT__row
                          .__PVT__size) | ("-"s != unnamedblk47__DOT__unnamedblk48__DOT__row
                                           .__PVT__size))) {
                        s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(s, "("s), unnamedblk47__DOT__unnamedblk48__DOT__row
                                                          .__PVT__size), ") "s);
                    }
                }
                if (VL_LTS_III(32, unnamedblk47__DOT__i, 
                               (Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                                - (IData)(1U)))) {
                    if (VL_GTS_III(32, Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk47__DOT__i))
                                   .__PVT__level, unnamedblk47__DOT__unnamedblk48__DOT__row
                                   .__PVT__level)) {
                        s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, 
                                                          VL_CVT_PACK_STR_NI(
                                                                             VL_GETC_N(VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1189)
                                                                                ->__PVT__separator,0U))), linefeed);
                        goto __Vlabel0;
                    }
                }
                s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, unnamedblk47__DOT__unnamedblk48__DOT__row
                                                                 .__PVT__val), " "s), linefeed);
                if (VL_LTES_III(32, unnamedblk47__DOT__i, 
                                (Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                                 - (IData)(1U)))) {
                    unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__end_level = 0U;
                    unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__end_level 
                        = ((unnamedblk47__DOT__i == 
                            (Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size() 
                             - (IData)(1U))) ? 0U : Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk47__DOT__i))
                           .__PVT__level);
                    if (VL_LTS_III(32, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__end_level, unnamedblk47__DOT__unnamedblk48__DOT__row
                                   .__PVT__level)) {
                        unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__indent_str = ""s;
                        unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l = 0U;
                        unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l 
                            = (unnamedblk47__DOT__unnamedblk48__DOT__row
                               .__PVT__level - (IData)(1U));
                        while (VL_GTES_III(32, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__end_level)) {
                            unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__indent_str 
                                = VL_SUBSTR_N(space,1U,
                                              VL_MULS_III(32, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l, VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1207)
                                                          ->__PVT__indent));
                            s = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(s, unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__indent_str), 
                                                              VL_CVT_PACK_STR_NI(
                                                                                VL_GETC_N(VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1208)
                                                                                ->__PVT__separator,1U))), linefeed);
                            unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l 
                                = (unnamedblk47__DOT__unnamedblk48__DOT__unnamedblk49__DOT__unnamedblk50__DOT__unnamedblk51__DOT__unnamedblk52__DOT__l 
                                   - (IData)(1U));
                        }
                    }
                }
            } else {
                s = VL_CONCATN_NNN(s, user_format);
            }
            __Vlabel0: ;
        }
        if ((unnamedblk47__DOT__i__Vloopsize <= Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.size())) {
            unnamedblk47__DOT__i = ((IData)(1U) + unnamedblk47__DOT__i);
        }
    }
    if (VL_NULL_CHECK(Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__knobs, "../../uvm/distrib/src/base/uvm_printer.svh", 1219)
        ->__PVT__footer) {
        this->__VnoInFunc_format_footer(vlSymsp, user_format);
        if ((""s != user_format)) {
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, user_format), linefeed);
        }
    }
    if (((""s == this->__PVT__newline) | (" "s == this->__PVT__newline))) {
        s = VL_CONCATN_NNN(s, "\n"s);
    }
    emit__Vfuncrtn = s;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer::__PVT__m_rows.clear();
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer::~\n"); );
}
