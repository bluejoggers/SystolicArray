// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_RESOURCE__TZ7__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_RESOURCE__TZ7__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__4__id;
    std::string __Vtask_uvm_report_warning__8__id;
    std::string __Vtask_uvm_report_warning__8__message;
    std::string __Vtask_uvm_report_warning__8__filename;
    std::string __Vtask_uvm_report_warning__8__context_name;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    std::string __Vtask_uvm_report_warning__18__filename;
    std::string __Vtask_uvm_report_warning__18__context_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> __PVT__my_type;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_warning__5__id;
    std::string __Vtask_uvm_report_warning__5__message;
    std::string __Vtask_uvm_report_warning__5__filename;
    std::string __Vtask_uvm_report_warning__5__context_name;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    std::string __Vtask_uvm_report_error__17__filename;
    std::string __Vtask_uvm_report_error__17__context_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper> __PVT__val;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource__Tz7"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper> &read__Vfuncrtn);
    void __VnoInFunc_set(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_override(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_priority(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ pri);
    void __VnoInFunc_write(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_config_object_wrapper> t, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> accessor);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string scope);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource__Tz7();
};


#endif  // guard
