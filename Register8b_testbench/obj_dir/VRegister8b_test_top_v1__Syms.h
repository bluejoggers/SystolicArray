// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1__SYMS_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VRegister8b_test_top_v1.h"

// INCLUDE MODULE CLASSES
#include "VRegister8b_test_top_v1___024root.h"
#include "VRegister8b_test_top_v1___024unit.h"
#include "VRegister8b_test_top_v1_std.h"
#include "VRegister8b_test_top_v1_reg_if.h"
#include "VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg.h"
#include "VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg.h"
#include "VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg.h"
#include "VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg.h"
#include "VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg.h"
#include "VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg.h"
#include "VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg.h"
#include "VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg.h"
#include "VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegister8b_test_top_v1* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegister8b_test_top_v1___024root TOP;
    VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg TOP____024unit__03a__03aenvironment__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg TOP____024unit__03a__03amonitor__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg TOP____024unit__03a__03ascoreboard__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg TOP____024unit__03a__03atest__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg TOP____024unit__03a__03atxn_object__Vclpkg;
    VRegister8b_test_top_v1___024unit TOP____024unit;
    VRegister8b_test_top_v1_std    TOP__std;
    VRegister8b_test_top_v1_reg_if TOP__tb__DOT__rif;
    VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    VRegister8b_test_top_v1__Syms(VerilatedContext* contextp, const char* namep, VRegister8b_test_top_v1* modelp);
    ~VRegister8b_test_top_v1__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void fireEvent(VlEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(&event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
