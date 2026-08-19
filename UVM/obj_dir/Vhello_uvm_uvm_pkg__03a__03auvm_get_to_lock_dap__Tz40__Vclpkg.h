// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__TZ40__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__TZ40__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__Tz79;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_packer;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40;
class Vhello_uvm_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__Tz79> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40 : public Vhello_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz40 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_value;
    CData/*0:0*/ __PVT__m_locked;
    std::string __Vfunc_uvm_report_enabled__6__id;
    std::string __Vtask_uvm_report_error__11__id;
    std::string __Vtask_uvm_report_error__11__message;
    std::string __Vtask_uvm_report_error__11__filename;
    std::string __Vtask_uvm_report_error__11__context_name;
    std::string __Vfunc_uvm_report_enabled__16__id;
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    std::string __Vtask_uvm_report_error__20__filename;
    std::string __Vtask_uvm_report_error__20__context_name;
    std::string __Vfunc_uvm_report_enabled__24__id;
    std::string __Vtask_uvm_report_error__28__id;
    std::string __Vtask_uvm_report_error__28__message;
    std::string __Vtask_uvm_report_error__28__filename;
    std::string __Vtask_uvm_report_error__28__context_name;
    std::string __Vfunc_uvm_report_enabled__32__id;
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    std::string __Vtask_uvm_report_error__36__filename;
    std::string __Vtask_uvm_report_error__36__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_to_lock_dap__Tz40"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_try_get(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &value, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_set(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ value, CData/*0:0*/ &try_set__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz40();
};


#endif  // guard
