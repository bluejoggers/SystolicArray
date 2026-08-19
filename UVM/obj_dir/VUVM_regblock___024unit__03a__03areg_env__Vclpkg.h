// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_ENV__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_ENV__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_agent;
class VUVM_regblock___024unit__03a__03areg_monitor;
class VUVM_regblock___024unit__03a__03areg_scoreboard;
class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_imp__Tz59_TBz77;
class VUVM_regblock_uvm_pkg__03a__03auvm_analysis_port__Tz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi19;
class VUVM_regblock_uvm_pkg__03a__03auvm_env;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock___024unit__03a__03areg_env__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock___024unit__03a__03areg_env__Vclpkg();
    ~VUVM_regblock___024unit__03a__03areg_env__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock___024unit__03a__03areg_env__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component_registry__pi19> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_env__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock___024unit__03a__03areg_env : public VUVM_regblock_uvm_pkg__03a__03auvm_env {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock___024unit__03a__03areg_agent> __PVT__agent_in_env;
    VlClassRef<VUVM_regblock___024unit__03a__03areg_scoreboard> __PVT__scoreboard_in_env;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_env"; }
    VlClass* clone() const { return new VUVM_regblock___024unit__03a__03areg_env(*this); }
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
    VUVM_regblock___024unit__03a__03areg_env() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_regblock___024unit__03a__03areg_env();
};


#endif  // guard
