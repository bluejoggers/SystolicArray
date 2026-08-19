// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03A__VDYNSCOPE_20__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03A__VDYNSCOPE_20__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_objection;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> __PVT__objection;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_20"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20(*this); }
    Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    ~Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_20() {}
};


#endif  // guard
