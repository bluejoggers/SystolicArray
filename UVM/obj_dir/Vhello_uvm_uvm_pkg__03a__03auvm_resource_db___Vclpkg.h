// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB___VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_DB___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_resource_db___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    std::string __Vtask_uvm_report_info__11__filename;
    std::string __Vtask_uvm_report_info__11__context_name;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_db___Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_db___Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_resource_db___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vhello_uvm__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1> rsrc);
    void __VnoInFunc_read_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> val, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_ : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_db_"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_();
};


#endif  // guard
