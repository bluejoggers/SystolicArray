// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ12__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ12__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_std__03a__03aprocess;
class VUVM_Register8b_uvm_pkg__03a__03am_uvm_waiter;
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_phase;
class VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz98;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz4;
class VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource__Tz12;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_db_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_Register8b_uvm_pkg__03a__03auvm_root;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_glob_to_re__32__glob;
    std::string __Vfunc_uvm_re_match__33__re;
    std::string __Vfunc_uvm_re_match__33__str;
    VlAssocArray<VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component>, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz98>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_exists(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> value);
    VlCoroutine __VnoInFunc_wait_modified(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_resource_db___Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12 : public VUVM_Register8b_uvm_pkg__03a__03auvm_resource_db_ {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz12"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12(*this); }
    VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_config_db__Tz12();
};


#endif  // guard
