// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_AGENT__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_AGENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_uvm_pkg__03a__03auvm_agent;
class Vhello_uvm_uvm_pkg__03a__03auvm_component;
class Vhello_uvm_uvm_pkg__03a__03auvm_phase;
class Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz53;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz54;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz55;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz5;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_base;
class Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_agent__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_agent__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_agent__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_agent__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vhello_uvm_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_agent : public Vhello_uvm_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__is_active;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_agent"; }
    virtual void __VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_is_active(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_is_active__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vhello_uvm_uvm_pkg__03a__03auvm_agent() = default;
    void init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vhello_uvm_uvm_pkg__03a__03auvm_agent();
};


#endif  // guard
