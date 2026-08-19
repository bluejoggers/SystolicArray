// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_INT_RSRC__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_INT_RSRC__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_fatal__5__id;
    std::string __Vtask_uvm_report_fatal__5__message;
    std::string __Vtask_uvm_report_fatal__5__filename;
    std::string __Vtask_uvm_report_fatal__5__context_name;
    std::string __Vfunc_uvm_report_enabled__10__id;
    std::string __Vtask_uvm_report_fatal__14__id;
    std::string __Vtask_uvm_report_fatal__14__message;
    std::string __Vtask_uvm_report_fatal__14__filename;
    std::string __Vtask_uvm_report_fatal__14__context_name;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc> &get_by_type__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource___Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_resource_ {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_int_rsrc"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_int_rsrc();
};


#endif  // guard
