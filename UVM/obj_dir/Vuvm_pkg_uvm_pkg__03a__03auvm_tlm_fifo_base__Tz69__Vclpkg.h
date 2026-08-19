// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ69__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ69__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_port__Tz69;
class Vuvm_pkg_uvm_pkg__03a__03auvm_component;
class Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98;
class Vuvm_pkg_uvm_pkg__03a__03auvm_phase;
class Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_event;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69 : public Vuvm_pkg_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98> __PVT__put_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__get_peek_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_port__Tz69> __PVT__put_ap;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_analysis_port__Tz69> __PVT__get_ap;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98> __PVT__blocking_put_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98> __PVT__nonblocking_put_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__blocking_get_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__nonblocking_get_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__get_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__blocking_peek_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__nonblocking_peek_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__peek_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__blocking_get_peek_export;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_get_peek_imp__Tz69_TBz98> __PVT__nonblocking_get_peek_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo_base__Tz69"; }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_can_get(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_is_empty(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_used(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69();
};


#endif  // guard
