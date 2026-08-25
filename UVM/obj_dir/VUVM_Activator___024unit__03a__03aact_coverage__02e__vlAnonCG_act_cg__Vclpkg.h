// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR___024UNIT__03A__03AACT_COVERAGE__02E__VLANONCG_ACT_CG__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR___024UNIT__03A__03AACT_COVERAGE__02E__VLANONCG_ACT_CG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_std.h"


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg__Vclpkg();
    ~VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_coverage(VUVM_Activator__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class VUVM_Activator__Syms;

class VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VUVM_Activator_vl_covergroup_options_t__struct__0 __PVT__option;
    VUVM_Activator_vl_covergroup_type_options_t__struct__0 __PVT__type_option;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::act_coverage.__vlAnonCG_act_cg"; }
    VlClass* clone() const { return new VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg(*this); }
    void __VnoInFunc_get_inst_coverage(VUVM_Activator__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_get_inst_coverage__Vtcwrap_1_2(VUVM_Activator__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
    void __VnoInFunc_sample(VUVM_Activator__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_set_inst_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(VUVM_Activator__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(VUVM_Activator__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    ~VUVM_Activator___024unit__03a__03aact_coverage__02e__vlAnonCG_act_cg() {}
};


#endif  // guard
