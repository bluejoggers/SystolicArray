// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VP7__pch.h"

VP7__Syms::VP7__Syms(VerilatedContext* contextp, const char* namep, VP7* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(4);
    // Setup sub module instances
    TOP____024unit__03a__03acomponent__Vclpkg.ctor(this, "$unit::component__Vclpkg");
    TOP____024unit__03a__03adriver__Vclpkg.ctor(this, "$unit::driver__Vclpkg");
    TOP____024unit__03a__03amonitor__Vclpkg.ctor(this, "$unit::monitor__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03acomponent__Vclpkg = &TOP____024unit__03a__03acomponent__Vclpkg;
    TOP.__024unit__03a__03adriver__Vclpkg = &TOP____024unit__03a__03adriver__Vclpkg;
    TOP.__024unit__03a__03amonitor__Vclpkg = &TOP____024unit__03a__03amonitor__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03acomponent__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03adriver__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03amonitor__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
}

VP7__Syms::~VP7__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP____024unit.dtor();
    TOP____024unit__03a__03amonitor__Vclpkg.dtor();
    TOP____024unit__03a__03adriver__Vclpkg.dtor();
    TOP____024unit__03a__03acomponent__Vclpkg.dtor();
}
