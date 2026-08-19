// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VP10__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VP10::VP10(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VP10__Syms(contextp(), _vcname__, this)}
    , __PVT__cover_tb{vlSymsp->TOP.__PVT__cover_tb}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , cover_tb__03a__03acg__Vclpkg{vlSymsp->TOP.cover_tb__03a__03acg__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VP10::VP10(const char* _vcname__)
    : VP10(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VP10::~VP10() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VP10___024root___eval_debug_assertions(VP10___024root* vlSelf);
#endif  // VL_DEBUG
void VP10___024root___eval_static(VP10___024root* vlSelf);
void VP10___024root___eval_initial(VP10___024root* vlSelf);
void VP10___024root___eval_settle(VP10___024root* vlSelf);
void VP10___024root___eval(VP10___024root* vlSelf);

void VP10::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VP10::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VP10___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VP10___024root___eval_static(&(vlSymsp->TOP));
        VP10___024root___eval_initial(&(vlSymsp->TOP));
        VP10___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VP10___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VP10::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VP10::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VP10::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VP10___024root___eval_final(VP10___024root* vlSelf);

VL_ATTR_COLD void VP10::final() {
    contextp()->executingFinal(true);
    VP10___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VP10::hierName() const { return vlSymsp->name(); }
const char* VP10::modelName() const { return "VP10"; }
unsigned VP10::threads() const { return 1; }
void VP10::prepareClone() const { contextp()->prepareClone(); }
void VP10::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VP10::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void VP10___024root__trace_decl_types(VerilatedVcd* tracep);

void VP10___024root__trace_init_top(VP10___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VP10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VP10___024root*>(voidSelf);
    VP10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    VP10___024root__trace_decl_types(tracep);
    VP10___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VP10___024root__trace_register(VP10___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VP10::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VP10::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3);
    VP10___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
