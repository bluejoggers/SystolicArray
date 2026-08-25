// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ6__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ6__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_event_;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6;
class VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz6;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_global(VUVM_Activator__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_event_> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6> &get_global_pool__Vfuncrtn);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz6__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6 : public VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz6 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__3__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_string_pool__Tz6"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_delete(VUVM_Activator__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_event_> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz6();
};


#endif  // guard
