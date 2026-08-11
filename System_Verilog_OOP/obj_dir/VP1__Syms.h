// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP1__SYMS_H_
#define VERILATED_VP1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP1.h"

// INCLUDE MODULE CLASSES
#include "VP1___024root.h"
#include "VP1___024unit.h"
#include "VP1___024unit__03a__03amy_config__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP1* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP1___024root                  TOP;
    VP1___024unit__03a__03amy_config__Vclpkg TOP____024unit__03a__03amy_config__Vclpkg;
    VP1___024unit                  TOP____024unit;

    // CONSTRUCTORS
    VP1__Syms(VerilatedContext* contextp, const char* namep, VP1* modelp);
    ~VP1__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
