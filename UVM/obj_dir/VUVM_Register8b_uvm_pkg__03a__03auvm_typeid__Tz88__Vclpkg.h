// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPEID__TZ88__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPEID__TZ88__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88> &get__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88 : public VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tz88"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88(*this); }
    VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz88();
};


#endif  // guard
