// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_PUT_IMP__TZ69_TBZ98__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_PUT_IMP__TZ69_TBZ98__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item;
class Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98 : public Vuvm_pkg_uvm_pkg__03a__03auvm_port_base__Tz97 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_put_imp__Tz69_TBz98"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98(*this); }
    void __VnoInFunc_can_put(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t);
    void __VnoInFunc_try_put(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> t, CData/*0:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz69> imp);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_put_imp__Tz69_TBz98();
};


#endif  // guard
