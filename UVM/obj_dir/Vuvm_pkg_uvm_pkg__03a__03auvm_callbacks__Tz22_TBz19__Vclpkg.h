// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACKS__TZ22_TBZ19__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CALLBACKS__TZ22_TBZ19__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_callback;
class Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22;
class Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19;
class Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz1_TBz61;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz34;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typed_callbacks__Tz22;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz19;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz22;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid__Tz34;
class Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19__Vclpkg final {
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
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19> __PVT__m_inst;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19> &get__Vfuncrtn);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz34> &q, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_typed_callbacks__Tz22__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19 : public Vuvm_pkg_uvm_pkg__03a__03auvm_typed_callbacks__Tz22 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz22_TBz19"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_callbacks__Tz22_TBz19();
};


#endif  // guard
