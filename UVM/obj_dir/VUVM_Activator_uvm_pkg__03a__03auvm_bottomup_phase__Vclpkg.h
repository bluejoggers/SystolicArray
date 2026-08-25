// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_BOTTOMUP_PHASE__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_BOTTOMUP_PHASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_domain;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_seed_map;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase : public VUVM_Activator_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vtask_uvm_report_info__15__id;
    std::string __Vtask_uvm_report_info__15__message;
    std::string __Vtask_uvm_report_info__15__filename;
    std::string __Vtask_uvm_report_info__15__context_name;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vtask_uvm_report_fatal__29__id;
    std::string __Vtask_uvm_report_fatal__29__message;
    std::string __Vtask_uvm_report_fatal__29__filename;
    std::string __Vtask_uvm_report_fatal__29__context_name;
    std::string __Vfunc_uvm_create_random_seed__36__type_id;
    std::string __Vfunc_uvm_create_random_seed__36__inst_id;
    std::string __Vfunc_uvm_create_random_seed__36____VlefCall_1__uvm_instance_scope;
    std::string __Vfunc_uvm_instance_scope__38__Vfuncout;
    std::string __Vtask_uvm_report_error__39__id;
    std::string __Vtask_uvm_report_error__39__message;
    std::string __Vtask_uvm_report_error__39__filename;
    std::string __Vtask_uvm_report_error__39__context_name;
    std::string __Vfunc_uvm_oneway_hash__43__string_in;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_bottomup_phase"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_execute(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_traverse(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> comp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_bottomup_phase();
};


#endif  // guard
