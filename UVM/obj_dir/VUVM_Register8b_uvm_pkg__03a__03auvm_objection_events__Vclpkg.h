// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECTION_EVENTS__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_OBJECTION_EVENTS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__waiters;
    VlAssignableEvent __PVT__raised;
    VlAssignableEvent __PVT__dropped;
    VlAssignableEvent __PVT__all_dropped;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_objection_events"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events(*this); }
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events() {}
};


#endif  // guard
