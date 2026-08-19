// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03A__VDYNSCOPE_39__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> __PVT__seq;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> __PVT__phase;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_39"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39(*this); }
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    ~Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39() {}
};


#endif  // guard
