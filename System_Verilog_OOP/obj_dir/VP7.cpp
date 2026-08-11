// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VP7__pch.h"

//============================================================
// Constructors

VP7::VP7(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VP7__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03acomponent__Vclpkg{vlSymsp->TOP.__024unit__03a__03acomponent__Vclpkg}
    , __024unit__03a__03adriver__Vclpkg{vlSymsp->TOP.__024unit__03a__03adriver__Vclpkg}
    , __024unit__03a__03amonitor__Vclpkg{vlSymsp->TOP.__024unit__03a__03amonitor__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VP7::VP7(const char* _vcname__)
    : VP7(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VP7::~VP7() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VP7___024root___eval_debug_assertions(VP7___024root* vlSelf);
#endif  // VL_DEBUG
void VP7___024root___eval_static(VP7___024root* vlSelf);
void VP7___024root___eval_initial(VP7___024root* vlSelf);
void VP7___024root___eval_settle(VP7___024root* vlSelf);
void VP7___024root___eval(VP7___024root* vlSelf);

void VP7::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VP7::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VP7___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VP7___024root___eval_static(&(vlSymsp->TOP));
        VP7___024root___eval_initial(&(vlSymsp->TOP));
        VP7___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VP7___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VP7::eventsPending() { return false; }

uint64_t VP7::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VP7::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VP7___024root___eval_final(VP7___024root* vlSelf);

VL_ATTR_COLD void VP7::final() {
    contextp()->executingFinal(true);
    VP7___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VP7::hierName() const { return vlSymsp->name(); }
const char* VP7::modelName() const { return "VP7"; }
unsigned VP7::threads() const { return 1; }
void VP7::prepareClone() const { contextp()->prepareClone(); }
void VP7::atClone() const {
    contextp()->threadPoolpOnClone();
}
