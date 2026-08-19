// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_POOL__TZ5_TBZ2__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_POOL__TZ5_TBZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_barrier;
class Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_uvm_pkg__03a__03auvm_object;
class Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2;
class Vhello_uvm_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_uvm_pkg__03a__03auvm_root;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vhello_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_barrier> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2> &get_global_pool__Vfuncrtn);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2 : public Vhello_uvm_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__2__id;
    std::string __Vtask_uvm_report_warning__2__message;
    std::string __Vtask_uvm_report_warning__2__filename;
    std::string __Vtask_uvm_report_warning__2__context_name;
    VlAssocArray<std::string, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_barrier>> __PVT__pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_pool__Tz5_TBz2"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add(Vhello_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_barrier> item);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vhello_uvm__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_exists(Vhello_uvm__Syms* __restrict vlSymsp, std::string key, IData/*31:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_first(Vhello_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &first__Vfuncrtn);
    virtual void __VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_barrier> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_last(Vhello_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &last__Vfuncrtn);
    virtual void __VnoInFunc_next(Vhello_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &next__Vfuncrtn);
    virtual void __VnoInFunc_num(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    virtual void __VnoInFunc_prev(Vhello_uvm__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &prev__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz2();
};


#endif  // guard
