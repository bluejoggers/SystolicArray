// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03A__VDYNSCOPE_23__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03A__VDYNSCOPE_23__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03aprocess;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_std__03a__03aprocess> __PVT__phase_runner_proc;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_23"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23(*this); }
    VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23() {}
};


#endif  // guard
