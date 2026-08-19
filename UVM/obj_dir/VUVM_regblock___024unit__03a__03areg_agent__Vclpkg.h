// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_AGENT__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_AGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_coverage;
class VUVM_regblock___024unit__03a__03areg_driver;
class VUVM_regblock___024unit__03a__03areg_monitor;
class VUVM_regblock___024unit__03a__03areg_sequencer;
class VUVM_regblock_uvm_pkg__03a__03auvm_agent;
class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz80;
class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_port__Tz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi18;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi23;
class VUVM_regblock_uvm_pkg__03a__03auvm_seq_item_pull_port__pi22;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock___024unit__03a__03areg_agent__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock___024unit__03a__03areg_agent__Vclpkg();
    ~VUVM_regblock___024unit__03a__03areg_agent__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock___024unit__03a__03areg_agent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi18> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_agent__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock___024unit__03a__03areg_agent : public VUVM_regblock_uvm_pkg__03a__03auvm_agent {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock___024unit__03a__03areg_monitor> __PVT__monitor_in_agent;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_driver> __PVT__driver_in_agent;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_sequencer> __PVT__sequencer_in_agent;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_coverage> __PVT__coverage_in_agent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_agent"; }
    VlClass* clone() const { return new VUVM_regblock___024unit__03a__03areg_agent(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock___024unit__03a__03areg_agent() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock___024unit__03a__03areg_agent();
};


#endif  // guard
