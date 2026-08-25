// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ14__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ14__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_std__03a__03aprocess;
class VUVM_Activator_uvm_pkg__03a__03am_uvm_waiter;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz49;
class VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz4;
class VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_Activator_uvm_pkg__03a__03auvm_resource__Tz14;
class VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz14;
class VUVM_Activator_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_Activator_uvm_pkg__03a__03auvm_root;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_glob_to_re__32__glob;
    std::string __Vfunc_uvm_re_match__33__re;
    std::string __Vfunc_uvm_re_match__33__str;
    VlAssocArray<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component>, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_pool__Tz2_TBz49>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_exists(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> value);
    VlCoroutine __VnoInFunc_wait_modified(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz14__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14 : public VUVM_Activator_uvm_pkg__03a__03auvm_resource_db__Tz14 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz14"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14(*this); }
    VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_config_db__Tz14();
};


#endif  // guard
