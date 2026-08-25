// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ113_TBZ113__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ113_TBZ113__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113 : public virtual VlClass {
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
    virtual const char* typeName() const { return "uvm_pkg::uvm_sqr_if_base__Tz113_TBz113"; }
    virtual void __VnoInFunc_disable_auto_item_recording(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_has_do_available(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_item_recording_enabled(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_put(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(VUVM_Activator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_sqr_if_base__Tz113_TBz113();
};


#endif  // guard
