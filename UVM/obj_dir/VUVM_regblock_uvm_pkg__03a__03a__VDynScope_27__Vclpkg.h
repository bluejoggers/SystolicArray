// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03A__VDYNSCOPE_27__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03A__VDYNSCOPE_27__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_objection;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_objection> __PVT__objection;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::__VDynScope_27"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27(*this); }
    VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp) {}
    ~VUVM_regblock_uvm_pkg__03a__03a__VDynScope_27() {}
};


#endif  // guard
