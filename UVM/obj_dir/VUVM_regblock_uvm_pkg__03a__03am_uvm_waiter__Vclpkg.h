// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__inst_name;
    std::string __PVT__field_name;
    VlAssignableEvent __PVT__trigger;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_waiter"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter(*this); }
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name);
    ~VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter() {}
};


#endif  // guard
