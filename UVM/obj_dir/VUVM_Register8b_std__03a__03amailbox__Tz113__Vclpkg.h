// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_STD__03A__03AMAILBOX__TZ113__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_STD__03A__03AMAILBOX__TZ113__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_std__03a__03amailbox__Tz113__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_std__03a__03amailbox__Tz113__Vclpkg();
    ~VUVM_Register8b_std__03a__03amailbox__Tz113__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_std__03a__03amailbox__Tz113__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_std__03a__03amailbox__Tz113 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz113"; }
    VlClass* clone() const { return new VUVM_Register8b_std__03a__03amailbox__Tz113(*this); }
    VlCoroutine __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &message);
    void __VnoInFunc_num(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &message);
    VlCoroutine __VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> message);
    void __VnoInFunc_try_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_std__03a__03amailbox__Tz113() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~VUVM_Register8b_std__03a__03amailbox__Tz113() {}
};


#endif  // guard
