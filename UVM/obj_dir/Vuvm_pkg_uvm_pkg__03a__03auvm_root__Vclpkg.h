// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vuvm_pkg_std__03a__03aprocess;
class Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_16;
class Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component_proxy;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_domain;
class Vuvm_pkg_uvm_pkg__03a__03auvm_factory;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_handler;
class Vuvm_pkg_uvm_pkg__03a__03auvm_report_server;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_test_done_objection;
class Vuvm_pkg_uvm_pkg__03a__03auvm_top_down_visitor_adapter_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_visitor_;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_root__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_relnotes_done;
    CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_root__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_root__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
    void __VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_root : public Vuvm_pkg_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__finish_on_completion;
    CData/*0:0*/ __PVT__enable_print_topology;
    CData/*0:0*/ __PVT__m_phase_all_done;
    QData/*63:0*/ __PVT__phase_timeout;
    std::string __Vfunc_m_uvm_string_queue_join__25__Vfuncout;
    std::string __Vfunc_uvm_is_match__66__expr;
    std::string __Vfunc_uvm_is_match__66__str;
    std::string __Vfunc_uvm_glob_to_re__67__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__67__glob;
    std::string __Vfunc_uvm_re_match__68__re;
    std::string __Vfunc_uvm_re_match__68__str;
    std::string __Vtask_uvm_split_string__81__str;
    std::string __Vtask_uvm_split_string__97__str;
    std::string __Vtask_uvm_split_string__103__str;
    std::string __Vtask_uvm_split_string__110__str;
    std::string __Vtask_uvm_split_string__121__str;
    std::string __Vtask_uvm_split_string__139__str;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> __PVT__top_levels;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_root"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_root(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(Vuvm_pkg__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int);
    void __VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string cfg);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_test(Vuvm_pkg__Syms* __restrict vlSymsp, std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_16> __VDynScope_run_test_0);
  public:
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable);
    void __VnoInFunc_stop_request(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_root() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_root();
};


#endif  // guard
