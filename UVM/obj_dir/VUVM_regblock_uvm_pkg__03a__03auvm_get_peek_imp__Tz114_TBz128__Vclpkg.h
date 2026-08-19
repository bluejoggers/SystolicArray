// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ114_TBZ128__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ114_TBZ128__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz127;
class VUVM_regblock_uvm_pkg__03a__03auvm_reg_item;
class VUVM_regblock_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz114;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz127__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128 : public VUVM_regblock_uvm_pkg__03a__03auvm_port_base__Tz127 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz114> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_peek_imp__Tz114_TBz128"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128(*this); }
    void __VnoInFunc_can_get(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(VUVM_regblock__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t);
    void __VnoInFunc_try_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_reg_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz114> imp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_get_peek_imp__Tz114_TBz128();
};


#endif  // guard
