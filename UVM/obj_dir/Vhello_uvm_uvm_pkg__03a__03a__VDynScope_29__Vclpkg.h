// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03A__VDYNSCOPE_29__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03A__VDYNSCOPE_29__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_object;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__triggered;
    QData/*63:0*/ __PVT__last_trigger;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> __PVT__obj;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_29"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29(*this); }
    Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29() {}
};


#endif  // guard
