// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03A__VDYNSCOPE_5__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03A__VDYNSCOPE_5__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_phase_state_change;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_task_phase;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_5"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5(*this); }
    VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    ~VUVM_Register8b_uvm_pkg__03a__03a__VDynScope_5() {}
};


#endif  // guard
