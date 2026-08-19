// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VP10__pch.h"

VP10__Syms::VP10__Syms(VerilatedContext* contextp, const char* namep, VP10* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(568);
    // Setup sub module instances
    TOP__cover_tb.ctor(this, "cover_tb");
    TOP__std.ctor(this, "std");
    TOP__cover_tb__03a__03acg__Vclpkg.ctor(this, "cover_tb::cg__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__cover_tb = &TOP__cover_tb;
    TOP.__PVT__std = &TOP__std;
    TOP.cover_tb__03a__03acg__Vclpkg = &TOP__cover_tb__03a__03acg__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__cover_tb.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__cover_tb__03a__03acg__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

VP10__Syms::~VP10__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__cover_tb__03a__03acg__Vclpkg.dtor();
    TOP__std.dtor();
    TOP__cover_tb.dtor();
}
