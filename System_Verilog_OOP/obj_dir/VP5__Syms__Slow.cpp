// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VP5__pch.h"

VP5__Syms::VP5__Syms(VerilatedContext* contextp, const char* namep, VP5* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(54);
    // Setup sub module instances
    TOP____024unit__03a__03abase__Vclpkg.ctor(this, "$unit::base__Vclpkg");
    TOP____024unit__03a__03achild__Vclpkg.ctor(this, "$unit::child__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03abase__Vclpkg = &TOP____024unit__03a__03abase__Vclpkg;
    TOP.__024unit__03a__03achild__Vclpkg = &TOP____024unit__03a__03achild__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03abase__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03achild__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
}

VP5__Syms::~VP5__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP____024unit.dtor();
    TOP____024unit__03a__03achild__Vclpkg.dtor();
    TOP____024unit__03a__03abase__Vclpkg.dtor();
}
