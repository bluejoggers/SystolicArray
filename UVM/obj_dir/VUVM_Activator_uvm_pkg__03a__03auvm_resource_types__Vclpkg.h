// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUVM_Activator.h for the primary calling header

#ifndef VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_
#define VERILATED_VUVM_ACTIVATOR_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "VUVM_Activator_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"


class VUVM_Activator__Syms;
struct VUVM_Activator_access_t__struct__0 {
    QData/*63:0*/ __PVT__read_time;
    QData/*63:0*/ __PVT__write_time;
    IData/*31:0*/ __PVT__read_count;
    IData/*31:0*/ __PVT__write_count;

    bool operator==(const VUVM_Activator_access_t__struct__0& rhs) const {
        return __PVT__read_time == rhs.__PVT__read_time
            && __PVT__write_time == rhs.__PVT__write_time
            && __PVT__read_count == rhs.__PVT__read_count
            && __PVT__write_count == rhs.__PVT__write_count;
    }
    bool operator!=(const VUVM_Activator_access_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const VUVM_Activator_access_t__struct__0& rhs) const {
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
struct VlIsCustomStruct<VUVM_Activator_access_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) VUVM_Activator_uvm_pkg__03a__03auvm_resource_types__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VUVM_Activator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    void ctor(VUVM_Activator__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VUVM_Activator_uvm_pkg__03a__03auvm_resource_types__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class VUVM_Activator__Syms;

class VUVM_Activator_uvm_pkg__03a__03auvm_resource_types : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_types"; }
    VlClass* clone() const { return new VUVM_Activator_uvm_pkg__03a__03auvm_resource_types(*this); }
    VUVM_Activator_uvm_pkg__03a__03auvm_resource_types() = default;
    void init(VUVM_Activator__Syms* __restrict vlSymsp) {}
    ~VUVM_Activator_uvm_pkg__03a__03auvm_resource_types() {}
};


#endif  // guard
