// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VHELLO_UVM_V1__DPI_H_
#define VERILATED_VHELLO_UVM_V1__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../../uvm/distrib/src/base/uvm_globals.svh:162:15
    extern void m__uvm_report_dpi(int severity, const char* id, const char* message, int verbosity, const char* filename, int line);

#ifdef __cplusplus
}
#endif

#endif  // guard
