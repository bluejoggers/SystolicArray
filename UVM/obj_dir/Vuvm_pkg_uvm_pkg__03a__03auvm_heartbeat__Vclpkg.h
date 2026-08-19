// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_HEARTBEAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_29;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_event_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_objection;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat : public Vuvm_pkg_uvm_pkg__03a__03auvm_object {
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
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> __PVT__m_objection;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat_callback> __PVT__m_cb;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> __PVT__m_cntxt;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> __PVT__m_hblist;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_event_> __PVT__m_event;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_heartbeat"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_add(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_disable_cb(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_enable_cb(Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_29> __VDynScope_m_hb_process_1);
    VlCoroutine __VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync);
  public:
    void __VnoInFunc_m_start_hb_process(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_remove(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_set_heartbeat(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> &comps);
    void __VnoInFunc_set_mode(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn);
    void __VnoInFunc_start(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_event_> e);
    void __VnoInFunc_stop(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_objection> objection);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_heartbeat();
};


#endif  // guard
