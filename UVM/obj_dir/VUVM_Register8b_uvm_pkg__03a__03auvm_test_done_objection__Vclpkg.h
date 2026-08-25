// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TEST_DONE_OBJECTION__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TEST_DONE_OBJECTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi4;
class VUVM_Register8b_uvm_pkg__03a__03auvm_objection;
class VUVM_Register8b_uvm_pkg__03a__03auvm_objection_events;
class VUVM_Register8b_uvm_pkg__03a__03auvm_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection> __PVT__m_inst;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection> &get__Vfuncrtn);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_objection__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection : public VUVM_Register8b_uvm_pkg__03a__03auvm_objection {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_forced;
    CData/*0:0*/ __PVT__m_executing_stop_processes;
    IData/*31:0*/ __PVT__m_n_stop_threads;
    QData/*63:0*/ __PVT__stop_timeout;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_test_done_objection"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_all_dropped(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
  private:
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, IData/*31:0*/ &__VlefCall_1__uvm_report_enabled);
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync);
    VlCoroutine __VnoInFunc_all_dropped____Vfork_5__0____Vfork_6__1(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlForkSync __Vfork_6__sync, IData/*31:0*/ __VlefCall_1__uvm_report_enabled);
  public:
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_drop_objection(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual VlCoroutine __VnoInFunc_force_stop(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_do_stop_all(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp);
  private:
    VlCoroutine __VnoInFunc_m_do_stop_all____Vfork_1__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> comp);
  public:
    VlCoroutine __VnoInFunc_m_stop_request(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_m_stop_request____Vfork_3__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_m_stop_request____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__3);
  public:
    virtual void __VnoInFunc_qualify(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ is_raise, std::string description);
    virtual void __VnoInFunc_raise_objection(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_stop_request(VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_stop_request____Vfork_2__0(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_test_done_objection();
};


#endif  // guard
