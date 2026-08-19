// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ26__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_TLM_FIFO_BASE__TZ26__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_analysis_port__Tz26;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_put_imp__Tz26_TBz96;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_event;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_put_imp__Tz26_TBz96> __PVT__put_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__get_peek_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_analysis_port__Tz26> __PVT__put_ap;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_analysis_port__Tz26> __PVT__get_ap;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_put_imp__Tz26_TBz96> __PVT__blocking_put_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_put_imp__Tz26_TBz96> __PVT__nonblocking_put_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__blocking_get_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__nonblocking_get_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__get_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__blocking_peek_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__nonblocking_peek_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__peek_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__blocking_get_peek_export;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_get_peek_imp__Tz26_TBz96> __PVT__nonblocking_get_peek_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_fifo_base__Tz26"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_can_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    virtual void __VnoInFunc_can_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    virtual void __VnoInFunc_can_put(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_flush(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_is_empty(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_empty__Vfuncrtn);
    virtual void __VnoInFunc_is_full(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_full__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_event> &ok_to_get__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_event> &ok_to_peek__Vfuncrtn);
    virtual void __VnoInFunc_ok_to_put(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_event> &ok_to_put__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_put(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_size(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual void __VnoInFunc_try_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_peek(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
    virtual void __VnoInFunc_try_put(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
    virtual void __VnoInFunc_used(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &used__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz26();
};


#endif  // guard
