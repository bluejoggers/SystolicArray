// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ96_TBZ97__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ96_TBZ97__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> __PVT__m_obj;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz96_TBz97"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97(*this); }
    void __VnoInFunc_first(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj);
    ~VUVM_regblock_uvm_pkg__03a__03auvm_callback_iter__Tz96_TBz97() {}
};


#endif  // guard
