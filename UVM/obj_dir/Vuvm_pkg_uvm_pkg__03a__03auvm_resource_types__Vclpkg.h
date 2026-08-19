// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_
#define VERILATED_VUVM_PKG_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"


class Vuvm_pkg__Syms;
struct Vuvm_pkg_access_t__struct__0 {
    QData/*63:0*/ __PVT__read_time;
    QData/*63:0*/ __PVT__write_time;
    IData/*31:0*/ __PVT__read_count;
    IData/*31:0*/ __PVT__write_count;

    bool operator==(const Vuvm_pkg_access_t__struct__0& rhs) const {
        return __PVT__read_time == rhs.__PVT__read_time
            && __PVT__write_time == rhs.__PVT__write_time
            && __PVT__read_count == rhs.__PVT__read_count
            && __PVT__write_count == rhs.__PVT__write_count;
    }
    bool operator!=(const Vuvm_pkg_access_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vuvm_pkg_access_t__struct__0& rhs) const {
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
struct VlIsCustomStruct<Vuvm_pkg_access_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_types"; }
    VlClass* clone() const { return new Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types(*this); }
    Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp) {}
    ~Vuvm_pkg_uvm_pkg__03a__03auvm_resource_types() {}
};


#endif  // guard
