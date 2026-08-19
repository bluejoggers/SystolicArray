// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_PORT_BASE__TZ90__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_PORT_BASE__TZ90__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component__Tz94;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component_base;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_sqr_if_base__Tz26_TBz26 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90> __PVT__m_if;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component__Tz94> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90>> __PVT__m_imp_list;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_base__Tz90"; }
    virtual void __VnoInFunc_connect(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90> provider);
    void __VnoInFunc_debug_connected_to(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90> provider);
    void __VnoInFunc_m_check_relationship(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_port_base__Tz90();
};


#endif  // guard
