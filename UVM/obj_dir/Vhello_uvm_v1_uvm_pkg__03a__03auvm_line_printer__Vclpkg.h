// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer_knobs;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_tree_printer {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_line_printer"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer(*this); }
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_line_printer();
};


#endif  // guard
