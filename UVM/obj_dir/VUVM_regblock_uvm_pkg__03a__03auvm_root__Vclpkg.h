// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23;
class VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_component_proxy;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_domain;
class VUVM_regblock_uvm_pkg__03a__03auvm_factory;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_handler;
class VUVM_regblock_uvm_pkg__03a__03auvm_report_server;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;
class VUVM_regblock_uvm_pkg__03a__03auvm_test_done_objection;
class VUVM_regblock_uvm_pkg__03a__03auvm_top_down_visitor_adapter_;
class VUVM_regblock_uvm_pkg__03a__03auvm_visitor_;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_relnotes_done;
    CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> __PVT__m_inst;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
    void __VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_root : public VUVM_regblock_uvm_pkg__03a__03auvm_component {
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
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> __PVT__top_levels;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_root"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_root(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int);
    void __VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string cfg);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_phase_started(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_test(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0);
  public:
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable);
    void __VnoInFunc_stop_request(VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_root() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_root();
};


#endif  // guard
