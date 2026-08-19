// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03asev_id_struct__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03asev_id_struct__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03asev_id_struct : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sev_specified;
    CData/*0:0*/ __PVT__id_specified;
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__is_on;
    std::string __PVT__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::sev_id_struct"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03asev_id_struct(*this); }
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03asev_id_struct() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    ~Vuvm_pkg_uvm_pkg__03a__03asev_id_struct() {}
};


#endif  // guard
