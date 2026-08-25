// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vswitch_testbench_v0__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vswitch_testbench_v0::Vswitch_testbench_v0(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vswitch_testbench_v0__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__tb__DOT__sif{vlSymsp->TOP.__PVT__tb__DOT__sif}
    , __024unit__03a__03atxn_object__Vclpkg{vlSymsp->TOP.__024unit__03a__03atxn_object__Vclpkg}
    , __024unit__03a__03adriver__Vclpkg{vlSymsp->TOP.__024unit__03a__03adriver__Vclpkg}
    , __024unit__03a__03agenerator__Vclpkg{vlSymsp->TOP.__024unit__03a__03agenerator__Vclpkg}
    , __024unit__03a__03amonitor__Vclpkg{vlSymsp->TOP.__024unit__03a__03amonitor__Vclpkg}
    , __024unit__03a__03ascoreboard__Vclpkg{vlSymsp->TOP.__024unit__03a__03ascoreboard__Vclpkg}
    , __024unit__03a__03aenvironment__Vclpkg{vlSymsp->TOP.__024unit__03a__03aenvironment__Vclpkg}
    , __024unit__03a__03atest__Vclpkg{vlSymsp->TOP.__024unit__03a__03atest__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vswitch_testbench_v0::Vswitch_testbench_v0(const char* _vcname__)
    : Vswitch_testbench_v0(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vswitch_testbench_v0::~Vswitch_testbench_v0() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vswitch_testbench_v0___024root___eval_debug_assertions(Vswitch_testbench_v0___024root* vlSelf);
#endif  // VL_DEBUG
void Vswitch_testbench_v0___024root___eval_static(Vswitch_testbench_v0___024root* vlSelf);
void Vswitch_testbench_v0___024root___eval_initial(Vswitch_testbench_v0___024root* vlSelf);
void Vswitch_testbench_v0___024root___eval_settle(Vswitch_testbench_v0___024root* vlSelf);
void Vswitch_testbench_v0___024root___eval(Vswitch_testbench_v0___024root* vlSelf);

void Vswitch_testbench_v0::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vswitch_testbench_v0::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vswitch_testbench_v0___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vswitch_testbench_v0___024root___eval_static(&(vlSymsp->TOP));
        Vswitch_testbench_v0___024root___eval_initial(&(vlSymsp->TOP));
        Vswitch_testbench_v0___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vswitch_testbench_v0___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vswitch_testbench_v0::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vswitch_testbench_v0::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vswitch_testbench_v0::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vswitch_testbench_v0::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vswitch_testbench_v0::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vswitch_testbench_v0___024root___eval_final(Vswitch_testbench_v0___024root* vlSelf);

VL_ATTR_COLD void Vswitch_testbench_v0::final() {
    contextp()->executingFinal(true);
    Vswitch_testbench_v0___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vswitch_testbench_v0::hierName() const { return vlSymsp->name(); }
const char* Vswitch_testbench_v0::modelName() const { return "Vswitch_testbench_v0"; }
unsigned Vswitch_testbench_v0::threads() const { return 1; }
void Vswitch_testbench_v0::prepareClone() const { contextp()->prepareClone(); }
void Vswitch_testbench_v0::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vswitch_testbench_v0::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vswitch_testbench_v0___024root__trace_decl_types(VerilatedVcd* tracep);

void Vswitch_testbench_v0___024root__trace_init_top(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vswitch_testbench_v0___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vswitch_testbench_v0___024root*>(voidSelf);
    Vswitch_testbench_v0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vswitch_testbench_v0___024root__trace_decl_types(tracep);
    Vswitch_testbench_v0___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vswitch_testbench_v0___024root__trace_register(Vswitch_testbench_v0___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vswitch_testbench_v0::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vswitch_testbench_v0::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 19);
    Vswitch_testbench_v0___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
