// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ16__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ16__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_std__03a__03aprocess;
class Vuvm_pkg_uvm_pkg__03a__03am_uvm_waiter;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz5_TBz41;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz28;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz29;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz16;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz16;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;
class Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_glob_to_re__32__glob;
    std::string __Vfunc_uvm_re_match__33__re;
    std::string __Vfunc_uvm_re_match__33__str;
    VlAssocArray<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component>, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz5_TBz41>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz28>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> value);
    VlCoroutine __VnoInFunc_wait_modified(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz16__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16 : public Vuvm_pkg_uvm_pkg__03a__03auvm_resource_db__Tz16 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz16"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_config_db__Tz16();
};


#endif  // guard
