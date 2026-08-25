// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ61_TBZ86__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ61_TBZ86__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_txn;
class VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz79;
class VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz79__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86 : public VUVM_Register8b_uvm_pkg__03a__03auvm_port_base__Tz79 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_peek_imp__Tz61_TBz86"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86(*this); }
    void __VnoInFunc_can_get(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(VUVM_Register8b__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t);
    virtual void __VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t);
    void __VnoInFunc_try_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b___024unit__03a__03areg_txn> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz61> imp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_get_peek_imp__Tz61_TBz86();
};


#endif  // guard
