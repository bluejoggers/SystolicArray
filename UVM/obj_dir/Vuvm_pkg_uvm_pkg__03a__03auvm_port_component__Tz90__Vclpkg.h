// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ90__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ90__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz81;
class Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90 : public Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz81> __PVT__m_port;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_component__Tz90"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_connected_to(Vuvm_pkg__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base>> &list);
    void __VnoInFunc_get_port(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz81> &get_port__Vfuncrtn);
    virtual void __VnoInFunc_get_provided_to(Vuvm_pkg__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz81> port);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_port_component__Tz90();
};


#endif  // guard
