// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister8b_test_top_v1__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRegister8b_test_top_v1::VRegister8b_test_top_v1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister8b_test_top_v1__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__tb__DOT__rif{vlSymsp->TOP.__PVT__tb__DOT__rif}
    , __024unit__03a__03atxn_object__Vclpkg{vlSymsp->TOP.__024unit__03a__03atxn_object__Vclpkg}
    , __024unit__03a__03adriver__Vclpkg{vlSymsp->TOP.__024unit__03a__03adriver__Vclpkg}
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

VRegister8b_test_top_v1::VRegister8b_test_top_v1(const char* _vcname__)
    : VRegister8b_test_top_v1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister8b_test_top_v1::~VRegister8b_test_top_v1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegister8b_test_top_v1___024root___eval_debug_assertions(VRegister8b_test_top_v1___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister8b_test_top_v1___024root___eval_static(VRegister8b_test_top_v1___024root* vlSelf);
void VRegister8b_test_top_v1___024root___eval_initial(VRegister8b_test_top_v1___024root* vlSelf);
void VRegister8b_test_top_v1___024root___eval_settle(VRegister8b_test_top_v1___024root* vlSelf);
void VRegister8b_test_top_v1___024root___eval(VRegister8b_test_top_v1___024root* vlSelf);

void VRegister8b_test_top_v1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister8b_test_top_v1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister8b_test_top_v1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegister8b_test_top_v1___024root___eval_static(&(vlSymsp->TOP));
        VRegister8b_test_top_v1___024root___eval_initial(&(vlSymsp->TOP));
        VRegister8b_test_top_v1___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegister8b_test_top_v1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VRegister8b_test_top_v1::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VRegister8b_test_top_v1::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VRegister8b_test_top_v1::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VRegister8b_test_top_v1::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VRegister8b_test_top_v1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegister8b_test_top_v1___024root___eval_final(VRegister8b_test_top_v1___024root* vlSelf);

VL_ATTR_COLD void VRegister8b_test_top_v1::final() {
    contextp()->executingFinal(true);
    VRegister8b_test_top_v1___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister8b_test_top_v1::hierName() const { return vlSymsp->name(); }
const char* VRegister8b_test_top_v1::modelName() const { return "VRegister8b_test_top_v1"; }
unsigned VRegister8b_test_top_v1::threads() const { return 1; }
void VRegister8b_test_top_v1::prepareClone() const { contextp()->prepareClone(); }
void VRegister8b_test_top_v1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRegister8b_test_top_v1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VRegister8b_test_top_v1___024root__trace_decl_types(VerilatedVcd* tracep);

void VRegister8b_test_top_v1___024root__trace_init_top(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRegister8b_test_top_v1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegister8b_test_top_v1___024root*>(voidSelf);
    VRegister8b_test_top_v1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VRegister8b_test_top_v1___024root__trace_decl_types(tracep);
    VRegister8b_test_top_v1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRegister8b_test_top_v1___024root__trace_register(VRegister8b_test_top_v1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegister8b_test_top_v1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegister8b_test_top_v1::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 10);
    VRegister8b_test_top_v1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
