// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VP8__pch.h"

//============================================================
// Constructors

VP8::VP8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VP8__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , __024unit__03a__03amypacket__Vclpkg{vlSymsp->TOP.__024unit__03a__03amypacket__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VP8::VP8(const char* _vcname__)
    : VP8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VP8::~VP8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VP8___024root___eval_debug_assertions(VP8___024root* vlSelf);
#endif  // VL_DEBUG
void VP8___024root___eval_static(VP8___024root* vlSelf);
void VP8___024root___eval_initial(VP8___024root* vlSelf);
void VP8___024root___eval_settle(VP8___024root* vlSelf);
void VP8___024root___eval(VP8___024root* vlSelf);

void VP8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VP8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VP8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VP8___024root___eval_static(&(vlSymsp->TOP));
        VP8___024root___eval_initial(&(vlSymsp->TOP));
        VP8___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VP8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VP8::eventsPending() { return false; }

uint64_t VP8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VP8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VP8___024root___eval_final(VP8___024root* vlSelf);

VL_ATTR_COLD void VP8::final() {
    contextp()->executingFinal(true);
    VP8___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VP8::hierName() const { return vlSymsp->name(); }
const char* VP8::modelName() const { return "VP8"; }
unsigned VP8::threads() const { return 1; }
void VP8::prepareClone() const { contextp()->prepareClone(); }
void VP8::atClone() const {
    contextp()->threadPoolpOnClone();
}
