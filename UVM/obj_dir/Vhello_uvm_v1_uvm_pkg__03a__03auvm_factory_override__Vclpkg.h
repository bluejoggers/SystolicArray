// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
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
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> __PVT__orig_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> __PVT__ovrd_type;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_override"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override(*this); }
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type);
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory_override() {}
};


#endif  // guard
