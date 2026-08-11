// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VREGISTER8B_TEST_TOP_V1_H_
#define VERILATED_VREGISTER8B_TEST_TOP_V1_H_  // guard

#include "verilated.h"

class VRegister8b_test_top_v1__Syms;
class VRegister8b_test_top_v1___024root;
class VerilatedVcdC;
class VRegister8b_test_top_v1___024unit;
class VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03aenvironment;
class VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03atest;
class VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg;
class VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg;
class VRegister8b_test_top_v1_reg_if;
class VRegister8b_test_top_v1_std;
class VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg;
class VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg;
class VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VRegister8b_test_top_v1 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VRegister8b_test_top_v1__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VRegister8b_test_top_v1___024unit* const __PVT____024unit;
    VRegister8b_test_top_v1_std* const __PVT__std;
    VRegister8b_test_top_v1_reg_if* const __PVT__tb__DOT__rif;
    VRegister8b_test_top_v1___024unit__03a__03atxn_object__Vclpkg* const __024unit__03a__03atxn_object__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03adriver__Vclpkg* const __024unit__03a__03adriver__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03amonitor__Vclpkg* const __024unit__03a__03amonitor__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03ascoreboard__Vclpkg* const __024unit__03a__03ascoreboard__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03aenvironment__Vclpkg* const __024unit__03a__03aenvironment__Vclpkg;
    VRegister8b_test_top_v1___024unit__03a__03atest__Vclpkg* const __024unit__03a__03atest__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03asemaphore__Vclpkg* const std__03a__03asemaphore__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03aprocess__Vclpkg* const std__03a__03aprocess__Vclpkg;
    VRegister8b_test_top_v1_std__03a__03amailbox__Tz1__Vclpkg* const std__03a__03amailbox__Tz1__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VRegister8b_test_top_v1___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VRegister8b_test_top_v1(VerilatedContext* contextp, const char* name = "TOP");
    explicit VRegister8b_test_top_v1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VRegister8b_test_top_v1();
  private:
    VL_UNCOPYABLE(VRegister8b_test_top_v1);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
