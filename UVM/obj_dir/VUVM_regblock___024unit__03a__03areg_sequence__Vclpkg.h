// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_regblock.h for the primary calling header

#ifndef VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_SEQUENCE__VCLPKG_H_
#define VERILATED_VUVM_REGBLOCK___024UNIT__03A__03AREG_SEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VUVM_regblock___024unit__03a__03areg_sequence;
class VUVM_regblock___024unit__03a__03areg_txn_base;
class VUVM_regblock_uvm_pkg__03a__03auvm_object;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi17;
class VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper;
class VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59;
class VUVM_regblock_uvm_pkg__03a__03auvm_status_container;


class VUVM_regblock__Syms;

class alignas(VL_CACHE_LINE_BYTES) VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    VUVM_regblock__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg();
    ~VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg();
    void ctor(VUVM_regblock__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_regblock___024unit__03a__03areg_sequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn);
};

#include "VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59__Vclpkg.h"

class VUVM_regblock__Syms;

class VUVM_regblock___024unit__03a__03areg_sequence : public VUVM_regblock_uvm_pkg__03a__03auvm_sequence__Tz59_TBz59 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::reg_sequence"; }
    VlClass* clone() const { return new VUVM_regblock___024unit__03a__03areg_sequence(*this); }
    virtual void __VnoInFunc___VBasicRand(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VUVM_regblock__Syms* __restrict vlSymsp, VlClassRef<VUVM_regblock_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(VUVM_regblock__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(VUVM_regblock__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    VUVM_regblock___024unit__03a__03areg_sequence() = default;
    void init(VlProcessRef vlProcess, VUVM_regblock__Syms* __restrict vlSymsp, std::string name);
    virtual ~VUVM_regblock___024unit__03a__03areg_sequence();
};


#endif  // guard
