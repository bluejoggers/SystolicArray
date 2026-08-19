// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_STD__03A__03AMAILBOX__TZ11__VCLPKG_H_
#define VERILATED_VHELLO_UVM_STD__03A__03AMAILBOX__TZ11__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_std__03a__03amailbox__Tz11__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_std__03a__03amailbox__Tz11__Vclpkg();
    ~Vhello_uvm_std__03a__03amailbox__Tz11__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_std__03a__03amailbox__Tz11__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_std__03a__03amailbox__Tz11 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz11"; }
    VlClass* clone() const { return new Vhello_uvm_std__03a__03amailbox__Tz11(*this); }
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &message);
    void __VnoInFunc_num(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &message);
    VlCoroutine __VnoInFunc_put(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> message);
    void __VnoInFunc_try_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_std__03a__03amailbox__Tz11() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~Vhello_uvm_std__03a__03amailbox__Tz11() {}
};


#endif  // guard
