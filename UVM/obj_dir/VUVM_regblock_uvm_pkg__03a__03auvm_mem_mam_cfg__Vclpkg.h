// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_MEM_MAM_CFG__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_MEM_MAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__mode;
    IData/*31:0*/ __PVT__locality;
    QData/*63:0*/ __PVT__start_offset;
    QData/*63:0*/ __PVT__end_offset;
    VlRandomizer __PVT__constraint;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam_cfg"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg(*this); }
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_mem_mam_cfg() {}
};


#endif  // guard
