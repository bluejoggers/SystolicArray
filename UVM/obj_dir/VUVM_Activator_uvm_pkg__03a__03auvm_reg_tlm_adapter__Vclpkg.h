// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_TLM_ADAPTER__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_REG_TLM_ADAPTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_uvm_pkg.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi42;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_adapter;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_status_container;
class VUVM_Activator_uvm_pkg__03a__03auvm_tlm_generic_payload;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi42> &get_type__Vfuncrtn);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_reg_adapter__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter : public VUVM_Activator_uvm_pkg__03a__03auvm_reg_adapter {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__13__id;
    std::string __Vtask_uvm_report_fatal__17__id;
    std::string __Vtask_uvm_report_fatal__17__message;
    std::string __Vtask_uvm_report_fatal__17__filename;
    std::string __Vtask_uvm_report_fatal__17__context_name;
    std::string __Vfunc_uvm_report_enabled__21__id;
    std::string __Vtask_uvm_report_error__25__id;
    std::string __Vtask_uvm_report_error__25__message;
    std::string __Vtask_uvm_report_error__25__filename;
    std::string __Vtask_uvm_report_error__25__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_tlm_adapter"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_bus2reg(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> bus_item, VUVM_Activator_uvm_reg_bus_op__struct__0 &rw);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reg2bus(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, const VUVM_Activator_uvm_reg_bus_op__struct__0 &rw, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> &reg2bus__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_reg_tlm_adapter();
};


#endif  // guard
