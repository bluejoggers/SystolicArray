// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer_knobs;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_printer__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer : public Vuvm_pkg_uvm_pkg__03a__03auvm_printer {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__newline;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tree_printer"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer(*this); }
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_tree_printer();
};


#endif  // guard
