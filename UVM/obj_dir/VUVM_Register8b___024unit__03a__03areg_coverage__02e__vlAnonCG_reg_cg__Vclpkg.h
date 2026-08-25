// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_COVERAGE__02E__VLANONCG_REG_CG__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_COVERAGE__02E__VLANONCG_REG_CG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Register8b_std.h"


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg();
    ~VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class VUVM_Register8b__Syms;

class VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VUVM_Register8b_vl_covergroup_options_t__struct__0 __PVT__option;
    VUVM_Register8b_vl_covergroup_type_options_t__struct__0 __PVT__type_option;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_coverage.__vlAnonCG_reg_cg"; }
    VlClass* clone() const { return new VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg(*this); }
    void __VnoInFunc_get_inst_coverage(VUVM_Register8b__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_get_inst_coverage__Vtcwrap_1_2(VUVM_Register8b__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
    void __VnoInFunc_sample(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_set_inst_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(VUVM_Register8b__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(VUVM_Register8b__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    ~VUVM_Register8b___024unit__03a__03areg_coverage__02e__vlAnonCG_reg_cg() {}
};


#endif  // guard
