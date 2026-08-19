// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ42_TBZ92__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ42_TBZ92__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz42;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92 : public Vhello_uvm_uvm_pkg__03a__03auvm_port_base__Tz82 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz42> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_peek_imp__Tz42_TBz92"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92(*this); }
    void __VnoInFunc_can_get(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    void __VnoInFunc_try_get(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz42> imp);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_get_peek_imp__Tz42_TBz92();
};


#endif  // guard
