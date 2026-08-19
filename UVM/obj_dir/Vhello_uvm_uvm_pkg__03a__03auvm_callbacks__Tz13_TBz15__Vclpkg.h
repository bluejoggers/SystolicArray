// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CALLBACKS__TZ13_TBZ15__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CALLBACKS__TZ13_TBZ15__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_callback;
class Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13;
class Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15;
class Vhello_uvm_uvm_pkg__03a__03auvm_callbacks_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_objection;
class Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz1_TBz61;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34;
class Vhello_uvm_uvm_pkg__03a__03auvm_report_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz13;
class Vhello_uvm_uvm_pkg__03a__03auvm_typeid__Tz13;
class Vhello_uvm_uvm_pkg__03a__03auvm_typeid__Tz15;
class Vhello_uvm_uvm_pkg__03a__03auvm_typeid__Tz34;
class Vhello_uvm_uvm_pkg__03a__03auvm_typeid_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __PVT__m_cb_typename;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_fatal__11__id;
    std::string __Vtask_uvm_report_fatal__11__message;
    std::string __Vtask_uvm_report_fatal__11__filename;
    std::string __Vtask_uvm_report_fatal__11__context_name;
    std::string __Vtask_uvm_report_error__19__id;
    std::string __Vtask_uvm_report_error__19__message;
    std::string __Vtask_uvm_report_error__19__filename;
    std::string __Vtask_uvm_report_error__19__context_name;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    std::string __Vtask_uvm_report_warning__28__filename;
    std::string __Vtask_uvm_report_warning__28__context_name;
    std::string __Vtask_uvm_report_warning__34__id;
    std::string __Vtask_uvm_report_warning__34__message;
    std::string __Vtask_uvm_report_warning__34__filename;
    std::string __Vtask_uvm_report_warning__34__context_name;
    std::string __Vtask_uvm_report_warning__53__id;
    std::string __Vtask_uvm_report_warning__53__message;
    std::string __Vtask_uvm_report_warning__53__filename;
    std::string __Vtask_uvm_report_warning__53__context_name;
    std::string __Vtask_uvm_report_error__65__id;
    std::string __Vtask_uvm_report_error__65__message;
    std::string __Vtask_uvm_report_error__65__filename;
    std::string __Vtask_uvm_report_error__65__context_name;
    std::string __Vtask_uvm_report_warning__71__id;
    std::string __Vtask_uvm_report_warning__71__message;
    std::string __Vtask_uvm_report_warning__71__filename;
    std::string __Vtask_uvm_report_warning__71__context_name;
    std::string __Vtask_uvm_report_warning__82__id;
    std::string __Vtask_uvm_report_warning__82__message;
    std::string __Vtask_uvm_report_warning__82__filename;
    std::string __Vtask_uvm_report_warning__82__context_name;
    std::string __Vtask_uvm_report_warning__91__id;
    std::string __Vtask_uvm_report_warning__91__message;
    std::string __Vtask_uvm_report_warning__91__filename;
    std::string __Vtask_uvm_report_warning__91__context_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15> __PVT__m_inst;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15> &get__Vfuncrtn);
    void __VnoInFunc_get_first(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_heartbeat_callback> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34> &q, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_objection> obj);
    void __VnoInFunc_m_register_pair(Vhello_uvm__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz13__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15 : public Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz13 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz13_TBz15"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_callbacks__Tz13_TBz15();
};


#endif  // guard
