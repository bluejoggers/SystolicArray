// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_SINGLE_BIT_BASH_SEQ__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_REG_SINGLE_BIT_BASH_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_object;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi33;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_;
class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq;
class Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz40;
class Vuvm_pkg_uvm_pkg__03a__03auvm_status_container;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi33> &get_type__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq : public Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> __PVT__rg;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_single_bit_bash_seq"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    VlCoroutine __VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq();
};


#endif  // guard
