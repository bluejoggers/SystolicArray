// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_TXN_BASE__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_TXN_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_txn_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_comparer;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi12;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_packer;
class VUVM_regblock_uvm_pkg__03a__03auvm_printer;
class VUVM_regblock_uvm_pkg__03a__03auvm_recorder;
class VUVM_regblock_uvm_pkg__03a__03auvm_scope_stack;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item;
class VUVM_regblock_uvm_pkg__03a__03auvm_status_container;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg();
    ~VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock___024unit__03a__03areg_txn_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi12> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock___024unit__03a__03areg_txn_base : public VUVM_regblock_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__w_enable;
    CData/*0:0*/ __PVT__r_enable;
    CData/*3:0*/ __PVT__address;
    CData/*7:0*/ __PVT__w_data;
    CData/*7:0*/ __PVT__r_data;
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
    std::string __Vfunc_uvm_is_match__55__expr;
    std::string __Vfunc_uvm_is_match__55__str;
    std::string __Vfunc_uvm_glob_to_re__56__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__56__glob;
    std::string __Vfunc_uvm_re_match__57__re;
    std::string __Vfunc_uvm_re_match__57__str;
    std::string __Vfunc_uvm_is_match__69__expr;
    std::string __Vfunc_uvm_is_match__69__str;
    std::string __Vfunc_uvm_glob_to_re__70__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__70__glob;
    std::string __Vfunc_uvm_re_match__71__re;
    std::string __Vfunc_uvm_re_match__71__str;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_txn_base"; }
    VlClass* clone() const { return new VUVM_regblock___024unit__03a__03areg_txn_base(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_wr_xor_rd_setup_constraint(VUVM_regblock__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VUVM_regblock__Syms* __restrict vlSymsp);
  public:
    VUVM_regblock___024unit__03a__03areg_txn_base() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock___024unit__03a__03areg_txn_base();
};


#endif  // guard
