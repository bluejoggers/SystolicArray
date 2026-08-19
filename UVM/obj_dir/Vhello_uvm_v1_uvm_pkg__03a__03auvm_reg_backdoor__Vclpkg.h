// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_BACKDOOR__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_REG_BACKDOOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_std__03a__03aprocess;
class Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_40;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz67_TBz66;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi17;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__34__id;
    std::string __Vtask_uvm_report_fatal__38__id;
    std::string __Vtask_uvm_report_fatal__38__message;
    std::string __Vtask_uvm_report_fatal__38__filename;
    std::string __Vtask_uvm_report_fatal__38__context_name;
    std::string __Vtask___VforkTask_0__44____VlefCall_2__get_name;
    std::string __Vfunc_uvm_report_enabled__49__id;
    std::string __Vtask_get_name__53__Vfuncout;
    std::string __Vtask_uvm_report_error__54__id;
    std::string __Vtask_uvm_report_error__54__message;
    std::string __Vtask_uvm_report_error__54__filename;
    std::string __Vtask_uvm_report_error__54__context_name;
    std::string __Vfunc_uvm_report_enabled__64__id;
    std::string __Vtask_uvm_report_fatal__68__id;
    std::string __Vtask_uvm_report_fatal__68__message;
    std::string __Vtask_uvm_report_fatal__68__filename;
    std::string __Vtask_uvm_report_fatal__68__context_name;
    std::string __Vfunc_uvm_report_enabled__75__id;
    std::string __Vtask_uvm_report_fatal__79__id;
    std::string __Vtask_uvm_report_fatal__79__message;
    std::string __Vtask_uvm_report_fatal__79__filename;
    std::string __Vtask_uvm_report_fatal__79__context_name;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object>, VlClassRef<Vhello_uvm_v1_std__03a__03aprocess>> __PVT__m_update_thread;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_backdoor"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_post_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_post_write(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_pre_write(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_update_threads(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_updated(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn);
    void __VnoInFunc_kill_update_thread(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> element);
    virtual void __VnoInFunc_post_read(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_read_func(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_start_update_thread(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> element);
  private:
    VlCoroutine __VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_40> __VDynScope_start_update_thread_0);
  public:
    virtual void __VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> element);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_backdoor();
};


#endif  // guard
