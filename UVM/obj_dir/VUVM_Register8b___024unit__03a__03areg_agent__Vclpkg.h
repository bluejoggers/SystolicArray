// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_AGENT__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_AGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_coverage;
class VUVM_Register8b___024unit__03a__03areg_driver;
class VUVM_Register8b___024unit__03a__03areg_monitor;
class VUVM_Register8b___024unit__03a__03areg_sequencer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_agent;
class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz78;
class VUVM_Register8b_uvm_pkg__03a__03auvm_analysis_port__Tz61;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi17;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi21;
class VUVM_Register8b_uvm_pkg__03a__03auvm_seq_item_pull_port__pi20;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b___024unit__03a__03areg_agent__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b___024unit__03a__03areg_agent__Vclpkg();
    ~VUVM_Register8b___024unit__03a__03areg_agent__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b___024unit__03a__03areg_agent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component_registry__pi17> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_agent__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b___024unit__03a__03areg_agent : public VUVM_Register8b_uvm_pkg__03a__03auvm_agent {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_monitor> __PVT__monitor_in_agent;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_driver> __PVT__driver_in_agent;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_coverage> __PVT__coverage_in_agent;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_sequencer> __PVT__sequencer_in_agent;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_agent"; }
    VlClass* clone() const { return new VUVM_Register8b___024unit__03a__03areg_agent(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b___024unit__03a__03areg_agent() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Register8b___024unit__03a__03areg_agent();
};


#endif  // guard
