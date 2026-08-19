// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ25_TBZ26__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ25_TBZ26__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> __PVT__m_obj;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz25_TBz26"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26(*this); }
    void __VnoInFunc_first(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_vreg> obj);
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_callback_iter__Tz25_TBz26() {}
};


#endif  // guard
