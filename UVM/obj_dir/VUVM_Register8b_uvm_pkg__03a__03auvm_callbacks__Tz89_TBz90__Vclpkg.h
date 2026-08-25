// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACKS__TZ89_TBZ90__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CALLBACKS__TZ89_TBZ90__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_callback;
class VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89;
class VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90;
class VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz12_TBz52;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz89;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz50;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz89;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz90;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg final {
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
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90> __PVT__m_inst;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_typeid;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base> __PVT__m_cb_typeid;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_report_object> __PVT__reporter;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89> __PVT__m_base_inst;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_add(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    void __VnoInFunc_add_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> root, IData/*31:0*/ ordering);
    void __VnoInFunc_delete(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb);
    void __VnoInFunc_delete_by_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> root);
    void __VnoInFunc_display(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90> &get__Vfuncrtn);
    void __VnoInFunc_get_first(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &get_first__Vfuncrtn);
    void __VnoInFunc_get_last(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &get_last__Vfuncrtn);
    void __VnoInFunc_get_next(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &get_next__Vfuncrtn);
    void __VnoInFunc_get_prev(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &itr, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_cbs> &get_prev__Vfuncrtn);
    void __VnoInFunc_m_get_q(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50> &q, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_m_register_pair(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string tname, std::string cbname, CData/*0:0*/ &m_register_pair__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz89__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90 : public VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz89 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_registered;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_callbacks__Tz89_TBz90"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_is_for_me(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn);
    virtual void __VnoInFunc_m_is_registered(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks__Tz89_TBz90();
};


#endif  // guard
