// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03A__VDYNSCOPE_2__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03A__VDYNSCOPE_2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_phase_state_change;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_task_phase;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_2"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2(*this); }
    Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03a__VDynScope_2() {}
};


#endif  // guard
