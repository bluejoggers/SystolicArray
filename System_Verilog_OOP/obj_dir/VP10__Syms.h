// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP10__SYMS_H_
#define VERILATED_VP10__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP10.h"

// INCLUDE MODULE CLASSES
#include "VP10___024root.h"
#include "VP10_cover_tb.h"
#include "VP10_std.h"
#include "VP10_cover_tb__03a__03acg__Vclpkg.h"
#include "VP10_std__03a__03asemaphore__Vclpkg.h"
#include "VP10_std__03a__03aprocess__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP10__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP10* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP10___024root                 TOP;
    VP10_cover_tb                  TOP__cover_tb;
    VP10_std                       TOP__std;
    VP10_cover_tb__03a__03acg__Vclpkg TOP__cover_tb__03a__03acg__Vclpkg;
    VP10_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VP10_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // COVERAGE
    uint32_t __Vcoverage[46];

    // CONSTRUCTORS
    VP10__Syms(VerilatedContext* contextp, const char* namep, VP10* modelp);
    ~VP10__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
