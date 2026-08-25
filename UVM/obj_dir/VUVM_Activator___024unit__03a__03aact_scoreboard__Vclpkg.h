// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR___024UNIT__03A__03AACT_SCOREBOARD__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR___024UNIT__03A__03AACT_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator___024unit__03a__03aact_scoreboard;
class VUVM_Activator___024unit__03a__03aact_txn;
class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz76;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi20;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_scoreboard;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg();
    ~VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator___024unit__03a__03aact_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component_registry__pi20> &get_type__Vfuncrtn);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_scoreboard__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator___024unit__03a__03aact_scoreboard : public VUVM_Activator_uvm_pkg__03a__03auvm_scoreboard {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz61_TBz76> __PVT__scoreboard_analysis_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::act_scoreboard"; }
    VlClass* clone() const { return new VUVM_Activator___024unit__03a__03aact_scoreboard(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> txn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator___024unit__03a__03aact_scoreboard() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Activator___024unit__03a__03aact_scoreboard();
};


#endif  // guard
