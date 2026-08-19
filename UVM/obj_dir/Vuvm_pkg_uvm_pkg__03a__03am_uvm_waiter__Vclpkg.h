// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__inst_name;
    std::string __PVT__field_name;
    VlAssignableEvent __PVT__trigger;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_waiter"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter(*this); }
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name);
    ~Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter() {}
};


#endif  // guard
