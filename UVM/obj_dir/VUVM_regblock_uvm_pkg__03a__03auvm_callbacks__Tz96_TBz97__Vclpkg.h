// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CALLBACKS__TZ96_TBZ97__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CALLBACKS__TZ96_TBZ97__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_callback;
class VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96;
class VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97;
class VUVM_regblock_uvm_pkg__03a__03auvm_callbacks_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz12_TBz52;
class VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz50;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_typed_callbacks__Tz96;
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz50;
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz96;
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz97;
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field;
class VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97__Vclpkg final {
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
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97> __PVT__m_inst;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97> &get__Vfuncrtn);
    void __VnoInFunc_get_first(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz50> &q, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_vreg_field> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_typed_callbacks__Tz96__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97 : public VUVM_regblock_uvm_pkg__03a__03auvm_typed_callbacks__Tz96 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz96_TBz97"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_callbacks__Tz96_TBz97();
};


#endif  // guard
