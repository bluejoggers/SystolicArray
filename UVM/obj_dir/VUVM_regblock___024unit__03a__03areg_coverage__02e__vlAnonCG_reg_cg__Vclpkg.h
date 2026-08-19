// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_COVERAGE__02E__VLANONCG_REG_CG__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_COVERAGE__02E__VLANONCG_REG_CG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_regblock_std.h"


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg();
    ~VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_coverage(VUVM_regblock__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class VUVM_regblock__Syms;

class VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VUVM_regblock_vl_covergroup_options_t__struct__0 __PVT__option;
    VUVM_regblock_vl_covergroup_type_options_t__struct__0 __PVT__type_option;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_coverage.__vlAnonCG_reg_cg"; }
    VlClass* clone() const { return new VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg(*this); }
    void __VnoInFunc_get_inst_coverage(VUVM_regblock__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_sample(VUVM_regblock__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_set_inst_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(VUVM_regblock__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(VUVM_regblock__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    ~VUVM_regblock___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg() {}
};


#endif  // guard
