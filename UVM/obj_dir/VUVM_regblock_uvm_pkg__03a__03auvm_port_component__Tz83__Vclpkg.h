// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ83__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ83__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79;
class VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83 : public VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79> __PVT__m_port;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_port_component__Tz83"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_connected_to(VUVM_regblock__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base>> &list);
    void __VnoInFunc_get_port(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79> &get_port__Vfuncrtn);
    virtual void __VnoInFunc_get_provided_to(VUVM_regblock__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_component_base>> &list);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz79> port);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_port_component__Tz83();
};


#endif  // guard
