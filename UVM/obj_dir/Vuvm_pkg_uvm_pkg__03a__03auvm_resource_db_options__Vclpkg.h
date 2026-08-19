// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Vuvm_pkg__Syms* __restrict vlSymsp);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db_options"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db_options() {}
};


#endif  // guard
