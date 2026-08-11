// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VP1__pch.h"

//============================================================
// Constructors

VP1::VP1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VP1__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03amy_config__Vclpkg{vlSymsp->TOP.__024unit__03a__03amy_config__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VP1::VP1(const char* _vcname__)
    : VP1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VP1::~VP1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VP1___024root___eval_debug_assertions(VP1___024root* vlSelf);
#endif  // VL_DEBUG
void VP1___024root___eval_static(VP1___024root* vlSelf);
void VP1___024root___eval_initial(VP1___024root* vlSelf);
void VP1___024root___eval_settle(VP1___024root* vlSelf);
void VP1___024root___eval(VP1___024root* vlSelf);

void VP1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VP1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VP1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VP1___024root___eval_static(&(vlSymsp->TOP));
        VP1___024root___eval_initial(&(vlSymsp->TOP));
        VP1___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VP1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VP1::eventsPending() { return false; }

uint64_t VP1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VP1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VP1___024root___eval_final(VP1___024root* vlSelf);

VL_ATTR_COLD void VP1::final() {
    contextp()->executingFinal(true);
    VP1___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VP1::hierName() const { return vlSymsp->name(); }
const char* VP1::modelName() const { return "VP1"; }
unsigned VP1::threads() const { return 1; }
void VP1::prepareClone() const { contextp()->prepareClone(); }
void VP1::atClone() const {
    contextp()->threadPoolpOnClone();
}
