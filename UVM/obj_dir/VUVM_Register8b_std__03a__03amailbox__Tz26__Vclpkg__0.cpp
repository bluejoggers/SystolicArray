// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_std__03a__03amailbox__Tz26::init(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_num(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hdaca20c5__0;
    __Vtrigprevexpr_hdaca20c5__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_he8b55d6b__0;
            __VdynTrigger_he8b55d6b__0 = 0;
            __VdynTrigger_he8b55d6b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he8b55d6b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz26.m_queue.size() < std::mailbox__Tz26.m_bound))", 
                                                             "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                             54);
                __Vtrigprevexpr_hdaca20c5__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_he8b55d6b__0 = __Vtrigprevexpr_hdaca20c5__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he8b55d6b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz26.m_queue.size() < std::mailbox__Tz26.m_bound))", 
                                                         "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                         54);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_put(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_put\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_put__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, __VlefCall_0__num, this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0173eddf__0;
    __Vtrigprevexpr_h0173eddf__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h037b1e45__0;
            __VdynTrigger_h037b1e45__0 = 0;
            __VdynTrigger_h037b1e45__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h037b1e45__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz26.m_queue.size()))", 
                                                             "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                             70);
                __Vtrigprevexpr_h0173eddf__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h037b1e45__0 = __Vtrigprevexpr_h0173eddf__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h037b1e45__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz26.m_queue.size()))", 
                                                         "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                         70);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_get(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_get\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_get__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h0173eddf__1;
    __Vtrigprevexpr_h0173eddf__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_h037b1e45__1;
            __VdynTrigger_h037b1e45__1 = 0;
            __VdynTrigger_h037b1e45__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h037b1e45__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz26.m_queue.size()))", 
                                                             "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                             87);
                __Vtrigprevexpr_h0173eddf__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_h037b1e45__1 = __Vtrigprevexpr_h0173eddf__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h037b1e45__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz26.m_queue.size()))", 
                                                         "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                         87);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_peek(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::__VnoInFunc_try_peek\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__num;
    {
        try_peek__Vfuncrtn = 0U;
        this->__VnoInFunc_num(vlSymsp, __VlefCall_0__num);
        if (VL_LTS_III(32, 0U, __VlefCall_0__num)) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_std__03a__03amailbox__Tz26::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VUVM_Register8b_std__03a__03amailbox__Tz26::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}
