// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VP4__pch.h"

//============================================================
// Constructors

VP4::VP4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VP4__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03apacket__Vclpkg{vlSymsp->TOP.__024unit__03a__03apacket__Vclpkg}
    , __024unit__03a__03asub_packet__Vclpkg{vlSymsp->TOP.__024unit__03a__03asub_packet__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VP4::VP4(const char* _vcname__)
    : VP4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VP4::~VP4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VP4___024root___eval_debug_assertions(VP4___024root* vlSelf);
#endif  // VL_DEBUG
void VP4___024root___eval_static(VP4___024root* vlSelf);
void VP4___024root___eval_initial(VP4___024root* vlSelf);
void VP4___024root___eval_settle(VP4___024root* vlSelf);
void VP4___024root___eval(VP4___024root* vlSelf);

void VP4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VP4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VP4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VP4___024root___eval_static(&(vlSymsp->TOP));
        VP4___024root___eval_initial(&(vlSymsp->TOP));
        VP4___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VP4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VP4::eventsPending() { return false; }

uint64_t VP4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VP4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VP4___024root___eval_final(VP4___024root* vlSelf);

VL_ATTR_COLD void VP4::final() {
    contextp()->executingFinal(true);
    VP4___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VP4::hierName() const { return vlSymsp->name(); }
const char* VP4::modelName() const { return "VP4"; }
unsigned VP4::threads() const { return 1; }
void VP4::prepareClone() const { contextp()->prepareClone(); }
void VP4::atClone() const {
    contextp()->threadPoolpOnClone();
}
