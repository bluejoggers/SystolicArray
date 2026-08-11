// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER8B_TXNOBJ__SYMS_H_
#define VERILATED_VREGISTER8B_TXNOBJ__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegister8b_txnobj.h"

// INCLUDE MODULE CLASSES
#include "VRegister8b_txnobj___024root.h"
#include "VRegister8b_txnobj___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VRegister8b_txnobj__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegister8b_txnobj* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegister8b_txnobj___024root   TOP;

    // CONSTRUCTORS
    VRegister8b_txnobj__Syms(VerilatedContext* contextp, const char* namep, VRegister8b_txnobj* modelp);
    ~VRegister8b_txnobj__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
