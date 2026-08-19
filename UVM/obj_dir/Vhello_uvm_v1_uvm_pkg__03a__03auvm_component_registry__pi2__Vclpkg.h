// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_COMPONENT_REGISTRY__PI2__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_COMPONENT_REGISTRY__PI2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1___024unit__03a__03atest;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_factory;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    std::string __Vtask_uvm_report_fatal__12__id;
    std::string __Vtask_uvm_report_fatal__12__message;
    std::string __Vtask_uvm_report_fatal__12__filename;
    std::string __Vtask_uvm_report_fatal__12__context_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2> __PVT__me;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_create(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vhello_uvm_v1___024unit__03a__03atest> &create__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_override(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_component_registry__pi2"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2(*this); }
    virtual void __VnoInFunc_create_component(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2() = default;
    void init(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_component_registry__pi2();
};


#endif  // guard
