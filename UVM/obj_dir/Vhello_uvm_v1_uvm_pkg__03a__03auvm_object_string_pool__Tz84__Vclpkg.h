// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm_v1.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ84__VCLPKG_H_
#define VERILATED_VHELLO_UVM_V1_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ84__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_pool__Tz12_TBz84;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz12;
class Vhello_uvm_v1_uvm_pkg__03a__03auvm_root;


class Vhello_uvm_v1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vhello_uvm_v1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84__Vclpkg();
    ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84__Vclpkg();
    void ctor(Vhello_uvm_v1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz12> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84> &get_global_pool__Vfuncrtn);
};

#include "Vhello_uvm_v1_uvm_pkg__03a__03auvm_pool__Tz12_TBz84__Vclpkg.h"

class Vhello_uvm_v1__Syms;

class Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84 : public Vhello_uvm_v1_uvm_pkg__03a__03auvm_pool__Tz12_TBz84 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__3__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_string_pool__Tz84"; }
    VlClass* clone() const { return new Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84(*this); }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_delete(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_queue__Tz12> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_string_pool__Tz84();
};


#endif  // guard
