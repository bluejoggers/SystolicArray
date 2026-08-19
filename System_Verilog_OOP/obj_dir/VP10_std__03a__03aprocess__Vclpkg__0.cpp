// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

void VP10_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, VP10__Syms* __restrict vlSymsp, VlClassRef<VP10_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VP10_std__03a__03aprocess> p;
    p = VL_NEW(VP10_std__03a__03aprocess, vlSymsp);

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:159:7
    VL_NULL_CHECK(p, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 159)->m_process = vlProcess;
    self__Vfuncrtn = p;
    ++(vlSymsp->__Vcoverage[32]);
}

void VP10_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(VP10__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VP10_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VP10_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = processQueue.size();
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        VL_NULL_CHECK(processQueue.pop_front(), "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 199)->__VnoInFunc_kill(vlSymsp);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
        ++(vlSymsp->__Vcoverage[41]);
    }
    ++(vlSymsp->__Vcoverage[42]);
}

void VP10_std__03a__03aprocess::__VnoInFunc_set_status(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:166:7
    this->m_process->state(s);
    ++(vlSymsp->__Vcoverage[33]);
}

void VP10_std__03a__03aprocess::__VnoInFunc_status(VP10__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:172:21
this->m_process->state()
    ;
    ++(vlSymsp->__Vcoverage[34]);
}

void VP10_std__03a__03aprocess::__VnoInFunc_kill(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
    ++(vlSymsp->__Vcoverage[35]);
}

void VP10_std__03a__03aprocess::__VnoInFunc_suspend(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:183: Assertion failed in %m: std::process::suspend() not supported\n",3, 'M',vlSymsp->name(),"std.process.suspend", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 183, "");
}

void VP10_std__03a__03aprocess::__VnoInFunc_resume(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[36]);
}

VlCoroutine VP10_std__03a__03aprocess::__VnoInFunc_await(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefLogAnd_7;
    IData/*31:0*/ __VlefCall_6__status;
    IData/*31:0*/ __VlefCall_5__status;
    IData/*31:0*/ __VlefCall_4__status;
    IData/*31:0*/ __VlefCall_3__status;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
    __VlefLogOr_2 = (0U == __VlefCall_0__status);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
        __VlefLogOr_2 = (4U == __VlefCall_1__status);
    }
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        CData/*0:0*/ __VdynTrigger_h67ed4f01__0;
        __VdynTrigger_h67ed4f01__0 = 0;
        __VdynTrigger_h67ed4f01__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h67ed4f01__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] std::process.__VlefLogOr_2)", 
                                                         "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                         192);
            __VdynTrigger_h67ed4f01__0 = __VlefLogOr_2;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h67ed4f01__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] std::process.__VlefLogOr_2)", 
                                                     "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                     192);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_3__status);
    if ((4U == __VlefCall_3__status)) {
        ++(vlSymsp->__Vcoverage[37]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_4__status);
    if ((0U == __VlefCall_4__status)) {
        ++(vlSymsp->__Vcoverage[38]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_5__status);
    __VlefLogAnd_7 = (0U != __VlefCall_5__status);
    if (__VlefLogAnd_7) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_6__status);
        __VlefLogAnd_7 = (4U != __VlefCall_6__status);
    }
    if (__VlefLogAnd_7) {
        ++(vlSymsp->__Vcoverage[39]);
    }
    ++(vlSymsp->__Vcoverage[40]);
    co_return;
}

void VP10_std__03a__03aprocess::__VnoInFunc_get_randstate(VP10__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:234:26
0
    );

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:236:7
    s = this->m_process->randstate();
    get_randstate__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[43]);
}

void VP10_std__03a__03aprocess::__VnoInFunc_set_randstate(VP10__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:241:7
    this->m_process->randstate(s);
    ++(vlSymsp->__Vcoverage[44]);
}

void VP10_std__03a__03aprocess::init(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[45]);
}

void VP10_std__03a__03aprocess::_ctor_var_reset(VP10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VP10_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
