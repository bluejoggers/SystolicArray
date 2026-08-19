// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ20__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_TYPED_CALLBACKS__TZ20__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_callback;
class Vhello_uvm_uvm_pkg__03a__03auvm_callbacks_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz1_TBz61;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;
class Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20;
class Vhello_uvm_uvm_pkg__03a__03auvm_typeid_base;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_typename;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_warning__12__id;
    std::string __Vtask_uvm_report_warning__12__message;
    std::string __Vtask_uvm_report_warning__12__filename;
    std::string __Vtask_uvm_report_warning__12__context_name;
    std::string __Vfunc_uvm_report_enabled__51__id;
    std::string __Vfunc_m_uvm_string_queue_join__55__Vfuncout;
    std::string __Vtask_uvm_report_info__56__id;
    std::string __Vtask_uvm_report_info__56__message;
    std::string __Vtask_uvm_report_info__56__filename;
    std::string __Vtask_uvm_report_info__56__context_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34> __PVT__m_tw_cb_q;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20> __PVT__m_t_inst;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_display(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> obj);
    void __VnoInFunc_m_cb_find(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34> q, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ &m_cb_find__Vfuncrtn);
    void __VnoInFunc_m_cb_find_name(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34> q, std::string name, std::string where, IData/*31:0*/ &m_cb_find_name__Vfuncrtn);
    void __VnoInFunc_m_initialize(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20> &m_initialize__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20 : public Vhello_uvm_uvm_pkg__03a__03auvm_callbacks_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typed_callbacks__Tz20"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_m_add_tw_cbs(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering);
    virtual void __VnoInFunc_m_am_i_a(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn);
    virtual void __VnoInFunc_m_delete_tw_cbs(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn);
    virtual void __VnoInFunc_m_get_tw_cb_q(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz34> &m_get_tw_cb_q__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_typed_callbacks__Tz20();
};


#endif  // guard
