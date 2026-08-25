// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ61__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ61__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator___024unit__03a__03aact_txn;
class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_put_imp__Tz61_TBz85;
class VUVM_Activator_uvm_pkg__03a__03auvm_tlm_event;
class VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61 : public VUVM_Activator_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_put_imp__Tz61_TBz85> __PVT__put_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__get_peek_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61> __PVT__put_ap;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_analysis_port__Tz61> __PVT__get_ap;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_put_imp__Tz61_TBz85> __PVT__blocking_put_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_put_imp__Tz61_TBz85> __PVT__nonblocking_put_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__blocking_get_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__nonblocking_get_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__get_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__blocking_peek_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__nonblocking_peek_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__peek_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__blocking_get_peek_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz85> __PVT__nonblocking_get_peek_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo_base__Tz61"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_can_get(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t);
    virtual void __VnoInFunc_is_empty(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t);
    virtual VlCoroutine __VnoInFunc_put(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator___024unit__03a__03aact_txn> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_used(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61();
};


#endif  // guard
