// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_PREDICT_S__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_PREDICT_S__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_reg_item;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_predict_s__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_predict_s__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_predict_s__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_predict_s__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_predict_s : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<QData/*63:0*/, CData/*0:0*/> __PVT__addr;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> __PVT__reg_item;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_predict_s"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_predict_s(*this); }
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_predict_s() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_predict_s() {}
};


#endif  // guard
