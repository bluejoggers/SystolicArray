// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TEST_DONE_OBJECTION__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TEST_DONE_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi2;
class Vuvm_pkg_uvm_pkg__03a__03auvm_objection;
class Vuvm_pkg_uvm_pkg__03a__03auvm_objection_events;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection> &get__Vfuncrtn);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_objection__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection : public Vuvm_pkg_uvm_pkg__03a__03auvm_objection {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_forced;
    CData/*0:0*/ __PVT__m_executing_stop_processes;
    IData/*31:0*/ __PVT__m_n_stop_threads;
    QData/*63:0*/ __PVT__stop_timeout;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_test_done_objection"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_all_dropped(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
  private:
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, IData/*31:0*/ &__VlefCall_1__uvm_report_enabled);
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync);
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__1(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync, IData/*31:0*/ __VlefCall_1__uvm_report_enabled);
  public:
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual VlCoroutine __VnoInFunc_force_stop(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_do_stop_all(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
  private:
    VlCoroutine __VnoInFunc_m_do_stop_all____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
  public:
    VlCoroutine __VnoInFunc_m_stop_request(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_stop_request____Vfork_3__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_stop_request____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__3);
  public:
    virtual void __VnoInFunc_qualify(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ is_raise, std::string description);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_stop_request(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_stop_request____Vfork_2__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection();
};


#endif  // guard
