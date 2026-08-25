// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    double __PVT__m_resolution;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_set_time_resolution(VUVM_Register8b__Syms* __restrict vlSymsp, double res);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__m_time;
    double __PVT__m_res;
    std::string __PVT__m_name;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    std::string __Vtask_uvm_report_error__5__filename;
    std::string __Vtask_uvm_report_error__5__context_name;
    std::string __Vfunc_uvm_report_enabled__9__id;
    std::string __Vtask_uvm_report_fatal__13__id;
    std::string __Vtask_uvm_report_fatal__13__message;
    std::string __Vtask_uvm_report_fatal__13__filename;
    std::string __Vtask_uvm_report_fatal__13__context_name;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vtask_uvm_report_error__22__id;
    std::string __Vtask_uvm_report_error__22__message;
    std::string __Vtask_uvm_report_error__22__filename;
    std::string __Vtask_uvm_report_error__22__context_name;
    std::string __Vfunc_uvm_report_enabled__26__id;
    std::string __Vtask_uvm_report_fatal__30__id;
    std::string __Vtask_uvm_report_fatal__30__message;
    std::string __Vtask_uvm_report_fatal__30__filename;
    std::string __Vtask_uvm_report_fatal__30__context_name;
    std::string __Vfunc_uvm_report_enabled__35__id;
    std::string __Vtask_uvm_report_error__39__id;
    std::string __Vtask_uvm_report_error__39__message;
    std::string __Vtask_uvm_report_error__39__filename;
    std::string __Vtask_uvm_report_error__39__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_time"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time(*this); }
    void __VnoInFunc_decr(VUVM_Register8b__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_get_abstime(VUVM_Register8b__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn);
    void __VnoInFunc_get_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    void __VnoInFunc_get_realtime(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn);
    void __VnoInFunc_incr(VUVM_Register8b__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_abstime(VUVM_Register8b__Syms* __restrict vlSymsp, double t, double secs);
    void __VnoInFunc_to_m_res(VUVM_Register8b__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, double res);
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_time() {}
};


#endif  // guard
