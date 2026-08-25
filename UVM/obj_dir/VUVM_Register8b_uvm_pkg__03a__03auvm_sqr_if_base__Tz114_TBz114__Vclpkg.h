// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ114_TBZ114__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ114_TBZ114__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_error__0__id;
    std::string __Vtask_uvm_report_error__0__message;
    std::string __Vtask_uvm_report_error__0__filename;
    std::string __Vtask_uvm_report_error__0__context_name;
    std::string __Vtask_uvm_report_error__4__id;
    std::string __Vtask_uvm_report_error__4__message;
    std::string __Vtask_uvm_report_error__4__filename;
    std::string __Vtask_uvm_report_error__4__context_name;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    std::string __Vtask_uvm_report_error__8__filename;
    std::string __Vtask_uvm_report_error__8__context_name;
    std::string __Vtask_uvm_report_error__12__id;
    std::string __Vtask_uvm_report_error__12__message;
    std::string __Vtask_uvm_report_error__12__filename;
    std::string __Vtask_uvm_report_error__12__context_name;
    std::string __Vtask_uvm_report_error__16__id;
    std::string __Vtask_uvm_report_error__16__message;
    std::string __Vtask_uvm_report_error__16__filename;
    std::string __Vtask_uvm_report_error__16__context_name;
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    std::string __Vtask_uvm_report_error__20__filename;
    std::string __Vtask_uvm_report_error__20__context_name;
    std::string __Vtask_uvm_report_error__24__id;
    std::string __Vtask_uvm_report_error__24__message;
    std::string __Vtask_uvm_report_error__24__filename;
    std::string __Vtask_uvm_report_error__24__context_name;
    std::string __Vtask_uvm_report_error__28__id;
    std::string __Vtask_uvm_report_error__28__message;
    std::string __Vtask_uvm_report_error__28__filename;
    std::string __Vtask_uvm_report_error__28__context_name;
    std::string __Vtask_uvm_report_error__32__id;
    std::string __Vtask_uvm_report_error__32__message;
    std::string __Vtask_uvm_report_error__32__filename;
    std::string __Vtask_uvm_report_error__32__context_name;
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    std::string __Vtask_uvm_report_error__36__filename;
    std::string __Vtask_uvm_report_error__36__context_name;
    std::string __Vtask_uvm_report_error__40__id;
    std::string __Vtask_uvm_report_error__40__message;
    std::string __Vtask_uvm_report_error__40__filename;
    std::string __Vtask_uvm_report_error__40__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sqr_if_base__Tz114_TBz114"; }
    virtual void __VnoInFunc_disable_auto_item_recording(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_has_do_available(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VUVM_Register8b__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_sqr_if_base__Tz114_TBz114();
};


#endif  // guard
