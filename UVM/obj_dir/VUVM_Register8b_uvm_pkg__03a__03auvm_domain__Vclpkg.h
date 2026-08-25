// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_build_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_check_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_configure_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_connect_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_domain;
class VUVM_Register8b_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_extract_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_final_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_main_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_post_configure_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_post_main_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_post_reset_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_post_shutdown_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pre_configure_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pre_main_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pre_reset_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_report_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_reset_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;
class VUVM_Register8b_uvm_pkg__03a__03auvm_run_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_shutdown_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain> __PVT__m_common_domain;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(VUVM_Register8b__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_domain : public VUVM_Register8b_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    std::string __Vtask_uvm_report_error__5__filename;
    std::string __Vtask_uvm_report_error__5__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_domain"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_domain(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_domain() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_domain();
};


#endif  // guard
