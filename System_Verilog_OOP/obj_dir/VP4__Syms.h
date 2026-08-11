// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VP4__SYMS_H_
#define VERILATED_VP4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VP4.h"

// INCLUDE MODULE CLASSES
#include "VP4___024root.h"
#include "VP4___024unit.h"
#include "VP4___024unit__03a__03apacket__Vclpkg.h"
#include "VP4___024unit__03a__03asub_packet__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VP4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VP4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VP4___024root                  TOP;
    VP4___024unit__03a__03apacket__Vclpkg TOP____024unit__03a__03apacket__Vclpkg;
    VP4___024unit__03a__03asub_packet__Vclpkg TOP____024unit__03a__03asub_packet__Vclpkg;
    VP4___024unit                  TOP____024unit;

    // CONSTRUCTORS
    VP4__Syms(VerilatedContext* contextp, const char* namep, VP4* modelp);
    ~VP4__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
