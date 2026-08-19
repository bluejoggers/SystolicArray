// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_uvm_pkg.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer_knobs;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_printer__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer : public Vhello_uvm_uvm_pkg__03a__03auvm_printer {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__newline;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tree_printer"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer(*this); }
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_tree_printer();
};


#endif  // guard
