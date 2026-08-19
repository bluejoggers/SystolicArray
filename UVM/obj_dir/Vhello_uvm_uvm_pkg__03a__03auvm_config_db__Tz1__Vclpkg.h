// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ1__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;
class Vhello_uvm_uvm_pkg__03a__03am_uvm_waiter;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz27;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz28;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz1;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_glob_to_re__32__glob;
    std::string __Vfunc_uvm_re_match__33__re;
    std::string __Vfunc_uvm_re_match__33__str;
    VlAssocArray<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component>, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz27>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz28>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> value);
    VlCoroutine __VnoInFunc_wait_modified(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_resource_db___Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1 : public Vhello_uvm_uvm_pkg__03a__03auvm_resource_db_ {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz1"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz1();
};


#endif  // guard
