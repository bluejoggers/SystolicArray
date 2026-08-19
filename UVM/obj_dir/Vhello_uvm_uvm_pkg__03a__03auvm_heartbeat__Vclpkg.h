// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_event_;
class Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_objection;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat : public Vhello_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_started;
    CData/*0:0*/ __PVT__m_added;
    IData/*31:0*/ __PVT__m_mode;
    VlAssignableEvent __PVT__m_stop_event;
    std::string __Vtask___VforkTask_0__19____VlefCall_14__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_13__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_10__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_9__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_6__get_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_5__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_2__get_full_name;
    std::string __Vtask___VforkTask_0__19____VlefCall_1__get_name;
    std::string __Vtask___VforkTask_0__19__unnamedblk3__DOT__s;
    std::string __Vtask___VforkTask_0__19__unnamedblk5__DOT__s;
    std::string __Vtask___VforkTask_0__19__unnamedblk7__DOT__s;
    std::string __Vtask_get_name__21__Vfuncout;
    std::string __Vtask_get_full_name__22__Vfuncout;
    std::string __Vtask_get_full_name__25__Vfuncout;
    std::string __Vtask_get_name__26__Vfuncout;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vtask_get_name__30__Vfuncout;
    std::string __Vtask_get_full_name__33__Vfuncout;
    std::string __Vtask_get_name__34__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vhello_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlClassRef<Vhello_uvm_uvm_pkg__03a__03a__VDynScope_29> __VDynScope_m_hb_process_1);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> e);
    void __VnoInFunc_stop(Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> objection);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat();
};


#endif  // guard
