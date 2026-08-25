// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ95_TBZ96__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ95_TBZ96__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field;
class VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field> __PVT__m_obj;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> __PVT__m_cb;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callback_iter__Tz95_TBz96"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96(*this); }
    void __VnoInFunc_first(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field> obj);
    ~VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz95_TBz96() {}
};


#endif  // guard
