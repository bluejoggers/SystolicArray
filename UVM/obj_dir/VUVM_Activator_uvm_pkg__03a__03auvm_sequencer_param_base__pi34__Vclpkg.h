// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI34__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI34__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_export__Tz113;
class VUVM_Activator_uvm_pkg__03a__03auvm_analysis_imp__Tz113_TBz125;
class VUVM_Activator_uvm_pkg__03a__03auvm_component;
class VUVM_Activator_uvm_pkg__03a__03auvm_phase;
class VUVM_Activator_uvm_pkg__03a__03auvm_printer;
class VUVM_Activator_uvm_pkg__03a__03auvm_reg_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi35;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base;
class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34;
class VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz113;


class VUVM_Activator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34 : public VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_num_last_reqs;
    IData/*31:0*/ __PVT__num_last_items;
    IData/*31:0*/ __PVT__m_num_last_rsps;
    IData/*31:0*/ __PVT__m_num_reqs_sent;
    IData/*31:0*/ __PVT__m_num_rsps_received;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_last_req_buffer;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_last_rsp_buffer;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi35> __PVT__sqr_rsp_analysis_fifo;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_analysis_export__Tz113> __PVT__rsp_export;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_tlm_fifo__Tz113> __PVT__m_req_fifo;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_param_base__pi34"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &get_current_item__Vfuncrtn);
    void __VnoInFunc_get_num_last_reqs(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn);
    void __VnoInFunc_get_num_last_rsps(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn);
    void __VnoInFunc_get_num_reqs_sent(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn);
    void __VnoInFunc_get_num_rsps_received(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn);
    void __VnoInFunc_last_req(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &last_req__Vfuncrtn);
    void __VnoInFunc_last_rsp(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> &last_rsp__Vfuncrtn);
    void __VnoInFunc_m_last_req_push_front(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_m_last_rsp_push_front(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_num_last_reqs(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_set_num_last_rsps(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ max);
  private:
    void _ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp);
  public:
    VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34() = default;
    void init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_component> parent);
    virtual ~VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_param_base__pi34();
};


#endif  // guard
