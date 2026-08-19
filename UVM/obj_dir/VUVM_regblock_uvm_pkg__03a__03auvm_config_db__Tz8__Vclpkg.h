// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ8__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ8__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_std__03a__03aprocess;
class VUVM_regblock_uvm_pkg__03a__03am_uvm_waiter;
class VUVM_regblock_uvm_pkg__03a__03auvm_component;
class VUVM_regblock_uvm_pkg__03a__03auvm_config_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_coreservice_t;
class VUVM_regblock_uvm_pkg__03a__03auvm_phase;
class VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz48;
class VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz4;
class VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz5;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource__Tz8;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz8;
class VUVM_regblock_uvm_pkg__03a__03auvm_resource_pool;
class VUVM_regblock_uvm_pkg__03a__03auvm_root;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_glob_to_re__32__glob;
    std::string __Vfunc_uvm_re_match__33__re;
    std::string __Vfunc_uvm_re_match__33__str;
    VlAssocArray<VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component>, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_pool__Tz2_TBz48>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_config_object_wrapper> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_config_object_wrapper> value);
    VlCoroutine __VnoInFunc_wait_modified(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz8__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8 : public VUVM_regblock_uvm_pkg__03a__03auvm_resource_db__Tz8 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz8"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_config_db__Tz8();
};


#endif  // guard
