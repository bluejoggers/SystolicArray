// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg final {
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
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc> &get_by_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc : public Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz5 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_string_rsrc"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_string_rsrc();
};


#endif  // guard
