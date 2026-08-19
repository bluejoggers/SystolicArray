// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_OBJECTION_EVENTS__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_OBJECTION_EVENTS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_objection_events__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_objection_events__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_objection_events__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_objection_events__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_objection_events : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__waiters;
    VlAssignableEvent __PVT__raised;
    VlAssignableEvent __PVT__dropped;
    VlAssignableEvent __PVT__all_dropped;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_objection_events"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_objection_events(*this); }
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_objection_events() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_objection_events() {}
};


#endif  // guard
