// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AGET_T__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AGET_T__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03aget_t__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03aget_t__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03aget_t__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03aget_t__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03aget_t : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__t;
    std::string __PVT__name;
    std::string __PVT__scope;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> __PVT__rsrc;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::get_t"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03aget_t(*this); }
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03aget_t() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_uvm_pkg__03a__03aget_t() {}
};


#endif  // guard
