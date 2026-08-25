// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Register8b.h for the primary calling header

#ifndef VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_TXN__VCLPKG_H_
#define VERILATED_VUVM_REGISTER8B___024UNIT__03A__03AREG_TXN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_Register8b___024unit__03a__03areg_txn;
class VUVM_Register8b_uvm_pkg__03a__03auvm_comparer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__Tz61;
class VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_Register8b_uvm_pkg__03a__03auvm_packer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_printer;
class VUVM_Register8b_uvm_pkg__03a__03auvm_recorder;
class VUVM_Register8b_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_Register8b_uvm_pkg__03a__03auvm_status_container;


class VUVM_Register8b__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_Register8b___024unit__03a__03areg_txn__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Register8b__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Register8b___024unit__03a__03areg_txn__Vclpkg();
    ~VUVM_Register8b___024unit__03a__03areg_txn__Vclpkg();
    void ctor(VUVM_Register8b__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Register8b___024unit__03a__03areg_txn__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_registry__Tz61> &get_type__Vfuncrtn);
};

#include "VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class VUVM_Register8b__Syms;

class VUVM_Register8b___024unit__03a__03areg_txn : public VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__enable;
    CData/*7:0*/ __PVT__data_in;
    CData/*7:0*/ __PVT__data_out;
    std::string __Vfunc_uvm_is_match__13__expr;
    std::string __Vfunc_uvm_is_match__13__str;
    std::string __Vfunc_uvm_glob_to_re__14__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__14__glob;
    std::string __Vfunc_uvm_re_match__15__re;
    std::string __Vfunc_uvm_re_match__15__str;
    std::string __Vfunc_uvm_is_match__27__expr;
    std::string __Vfunc_uvm_is_match__27__str;
    std::string __Vfunc_uvm_glob_to_re__28__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__28__glob;
    std::string __Vfunc_uvm_re_match__29__re;
    std::string __Vfunc_uvm_re_match__29__str;
    std::string __Vfunc_uvm_is_match__41__expr;
    std::string __Vfunc_uvm_is_match__41__str;
    std::string __Vfunc_uvm_glob_to_re__42__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__42__glob;
    std::string __Vfunc_uvm_re_match__43__re;
    std::string __Vfunc_uvm_re_match__43__str;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_txn"; }
    VlClass* clone() const { return new VUVM_Register8b___024unit__03a__03areg_txn(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp);
  public:
    VUVM_Register8b___024unit__03a__03areg_txn() = default;
    void init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_Register8b___024unit__03a__03areg_txn();
};


#endif  // guard
