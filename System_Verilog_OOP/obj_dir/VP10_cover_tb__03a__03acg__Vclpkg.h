// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP10.h for the primary calling header

#ifndef VERILATED_VP10_COVER_TB__03A__03ACG__VCLPKG_H_
#define VERILATED_VP10_COVER_TB__03A__03ACG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "VP10_std.h"


class VP10__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP10_cover_tb__03a__03acg__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    VP10__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP10_cover_tb__03a__03acg__Vclpkg();
    ~VP10_cover_tb__03a__03acg__Vclpkg();
    void ctor(VP10__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP10_cover_tb__03a__03acg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
    void __VnoInFunc_get_coverage(VP10__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class VP10__Syms;

class VP10_cover_tb__03a__03acg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VP10_vl_covergroup_options_t__struct__0 __PVT__option;
    VP10_vl_covergroup_type_options_t__struct__0 __PVT__type_option;
    VlCoverpoint __PVT____Vcp_mode;
    VlCoverpoint __PVT____Vcp_cfg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "cover_tb::cg"; }
    VlClass* clone() const { return new VP10_cover_tb__03a__03acg(*this); }
    void __VnoInFunc_get_inst_coverage(VP10__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_get_inst_coverage__Vtcwrap_1_2(VP10__Syms* __restrict vlSymsp, double &get_inst_coverage__Vtcwrap_1_2__Vfuncrtn);
    void __VnoInFunc_sample(VP10__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_inst_name(VP10__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(VP10__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(VP10__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(VP10__Syms* __restrict vlSymsp);
  public:
    VP10_cover_tb__03a__03acg() = default;
    void init(VP10__Syms* __restrict vlSymsp);
    ~VP10_cover_tb__03a__03acg() {}
};


#endif  // guard
