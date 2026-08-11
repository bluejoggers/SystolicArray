// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP5__SYMS_H_
#define VERILATED_VP5__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP5.h"

// INCLUDE MODULE CLASSES
#include "VP5___024root.h"
#include "VP5___024unit.h"
#include "VP5___024unit__03a__03abase__Vclpkg.h"
#include "VP5___024unit__03a__03achild__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP5__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP5* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP5___024root                  TOP;
    VP5___024unit__03a__03abase__Vclpkg TOP____024unit__03a__03abase__Vclpkg;
    VP5___024unit__03a__03achild__Vclpkg TOP____024unit__03a__03achild__Vclpkg;
    VP5___024unit                  TOP____024unit;

    // CONSTRUCTORS
    VP5__Syms(VerilatedContext* contextp, const char* namep, VP5* modelp);
    ~VP5__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
