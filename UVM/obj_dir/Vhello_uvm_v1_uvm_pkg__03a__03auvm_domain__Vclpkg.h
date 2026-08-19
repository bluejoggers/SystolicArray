// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_build_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_check_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_configure_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_connect_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_extract_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_final_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_main_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_post_configure_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_post_main_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_post_reset_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pre_main_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_report_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reset_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_run_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_shutdown_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __PVT__m_common_domain;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    std::string __Vtask_uvm_report_error__5__filename;
    std::string __Vtask_uvm_report_error__5__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_domain"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain();
};


#endif  // guard
