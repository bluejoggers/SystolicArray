// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_TYPEID__TZ95__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK_UVM_PKG__03A__03AUVM_TYPEID__TZ95__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95;
class VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95__Vclpkg();
    ~VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95> &get__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95 : public VUVM_regblock_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tz95"; }
    VlClass* clone() const { return new VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95(*this); }
    VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95() = default;
    void init(VUVM_regblock__Syms* __restrict vlSymsp);
    virtual ~VUVM_regblock_uvm_pkg__03a__03auvm_typeid__Tz95();
};


#endif  // guard
