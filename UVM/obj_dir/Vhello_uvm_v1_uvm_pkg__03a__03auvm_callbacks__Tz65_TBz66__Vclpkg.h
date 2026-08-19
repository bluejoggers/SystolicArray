// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_CALLBACKS__TZ65_TBZ66__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_CALLBACKS__TZ65_TBZ66__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pool__Tz13_TBz53;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typed_callbacks__Tz65;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz51;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz65;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid__Tz66;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg final {
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
    std::string __Vtask_uvm_report_warning__49__id;
    std::string __Vtask_uvm_report_warning__49__message;
    std::string __Vtask_uvm_report_warning__49__filename;
    std::string __Vtask_uvm_report_warning__49__context_name;
    std::string __Vtask_uvm_report_error__61__id;
    std::string __Vtask_uvm_report_error__61__message;
    std::string __Vtask_uvm_report_error__61__filename;
    std::string __Vtask_uvm_report_error__61__context_name;
    std::string __Vtask_uvm_report_warning__67__id;
    std::string __Vtask_uvm_report_warning__67__message;
    std::string __Vtask_uvm_report_warning__67__filename;
    std::string __Vtask_uvm_report_warning__67__context_name;
    std::string __Vtask_uvm_report_warning__78__id;
    std::string __Vtask_uvm_report_warning__78__message;
    std::string __Vtask_uvm_report_warning__78__filename;
    std::string __Vtask_uvm_report_warning__78__context_name;
    std::string __Vtask_uvm_report_warning__87__id;
    std::string __Vtask_uvm_report_warning__87__message;
    std::string __Vtask_uvm_report_warning__87__filename;
    std::string __Vtask_uvm_report_warning__87__context_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66> __PVT__m_inst;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66> &get__Vfuncrtn);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz51> &q, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_typed_callbacks__Tz65__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_typed_callbacks__Tz65 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz65_TBz66"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66();
};


#endif  // guard
