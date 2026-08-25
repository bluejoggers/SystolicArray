// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ90__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ90__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_callback;
class VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz12_TBz52;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_warning__12__id;
    std::string __Vtask_uvm_report_warning__12__message;
    std::string __Vtask_uvm_report_warning__12__filename;
    std::string __Vtask_uvm_report_warning__12__context_name;
    std::string __Vfunc_uvm_report_enabled__51__id;
    std::string __Vfunc_m_uvm_string_queue_join__55__Vfuncout;
    std::string __Vtask_uvm_report_info__56__id;
    std::string __Vtask_uvm_report_info__56__message;
    std::string __Vtask_uvm_report_info__56__filename;
    std::string __Vtask_uvm_report_info__56__context_name;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50> __PVT__m_tw_cb_q;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg> obj);
    void __VnoInFunc_m_cb_find(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50> q, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90> &m_initialize__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90 : public VUVM_Register8b_uvm_pkg__03a__03auvm_callbacks_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typed_callbacks__Tz90"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz50> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_typed_callbacks__Tz90();
};


#endif  // guard
