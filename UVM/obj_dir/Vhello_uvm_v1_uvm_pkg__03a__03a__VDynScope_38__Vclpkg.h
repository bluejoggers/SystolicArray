// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03A__VDYNSCOPE_38__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03A__VDYNSCOPE_38__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__k;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_38"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38(*this); }
    Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_38() {}
};


#endif  // guard
