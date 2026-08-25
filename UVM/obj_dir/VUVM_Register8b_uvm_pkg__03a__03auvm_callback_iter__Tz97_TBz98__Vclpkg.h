// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ97_TBZ98__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ97_TBZ98__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_vreg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> __PVT__m_obj;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz97_TBz98"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98(*this); }
    void __VnoInFunc_first(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> obj);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_callback_iter__Tz97_TBz98() {}
};


#endif  // guard
