// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCE__TZ61_TBZ61__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_SEQUENCE__TZ61_TBZ61__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_txn;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_base;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61 : public VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequencer_param_base__pi22> __PVT__param_sequencer;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __PVT__req;
    VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> __PVT__rsp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequence__Tz61_TBz61"; }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &get_current_item__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_response(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &response, IData/*31:0*/ transaction_id);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_send_request(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_sequence__Tz61_TBz61();
};


#endif  // guard
