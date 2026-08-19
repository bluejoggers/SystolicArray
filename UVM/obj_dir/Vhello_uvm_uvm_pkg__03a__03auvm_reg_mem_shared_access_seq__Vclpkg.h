// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_REG_MEM_SHARED_ACCESS_SEQ__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_REG_MEM_SHARED_ACCESS_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_mem;
class Vhello_uvm_uvm_pkg__03a__03auvm_mem_shared_access_seq;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi44;
class Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_block;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_sequence_;
class Vhello_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz40;
class Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_status_container;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_registry__pi44> &get_type__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq : public Vhello_uvm_uvm_pkg__03a__03auvm_reg_sequence_ {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq> __PVT__reg_seq;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_mem_shared_access_seq> __PVT__mem_seq;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_mem_shared_access_seq"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_do_block(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> blk);
    virtual void __VnoInFunc_get_object_type(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset_blk(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> blk);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_reg_mem_shared_access_seq();
};


#endif  // guard
