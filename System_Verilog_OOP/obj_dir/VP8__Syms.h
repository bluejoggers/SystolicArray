// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP8__SYMS_H_
#define VERILATED_VP8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP8.h"

// INCLUDE MODULE CLASSES
#include "VP8___024root.h"
#include "VP8_std.h"
#include "VP8___024unit.h"
#include "VP8_std__03a__03asemaphore__Vclpkg.h"
#include "VP8_std__03a__03aprocess__Vclpkg.h"
#include "VP8___024unit__03a__03amypacket__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP8___024root                  TOP;
    VP8___024unit__03a__03amypacket__Vclpkg TOP____024unit__03a__03amypacket__Vclpkg;
    VP8___024unit                  TOP____024unit;
    VP8_std                        TOP__std;
    VP8_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VP8_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    VP8__Syms(VerilatedContext* contextp, const char* namep, VP8* modelp);
    ~VP8__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
