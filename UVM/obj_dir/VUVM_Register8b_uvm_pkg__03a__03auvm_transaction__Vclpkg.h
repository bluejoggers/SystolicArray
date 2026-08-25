// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_component;
class VUVM_Register8b_uvm_pkg__03a__03auvm_event_;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz6;
class VUVM_Register8b_uvm_pkg__03a__03auvm_parent_child_link;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_database;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream;
class VUVM_Register8b_uvm_pkg__03a__03auvm_transaction;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_transaction : public VUVM_Register8b_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_transaction_id;
    QData/*63:0*/ __PVT__begin_time;
    QData/*63:0*/ __PVT__end_time;
    QData/*63:0*/ __PVT__accept_time;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz6> __PVT__events;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_event_> __PVT__begin_event;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_event_> __PVT__end_event;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> __PVT__initiator;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> __PVT__stream_handle;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> __PVT__tr_recorder;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_transaction"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    void __VnoInFunc_disable_recording(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_accept_tr(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_begin_tr(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_end_tr(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_enable_recording(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    void __VnoInFunc_get_accept_time(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn);
    void __VnoInFunc_get_begin_time(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn);
    void __VnoInFunc_get_end_time(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn);
    void __VnoInFunc_get_event_pool(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz6> &get_event_pool__Vfuncrtn);
    void __VnoInFunc_get_initiator(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_transaction_id(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn);
    void __VnoInFunc_is_active(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn);
    void __VnoInFunc_is_recording_enabled(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn);
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_initiator(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> initiator);
    void __VnoInFunc_set_transaction_id(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ id);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_transaction() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_component> initiator);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_transaction();
};


#endif  // guard
