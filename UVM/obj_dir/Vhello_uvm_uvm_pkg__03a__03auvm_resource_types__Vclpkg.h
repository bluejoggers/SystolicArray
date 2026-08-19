// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_
#define VERILATED_VHELLO_UVM_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"


class Vhello_uvm__Syms;
struct Vhello_uvm_access_t__struct__0 {
    QData/*63:0*/ __PVT__read_time;
    QData/*63:0*/ __PVT__write_time;
    IData/*31:0*/ __PVT__read_count;
    IData/*31:0*/ __PVT__write_count;

    bool operator==(const Vhello_uvm_access_t__struct__0& rhs) const {
        return __PVT__read_time == rhs.__PVT__read_time
            && __PVT__write_time == rhs.__PVT__write_time
            && __PVT__read_count == rhs.__PVT__read_count
            && __PVT__write_count == rhs.__PVT__write_count;
    }
    bool operator!=(const Vhello_uvm_access_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vhello_uvm_access_t__struct__0& rhs) const {
        if (__PVT__read_time < rhs.__PVT__read_time) return true;
        if (rhs.__PVT__read_time < __PVT__read_time) return false;
        if (__PVT__write_time < rhs.__PVT__write_time) return true;
        if (rhs.__PVT__write_time < __PVT__write_time) return false;
        if (__PVT__read_count < rhs.__PVT__read_count) return true;
        if (rhs.__PVT__read_count < __PVT__read_count) return false;
        if (__PVT__write_count < rhs.__PVT__write_count) return true;
        if (rhs.__PVT__write_count < __PVT__write_count) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vhello_uvm_access_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_uvm_pkg__03a__03auvm_resource_types__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vhello_uvm__Syms;

class Vhello_uvm_uvm_pkg__03a__03auvm_resource_types : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_types"; }
    VlClass* clone() const { return new Vhello_uvm_uvm_pkg__03a__03auvm_resource_types(*this); }
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_types() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp) {}
    ~Vhello_uvm_uvm_pkg__03a__03auvm_resource_types() {}
};


#endif  // guard
