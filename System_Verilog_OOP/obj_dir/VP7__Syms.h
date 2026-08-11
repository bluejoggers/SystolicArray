// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP7__SYMS_H_
#define VERILATED_VP7__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP7.h"

// INCLUDE MODULE CLASSES
#include "VP7___024root.h"
#include "VP7___024unit.h"
#include "VP7___024unit__03a__03acomponent__Vclpkg.h"
#include "VP7___024unit__03a__03adriver__Vclpkg.h"
#include "VP7___024unit__03a__03amonitor__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP7__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP7* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP7___024root                  TOP;
    VP7___024unit__03a__03acomponent__Vclpkg TOP____024unit__03a__03acomponent__Vclpkg;
    VP7___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    VP7___024unit__03a__03amonitor__Vclpkg TOP____024unit__03a__03amonitor__Vclpkg;
    VP7___024unit                  TOP____024unit;

    // CONSTRUCTORS
    VP7__Syms(VerilatedContext* contextp, const char* namep, VP7* modelp);
    ~VP7__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
