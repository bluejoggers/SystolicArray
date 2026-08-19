// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_PRINTER_KNOBS__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_PRINTER_KNOBS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__header;
    CData/*0:0*/ __PVT__footer;
    CData/*0:0*/ __PVT__full_name;
    CData/*0:0*/ __PVT__identifier;
    CData/*0:0*/ __PVT__type_name;
    CData/*0:0*/ __PVT__size;
    CData/*0:0*/ __PVT__reference;
    CData/*0:0*/ __PVT__show_root;
    CData/*0:0*/ __PVT__show_radix;
    CData/*0:0*/ __PVT__sprint;
    IData/*31:0*/ __PVT__depth;
    IData/*31:0*/ __PVT__begin_elements;
    IData/*31:0*/ __PVT__end_elements;
    IData/*31:0*/ __PVT__indent;
    IData/*31:0*/ __PVT__mcd;
    IData/*31:0*/ __PVT__default_radix;
    IData/*31:0*/ __PVT__max_width;
    IData/*31:0*/ __PVT__name_width;
    IData/*31:0*/ __PVT__type_width;
    IData/*31:0*/ __PVT__size_width;
    IData/*31:0*/ __PVT__value_width;
    std::string __PVT__prefix;
    std::string __PVT__separator;
    std::string __PVT__dec_radix;
    std::string __PVT__bin_radix;
    std::string __PVT__oct_radix;
    std::string __PVT__unsigned_radix;
    std::string __PVT__hex_radix;
    std::string __PVT__truncation;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer_knobs"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs(*this); }
    void __VnoInFunc_get_radix_str(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ radix, std::string &get_radix_str__Vfuncrtn);
    Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs() {}
};


#endif  // guard
