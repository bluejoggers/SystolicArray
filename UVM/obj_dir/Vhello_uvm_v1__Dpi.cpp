// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vhello_uvm_v1::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vhello_uvm_v1__Dpi.h"
#include "Vhello_uvm_v1.h"

#ifndef VL_DPIDECL_m__uvm_report_dpi_
#define VL_DPIDECL_m__uvm_report_dpi_
void m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line) {
    // DPI export at ../../uvm/distrib/src/base/uvm_globals.svh:162:15
    return Vhello_uvm_v1::m__uvm_report_dpi(severity, id, message, verbosity, filename, line);
}
#endif

