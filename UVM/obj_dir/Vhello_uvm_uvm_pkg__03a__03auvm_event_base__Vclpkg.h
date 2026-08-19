// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_EVENT_BASE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_EVENT_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_event_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_event_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_event_base__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_event_base__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_event_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_event_base : public Vhello_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__on;
    IData/*31:0*/ __PVT__num_waiters;
    QData/*63:0*/ __PVT__trigger_time;
    VlAssignableEvent __PVT__m_event;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_>> __PVT__callbacks;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_event_base"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_cancel(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_num_waiters(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_time(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_off(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn);
    virtual void __VnoInFunc_is_on(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup);
    virtual VlCoroutine __VnoInFunc_wait_off(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_on(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_wait_trigger(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_event_base() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_event_base();
};


#endif  // guard
