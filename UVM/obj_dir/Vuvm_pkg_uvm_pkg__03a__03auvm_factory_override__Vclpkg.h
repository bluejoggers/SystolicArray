// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__selected;
    IData/*31:0*/ __PVT__used;
    std::string __PVT__full_inst_path;
    std::string __PVT__orig_type_name;
    std::string __PVT__ovrd_type_name;
    std::string __Vtask_uvm_report_fatal__0__id;
    std::string __Vtask_uvm_report_fatal__0__message;
    std::string __Vtask_uvm_report_fatal__0__filename;
    std::string __Vtask_uvm_report_fatal__0__context_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> __PVT__orig_type;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> __PVT__ovrd_type;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_override"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override(*this); }
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type);
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_factory_override() {}
};


#endif  // guard
