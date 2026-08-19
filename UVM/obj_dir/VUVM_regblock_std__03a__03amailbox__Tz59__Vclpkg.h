// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_STD__03A__03AMAILBOX__TZ59__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_STD__03A__03AMAILBOX__TZ59__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_txn_base;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_std__03a__03amailbox__Tz59__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_std__03a__03amailbox__Tz59__Vclpkg();
    ~VUVM_regblock_std__03a__03amailbox__Tz59__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_std__03a__03amailbox__Tz59__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_regblock__Syms;

class VUVM_regblock_std__03a__03amailbox__Tz59 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz59"; }
    VlClass* clone() const { return new VUVM_regblock_std__03a__03amailbox__Tz59(*this); }
    VlCoroutine __VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &message);
    void __VnoInFunc_num(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &message);
    VlCoroutine __VnoInFunc_put(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> message);
    void __VnoInFunc_try_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock___024unit__03a__03areg_txn_base> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_std__03a__03amailbox__Tz59() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~VUVM_regblock_std__03a__03amailbox__Tz59() {}
};


#endif  // guard
