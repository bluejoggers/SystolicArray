// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegister8b_txnobj__pch.h"

//============================================================
// Constructors

VRegister8b_txnobj::VRegister8b_txnobj(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegister8b_txnobj__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegister8b_txnobj::VRegister8b_txnobj(const char* _vcname__)
    : VRegister8b_txnobj(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegister8b_txnobj::~VRegister8b_txnobj() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegister8b_txnobj___024root___eval_debug_assertions(VRegister8b_txnobj___024root* vlSelf);
#endif  // VL_DEBUG
void VRegister8b_txnobj___024root___eval_static(VRegister8b_txnobj___024root* vlSelf);
void VRegister8b_txnobj___024root___eval_initial(VRegister8b_txnobj___024root* vlSelf);
void VRegister8b_txnobj___024root___eval_settle(VRegister8b_txnobj___024root* vlSelf);
void VRegister8b_txnobj___024root___eval(VRegister8b_txnobj___024root* vlSelf);

void VRegister8b_txnobj::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegister8b_txnobj::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegister8b_txnobj___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegister8b_txnobj___024root___eval_static(&(vlSymsp->TOP));
        VRegister8b_txnobj___024root___eval_initial(&(vlSymsp->TOP));
        VRegister8b_txnobj___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegister8b_txnobj___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegister8b_txnobj::eventsPending() { return false; }

uint64_t VRegister8b_txnobj::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegister8b_txnobj::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegister8b_txnobj___024root___eval_final(VRegister8b_txnobj___024root* vlSelf);

VL_ATTR_COLD void VRegister8b_txnobj::final() {
    contextp()->executingFinal(true);
    VRegister8b_txnobj___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegister8b_txnobj::hierName() const { return vlSymsp->name(); }
const char* VRegister8b_txnobj::modelName() const { return "VRegister8b_txnobj"; }
unsigned VRegister8b_txnobj::threads() const { return 1; }
void VRegister8b_txnobj::prepareClone() const { contextp()->prepareClone(); }
void VRegister8b_txnobj::atClone() const {
    contextp()->threadPoolpOnClone();
}
