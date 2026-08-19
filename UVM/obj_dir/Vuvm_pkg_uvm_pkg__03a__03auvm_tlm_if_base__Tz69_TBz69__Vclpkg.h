// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_IF_BASE__TZ69_TBZ69__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_IF_BASE__TZ69_TBZ69__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69 : public virtual VlClass {
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
    std::string __Vtask_uvm_report_error__44__id;
    std::string __Vtask_uvm_report_error__44__message;
    std::string __Vtask_uvm_report_error__44__filename;
    std::string __Vtask_uvm_report_error__44__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_if_base__Tz69_TBz69"; }
    virtual void __VnoInFunc_can_get(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_nb_transport(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> req, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &rsp, CData/*0:0*/ &nb_transport__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_transport(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> req, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &rsp);
    virtual void __VnoInFunc_try_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_if_base__Tz69_TBz69();
};


#endif  // guard
