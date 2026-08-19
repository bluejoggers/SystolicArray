// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ48__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ48__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t;
class Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48;
class Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz5_TBz48;
class Vuvm_pkg_uvm_pkg__03a__03auvm_printer;
class Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47;
class Vuvm_pkg_uvm_pkg__03a__03auvm_root;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vuvm_pkg__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48> &get_global_pool__Vfuncrtn);
};

#include "Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz5_TBz48__Vclpkg.h"

class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48 : public Vuvm_pkg_uvm_pkg__03a__03auvm_pool__Tz5_TBz48 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;
    std::string __Vtask_uvm_report_warning__3__context_name;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_string_pool__Tz48"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48(*this); }
    virtual void __VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_delete(Vuvm_pkg__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48() = default;
    void init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vuvm_pkg_uvm_pkg__03a__03auvm_object_string_pool__Tz48();
};


#endif  // guard
