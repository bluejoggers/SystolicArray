// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_regblock_uvm_pkg.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor;
class VUVM_regblock_uvm_pkg__03a__03auvm_comparer;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_line_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_packer;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_seed_map;
class VUVM_regblock_uvm_pkg__03a__03auvm_table_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_tree_printer;


class VUVM_regblock__Syms;
struct VUVM_regblock_uvm_printer_row_info__struct__0 {
    IData/*31:0*/ __PVT__level;
    std::string __PVT__name;
    std::string __PVT__type_name;
    std::string __PVT__size;
    std::string __PVT__val;

    bool operator==(const VUVM_regblock_uvm_printer_row_info__struct__0& rhs) const {
        return __PVT__level == rhs.__PVT__level
            && __PVT__name == rhs.__PVT__name
            && __PVT__type_name == rhs.__PVT__type_name
            && __PVT__size == rhs.__PVT__size
            && __PVT__val == rhs.__PVT__val;
    }
    bool operator!=(const VUVM_regblock_uvm_printer_row_info__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_regblock_uvm_printer_row_info__struct__0& rhs) const {
        if (__PVT__level < rhs.__PVT__level) return true;
        if (rhs.__PVT__level < __PVT__level) return false;
        if (__PVT__name < rhs.__PVT__name) return true;
        if (rhs.__PVT__name < __PVT__name) return false;
        if (__PVT__type_name < rhs.__PVT__type_name) return true;
        if (rhs.__PVT__type_name < __PVT__type_name) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        if (__PVT__val < rhs.__PVT__val) return true;
        if (rhs.__PVT__val < __PVT__val) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VUVM_regblock_uvm_printer_row_info__struct__0> : public std::true_type {};
struct VUVM_regblock_uvm_hdl_path_slice__struct__0 {
    std::string __PVT__path;
    IData/*31:0*/ __PVT__offset;
    IData/*31:0*/ __PVT__size;

    bool operator==(const VUVM_regblock_uvm_hdl_path_slice__struct__0& rhs) const {
        return __PVT__path == rhs.__PVT__path
            && __PVT__offset == rhs.__PVT__offset
            && __PVT__size == rhs.__PVT__size;
    }
    bool operator!=(const VUVM_regblock_uvm_hdl_path_slice__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_regblock_uvm_hdl_path_slice__struct__0& rhs) const {
        if (__PVT__path < rhs.__PVT__path) return true;
        if (rhs.__PVT__path < __PVT__path) return false;
        if (__PVT__offset < rhs.__PVT__offset) return true;
        if (rhs.__PVT__offset < __PVT__offset) return false;
        if (__PVT__size < rhs.__PVT__size) return true;
        if (rhs.__PVT__size < __PVT__size) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VUVM_regblock_uvm_hdl_path_slice__struct__0> : public std::true_type {};
struct VUVM_regblock_uvm_reg_bus_op__struct__0 {
    IData/*31:0*/ __PVT__kind;
    QData/*63:0*/ __PVT__addr;
    QData/*63:0*/ __PVT__data;
    IData/*31:0*/ __PVT__n_bits;
    CData/*7:0*/ __PVT__byte_en;
    IData/*31:0*/ __PVT__status;

    bool operator==(const VUVM_regblock_uvm_reg_bus_op__struct__0& rhs) const {
        return __PVT__kind == rhs.__PVT__kind
            && __PVT__addr == rhs.__PVT__addr
            && __PVT__data == rhs.__PVT__data
            && __PVT__n_bits == rhs.__PVT__n_bits
            && __PVT__byte_en == rhs.__PVT__byte_en
            && __PVT__status == rhs.__PVT__status;
    }
    bool operator!=(const VUVM_regblock_uvm_reg_bus_op__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_regblock_uvm_reg_bus_op__struct__0& rhs) const {
        if (__PVT__kind < rhs.__PVT__kind) return true;
        if (rhs.__PVT__kind < __PVT__kind) return false;
        if (__PVT__addr < rhs.__PVT__addr) return true;
        if (rhs.__PVT__addr < __PVT__addr) return false;
        if (__PVT__data < rhs.__PVT__data) return true;
        if (rhs.__PVT__data < __PVT__data) return false;
        if (__PVT__n_bits < rhs.__PVT__n_bits) return true;
        if (rhs.__PVT__n_bits < __PVT__n_bits) return false;
        if (__PVT__byte_en < rhs.__PVT__byte_en) return true;
        if (rhs.__PVT__byte_en < __PVT__byte_en) return false;
        if (__PVT__status < rhs.__PVT__status) return true;
        if (rhs.__PVT__status < __PVT__status) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<VUVM_regblock_uvm_reg_bus_op__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__uvm_instance_scope__Vstatic__c;
    CData/*0:0*/ __PVT__uvm_oneway_hash__Vstatic__msb;
    CData/*7:0*/ __PVT__uvm_oneway_hash__Vstatic__current_byte;
    CData/*7:0*/ __PVT__uvm_leaf_scope__Vstatic__bracket_match;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__e;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__es;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__s;
    IData/*31:0*/ __PVT__uvm_re_match__Vstatic__ss;
    IData/*31:0*/ __PVT__uvm_global_random_seed;
    IData/*31:0*/ __PVT__uvm_instance_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_oneway_hash__Vstatic__crc1;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__pos;
    IData/*31:0*/ __PVT__uvm_leaf_scope__Vstatic__bmatches;
    IData/*31:0*/ __PVT__uvm_get_array_index_int__Vstatic__i;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__nba;
    IData/*31:0*/ __PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    std::string __PVT__uvm_is_match__Vstatic__s;
    std::string __Vtask_uvm_report__8__id;
    std::string __Vtask_uvm_report__8__message;
    std::string __Vtask_uvm_report__8__filename;
    std::string __Vtask_uvm_report__8__context_name;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> __PVT__uvm_default_printer;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_packer> __PVT__uvm_default_packer;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_comparer> __PVT__uvm_default_comparer;
    VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seed_map>> __PVT__uvm_random_seed_table_lookup;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_seed_map> __PVT__uvm_create_random_seed__Vstatic__seed_map;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> __PVT__end_of_elaboration_ph;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> __PVT__run_ph;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> run_test__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> run_test__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_enabled__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_enabled__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_info__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_info__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_warning__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_warning__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_error__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_error__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_fatal__Vstatic__top;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_fatal__Vstatic__cs;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__uvm_cmdline_proc;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg();
    ~VUVM_regblock_uvm_pkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
