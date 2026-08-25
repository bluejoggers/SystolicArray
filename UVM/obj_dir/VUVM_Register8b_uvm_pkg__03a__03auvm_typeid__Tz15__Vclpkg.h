// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPEID__TZ15__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B_UVM_PKG__03A__03AUVM_TYPEID__TZ15__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15;
class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg();
    ~VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15> &get__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15 : public VUVM_Register8b_uvm_pkg__03a__03auvm_typeid_base {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_typeid__Tz15"; }
    VlClass* clone() const { return new VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15(*this); }
    VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15() = default;
    void init(VUVM_Register8b__Syms* __restrict vlSymsp);
    virtual ~VUVM_Register8b_uvm_pkg__03a__03auvm_typeid__Tz15();
};


#endif  // guard
