// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    double __PVT__m_resolution;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_time_resolution(Vhello_uvm__Syms* __restrict vlSymsp, double res);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time : public virtual VlClass {
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
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time(*this); }
    void __VnoInFunc_decr(Vhello_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_get_abstime(Vhello_uvm__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn);
    void __VnoInFunc_get_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    void __VnoInFunc_get_realtime(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn);
    void __VnoInFunc_incr(Vhello_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_abstime(Vhello_uvm__Syms* __restrict vlSymsp, double t, double secs);
    void __VnoInFunc_to_m_res(Vhello_uvm__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, double res);
    ~Vhello_uvm_uvm_pkg__03a__03auvm_tlm_time() {}
};


#endif  // guard
