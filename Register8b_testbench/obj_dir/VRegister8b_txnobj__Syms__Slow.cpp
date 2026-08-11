// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRegister8b_txnobj__pch.h"

VRegister8b_txnobj__Syms::VRegister8b_txnobj__Syms(VerilatedContext* contextp, const char* namep, VRegister8b_txnobj* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(0);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

VRegister8b_txnobj__Syms::~VRegister8b_txnobj__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}
