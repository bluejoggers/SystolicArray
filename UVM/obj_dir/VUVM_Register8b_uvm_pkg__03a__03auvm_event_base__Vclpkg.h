// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_EVENT_BASE__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_EVENT_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_event_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_event_callback_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_event_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_event_base__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_event_base__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_event_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_event_base : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__on;
    IData/*31:0*/ __PVT__num_waiters;
    QData/*63:0*/ __PVT__trigger_time;
    VlAssignableEvent __PVT__m_event;
    VlQueue<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_event_callback_>> __PVT__callbacks;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_event_base"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_cancel(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_num_waiters(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_time(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_trigger_time__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_off(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_off__Vfuncrtn);
    virtual void __VnoInFunc_is_on(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_on__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup);
    virtual VlCoroutine __VnoInFunc_wait_off(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_on(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ delta);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_wait_trigger(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_event_base() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_event_base();
};


#endif  // guard
