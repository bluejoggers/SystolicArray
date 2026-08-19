// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ17__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ17__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz17;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    std::string __Vtask_uvm_report_info__11__filename;
    std::string __Vtask_uvm_report_info__11__context_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz17> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz17> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vuvm_pkg__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz17> rsrc);
    void __VnoInFunc_read_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ &val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ &val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz17> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, std::string name, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vuvm_pkg__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ val, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db__Tz17"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz17() {}
};


#endif  // guard
