// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03A__VDYNSCOPE_4__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_phase_state_change;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_task_phase;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_task_phase> __PVT__task_phase;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __PVT__top;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase_state_change> __PVT__state_chg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_4"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4(*this); }
    VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp) {}
    ~VUVM_Activator_uvm_pkg__03a__03a__VDynScope_4() {}
};


#endif  // guard
