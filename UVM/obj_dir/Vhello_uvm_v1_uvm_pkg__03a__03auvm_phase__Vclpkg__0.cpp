// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__2__id = "NOTIMPL"s;
    __Vfunc_uvm_report_enabled__2__severity = 1U;
    __Vfunc_uvm_report_enabled__2__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__4__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__6__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__6__context_name = ""s;
        __Vtask_uvm_report_warning__6__line = 0x00000820U;
        this->__Vtask_uvm_report_warning__6__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_warning__6__verbosity = 0U;
        this->__Vtask_uvm_report_warning__6__message = "uvm_phase::jump_all is not implemented and has been replaced by uvm_domain::jump_all"s;
        this->__Vtask_uvm_report_warning__6__id = "NOTIMPL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__6__id, this->__Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, this->__Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, this->__Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
    }
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__12__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__13__Vfuncout;
    __Vtask_try_put__13__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk152__DOT__ph;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk153__DOT__phase;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_phase.svh", 2200)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__12__Vfuncout);
    unnamedblk152__DOT__ph = __Vfunc_get_common_domain__12__Vfuncout;
    VL_NULL_CHECK(this->__PVT__m_phase_hopper, "../../uvm/distrib/src/base/uvm_phase.svh", 2205)->__VnoInFunc_try_put(vlSymsp, unnamedblk152__DOT__ph, __Vtask_try_put__13__Vfuncout);
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_phase_hopper, "../../uvm/distrib/src/base/uvm_phase.svh", 2210)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk153__DOT__phase);
        this->__VnoInFunc_m_run_phases____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk153__DOT__phase);
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                2216);
    }
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk153__DOT__phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_3__15__phase;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtask___VforkTask_3__15__phase = unnamedblk153__DOT__phase;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_phase.svh", 
                                            2211);
    co_await VL_NULL_CHECK(__Vtask___VforkTask_3__15__phase, "../../uvm/distrib/src/base/uvm_phase.svh", 2213)->__VnoInFunc_execute_phase(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func\n"); );
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection\n"); );
    // Body
    get_objection__Vfuncrtn = this->__PVT__phase_done;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node\n"); );
    // Body
    {
        if ((VlNull{} != this->__PVT__m_imp)) {
            get_begin_node__Vfuncrtn = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        get_begin_node__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node\n"); );
    // Body
    get_end_node__Vfuncrtn = this->__PVT__m_end_node;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count\n"); );
    // Body
    get_ready_to_end_count__Vfuncrtn = this->__PVT__m_ready_to_end_count;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__m_aa2string;
    std::string __VlefCall_2__m_aa2string;
    std::string __VlefCall_1__get_schedule_name;
    std::string __VlefCall_0__get_name;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    s = ""s;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    if ((VlNull{} == this->__PVT__m_parent)) {
        __VlefCall_1__get_schedule_name = "null"s;
    } else {
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_1__get_schedule_name);
    }
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_predecessors, __VlefCall_2__m_aa2string);
    this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_successors, __VlefCall_3__m_aa2string);
    VL_SFORMAT_NX(s,"phase: %s parent=%s  pred=%s  succ=%s",4
                  , 'S',&(__VlefCall_0__get_name), 'S',&(__VlefCall_1__get_schedule_name)
                  , 'S',&(__VlefCall_2__m_aa2string)
                  , 'S',&(__VlefCall_3__m_aa2string));
    convert2string__Vfuncrtn = s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__ph__Vmore;
    unnamedblk1__DOT__ph__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__unnamedblk2__DOT__n;
    std::string s;
    IData/*31:0*/ i;
    i = 0U;
    s = "'{ "s;
    unnamedblk1__DOT__ph__Vmore = (0U != aa.first(unnamedblk1__DOT__ph__Vnext));
    while (unnamedblk1__DOT__ph__Vmore) {
        unnamedblk1__DOT__ph = unnamedblk1__DOT__ph__Vnext;
        unnamedblk1__DOT__ph__Vmore = (0U != aa.next(unnamedblk1__DOT__ph__Vnext));
        unnamedblk1__DOT__unnamedblk2__DOT__n = unnamedblk1__DOT__ph;
        if ((VlNull{} == unnamedblk1__DOT__unnamedblk2__DOT__n)) {
            __VlefCall_0__get_name = "null"s;
        } else {
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__n, "../../uvm/distrib/src/base/uvm_phase.svh", 641)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        }
        s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, __VlefCall_0__get_name), 
                           VL_CVT_PACK_STR_NI(((i == 
                                                (aa.size() 
                                                 - (IData)(1U)))
                                                ? 0U
                                                : 0x2c20U)));
        i = ((IData)(1U) + i);
    }
    s = VL_CONCATN_NNN(s, " }"s);
    m_aa2string__Vfuncrtn = s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain\n"); );
    // Body
    is_domain__Vfuncrtn = (4U == this->__PVT__m_phase_type);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> &phases) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children\n"); );
    // Body
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk3__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk3__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk3__DOT__succ__Vmore;
    unnamedblk3__DOT__succ__Vmore = 0;
    unnamedblk3__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk3__DOT__succ__Vnext));
    while (unnamedblk3__DOT__succ__Vmore) {
        unnamedblk3__DOT__succ = unnamedblk3__DOT__succ__Vnext;
        unnamedblk3__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk3__DOT__succ__Vnext));
        phases.push_back(unnamedblk3__DOT__succ);
        VL_NULL_CHECK(unnamedblk3__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 657)->__VnoInFunc_m_get_transitive_children(vlSymsp, phases);
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> parent) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::new\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_value__8__Vfuncout;
    __Vtask_get_arg_value__8__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_arg_value__9__Vfuncout;
    __Vtask_get_arg_value__9__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__max_ready_to_end_iter = 0x00000014U;
    IData/*31:0*/ __VlefCall_1__get_arg_value;
    IData/*31:0*/ __VlefCall_0__get_arg_value;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_cmdline_processor> unnamedblk85__DOT__clp;
    std::string unnamedblk85__DOT__val;
    /*super.new*/;
    this->__PVT__m_phase_type = phase_type;
    if ((("common"s == name) & (4U == phase_type))) {
        this->__PVT__m_state = 1U;
    }
    this->__PVT__m_run_count = 0U;
    this->__PVT__m_parent = parent;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, unnamedblk85__DOT__clp);
    unnamedblk85__DOT__val = ""s;
    VL_NULL_CHECK(unnamedblk85__DOT__clp, "../../uvm/distrib/src/base/uvm_phase.svh", 803)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_PHASE_TRACE"s, unnamedblk85__DOT__val, __Vtask_get_arg_value__8__Vfuncout);
    __VlefCall_0__get_arg_value = __Vtask_get_arg_value__8__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace 
        = (0U != __VlefCall_0__get_arg_value);
    VL_NULL_CHECK(unnamedblk85__DOT__clp, "../../uvm/distrib/src/base/uvm_phase.svh", 807)->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_USE_OVM_RUN_SEMANTIC"s, unnamedblk85__DOT__val, __Vtask_get_arg_value__9__Vfuncout);
    __VlefCall_1__get_arg_value = __Vtask_get_arg_value__9__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic 
        = (0U != __VlefCall_1__get_arg_value);
    if (((VlNull{} == parent) & ((3U == phase_type) 
                                 | (4U == phase_type)))) {
        this->__PVT__m_end_node = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                                         VL_CVT_PACK_STR_NN(
                                                            VL_CONCATN_NNN(name, "_end"s)), 2U, 
                                         VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        this->__PVT__m_successors.at(this->__PVT__m_end_node) = 1U;
        VL_NULL_CHECK(this->__PVT__m_end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 819)->__PVT__m_predecessors.at(
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> before_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__15__verbosity;
    __Vtask_uvm_report_fatal__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__15__line;
    __Vtask_uvm_report_fatal__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__15__report_enabled_checked;
    __Vtask_uvm_report_fatal__15__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__27__verbosity;
    __Vtask_uvm_report_fatal__27__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__27__line;
    __Vtask_uvm_report_fatal__27__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__27__report_enabled_checked;
    __Vtask_uvm_report_fatal__27__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__39__verbosity;
    __Vtask_uvm_report_fatal__39__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__39__line;
    __Vtask_uvm_report_fatal__39__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__39__report_enabled_checked;
    __Vtask_uvm_report_fatal__39__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__verbosity;
    __Vfunc_uvm_report_enabled__46__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__46__severity;
    __Vfunc_uvm_report_enabled__46__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__51__verbosity;
    __Vtask_uvm_report_fatal__51__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__51__line;
    __Vtask_uvm_report_fatal__51__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__51__report_enabled_checked;
    __Vtask_uvm_report_fatal__51__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__55__verbosity;
    __Vfunc_uvm_report_enabled__55__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__55__severity;
    __Vfunc_uvm_report_enabled__55__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__59__verbosity;
    __Vtask_uvm_report_fatal__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__59__line;
    __Vtask_uvm_report_fatal__59__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__59__report_enabled_checked;
    __Vtask_uvm_report_fatal__59__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__verbosity;
    __Vfunc_uvm_report_enabled__63__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__63__severity;
    __Vfunc_uvm_report_enabled__63__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__67__verbosity;
    __Vtask_uvm_report_fatal__67__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__67__line;
    __Vtask_uvm_report_fatal__67__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__67__report_enabled_checked;
    __Vtask_uvm_report_fatal__67__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
    __Vfunc_uvm_report_enabled__79__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
    __Vfunc_uvm_report_enabled__79__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__93__verbosity;
    __Vtask_uvm_report_info__93__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__93__line;
    __Vtask_uvm_report_info__93__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__93__report_enabled_checked;
    __Vtask_uvm_report_info__93__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__104__verbosity;
    __Vtask_uvm_report_fatal__104__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__104__line;
    __Vtask_uvm_report_fatal__104__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__104__report_enabled_checked;
    __Vtask_uvm_report_fatal__104__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_38__get_name;
    std::string __VlefCall_37__get_name;
    std::string __VlefCall_36__get_name;
    IData/*31:0*/ __VlefCall_35__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_34__is_before;
    std::string __VlefCall_33__get_name;
    std::string __VlefCall_32__get_name;
    std::string __VlefCond_31;
    IData/*31:0*/ __VlefCall_30__get_inst_id;
    std::string __VlefCall_29__get_name;
    std::string __VlefCall_28__get_name;
    std::string __VlefCall_27__get_name;
    std::string __VlefCall_26__get_name;
    IData/*31:0*/ __VlefCall_25__get_inst_id;
    std::string __VlefCall_24__get_full_name;
    std::string __VlefCall_23__get_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_objection> __VlefCall_21__create;
    std::string __VlefCall_20__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_test_done_objection> __VlefCall_19__get;
    std::string __VlefCall_18__get_name;
    IData/*31:0*/ __VlefExpr_17;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__get_phase_type;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__uvm_report_enabled;
    std::string __VlefCall_12__get_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_10;
    IData/*31:0*/ __VlefCall_9__get_phase_type;
    std::string __VlefCall_8__get_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    IData/*31:0*/ __VlefCall_5__get_phase_type;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_2;
    IData/*31:0*/ __VlefCall_1__get_phase_type;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk86__DOT__nm;
    std::string unnamedblk87__DOT__nm;
    std::string unnamedblk88__DOT__nm;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_task_phase> unnamedblk89__DOT__tp;
    IData/*31:0*/ unnamedblk90__DOT__typ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk91__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk91__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk91__DOT__pred__Vmore;
    unnamedblk91__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk92__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk92__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk92__DOT__succ__Vmore;
    unnamedblk92__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk93__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk93__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk93__DOT__pred__Vmore;
    unnamedblk93__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk94__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk94__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk94__DOT__succ__Vmore;
    unnamedblk94__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk95__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk95__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> new_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> begin_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> end_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> tmp_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_state_change> state_chg;
    if ((VlNull{} == phase)) {
        this->__Vfunc_uvm_report_enabled__11__id = "PH/NULL"s;
        __Vfunc_uvm_report_enabled__11__severity = 3U;
        __Vfunc_uvm_report_enabled__11__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__15__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__15__context_name = ""s;
            __Vtask_uvm_report_fatal__15__line = 0x00000345U;
            this->__Vtask_uvm_report_fatal__15__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_fatal__15__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__15__message = "add: phase argument is null"s;
            this->__Vtask_uvm_report_fatal__15__id = "PH/NULL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__15__id, this->__Vtask_uvm_report_fatal__15__message, __Vtask_uvm_report_fatal__15__verbosity, this->__Vtask_uvm_report_fatal__15__filename, __Vtask_uvm_report_fatal__15__line, this->__Vtask_uvm_report_fatal__15__context_name, (IData)(__Vtask_uvm_report_fatal__15__report_enabled_checked));
        }
    }
    __VlefLogAnd_2 = (VlNull{} != with_phase);
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 839)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_1__get_phase_type);
        __VlefLogAnd_2 = (0U == __VlefCall_1__get_phase_type);
    }
    if (__VlefLogAnd_2) {
        VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 840)->__VnoInFunc_get_name(vlSymsp, unnamedblk86__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, with_phase);
        if ((VlNull{} == with_phase)) {
            this->__Vfunc_uvm_report_enabled__22__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__22__severity = 3U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_fatal__27__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__27__context_name = ""s;
                __Vtask_uvm_report_fatal__27__line = 0x0000034cU;
                this->__Vtask_uvm_report_fatal__27__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__27__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__27__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find with_phase '"s, unnamedblk86__DOT__nm), "' within node '"s), __VlefCall_4__get_name), "'"s));
                this->__Vtask_uvm_report_fatal__27__id = "PH_BAD_ADD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__29__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__27__id, this->__Vtask_uvm_report_fatal__27__message, __Vtask_uvm_report_fatal__27__verbosity, this->__Vtask_uvm_report_fatal__27__filename, __Vtask_uvm_report_fatal__27__line, this->__Vtask_uvm_report_fatal__27__context_name, (IData)(__Vtask_uvm_report_fatal__27__report_enabled_checked));
            }
        }
    }
    __VlefLogAnd_6 = (VlNull{} != before_phase);
    if (__VlefLogAnd_6) {
        VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 847)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_5__get_phase_type);
        __VlefLogAnd_6 = (0U == __VlefCall_5__get_phase_type);
    }
    if (__VlefLogAnd_6) {
        VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 848)->__VnoInFunc_get_name(vlSymsp, unnamedblk87__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, before_phase, 1U, before_phase);
        if ((VlNull{} == before_phase)) {
            this->__Vfunc_uvm_report_enabled__34__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__34__severity = 3U;
            __Vfunc_uvm_report_enabled__34__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__36__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_8__get_name);
                __Vtask_uvm_report_fatal__39__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__39__context_name = ""s;
                __Vtask_uvm_report_fatal__39__line = 0x00000354U;
                this->__Vtask_uvm_report_fatal__39__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__39__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__39__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find before_phase '"s, unnamedblk87__DOT__nm), "' within node '"s), __VlefCall_8__get_name), "'"s));
                this->__Vtask_uvm_report_fatal__39__id = "PH_BAD_ADD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__39__id, this->__Vtask_uvm_report_fatal__39__message, __Vtask_uvm_report_fatal__39__verbosity, this->__Vtask_uvm_report_fatal__39__filename, __Vtask_uvm_report_fatal__39__line, this->__Vtask_uvm_report_fatal__39__context_name, (IData)(__Vtask_uvm_report_fatal__39__report_enabled_checked));
            }
        }
    }
    __VlefLogAnd_10 = (VlNull{} != after_phase);
    if (__VlefLogAnd_10) {
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 855)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_9__get_phase_type);
        __VlefLogAnd_10 = (0U == __VlefCall_9__get_phase_type);
    }
    if (__VlefLogAnd_10) {
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 856)->__VnoInFunc_get_name(vlSymsp, unnamedblk88__DOT__nm);
        this->__VnoInFunc_find(vlProcess, vlSymsp, after_phase, 1U, after_phase);
        if ((VlNull{} == after_phase)) {
            this->__Vfunc_uvm_report_enabled__46__id = "PH_BAD_ADD"s;
            __Vfunc_uvm_report_enabled__46__severity = 3U;
            __Vfunc_uvm_report_enabled__46__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__47__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__47__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__48__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__46__verbosity, (IData)(__Vfunc_uvm_report_enabled__46__severity), this->__Vfunc_uvm_report_enabled__46__id, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_12__get_name);
                __Vtask_uvm_report_fatal__51__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__51__context_name = ""s;
                __Vtask_uvm_report_fatal__51__line = 0x0000035cU;
                this->__Vtask_uvm_report_fatal__51__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__51__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__51__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find after_phase '"s, unnamedblk88__DOT__nm), "' within node '"s), __VlefCall_12__get_name), "'"s));
                this->__Vtask_uvm_report_fatal__51__id = "PH_BAD_ADD"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__53__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__51__id, this->__Vtask_uvm_report_fatal__51__message, __Vtask_uvm_report_fatal__51__verbosity, this->__Vtask_uvm_report_fatal__51__filename, __Vtask_uvm_report_fatal__51__line, this->__Vtask_uvm_report_fatal__51__context_name, (IData)(__Vtask_uvm_report_fatal__51__report_enabled_checked));
            }
        }
    }
    if (((VlNull{} != with_phase) & ((VlNull{} != after_phase) 
                                     | (VlNull{} != before_phase)))) {
        this->__Vfunc_uvm_report_enabled__55__id = "PH_BAD_ADD"s;
        __Vfunc_uvm_report_enabled__55__severity = 3U;
        __Vfunc_uvm_report_enabled__55__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__56__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__56__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__57__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__55__verbosity, (IData)(__Vfunc_uvm_report_enabled__55__severity), this->__Vfunc_uvm_report_enabled__55__id, __VlefCall_13__uvm_report_enabled);
        if ((0U != __VlefCall_13__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__59__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__59__context_name = ""s;
            __Vtask_uvm_report_fatal__59__line = 0x00000361U;
            this->__Vtask_uvm_report_fatal__59__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_fatal__59__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__59__message = "cannot specify both 'with' and 'before/after' phase relationships"s;
            this->__Vtask_uvm_report_fatal__59__id = "PH_BAD_ADD"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__59__id, this->__Vtask_uvm_report_fatal__59__message, __Vtask_uvm_report_fatal__59__verbosity, this->__Vtask_uvm_report_fatal__59__filename, __Vtask_uvm_report_fatal__59__line, this->__Vtask_uvm_report_fatal__59__context_name, (IData)(__Vtask_uvm_report_fatal__59__report_enabled_checked));
        }
    }
    if ((((before_phase == VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}) 
          | (after_phase == this->__PVT__m_end_node)) 
         | (with_phase == this->__PVT__m_end_node))) {
        this->__Vfunc_uvm_report_enabled__63__id = "PH_BAD_ADD"s;
        __Vfunc_uvm_report_enabled__63__severity = 3U;
        __Vfunc_uvm_report_enabled__63__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__64__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__64__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__65__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__63__verbosity, (IData)(__Vfunc_uvm_report_enabled__63__severity), this->__Vfunc_uvm_report_enabled__63__id, __VlefCall_14__uvm_report_enabled);
        if ((0U != __VlefCall_14__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__67__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__67__context_name = ""s;
            __Vtask_uvm_report_fatal__67__line = 0x00000365U;
            this->__Vtask_uvm_report_fatal__67__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_fatal__67__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__67__message = "cannot add before begin node, after end node, or with end nodes"s;
            this->__Vtask_uvm_report_fatal__67__id = "PH_BAD_ADD"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__68__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__68__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__69__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__67__id, this->__Vtask_uvm_report_fatal__67__message, __Vtask_uvm_report_fatal__67__verbosity, this->__Vtask_uvm_report_fatal__67__filename, __Vtask_uvm_report_fatal__67__line, this->__Vtask_uvm_report_fatal__67__context_name, (IData)(__Vtask_uvm_report_fatal__67__report_enabled_checked));
        }
    }
    VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 872)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_15__get_phase_type);
    if ((0U == __VlefCall_15__get_phase_type)) {
        VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 874)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
        new_node = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                          VL_CVT_PACK_STR_NN(__VlefCall_16__get_name), 1U, 
                          VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 875)->__PVT__m_imp 
            = phase;
        begin_node = new_node;
        end_node = new_node;
        __VlefExpr_17 = VL_CAST_DYNAMIC(phase, unnamedblk89__DOT__tp);
        if (__VlefExpr_17) {
            VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 882)->__VnoInFunc_get_name(vlSymsp, __VlefCall_18__get_name);
            if (("run"s == __VlefCall_18__get_name)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_test_done_objection__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __VlefCall_19__get);
                VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 883)->__PVT__phase_done 
                    = __VlefCall_19__get;
            } else {
                VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 886)->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(__VlefCall_20__get_name, "_objection"s)), VlNull{}, ""s, __VlefCall_21__create);
                VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 886)->__PVT__phase_done 
                    = __VlefCall_21__create;
            }
        }
    } else {
        begin_node = phase;
        end_node = VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 894)
            ->__PVT__m_end_node;
        VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 895)->__PVT__m_parent 
            = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
    }
    if ((((VlNull{} == with_phase) & (VlNull{} == after_phase)) 
         & (VlNull{} == before_phase))) {
        before_phase = this->__PVT__m_end_node;
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 913)->__VnoInFunc_get_phase_type(vlSymsp, unnamedblk90__DOT__typ);
        this->__Vfunc_uvm_report_enabled__79__id = "PH/TRC/ADD_PH"s;
        __Vfunc_uvm_report_enabled__79__severity = 0U;
        __Vfunc_uvm_report_enabled__79__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__81__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), this->__Vfunc_uvm_report_enabled__79__id, __VlefCall_22__uvm_report_enabled);
        if ((0U != __VlefCall_22__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_23__get_name);
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_24__get_full_name);
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_25__get_inst_id);
            if ((VlNull{} == with_phase)) {
                __VlefCall_26__get_name = "null"s;
            } else {
                VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_26__get_name);
            }
            if ((VlNull{} == after_phase)) {
                __VlefCall_27__get_name = "null"s;
            } else {
                VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_27__get_name);
            }
            if ((VlNull{} == before_phase)) {
                __VlefCall_28__get_name = "null"s;
            } else {
                VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_28__get_name);
            }
            if ((VlNull{} == new_node)) {
                __VlefCond_31 = "null"s;
            } else {
                VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_29__get_name);
                VL_NULL_CHECK(new_node, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_30__get_inst_id);
                __VlefCond_31 = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_29__get_name, " inst_id="s), VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,__VlefCall_30__get_inst_id) );
            }
            if ((VlNull{} == begin_node)) {
                __VlefCall_32__get_name = "null"s;
            } else {
                VL_NULL_CHECK(begin_node, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_32__get_name);
            }
            if ((VlNull{} == end_node)) {
                __VlefCall_33__get_name = "null"s;
            } else {
                VL_NULL_CHECK(end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 924)->__VnoInFunc_get_name(vlSymsp, __VlefCall_33__get_name);
            }
            __Vtask_uvm_report_info__93__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__93__context_name = ""s;
            __Vtask_uvm_report_info__93__line = 0x0000039cU;
            this->__Vtask_uvm_report_info__93__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__93__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__93__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_23__get_name, " ("s), Vhello_uvm_v1___024unit::__Venumtab_enum_name35
                                                                                [
                                                                                (7U 
                                                                                & this->__PVT__m_phase_type)]), ") ADD_PHASE: phase="s), __VlefCall_24__get_full_name), " ("s), Vhello_uvm_v1___024unit::__Venumtab_enum_name35
                                                                                [
                                                                                (7U 
                                                                                & unnamedblk90__DOT__typ)]), ", inst_id="s), VL_SFORMATF_N_NX("%0d",1
                                                                                , '~',32,__VlefCall_25__get_inst_id) ), ")"s), " with_phase="s), __VlefCall_26__get_name), " after_phase="s), __VlefCall_27__get_name), " before_phase="s), __VlefCall_28__get_name), " new_node="s), __VlefCond_31), " begin_node="s), __VlefCall_32__get_name), " end_node="s), __VlefCall_33__get_name));
            this->__Vtask_uvm_report_info__93__id = "PH/TRC/ADD_PH"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__94__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__94__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__93__id, this->__Vtask_uvm_report_info__93__message, __Vtask_uvm_report_info__93__verbosity, this->__Vtask_uvm_report_info__93__filename, __Vtask_uvm_report_info__93__line, this->__Vtask_uvm_report_info__93__context_name, (IData)(__Vtask_uvm_report_info__93__report_enabled_checked));
        }
    }
    if ((VlNull{} != with_phase)) {
        VL_NULL_CHECK(begin_node, "../../uvm/distrib/src/base/uvm_phase.svh", 930)->__PVT__m_predecessors 
            = VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 930)
            ->__PVT__m_predecessors;
        VL_NULL_CHECK(end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 931)->__PVT__m_successors 
            = VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 931)
            ->__PVT__m_successors;
        unnamedblk91__DOT__pred__Vmore = (0U != VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 932)
                                          ->__PVT__m_predecessors.first(unnamedblk91__DOT__pred__Vnext));
        while (unnamedblk91__DOT__pred__Vmore) {
            unnamedblk91__DOT__pred = unnamedblk91__DOT__pred__Vnext;
            unnamedblk91__DOT__pred__Vmore = (0U != VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 932)
                                              ->__PVT__m_predecessors.next(unnamedblk91__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk91__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 933)->__PVT__m_successors.at(begin_node) = 1U;
        }
        unnamedblk92__DOT__succ__Vmore = (0U != VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 934)
                                          ->__PVT__m_successors.first(unnamedblk92__DOT__succ__Vnext));
        while (unnamedblk92__DOT__succ__Vmore) {
            unnamedblk92__DOT__succ = unnamedblk92__DOT__succ__Vnext;
            unnamedblk92__DOT__succ__Vmore = (0U != VL_NULL_CHECK(with_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 934)
                                              ->__PVT__m_successors.next(unnamedblk92__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk92__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 935)->__PVT__m_predecessors.at(end_node) = 1U;
        }
    } else if (((VlNull{} != before_phase) & (VlNull{} 
                                              == after_phase))) {
        VL_NULL_CHECK(begin_node, "../../uvm/distrib/src/base/uvm_phase.svh", 941)->__PVT__m_predecessors 
            = VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 941)
            ->__PVT__m_predecessors;
        VL_NULL_CHECK(end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 942)->__PVT__m_successors.at(before_phase) = 1U;
        unnamedblk93__DOT__pred__Vmore = (0U != VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 943)
                                          ->__PVT__m_predecessors.first(unnamedblk93__DOT__pred__Vnext));
        while (unnamedblk93__DOT__pred__Vmore) {
            unnamedblk93__DOT__pred = unnamedblk93__DOT__pred__Vnext;
            unnamedblk93__DOT__pred__Vmore = (0U != VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 943)
                                              ->__PVT__m_predecessors.next(unnamedblk93__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk93__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 944)->__PVT__m_successors.erase(before_phase);
            VL_NULL_CHECK(unnamedblk93__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 945)->__PVT__m_successors.at(begin_node) = 1U;
        }
        VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 947)->__PVT__m_predecessors.clear();
        VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 948)->__PVT__m_predecessors.at(end_node) = 1U;
    } else if (((VlNull{} == before_phase) & (VlNull{} 
                                              != after_phase))) {
        VL_NULL_CHECK(end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 954)->__PVT__m_successors 
            = VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 954)
            ->__PVT__m_successors;
        VL_NULL_CHECK(begin_node, "../../uvm/distrib/src/base/uvm_phase.svh", 955)->__PVT__m_predecessors.at(after_phase) = 1U;
        unnamedblk94__DOT__succ__Vmore = (0U != VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 956)
                                          ->__PVT__m_successors.first(unnamedblk94__DOT__succ__Vnext));
        while (unnamedblk94__DOT__succ__Vmore) {
            unnamedblk94__DOT__succ = unnamedblk94__DOT__succ__Vnext;
            unnamedblk94__DOT__succ__Vmore = (0U != VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 956)
                                              ->__PVT__m_successors.next(unnamedblk94__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk94__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 957)->__PVT__m_predecessors.erase(after_phase);
            VL_NULL_CHECK(unnamedblk94__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 958)->__PVT__m_predecessors.at(end_node) = 1U;
        }
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 960)->__PVT__m_successors.clear();
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 961)->__PVT__m_successors.at(begin_node) = 1U;
    } else if (((VlNull{} != before_phase) & (VlNull{} 
                                              != after_phase))) {
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 967)->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __VlefCall_34__is_before);
        if ((1U & (~ (IData)(__VlefCall_34__is_before)))) {
            this->__Vfunc_uvm_report_enabled__98__id = "PH_ADD_PHASE"s;
            __Vfunc_uvm_report_enabled__98__severity = 3U;
            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__100__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __VlefCall_35__uvm_report_enabled);
            if ((0U != __VlefCall_35__uvm_report_enabled)) {
                VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 969)->__VnoInFunc_get_name(vlSymsp, __VlefCall_36__get_name);
                VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 969)->__VnoInFunc_get_name(vlSymsp, __VlefCall_37__get_name);
                __Vtask_uvm_report_fatal__104__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__104__context_name = ""s;
                __Vtask_uvm_report_fatal__104__line = 0x000003c9U;
                this->__Vtask_uvm_report_fatal__104__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__104__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__104__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, __VlefCall_36__get_name), "' is not before phase '"s), __VlefCall_37__get_name), "'"s));
                this->__Vtask_uvm_report_fatal__104__id = "PH_ADD_PHASE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__105__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__105__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__106__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__104__id, this->__Vtask_uvm_report_fatal__104__message, __Vtask_uvm_report_fatal__104__verbosity, this->__Vtask_uvm_report_fatal__104__filename, __Vtask_uvm_report_fatal__104__line, this->__Vtask_uvm_report_fatal__104__context_name, (IData)(__Vtask_uvm_report_fatal__104__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(begin_node, "../../uvm/distrib/src/base/uvm_phase.svh", 972)->__PVT__m_predecessors.at(after_phase) = 1U;
        VL_NULL_CHECK(end_node, "../../uvm/distrib/src/base/uvm_phase.svh", 973)->__PVT__m_successors.at(before_phase) = 1U;
        VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 974)->__PVT__m_successors.at(begin_node) = 1U;
        VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 975)->__PVT__m_predecessors.at(end_node) = 1U;
        if (VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 976)
            ->__PVT__m_successors.exists(before_phase)) {
            VL_NULL_CHECK(after_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 977)->__PVT__m_successors.erase(before_phase);
            VL_NULL_CHECK(before_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 978)->__PVT__m_successors.erase(after_phase);
        }
    }
    tmp_node = ((VlNull{} == new_node) ? phase : new_node);
    VL_NULL_CHECK(tmp_node, "../../uvm/distrib/src/base/uvm_phase.svh", 988)->__VnoInFunc_get_name(vlSymsp, __VlefCall_38__get_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_38__get_name), VlNull{}, ""s, state_chg);
    VL_NULL_CHECK(state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 989)->__PVT__m_phase 
        = tmp_node;
    VL_NULL_CHECK(state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 990)->__PVT__m_jump_to = VlNull{};
    VL_NULL_CHECK(state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 991)->__PVT__m_prev_state 
        = VL_NULL_CHECK(tmp_node, "../../uvm/distrib/src/base/uvm_phase.svh", 991)
        ->__PVT__m_state;
    VL_NULL_CHECK(tmp_node, "../../uvm/distrib/src/base/uvm_phase.svh", 992)->__PVT__m_state = 1U;
    unnamedblk95__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
    VL_NULL_CHECK(unnamedblk95__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 993)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk95__DOT__cb);
    while ((VlNull{} != unnamedblk95__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk95__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 993)->__VnoInFunc_phase_state_change(vlSymsp, tmp_node, state_chg);
        VL_NULL_CHECK(unnamedblk95__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 993)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk95__DOT__cb);
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp\n"); );
    // Body
    get_imp__Vfuncrtn = this->__PVT__m_imp;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule\n"); );
    // Body
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> sched;
    {
        sched = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
        if (hier) {
            while (true) {
                __VlefLogAnd_1 = (VlNull{} != VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1020)
                                  ->__PVT__m_parent);
                if (__VlefLogAnd_1) {
                    VL_NULL_CHECK(VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1020)
                                  ->__PVT__m_parent, "../../uvm/distrib/src/base/uvm_phase.svh", 1020)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                    __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
                }
                if (!(__VlefLogAnd_1)) break;
                sched = VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1021)
                    ->__PVT__m_parent;
            }
        }
        if ((3U == VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1022)
             ->__PVT__m_phase_type)) {
            get_schedule__Vfuncrtn = sched;
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1024)
             ->__PVT__m_phase_type)) {
            if (((VlNull{} != this->__PVT__m_parent) 
                 && (4U != VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/base/uvm_phase.svh", 1025)
                     ->__PVT__m_phase_type))) {
                get_schedule__Vfuncrtn = this->__PVT__m_parent;
                goto __Vlabel0;
            }
        }
        get_schedule__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__115__verbosity;
    __Vfunc_uvm_report_enabled__115__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__115__severity;
    __Vfunc_uvm_report_enabled__115__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__116__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__117__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__119__verbosity;
    __Vtask_uvm_report_fatal__119__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__119__line;
    __Vtask_uvm_report_fatal__119__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__119__report_enabled_checked;
    __Vtask_uvm_report_fatal__119__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__120__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__121__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase;
    {
        phase = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
        while (((VlNull{} != phase) && (4U != VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 1037)
                                        ->__PVT__m_phase_type))) {
            phase = VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 1038)
                ->__PVT__m_parent;
        }
        if ((VlNull{} == phase)) {
            get_domain__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(phase, get_domain__Vfuncrtn);
        if ((! __VlefExpr_0)) {
            this->__Vfunc_uvm_report_enabled__115__id = "PH/INTERNAL"s;
            __Vfunc_uvm_report_enabled__115__severity = 3U;
            __Vfunc_uvm_report_enabled__115__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__116__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__116__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__117__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__117__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__115__verbosity, (IData)(__Vfunc_uvm_report_enabled__115__severity), this->__Vfunc_uvm_report_enabled__115__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__119__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__119__context_name = ""s;
                __Vtask_uvm_report_fatal__119__line = 0x00000412U;
                this->__Vtask_uvm_report_fatal__119__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__119__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__119__message = "get_domain: m_phase_type is DOMAIN but $cast to uvm_domain fails"s;
                this->__Vtask_uvm_report_fatal__119__id = "PH/INTERNAL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__120__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__120__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__121__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__121__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__119__id, this->__Vtask_uvm_report_fatal__119__message, __Vtask_uvm_report_fatal__119__verbosity, this->__Vtask_uvm_report_fatal__119__filename, __Vtask_uvm_report_fatal__119__line, this->__Vtask_uvm_report_fatal__119__context_name, (IData)(__Vtask_uvm_report_fatal__119__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> domain;
    {
        get_domain_name__Vfuncrtn = ""s;
        this->__VnoInFunc_get_domain(vlProcess, vlSymsp, domain);
        if ((VlNull{} == domain)) {
            get_domain_name__Vfuncrtn = "unknown"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(domain, "../../uvm/distrib/src/base/uvm_phase.svh", 1054)->__VnoInFunc_get_name(vlSymsp, get_domain_name__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name\n"); );
    // Body
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefLogAnd_1;
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> sched;
    std::string s;
    {
        get_schedule_name__Vfuncrtn = ""s;
        s = ""s;
        this->__VnoInFunc_get_schedule(vlSymsp, hier, sched);
        if ((VlNull{} == sched)) {
            get_schedule_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1067)->__VnoInFunc_get_name(vlSymsp, s);
        while (true) {
            __VlefLogAnd_1 = ((VlNull{} != VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1068)
                               ->__PVT__m_parent) && 
                              (VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1068)
                               ->__PVT__m_parent != sched));
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1069)
                              ->__PVT__m_parent, "../../uvm/distrib/src/base/uvm_phase.svh", 1069)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
                __VlefLogAnd_1 = (3U == __VlefCall_0__get_phase_type);
            }
            if (!(__VlefLogAnd_1)) break;
            sched = VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1070)
                ->__PVT__m_parent;
            VL_NULL_CHECK(sched, "../../uvm/distrib/src/base/uvm_phase.svh", 1071)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_2__get_name, 
                                              VL_CVT_PACK_STR_NI(
                                                                 (VL_LTS_III(32, 0U, 
                                                                             VL_LEN_IN(s))
                                                                   ? 0x2eU
                                                                   : 0U))), s);
        }
        get_schedule_name__Vfuncrtn = s;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_name;
    std::string sch;
    {
        get_full_name__Vfuncrtn = ""s;
        sch = ""s;
        if ((0U == this->__PVT__m_phase_type)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, get_full_name__Vfuncrtn);
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, sch);
        if ((""s != sch)) {
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), sch);
        }
        if (((4U != this->__PVT__m_phase_type) & (3U 
                                                  != this->__PVT__m_phase_type))) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), __VlefCall_0__get_name);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type\n"); );
    // Body
    get_phase_type__Vfuncrtn = this->__PVT__m_phase_type;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state\n"); );
    // Body
    get_state__Vfuncrtn = this->__PVT__m_state;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count\n"); );
    // Body
    get_run_count__Vfuncrtn = this->__PVT__m_run_count;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__133__verbosity;
    __Vfunc_uvm_report_enabled__133__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__133__severity;
    __Vfunc_uvm_report_enabled__133__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__134__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__135__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__139__verbosity;
    __Vtask_uvm_report_info__139__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__139__line;
    __Vtask_uvm_report_info__139__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__139__report_enabled_checked;
    __Vtask_uvm_report_info__139__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__140__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__141__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__get_inst_id;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk96__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk96__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk96__DOT__succ__Vmore;
    unnamedblk96__DOT__succ__Vmore = 0;
    if ((4U == this->__PVT__m_phase_type)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level = 0U;
    }
    this->__Vfunc_uvm_report_enabled__133__id = "UVM/PHASE/SUCC"s;
    __Vfunc_uvm_report_enabled__133__severity = 0U;
    __Vfunc_uvm_report_enabled__133__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__134__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__134__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__135__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__135__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__133__verbosity, (IData)(__Vfunc_uvm_report_enabled__133__severity), this->__Vfunc_uvm_report_enabled__133__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_2__get_inst_id);
        __Vtask_uvm_report_info__139__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__139__context_name = ""s;
        __Vtask_uvm_report_info__139__line = 0x00000469U;
        this->__Vtask_uvm_report_info__139__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__139__verbosity = 0U;
        __Vtemp_1 = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__spaces,0U,
                                VL_MULS_III(32, (IData)(2U), vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level));
        __Vtemp_2 = Vhello_uvm_v1___024unit::__Venumtab_enum_name35
            [(7U & this->__PVT__m_phase_type)];
        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__139__message
                      ,"%s%s (%s) id=%0d",4, 'S',&(__Vtemp_1)
                      , 'S',&(__VlefCall_1__get_name)
                      , 'S',&(__Vtemp_2), '~',32,__VlefCall_2__get_inst_id);
        this->__Vtask_uvm_report_info__139__id = "UVM/PHASE/SUCC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__140__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__140__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__141__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__141__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__139__id, this->__Vtask_uvm_report_info__139__message, __Vtask_uvm_report_info__139__verbosity, this->__Vtask_uvm_report_info__139__filename, __Vtask_uvm_report_info__139__line, this->__Vtask_uvm_report_info__139__context_name, (IData)(__Vtask_uvm_report_info__139__report_enabled_checked));
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level);
    unnamedblk96__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk96__DOT__succ__Vnext));
    while (unnamedblk96__DOT__succ__Vmore) {
        unnamedblk96__DOT__succ = unnamedblk96__DOT__succ__Vnext;
        unnamedblk96__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk96__DOT__succ__Vnext));
        VL_NULL_CHECK(unnamedblk96__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1132)->__VnoInFunc_m_print_successors(vlSymsp);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
           - (IData)(1U));
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_3__get_domain;
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_0__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk97__DOT__pred__Vmore;
    unnamedblk97__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__unnamedblk98__DOT__orig;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_predecessor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_predecessor__Vfuncrtn = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk97__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk97__DOT__pred__Vnext));
        while (unnamedblk97__DOT__pred__Vmore) {
            unnamedblk97__DOT__pred = unnamedblk97__DOT__pred__Vnext;
            unnamedblk97__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk97__DOT__pred__Vnext));
            unnamedblk97__DOT__unnamedblk98__DOT__orig 
                = ((VlNull{} == orig_phase) ? VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_2 = (1U & (~ (IData)(stay_in_scope)));
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk97__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1153)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_0__get_schedule);
                VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1153)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                __VlefLogOr_2 = (__VlefCall_0__get_schedule 
                                 == __VlefCall_1__get_schedule);
            }
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk97__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1154)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_3__get_domain);
                VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1154)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                __VlefLogOr_2 = (__VlefCall_3__get_domain 
                                 == __VlefCall_4__get_domain);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(unnamedblk97__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1155)->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk97__DOT__unnamedblk98__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_predecessor__Vfuncrtn = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_predecessor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_5__get_domain;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    CData/*0:0*/ __VlefLogOr_3;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_2__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk99__DOT__pred__Vmore;
    unnamedblk99__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__unnamedblk100__DOT__orig;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> found;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            m_find_predecessor_by_name__Vfuncrtn = 
                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk99__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk99__DOT__pred__Vnext));
        while (unnamedblk99__DOT__pred__Vmore) {
            unnamedblk99__DOT__pred = unnamedblk99__DOT__pred__Vnext;
            unnamedblk99__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk99__DOT__pred__Vnext));
            unnamedblk99__DOT__unnamedblk100__DOT__orig 
                = ((VlNull{} == orig_phase) ? VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_3 = (1U & (~ (IData)(stay_in_scope)));
            if ((1U & (~ (IData)(__VlefLogOr_3)))) {
                VL_NULL_CHECK(unnamedblk99__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1176)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1176)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_2__get_schedule);
                __VlefLogOr_3 = (__VlefCall_1__get_schedule 
                                 == __VlefCall_2__get_schedule);
            }
            if ((1U & (~ (IData)(__VlefLogOr_3)))) {
                VL_NULL_CHECK(unnamedblk99__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1177)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1177)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_5__get_domain);
                __VlefLogOr_3 = (__VlefCall_4__get_domain 
                                 == __VlefCall_5__get_domain);
            }
            if (__VlefLogOr_3) {
                VL_NULL_CHECK(unnamedblk99__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1178)->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk99__DOT__unnamedblk100__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_predecessor_by_name__Vfuncrtn 
                        = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_predecessor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_3__get_domain;
    CData/*0:0*/ __VlefLogOr_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_0__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk101__DOT__succ__Vmore;
    unnamedblk101__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__unnamedblk102__DOT__orig;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_successor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_successor__Vfuncrtn = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk101__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk101__DOT__succ__Vnext));
        while (unnamedblk101__DOT__succ__Vmore) {
            unnamedblk101__DOT__succ = unnamedblk101__DOT__succ__Vnext;
            unnamedblk101__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk101__DOT__succ__Vnext));
            unnamedblk101__DOT__unnamedblk102__DOT__orig 
                = ((VlNull{} == orig_phase) ? VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_2 = (1U & (~ (IData)(stay_in_scope)));
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk101__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1203)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_0__get_schedule);
                VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1203)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                __VlefLogOr_2 = (__VlefCall_0__get_schedule 
                                 == __VlefCall_1__get_schedule);
            }
            if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                VL_NULL_CHECK(unnamedblk101__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1204)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_3__get_domain);
                VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1204)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                __VlefLogOr_2 = (__VlefCall_3__get_domain 
                                 == __VlefCall_4__get_domain);
            }
            if (__VlefLogOr_2) {
                VL_NULL_CHECK(unnamedblk101__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1205)->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk101__DOT__unnamedblk102__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_successor__Vfuncrtn = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_successor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_5__get_domain;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> __VlefCall_4__get_domain;
    CData/*0:0*/ __VlefLogOr_3;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_2__get_schedule;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__get_schedule;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk103__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk103__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk103__DOT__succ__Vmore;
    unnamedblk103__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk103__DOT__unnamedblk104__DOT__orig;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> found;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            m_find_successor_by_name__Vfuncrtn = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        unnamedblk103__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk103__DOT__succ__Vnext));
        while (unnamedblk103__DOT__succ__Vmore) {
            unnamedblk103__DOT__succ = unnamedblk103__DOT__succ__Vnext;
            unnamedblk103__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk103__DOT__succ__Vnext));
            unnamedblk103__DOT__unnamedblk104__DOT__orig 
                = ((VlNull{} == orig_phase) ? VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}
                    : orig_phase);
            __VlefLogOr_3 = (1U & (~ (IData)(stay_in_scope)));
            if ((1U & (~ (IData)(__VlefLogOr_3)))) {
                VL_NULL_CHECK(unnamedblk103__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1227)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_1__get_schedule);
                VL_NULL_CHECK(unnamedblk103__DOT__unnamedblk104__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1227)->__VnoInFunc_get_schedule(vlSymsp, 0U, __VlefCall_2__get_schedule);
                __VlefLogOr_3 = (__VlefCall_1__get_schedule 
                                 == __VlefCall_2__get_schedule);
            }
            if ((1U & (~ (IData)(__VlefLogOr_3)))) {
                VL_NULL_CHECK(unnamedblk103__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1228)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_4__get_domain);
                VL_NULL_CHECK(unnamedblk103__DOT__unnamedblk104__DOT__orig, "../../uvm/distrib/src/base/uvm_phase.svh", 1228)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __VlefCall_5__get_domain);
                __VlefLogOr_3 = (__VlefCall_4__get_domain 
                                 == __VlefCall_5__get_domain);
            }
            if (__VlefLogOr_3) {
                VL_NULL_CHECK(unnamedblk103__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1229)->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk103__DOT__unnamedblk104__DOT__orig, found);
                if ((VlNull{} != found)) {
                    m_find_successor_by_name__Vfuncrtn 
                        = found;
                    goto __Vlabel0;
                }
            }
        }
        m_find_successor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}))) {
            find__Vfuncrtn = phase;
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                             VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
        if ((VlNull{} == find__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                               VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, find__Vfuncrtn);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name\n"); );
    // Body
    std::string __VlefCall_0__get_name;
    {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        if ((__VlefCall_0__get_name == name)) {
            find_by_name__Vfuncrtn = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, find_by_name__Vfuncrtn);
        if ((VlNull{} == find_by_name__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                       VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, find_by_name__Vfuncrtn);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is\n"); );
    // Body
    is__Vfuncrtn = ((this->__PVT__m_imp == phase) | 
                    (VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this} 
                     == phase));
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__m_find_successor;
    CData/*0:0*/ __VlefCall_0__is;
    is_before__Vfuncrtn = 0U;
    this->__VnoInFunc_is(vlSymsp, phase, __VlefCall_0__is);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_0__is)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, 
                                           VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, __VlefCall_1__m_find_successor);
        __VlefLogAnd_2 = (VlNull{} != __VlefCall_1__m_find_successor);
    }
    is_before__Vfuncrtn = __VlefLogAnd_2;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_2;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __VlefCall_1__m_find_predecessor;
    CData/*0:0*/ __VlefCall_0__is;
    is_after__Vfuncrtn = 0U;
    this->__VnoInFunc_is(vlSymsp, phase, __VlefCall_0__is);
    __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_0__is)));
    if (__VlefLogAnd_2) {
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, 
                                             VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, __VlefCall_1__m_find_predecessor);
        __VlefLogAnd_2 = (VlNull{} != __VlefCall_1__m_find_predecessor);
    }
    is_after__Vfuncrtn = __VlefLogAnd_2;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h2d5262d4__0;
    __Vtrigprevexpr_h2d5262d4__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hfc556f23__0;
    __Vtrigprevexpr_hfc556f23__0 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__184__verbosity;
    __Vfunc_uvm_report_enabled__184__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__184__severity;
    __Vfunc_uvm_report_enabled__184__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__185__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__186__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__190__verbosity;
    __Vtask_uvm_report_info__190__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__190__line;
    __Vtask_uvm_report_info__190__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__190__report_enabled_checked;
    __Vtask_uvm_report_info__190__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__191__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__192__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__367__verbosity;
    __Vfunc_uvm_report_enabled__367__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__367__severity;
    __Vfunc_uvm_report_enabled__367__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__368__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__369__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__375__verbosity;
    __Vtask_uvm_report_info__375__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__375__line;
    __Vtask_uvm_report_info__375__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__375__report_enabled_checked;
    __Vtask_uvm_report_info__375__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__376__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__377__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__379__verbosity;
    __Vfunc_uvm_report_enabled__379__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__379__severity;
    __Vfunc_uvm_report_enabled__379__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__380__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__381__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__386__verbosity;
    __Vtask_uvm_report_info__386__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__386__line;
    __Vtask_uvm_report_info__386__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__386__report_enabled_checked;
    __Vtask_uvm_report_info__386__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__387__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__388__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__390__verbosity;
    __Vfunc_uvm_report_enabled__390__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__390__severity;
    __Vfunc_uvm_report_enabled__390__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__391__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__392__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__396__verbosity;
    __Vtask_uvm_report_info__396__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__396__line;
    __Vtask_uvm_report_info__396__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__396__report_enabled_checked;
    __Vtask_uvm_report_info__396__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__397__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__398__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__401__verbosity;
    __Vfunc_uvm_report_enabled__401__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__401__severity;
    __Vfunc_uvm_report_enabled__401__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__402__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__403__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__407__verbosity;
    __Vtask_uvm_report_info__407__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__407__line;
    __Vtask_uvm_report_info__407__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__407__report_enabled_checked;
    __Vtask_uvm_report_info__407__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__408__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__409__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__424__verbosity;
    __Vfunc_uvm_report_enabled__424__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__424__severity;
    __Vfunc_uvm_report_enabled__424__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__425__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__426__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__430__verbosity;
    __Vtask_uvm_report_info__430__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__430__line;
    __Vtask_uvm_report_info__430__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__430__report_enabled_checked;
    __Vtask_uvm_report_info__430__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__431__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__432__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__439__Vfuncout;
    __Vtask_try_put__439__Vfuncout = 0;
    IData/*31:0*/ __Vtask_try_put__444__Vfuncout;
    __Vtask_try_put__444__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__445__verbosity;
    __Vfunc_uvm_report_enabled__445__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__445__severity;
    __Vfunc_uvm_report_enabled__445__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__446__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__447__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__452__verbosity;
    __Vtask_uvm_report_info__452__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__452__line;
    __Vtask_uvm_report_info__452__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__452__report_enabled_checked;
    __Vtask_uvm_report_info__452__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__453__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__454__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_31__get_full_name;
    IData/*31:0*/ __VlefCall_30__get_inst_id;
    std::string __VlefCall_29__get_full_name;
    IData/*31:0*/ __VlefCall_28__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_27__get_inst_id;
    std::string __VlefCall_26__get_full_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_24__get_inst_id;
    std::string __VlefCall_23__get_full_name;
    IData/*31:0*/ __VlefCall_22__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_21__get_inst_id;
    std::string __VlefCall_20__get_full_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_domain_name;
    std::string __VlefCall_17__get_schedule_name;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_name;
    std::string __VlefCall_13__get_domain_name;
    std::string __VlefCall_12__get_schedule_name;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_9__get_inst_id;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_6;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_state_change> __VlefCall_2__create;
    std::string __VlefCall_1__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __VlefCall_0__get_root;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk105__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk105__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk105__DOT__pred__Vmore;
    unnamedblk105__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk106__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk106__DOT__cb;
    IData/*31:0*/ unnamedblk107__DOT__i;
    unnamedblk107__DOT__i = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk108__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk108__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk109__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk109__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk110__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk110__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk112__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk112__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk111__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk111__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk117__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk117__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk118__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk118__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk119__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk119__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk120__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk120__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk120__DOT__succ__Vmore;
    unnamedblk120__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> unnamedblk120__DOT__unnamedblk121__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> unnamedblk120__DOT__unnamedblk121__DOT__cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
    __VDynScope_execute_phase_0 = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_phase.svh", 1305)->__VnoInFunc_get_root(vlProcess, vlSymsp, __VlefCall_0__get_root);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1305)->__PVT__top 
            = __VlefCall_0__get_root;
        unnamedblk105__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk105__DOT__pred__Vnext));
        while (unnamedblk105__DOT__pred__Vmore) {
            unnamedblk105__DOT__pred = unnamedblk105__DOT__pred__Vnext;
            unnamedblk105__DOT__pred__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk105__DOT__pred__Vnext));
            if ((0x00000100U != VL_NULL_CHECK(unnamedblk105__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1312)
                 ->__PVT__m_state)) {
                CData/*0:0*/ __VdynTrigger_h0a99ac91__0;
                __VdynTrigger_h0a99ac91__0 = 0;
                __VdynTrigger_h0a99ac91__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h0a99ac91__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk105.pred.m_state))", 
                                                                 "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                                 1312);
                    __Vtrigprevexpr_hfc556f23__0 = 
                        (0x00000100U == VL_NULL_CHECK(unnamedblk105__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1312)
                         ->__PVT__m_state);
                    __VdynTrigger_h0a99ac91__0 = __Vtrigprevexpr_hfc556f23__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0a99ac91__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk105.pred.m_state))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1312);
            }
        }
        if ((0x00000100U == this->__PVT__m_state)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name), VlNull{}, ""s, __VlefCall_2__create);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1319)->__PVT__state_chg 
            = __VlefCall_2__create;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1320)
                      ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1320)->__PVT__m_phase 
            = VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1321)
                      ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1321)->__PVT__m_jump_to = VlNull{};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1329)
                      ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1329)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 4U;
        unnamedblk106__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                          VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(unnamedblk106__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1331)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk106__DOT__cb);
        while ((VlNull{} != unnamedblk106__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk106__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1331)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1331)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(unnamedblk106__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1331)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk106__DOT__cb);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                1332);
        if ((0U != this->__PVT__m_sync.size())) {
            unnamedblk107__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk107__DOT__i, this->__PVT__m_sync.size())) {
                if (VL_GTS_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk107__DOT__i), "../../uvm/distrib/src/base/uvm_phase.svh", 1337)
                               ->__PVT__m_state)) {
                    CData/*0:0*/ __VdynTrigger_h579c9ac2__0;
                    __VdynTrigger_h579c9ac2__0 = 0;
                    __VdynTrigger_h579c9ac2__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h579c9ac2__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk107.i).m_state))", 
                                                                     "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                                     1337);
                        __Vtrigprevexpr_h2d5262d4__0 
                            = VL_LTES_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk107__DOT__i), "../../uvm/distrib/src/base/uvm_phase.svh", 1337)
                                          ->__PVT__m_state);
                        __VdynTrigger_h579c9ac2__0 
                            = __Vtrigprevexpr_h2d5262d4__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h579c9ac2__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk107.i).m_state))", 
                                                                 "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                                 1337);
                }
                unnamedblk107__DOT__i = ((IData)(1U) 
                                         + unnamedblk107__DOT__i);
            }
        }
        this->__PVT__m_run_count = ((IData)(1U) + this->__PVT__m_run_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__184__id = "PH/TRC/STRT"s;
            __Vfunc_uvm_report_enabled__184__severity = 0U;
            __Vfunc_uvm_report_enabled__184__verbosity = 0x00000064U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__185__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__185__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__186__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__186__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__184__verbosity, (IData)(__Vfunc_uvm_report_enabled__184__severity), this->__Vfunc_uvm_report_enabled__184__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
                __Vtask_uvm_report_info__190__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__190__context_name = ""s;
                __Vtask_uvm_report_info__190__line = 0x00000541U;
                this->__Vtask_uvm_report_info__190__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__190__verbosity = 0x00000064U;
                this->__Vtask_uvm_report_info__190__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_4__get_full_name)
                                                                         , '~',32,__VlefCall_5__get_inst_id) , "Starting phase"s));
                this->__Vtask_uvm_report_info__190__id = "PH/TRC/STRT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__191__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__191__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__192__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__192__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__190__id, this->__Vtask_uvm_report_info__190__message, __Vtask_uvm_report_info__190__verbosity, this->__Vtask_uvm_report_info__190__filename, __Vtask_uvm_report_info__190__line, this->__Vtask_uvm_report_info__190__context_name, (IData)(__Vtask_uvm_report_info__190__report_enabled_checked));
            }
        }
        if ((1U != this->__PVT__m_phase_type)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1351)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1351)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk108__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk108__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1353)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk108__DOT__cb);
            while ((VlNull{} != unnamedblk108__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk108__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1353)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1353)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk108__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1353)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk108__DOT__cb);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1355);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1357)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1357)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000010U;
            unnamedblk109__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk109__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1359)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk109__DOT__cb);
            while ((VlNull{} != unnamedblk109__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk109__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1359)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1359)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk109__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1359)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk109__DOT__cb);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1361);
        } else {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1370)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1370)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk110__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk110__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1372)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk110__DOT__cb);
            while ((VlNull{} != unnamedblk110__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk110__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1372)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1372)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk110__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1372)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk110__DOT__cb);
            }
            VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/base/uvm_phase.svh", 1374)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1374)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, 8U);
            this->__PVT__m_ready_to_end_count = 0U;
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1376);
            __VlefExpr_6 = VL_CAST_DYNAMIC(this->__PVT__m_imp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1380)
                                           ->__PVT__task_phase);
            if (__VlefExpr_6) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.at(
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1396)
                              ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1396)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk112__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                                  VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk112__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1398)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk112__DOT__cb);
                while ((VlNull{} != unnamedblk112__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk112__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1398)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1398)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk112__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1398)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk112__DOT__cb);
                }
                this->__VnoInFunc_execute_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
                this->__VnoInFunc_execute_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
                CData/*0:0*/ __VdynTrigger_heb53d3cb__0;
                __VdynTrigger_heb53d3cb__0 = 0;
                __VdynTrigger_heb53d3cb__0 = 0U;
                __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                while ((1U & (~ (IData)(__VdynTrigger_heb53d3cb__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                                 461);
                    __VdynTrigger_heb53d3cb__0 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                                  != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_heb53d3cb__0);
                    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                             "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                             461);
                {
                    VlForkSync __Vfork_4__sync;
                    __Vfork_4__sync.init(1U, vlProcess);
                    this->__VnoInFunc_execute_phase____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_4__sync, __VlefCall_7__uvm_report_enabled, __VlefCall_8__get_full_name, __VlefCall_9__get_inst_id, __VDynScope_execute_phase_0);
                    co_await __Vfork_4__sync.join(vlProcess, 
                                                  "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                  1418);
                }
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1385)
                              ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1385)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk111__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                                  VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk111__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1387)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk111__DOT__cb);
                while ((VlNull{} != unnamedblk111__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk111__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1387)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1387)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk111__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1387)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk111__DOT__cb);
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                        1389);
                VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/base/uvm_phase.svh", 1390)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1390)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.erase(
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        if ((1U == this->__PVT__m_phase_type)) {
            if (this->__PVT__m_premature_end) {
                if ((VlNull{} != this->__PVT__m_jump_phase)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1550)
                                  ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1550)->__PVT__m_jump_to 
                        = this->__PVT__m_jump_phase;
                    this->__Vfunc_uvm_report_enabled__367__id = "PH_JUMP"s;
                    __Vfunc_uvm_report_enabled__367__severity = 0U;
                    __Vfunc_uvm_report_enabled__367__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__368__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__368__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__369__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__369__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__367__verbosity, (IData)(__Vfunc_uvm_report_enabled__367__severity), this->__Vfunc_uvm_report_enabled__367__id, __VlefCall_10__uvm_report_enabled);
                    if ((0U != __VlefCall_10__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_12__get_schedule_name);
                        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_13__get_domain_name);
                        VL_NULL_CHECK(this->__PVT__m_jump_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 1555)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
                        __Vtask_uvm_report_info__375__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__375__context_name = ""s;
                        __Vtask_uvm_report_info__375__line = 0x00000613U;
                        this->__Vtask_uvm_report_info__375__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__375__verbosity = 0x000000c8U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__375__message
                                      ,"phase %s (schedule %s, domain %s) is jumping to phase %s",4
                                      , 'S',&(__VlefCall_11__get_name)
                                      , 'S',&(__VlefCall_12__get_schedule_name)
                                      , 'S',&(__VlefCall_13__get_domain_name)
                                      , 'S',&(__VlefCall_14__get_name));
                        this->__Vtask_uvm_report_info__375__id = "PH_JUMP"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__376__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__376__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__377__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__377__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__375__id, this->__Vtask_uvm_report_info__375__message, __Vtask_uvm_report_info__375__verbosity, this->__Vtask_uvm_report_info__375__filename, __Vtask_uvm_report_info__375__line, this->__Vtask_uvm_report_info__375__context_name, (IData)(__Vtask_uvm_report_info__375__report_enabled_checked));
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__379__id = "PH_JUMP"s;
                    __Vfunc_uvm_report_enabled__379__severity = 0U;
                    __Vfunc_uvm_report_enabled__379__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__380__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__380__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__381__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__381__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__379__verbosity, (IData)(__Vfunc_uvm_report_enabled__379__severity), this->__Vfunc_uvm_report_enabled__379__id, __VlefCall_15__uvm_report_enabled);
                    if ((0U != __VlefCall_15__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __VlefCall_17__get_schedule_name);
                        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __VlefCall_18__get_domain_name);
                        __Vtask_uvm_report_info__386__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__386__context_name = ""s;
                        __Vtask_uvm_report_info__386__line = 0x00000619U;
                        this->__Vtask_uvm_report_info__386__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__386__verbosity = 0x000000c8U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__386__message
                                      ,"phase %s (schedule %s, domain %s) is ending prematurely",3
                                      , 'S',&(__VlefCall_16__get_name)
                                      , 'S',&(__VlefCall_17__get_schedule_name)
                                      , 'S',&(__VlefCall_18__get_domain_name));
                        this->__Vtask_uvm_report_info__386__id = "PH_JUMP"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__387__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__387__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__388__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__388__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__386__id, this->__Vtask_uvm_report_info__386__message, __Vtask_uvm_report_info__386__verbosity, this->__Vtask_uvm_report_info__386__filename, __Vtask_uvm_report_info__386__line, this->__Vtask_uvm_report_info__386__context_name, (IData)(__Vtask_uvm_report_info__386__report_enabled_checked));
                    }
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                        1565);
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                    this->__Vfunc_uvm_report_enabled__390__id = "PH_END"s;
                    __Vfunc_uvm_report_enabled__390__severity = 0U;
                    __Vfunc_uvm_report_enabled__390__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__391__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__391__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__392__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__392__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__390__verbosity, (IData)(__Vfunc_uvm_report_enabled__390__severity), this->__Vfunc_uvm_report_enabled__390__id, __VlefCall_19__uvm_report_enabled);
                    if ((0U != __VlefCall_19__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_21__get_inst_id);
                        __Vtask_uvm_report_info__396__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__396__context_name = ""s;
                        __Vtask_uvm_report_info__396__line = 0x0000061fU;
                        this->__Vtask_uvm_report_info__396__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__396__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__396__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(__VlefCall_20__get_full_name)
                                                                                , '~',32,__VlefCall_21__get_inst_id) , "ENDING PHASE PREMATURELY"s));
                        this->__Vtask_uvm_report_info__396__id = "PH_END"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__397__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__397__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__398__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__398__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__396__id, this->__Vtask_uvm_report_info__396__message, __Vtask_uvm_report_info__396__verbosity, this->__Vtask_uvm_report_info__396__filename, __Vtask_uvm_report_info__396__line, this->__Vtask_uvm_report_info__396__context_name, (IData)(__Vtask_uvm_report_info__396__report_enabled_checked));
                    }
                }
            } else if ((VlNull{} == VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1572)
                        ->__PVT__task_phase)) {
                co_await this->__VnoInFunc_m_wait_for_pred(vlProcess, vlSymsp);
            }
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__401__id = "PH_END"s;
                __Vfunc_uvm_report_enabled__401__severity = 0U;
                __Vfunc_uvm_report_enabled__401__verbosity = 0x0000012cU;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__402__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__402__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__403__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__403__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__401__verbosity, (IData)(__Vfunc_uvm_report_enabled__401__severity), this->__Vfunc_uvm_report_enabled__401__id, __VlefCall_22__uvm_report_enabled);
                if ((0U != __VlefCall_22__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_23__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_24__get_inst_id);
                    __Vtask_uvm_report_info__407__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__407__context_name = ""s;
                    __Vtask_uvm_report_info__407__line = 0x0000062dU;
                    this->__Vtask_uvm_report_info__407__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__407__verbosity = 0x0000012cU;
                    this->__Vtask_uvm_report_info__407__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_23__get_full_name)
                                                                             , '~',32,__VlefCall_24__get_inst_id) , "ENDING PHASE"s));
                    this->__Vtask_uvm_report_info__407__id = "PH_END"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__408__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__408__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__409__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__409__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__407__id, this->__Vtask_uvm_report_info__407__message, __Vtask_uvm_report_info__407__verbosity, this->__Vtask_uvm_report_info__407__filename, __Vtask_uvm_report_info__407__line, this->__Vtask_uvm_report_info__407__context_name, (IData)(__Vtask_uvm_report_info__407__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1582)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1582)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000040U;
            unnamedblk117__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk117__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1584)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk117__DOT__cb);
            while ((VlNull{} != unnamedblk117__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk117__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1584)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1584)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk117__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1584)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk117__DOT__cb);
            }
            if ((VlNull{} != this->__PVT__m_imp)) {
                VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/base/uvm_phase.svh", 1586)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1586)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, 0x00000040U);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1587);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1594)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1594)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = ((IData)(this->__PVT__m_premature_end)
                                     ? 0x00000200U : 0x00000080U);
            unnamedblk118__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk118__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1597)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk118__DOT__cb);
            while ((VlNull{} != unnamedblk118__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk118__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1597)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1597)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk118__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1597)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk118__DOT__cb);
            }
            if ((VlNull{} != this->__PVT__m_phase_proc)) {
                VL_NULL_CHECK(this->__PVT__m_phase_proc, "../../uvm/distrib/src/base/uvm_phase.svh", 1599)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_phase_proc = VlNull{};
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1602);
            if ((VlNull{} != this->__PVT__phase_done)) {
                VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1604)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
            }
        }
        this->__PVT__m_premature_end = 0U;
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            if (this->__PVT__m_jump_fwd) {
                this->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 0x00000100U, this->__PVT__m_jump_phase);
            }
            VL_NULL_CHECK(this->__PVT__m_jump_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 1615)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 1U, VlNull{});
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__424__id = "PH/TRC/DONE"s;
                __Vfunc_uvm_report_enabled__424__severity = 0U;
                __Vfunc_uvm_report_enabled__424__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__425__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__425__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__426__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__426__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__424__verbosity, (IData)(__Vfunc_uvm_report_enabled__424__severity), this->__Vfunc_uvm_report_enabled__424__id, __VlefCall_25__uvm_report_enabled);
                if ((0U != __VlefCall_25__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_26__get_full_name);
                    this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_27__get_inst_id);
                    __Vtask_uvm_report_info__430__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__430__context_name = ""s;
                    __Vtask_uvm_report_info__430__line = 0x00000654U;
                    this->__Vtask_uvm_report_info__430__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__430__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__430__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(__VlefCall_26__get_full_name)
                                                                             , '~',32,__VlefCall_27__get_inst_id) , "Completed phase"s));
                    this->__Vtask_uvm_report_info__430__id = "PH/TRC/DONE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__431__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__431__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__432__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__432__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__430__id, this->__Vtask_uvm_report_info__430__message, __Vtask_uvm_report_info__430__verbosity, this->__Vtask_uvm_report_info__430__filename, __Vtask_uvm_report_info__430__line, this->__Vtask_uvm_report_info__430__context_name, (IData)(__Vtask_uvm_report_info__430__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1621)
                          ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1621)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000100U;
            unnamedblk119__DOT__iter = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                              VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk119__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1623)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk119__DOT__cb);
            while ((VlNull{} != unnamedblk119__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk119__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1623)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1623)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk119__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1623)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk119__DOT__cb);
            }
            this->__PVT__m_phase_proc = VlNull{};
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                    1625);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                1627);
        if ((VlNull{} != this->__PVT__phase_done)) {
            VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1629)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
        }
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "../../uvm/distrib/src/base/uvm_phase.svh", 1635)->__VnoInFunc_try_put(vlSymsp, this->__PVT__m_jump_phase, __Vtask_try_put__439__Vfuncout);
            this->__PVT__m_jump_phase = VlNull{};
            this->__PVT__m_jump_fwd = 0U;
            this->__PVT__m_jump_bkwd = 0U;
        } else if ((0U == this->__PVT__m_successors.size())) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1642)
                          ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1642)->__PVT__m_phase_all_done = 1U;
        } else {
            unnamedblk120__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk120__DOT__succ__Vnext));
            while (unnamedblk120__DOT__succ__Vmore) {
                unnamedblk120__DOT__succ = unnamedblk120__DOT__succ__Vnext;
                unnamedblk120__DOT__succ__Vmore = (0U 
                                                   != this->__PVT__m_successors.next(unnamedblk120__DOT__succ__Vnext));
                if (VL_GTS_III(32, 2U, VL_NULL_CHECK(unnamedblk120__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1647)
                               ->__PVT__m_state)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1648)
                                  ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1648)->__PVT__m_prev_state 
                        = VL_NULL_CHECK(unnamedblk120__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1648)
                        ->__PVT__m_state;
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1649)
                                  ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1649)->__PVT__m_phase 
                        = unnamedblk120__DOT__succ;
                    VL_NULL_CHECK(unnamedblk120__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1650)->__PVT__m_state = 2U;
                    unnamedblk120__DOT__unnamedblk121__DOT__iter 
                        = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                                 VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
                    VL_NULL_CHECK(unnamedblk120__DOT__unnamedblk121__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1651)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk120__DOT__unnamedblk121__DOT__cb);
                    while ((VlNull{} != unnamedblk120__DOT__unnamedblk121__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk120__DOT__unnamedblk121__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1651)->__VnoInFunc_phase_state_change(vlSymsp, unnamedblk120__DOT__succ, VL_NULL_CHECK(__VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1651)
                                                                                ->__PVT__state_chg);
                        VL_NULL_CHECK(unnamedblk120__DOT__unnamedblk121__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1651)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk120__DOT__unnamedblk121__DOT__cb);
                    }
                    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                            vlProcess, 
                                                            "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                            1652);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "../../uvm/distrib/src/base/uvm_phase.svh", 1653)->__VnoInFunc_try_put(vlSymsp, unnamedblk120__DOT__succ, __Vtask_try_put__444__Vfuncout);
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        this->__Vfunc_uvm_report_enabled__445__id = "PH/TRC/SCHEDULED"s;
                        __Vfunc_uvm_report_enabled__445__severity = 0U;
                        __Vfunc_uvm_report_enabled__445__verbosity = 0x00000064U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__446__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__446__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__447__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__447__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__445__verbosity, (IData)(__Vfunc_uvm_report_enabled__445__severity), this->__Vfunc_uvm_report_enabled__445__id, __VlefCall_28__uvm_report_enabled);
                        if ((0U != __VlefCall_28__uvm_report_enabled)) {
                            VL_NULL_CHECK(unnamedblk120__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1655)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_29__get_full_name);
                            VL_NULL_CHECK(unnamedblk120__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 1655)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_30__get_inst_id);
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_31__get_full_name);
                            __Vtask_uvm_report_info__452__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__452__context_name = ""s;
                            __Vtask_uvm_report_info__452__line = 0x00000677U;
                            this->__Vtask_uvm_report_info__452__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__452__verbosity = 0x00000064U;
                            this->__Vtask_uvm_report_info__452__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(__VlefCall_29__get_full_name)
                                                                                , '~',32,__VlefCall_30__get_inst_id) , 
                                                                    VL_CONCATN_NNN("Scheduled from phase "s, __VlefCall_31__get_full_name)));
                            this->__Vtask_uvm_report_info__452__id = "PH/TRC/SCHEDULED"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__453__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__453__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__454__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__454__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__452__id, this->__Vtask_uvm_report_info__452__message, __Vtask_uvm_report_info__452__verbosity, this->__Vtask_uvm_report_info__452__filename, __Vtask_uvm_report_info__452__line, this->__Vtask_uvm_report_info__452__context_name, (IData)(__Vtask_uvm_report_info__452__report_enabled_checked));
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlForkSync __Vfork_4__sync, IData/*31:0*/ &__VlefCall_7__uvm_report_enabled, std::string &__VlefCall_8__get_full_name, IData/*31:0*/ &__VlefCall_9__get_inst_id, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> &__VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_4__sync.onKill(vlProcess);
    {
        VlForkSync __Vfork_5__sync;
        __Vfork_5__sync.init(1U, vlProcess);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync, __VlefCall_7__uvm_report_enabled, __VlefCall_8__get_full_name, __VlefCall_9__get_inst_id);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync, __VDynScope_execute_phase_0);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync, __VDynScope_execute_phase_0);
        co_await __Vfork_5__sync.join(vlProcess, "../../uvm/distrib/src/base/uvm_phase.svh", 
                                      1421);
    }
    vlProcess->disableFork();
    __Vfork_4__sync.done("../../uvm/distrib/src/base/uvm_phase.svh", 
                         1419);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __Vtask___VforkTask_2__278____VDynScope_execute_phase_0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_28__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_28__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_26__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_26__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_25__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_25__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_22__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_22__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_20__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_20__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__278____VlefLogAnd_19;
    __Vtask___VforkTask_2__278____VlefLogAnd_19 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_18__get_objection_total;
    __Vtask___VforkTask_2__278____VlefCall_18__get_objection_total = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_17__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_17__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_15__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_15__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_14__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_14__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_11__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_11__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_9__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_9__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_2__278____VlefLogAnd_8;
    __Vtask___VforkTask_2__278____VlefLogAnd_8 = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_7__get_objection_total;
    __Vtask___VforkTask_2__278____VlefCall_7__get_objection_total = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_6__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_6__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_4__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_4__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_3__get_inst_id;
    __Vtask___VforkTask_2__278____VlefCall_3__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_2__278____VlefCall_1__uvm_report_enabled;
    __Vtask___VforkTask_2__278____VlefCall_1__uvm_report_enabled = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__278__unnamedblk115__DOT__p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore;
    __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__278__unnamedblk116__DOT__p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vnext;
    CData/*0:0*/ __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore;
    __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__Vfuncout;
    __Vfunc_uvm_report_enabled__280__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__280__verbosity;
    __Vfunc_uvm_report_enabled__280__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__280__severity;
    __Vfunc_uvm_report_enabled__280__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__283__Vfuncout;
    __Vtask_uvm_report_enabled__283__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__285__Vfuncout;
    __Vfunc_get_inst_id__285__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__286__verbosity;
    __Vtask_uvm_report_info__286__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__286__line;
    __Vtask_uvm_report_info__286__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__286__report_enabled_checked;
    __Vtask_uvm_report_info__286__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__287__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__288__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__290__Vfuncout;
    __Vfunc_uvm_report_enabled__290__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__290__verbosity;
    __Vfunc_uvm_report_enabled__290__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__290__severity;
    __Vfunc_uvm_report_enabled__290__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__291__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__292__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__293__Vfuncout;
    __Vtask_uvm_report_enabled__293__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__295__Vfuncout;
    __Vfunc_get_inst_id__295__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__296__verbosity;
    __Vtask_uvm_report_info__296__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__296__line;
    __Vtask_uvm_report_info__296__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__296__report_enabled_checked;
    __Vtask_uvm_report_info__296__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__297__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__298__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__300__Vfuncout;
    __Vtask_get_objection_total__300__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__301__Vfuncout;
    __Vfunc_uvm_report_enabled__301__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__301__verbosity;
    __Vfunc_uvm_report_enabled__301__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__301__severity;
    __Vfunc_uvm_report_enabled__301__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__302__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__303__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__304__Vfuncout;
    __Vtask_uvm_report_enabled__304__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__306__Vfuncout;
    __Vfunc_get_inst_id__306__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__309__verbosity;
    __Vtask_uvm_report_info__309__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__309__line;
    __Vtask_uvm_report_info__309__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__309__report_enabled_checked;
    __Vtask_uvm_report_info__309__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__310__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__311__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__313__Vfuncout;
    __Vfunc_uvm_report_enabled__313__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__313__verbosity;
    __Vfunc_uvm_report_enabled__313__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__313__severity;
    __Vfunc_uvm_report_enabled__313__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__314__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__315__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__316__Vfuncout;
    __Vtask_uvm_report_enabled__316__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__317__verbosity;
    __Vtask_uvm_report_fatal__317__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__317__line;
    __Vtask_uvm_report_fatal__317__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__317__report_enabled_checked;
    __Vtask_uvm_report_fatal__317__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__321__Vfuncout;
    __Vfunc_uvm_report_enabled__321__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__321__verbosity;
    __Vfunc_uvm_report_enabled__321__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__321__severity;
    __Vfunc_uvm_report_enabled__321__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__324__Vfuncout;
    __Vtask_uvm_report_enabled__324__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__326__Vfuncout;
    __Vfunc_get_inst_id__326__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__327__verbosity;
    __Vtask_uvm_report_info__327__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__327__line;
    __Vtask_uvm_report_info__327__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__327__report_enabled_checked;
    __Vtask_uvm_report_info__327__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__328__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__329__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__331__Vfuncout;
    __Vtask_get_objection_total__331__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__332__Vfuncout;
    __Vfunc_uvm_report_enabled__332__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__332__verbosity;
    __Vfunc_uvm_report_enabled__332__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__332__severity;
    __Vfunc_uvm_report_enabled__332__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__333__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__334__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__335__Vfuncout;
    __Vtask_uvm_report_enabled__335__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__337__Vfuncout;
    __Vfunc_get_inst_id__337__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__340__verbosity;
    __Vtask_uvm_report_info__340__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__340__line;
    __Vtask_uvm_report_info__340__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__340__report_enabled_checked;
    __Vtask_uvm_report_info__340__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__341__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__342__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__344__Vfuncout;
    __Vfunc_uvm_report_enabled__344__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__344__verbosity;
    __Vfunc_uvm_report_enabled__344__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__344__severity;
    __Vfunc_uvm_report_enabled__344__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__345__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__346__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__347__Vfuncout;
    __Vtask_uvm_report_enabled__347__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__348__verbosity;
    __Vtask_uvm_report_fatal__348__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__348__line;
    __Vtask_uvm_report_fatal__348__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__348__report_enabled_checked;
    __Vtask_uvm_report_fatal__348__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__349__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__350__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__352__Vfuncout;
    __Vfunc_uvm_report_enabled__352__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__352__verbosity;
    __Vfunc_uvm_report_enabled__352__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__352__severity;
    __Vfunc_uvm_report_enabled__352__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__353__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__354__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__355__Vfuncout;
    __Vtask_uvm_report_enabled__355__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__357__Vfuncout;
    __Vfunc_get_inst_id__357__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__358__verbosity;
    __Vtask_uvm_report_info__358__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__358__line;
    __Vtask_uvm_report_info__358__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__358__report_enabled_checked;
    __Vtask_uvm_report_info__358__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__359__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__360__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_5__sync.onKill(vlProcess);
    CData/*0:0*/ __Vtrigprevexpr_hc12675e3__0;
    __Vtrigprevexpr_hc12675e3__0 = 0;
    __Vtask___VforkTask_2__278____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore = 0U;
    __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore = 0U;
    this->__VnoInFunc_get_name(vlSymsp, this->__Vfunc_get_name__279__Vfuncout);
    this->__Vtask___VforkTask_2__278____VlefCall_0__get_name 
        = this->__Vfunc_get_name__279__Vfuncout;
    if (("run"s == this->__Vtask___VforkTask_2__278____VlefCall_0__get_name)) {
        if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1471)
                                   ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1471)
             ->__PVT__phase_timeout)) {
            if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1472)
                                       ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1472)
                 ->__PVT__phase_timeout)) {
                CData/*0:0*/ __VdynTrigger_hc348a651__0;
                __VdynTrigger_hc348a651__0 = 0;
                __VdynTrigger_hc348a651__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_hc348a651__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__278____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                                 "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                                 1472);
                    __Vtrigprevexpr_hc12675e3__0 = 
                        (0ULL != VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1472)
                                               ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1472)
                         ->__PVT__phase_timeout);
                    __VdynTrigger_hc348a651__0 = __Vtrigprevexpr_hc12675e3__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc348a651__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__278____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1472);
            }
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__280__id = "PH/TRC/TO_WAIT"s;
            __Vfunc_uvm_report_enabled__280__severity = 0U;
            __Vfunc_uvm_report_enabled__280__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__281__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__281__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__282__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__280__verbosity, (IData)(__Vfunc_uvm_report_enabled__280__severity), this->__Vfunc_uvm_report_enabled__280__id, __Vtask_uvm_report_enabled__283__Vfuncout);
            __Vfunc_uvm_report_enabled__280__Vfuncout 
                = __Vtask_uvm_report_enabled__283__Vfuncout;
            __Vtask___VforkTask_2__278____VlefCall_1__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__280__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__278____VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__284__Vfuncout);
                this->__Vtask___VforkTask_2__278____VlefCall_2__get_full_name 
                    = this->__Vfunc_get_full_name__284__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__285__Vfuncout);
                __Vtask___VforkTask_2__278____VlefCall_3__get_inst_id 
                    = __Vfunc_get_inst_id__285__Vfuncout;
                __Vtask_uvm_report_info__286__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__286__context_name = ""s;
                __Vtask_uvm_report_info__286__line = 0x000005c2U;
                this->__Vtask_uvm_report_info__286__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__286__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__286__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_2__get_full_name)
                                                                         , '~',32,__Vtask___VforkTask_2__278____VlefCall_3__get_inst_id) , VL_SFORMATF_N_NX("STARTING PHASE TIMEOUT WATCHDOG (timeout == %t)",2, 'T',-12
                                                                                , '#',64,VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1474)
                                                                                ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1474)
                                                                                ->__PVT__phase_timeout) ));
                this->__Vtask_uvm_report_info__286__id = "PH/TRC/TO_WAIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__287__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__287__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__288__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__288__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__286__id, this->__Vtask_uvm_report_info__286__message, __Vtask_uvm_report_info__286__verbosity, this->__Vtask_uvm_report_info__286__filename, __Vtask_uvm_report_info__286__line, this->__Vtask_uvm_report_info__286__context_name, (IData)(__Vtask_uvm_report_info__286__report_enabled_checked));
            }
        }
        co_await vlSymsp->TOP.__VdlySched.delay(VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1475)
                                                              ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1475)
                                                ->__PVT__phase_timeout, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                1475);
        if ((9.20000000000000000e+15 == VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1)))) {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__290__id = "PH/TRC/TIMEOUT"s;
                __Vfunc_uvm_report_enabled__290__severity = 0U;
                __Vfunc_uvm_report_enabled__290__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__291__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__291__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__290__verbosity, (IData)(__Vfunc_uvm_report_enabled__290__severity), this->__Vfunc_uvm_report_enabled__290__id, __Vtask_uvm_report_enabled__293__Vfuncout);
                __Vfunc_uvm_report_enabled__290__Vfuncout 
                    = __Vtask_uvm_report_enabled__293__Vfuncout;
                __Vtask___VforkTask_2__278____VlefCall_4__uvm_report_enabled 
                    = __Vfunc_uvm_report_enabled__290__Vfuncout;
                if ((0U != __Vtask___VforkTask_2__278____VlefCall_4__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__294__Vfuncout);
                    this->__Vtask___VforkTask_2__278____VlefCall_5__get_full_name 
                        = this->__Vfunc_get_full_name__294__Vfuncout;
                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__295__Vfuncout);
                    __Vtask___VforkTask_2__278____VlefCall_6__get_inst_id 
                        = __Vfunc_get_inst_id__295__Vfuncout;
                    __Vtask_uvm_report_info__296__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__296__context_name = ""s;
                    __Vtask_uvm_report_info__296__line = 0x000005c6U;
                    this->__Vtask_uvm_report_info__296__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__296__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__296__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_5__get_full_name)
                                                                             , '~',32,__Vtask___VforkTask_2__278____VlefCall_6__get_inst_id) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    this->__Vtask_uvm_report_info__296__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__297__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__297__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__298__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__298__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__296__id, this->__Vtask_uvm_report_info__296__message, __Vtask_uvm_report_info__296__verbosity, this->__Vtask_uvm_report_info__296__filename, __Vtask_uvm_report_info__296__line, this->__Vtask_uvm_report_info__296__context_name, (IData)(__Vtask_uvm_report_info__296__report_enabled_checked));
                }
            }
            __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore 
                = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vnext));
            while (__Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore) {
                __Vtask___VforkTask_2__278__unnamedblk115__DOT__p 
                    = __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vnext;
                __Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vmore 
                    = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p__Vnext));
                __Vtask___VforkTask_2__278____VlefLogAnd_8 
                    = (VlNull{} != VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1480)
                       ->__PVT__phase_done);
                if (__Vtask___VforkTask_2__278____VlefLogAnd_8) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1480)
                                  ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1480)->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__300__Vfuncout);
                    __Vtask___VforkTask_2__278____VlefCall_7__get_objection_total 
                        = __Vtask_get_objection_total__300__Vfuncout;
                    __Vtask___VforkTask_2__278____VlefLogAnd_8 
                        = VL_LTS_III(32, 0U, __Vtask___VforkTask_2__278____VlefCall_7__get_objection_total);
                }
                if (__Vtask___VforkTask_2__278____VlefLogAnd_8) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        this->__Vfunc_uvm_report_enabled__301__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                        __Vfunc_uvm_report_enabled__301__severity = 0U;
                        __Vfunc_uvm_report_enabled__301__verbosity = 0x00000064U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__302__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__302__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__303__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__303__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__301__verbosity, (IData)(__Vfunc_uvm_report_enabled__301__severity), this->__Vfunc_uvm_report_enabled__301__id, __Vtask_uvm_report_enabled__304__Vfuncout);
                        __Vfunc_uvm_report_enabled__301__Vfuncout 
                            = __Vtask_uvm_report_enabled__304__Vfuncout;
                        __Vtask___VforkTask_2__278____VlefCall_9__uvm_report_enabled 
                            = __Vfunc_uvm_report_enabled__301__Vfuncout;
                        if ((0U != __Vtask___VforkTask_2__278____VlefCall_9__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__305__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_10__get_full_name 
                                = this->__Vfunc_get_full_name__305__Vfuncout;
                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__306__Vfuncout);
                            __Vtask___VforkTask_2__278____VlefCall_11__get_inst_id 
                                = __Vfunc_get_inst_id__306__Vfuncout;
                            VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1485)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__307__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_12__get_full_name 
                                = this->__Vtask_get_full_name__307__Vfuncout;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk115__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1485)
                                          ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1485)->__VnoInFunc_convert2string(vlProcess, vlSymsp, this->__Vtask_convert2string__308__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_13__convert2string 
                                = this->__Vtask_convert2string__308__Vfuncout;
                            __Vtask_uvm_report_info__309__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__309__context_name = ""s;
                            __Vtask_uvm_report_info__309__line = 0x000005cdU;
                            this->__Vtask_uvm_report_info__309__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__309__verbosity = 0x00000064U;
                            this->__Vtask_uvm_report_info__309__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_10__get_full_name)
                                                                                , '~',32,__Vtask___VforkTask_2__278____VlefCall_11__get_inst_id) , VL_SFORMATF_N_NX("Phase '%s' has outstanding objections:\n%s",2
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_12__get_full_name)
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_13__convert2string)) ));
                            this->__Vtask_uvm_report_info__309__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__310__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__310__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__311__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__311__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__309__id, this->__Vtask_uvm_report_info__309__message, __Vtask_uvm_report_info__309__verbosity, this->__Vtask_uvm_report_info__309__filename, __Vtask_uvm_report_info__309__line, this->__Vtask_uvm_report_info__309__context_name, (IData)(__Vtask_uvm_report_info__309__report_enabled_checked));
                        }
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__313__id = "PH_TIMEOUT"s;
            __Vfunc_uvm_report_enabled__313__severity = 3U;
            __Vfunc_uvm_report_enabled__313__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__314__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__314__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__315__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__315__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__313__verbosity, (IData)(__Vfunc_uvm_report_enabled__313__severity), this->__Vfunc_uvm_report_enabled__313__id, __Vtask_uvm_report_enabled__316__Vfuncout);
            __Vfunc_uvm_report_enabled__313__Vfuncout 
                = __Vtask_uvm_report_enabled__316__Vfuncout;
            __Vtask___VforkTask_2__278____VlefCall_14__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__313__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__278____VlefCall_14__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__317__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__317__context_name = ""s;
                __Vtask_uvm_report_fatal__317__line = 0x000005d3U;
                this->__Vtask_uvm_report_fatal__317__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__317__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__317__message
                              ,"Default timeout of %0t hit, indicating a probable testbench issue",2, 'T',-12
                              , 'D',9.20000000000000000e+15);
                this->__Vtask_uvm_report_fatal__317__id = "PH_TIMEOUT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__318__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__318__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__319__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__317__id, this->__Vtask_uvm_report_fatal__317__message, __Vtask_uvm_report_fatal__317__verbosity, this->__Vtask_uvm_report_fatal__317__filename, __Vtask_uvm_report_fatal__317__line, this->__Vtask_uvm_report_fatal__317__context_name, (IData)(__Vtask_uvm_report_fatal__317__report_enabled_checked));
            }
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                this->__Vfunc_uvm_report_enabled__321__id = "PH/TRC/TIMEOUT"s;
                __Vfunc_uvm_report_enabled__321__severity = 0U;
                __Vfunc_uvm_report_enabled__321__verbosity = 0x00000064U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__322__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__322__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__323__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__321__verbosity, (IData)(__Vfunc_uvm_report_enabled__321__severity), this->__Vfunc_uvm_report_enabled__321__id, __Vtask_uvm_report_enabled__324__Vfuncout);
                __Vfunc_uvm_report_enabled__321__Vfuncout 
                    = __Vtask_uvm_report_enabled__324__Vfuncout;
                __Vtask___VforkTask_2__278____VlefCall_15__uvm_report_enabled 
                    = __Vfunc_uvm_report_enabled__321__Vfuncout;
                if ((0U != __Vtask___VforkTask_2__278____VlefCall_15__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__325__Vfuncout);
                    this->__Vtask___VforkTask_2__278____VlefCall_16__get_full_name 
                        = this->__Vfunc_get_full_name__325__Vfuncout;
                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__326__Vfuncout);
                    __Vtask___VforkTask_2__278____VlefCall_17__get_inst_id 
                        = __Vfunc_get_inst_id__326__Vfuncout;
                    __Vtask_uvm_report_info__327__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__327__context_name = ""s;
                    __Vtask_uvm_report_info__327__line = 0x000005d7U;
                    this->__Vtask_uvm_report_info__327__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__327__verbosity = 0x00000064U;
                    this->__Vtask_uvm_report_info__327__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                             , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_16__get_full_name)
                                                                             , '~',32,__Vtask___VforkTask_2__278____VlefCall_17__get_inst_id) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    this->__Vtask_uvm_report_info__327__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__328__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__328__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__329__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__329__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__327__id, this->__Vtask_uvm_report_info__327__message, __Vtask_uvm_report_info__327__verbosity, this->__Vtask_uvm_report_info__327__filename, __Vtask_uvm_report_info__327__line, this->__Vtask_uvm_report_info__327__context_name, (IData)(__Vtask_uvm_report_info__327__report_enabled_checked));
                }
            }
            __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore 
                = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vnext));
            while (__Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore) {
                __Vtask___VforkTask_2__278__unnamedblk116__DOT__p 
                    = __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vnext;
                __Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vmore 
                    = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p__Vnext));
                __Vtask___VforkTask_2__278____VlefLogAnd_19 
                    = (VlNull{} != VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1497)
                       ->__PVT__phase_done);
                if (__Vtask___VforkTask_2__278____VlefLogAnd_19) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1497)
                                  ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1497)->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__331__Vfuncout);
                    __Vtask___VforkTask_2__278____VlefCall_18__get_objection_total 
                        = __Vtask_get_objection_total__331__Vfuncout;
                    __Vtask___VforkTask_2__278____VlefLogAnd_19 
                        = VL_LTS_III(32, 0U, __Vtask___VforkTask_2__278____VlefCall_18__get_objection_total);
                }
                if (__Vtask___VforkTask_2__278____VlefLogAnd_19) {
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        this->__Vfunc_uvm_report_enabled__332__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                        __Vfunc_uvm_report_enabled__332__severity = 0U;
                        __Vfunc_uvm_report_enabled__332__verbosity = 0x00000064U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__333__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__333__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__334__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__334__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__332__verbosity, (IData)(__Vfunc_uvm_report_enabled__332__severity), this->__Vfunc_uvm_report_enabled__332__id, __Vtask_uvm_report_enabled__335__Vfuncout);
                        __Vfunc_uvm_report_enabled__332__Vfuncout 
                            = __Vtask_uvm_report_enabled__335__Vfuncout;
                        __Vtask___VforkTask_2__278____VlefCall_20__uvm_report_enabled 
                            = __Vfunc_uvm_report_enabled__332__Vfuncout;
                        if ((0U != __Vtask___VforkTask_2__278____VlefCall_20__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__336__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_21__get_full_name 
                                = this->__Vfunc_get_full_name__336__Vfuncout;
                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__337__Vfuncout);
                            __Vtask___VforkTask_2__278____VlefCall_22__get_inst_id 
                                = __Vfunc_get_inst_id__337__Vfuncout;
                            VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1502)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vtask_get_full_name__338__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_23__get_full_name 
                                = this->__Vtask_get_full_name__338__Vfuncout;
                            VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278__unnamedblk116__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1502)
                                          ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1502)->__VnoInFunc_convert2string(vlProcess, vlSymsp, this->__Vtask_convert2string__339__Vfuncout);
                            this->__Vtask___VforkTask_2__278____VlefCall_24__convert2string 
                                = this->__Vtask_convert2string__339__Vfuncout;
                            __Vtask_uvm_report_info__340__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__340__context_name = ""s;
                            __Vtask_uvm_report_info__340__line = 0x000005deU;
                            this->__Vtask_uvm_report_info__340__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__340__verbosity = 0x00000064U;
                            this->__Vtask_uvm_report_info__340__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_21__get_full_name)
                                                                                , '~',32,__Vtask___VforkTask_2__278____VlefCall_22__get_inst_id) , VL_SFORMATF_N_NX("Phase '%s' has outstanding objections:\n%s",2
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_23__get_full_name)
                                                                                , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_24__convert2string)) ));
                            this->__Vtask_uvm_report_info__340__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__341__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__341__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__342__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__342__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__340__id, this->__Vtask_uvm_report_info__340__message, __Vtask_uvm_report_info__340__verbosity, this->__Vtask_uvm_report_info__340__filename, __Vtask_uvm_report_info__340__line, this->__Vtask_uvm_report_info__340__context_name, (IData)(__Vtask_uvm_report_info__340__report_enabled_checked));
                        }
                    }
                }
            }
            this->__Vfunc_uvm_report_enabled__344__id = "PH_TIMEOUT"s;
            __Vfunc_uvm_report_enabled__344__severity = 3U;
            __Vfunc_uvm_report_enabled__344__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__345__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__345__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__346__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__346__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__344__verbosity, (IData)(__Vfunc_uvm_report_enabled__344__severity), this->__Vfunc_uvm_report_enabled__344__id, __Vtask_uvm_report_enabled__347__Vfuncout);
            __Vfunc_uvm_report_enabled__344__Vfuncout 
                = __Vtask_uvm_report_enabled__347__Vfuncout;
            __Vtask___VforkTask_2__278____VlefCall_25__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__344__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__278____VlefCall_25__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__348__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__348__context_name = ""s;
                __Vtask_uvm_report_fatal__348__line = 0x000005e4U;
                this->__Vtask_uvm_report_fatal__348__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__348__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_fatal__348__message
                              ,"Explicit timeout of %0t hit, indicating a probable testbench issue",2, 'T',-12
                              , '#',64,VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__278____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1508)
                                                     ->__PVT__top, "../../uvm/distrib/src/base/uvm_phase.svh", 1508)
                              ->__PVT__phase_timeout);
                this->__Vtask_uvm_report_fatal__348__id = "PH_TIMEOUT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__349__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__349__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__350__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__350__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__348__id, this->__Vtask_uvm_report_fatal__348__message, __Vtask_uvm_report_fatal__348__verbosity, this->__Vtask_uvm_report_fatal__348__filename, __Vtask_uvm_report_fatal__348__line, this->__Vtask_uvm_report_fatal__348__context_name, (IData)(__Vtask_uvm_report_fatal__348__report_enabled_checked));
            }
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__352__id = "PH/TRC/EXE/3"s;
            __Vfunc_uvm_report_enabled__352__severity = 0U;
            __Vfunc_uvm_report_enabled__352__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__353__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__353__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__354__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__354__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__352__verbosity, (IData)(__Vfunc_uvm_report_enabled__352__severity), this->__Vfunc_uvm_report_enabled__352__id, __Vtask_uvm_report_enabled__355__Vfuncout);
            __Vfunc_uvm_report_enabled__352__Vfuncout 
                = __Vtask_uvm_report_enabled__355__Vfuncout;
            __Vtask___VforkTask_2__278____VlefCall_26__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__352__Vfuncout;
            if ((0U != __Vtask___VforkTask_2__278____VlefCall_26__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__356__Vfuncout);
                this->__Vtask___VforkTask_2__278____VlefCall_27__get_full_name 
                    = this->__Vfunc_get_full_name__356__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__357__Vfuncout);
                __Vtask___VforkTask_2__278____VlefCall_28__get_inst_id 
                    = __Vfunc_get_inst_id__357__Vfuncout;
                __Vtask_uvm_report_info__358__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__358__context_name = ""s;
                __Vtask_uvm_report_info__358__line = 0x000005e7U;
                this->__Vtask_uvm_report_info__358__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__358__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__358__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_2__278____VlefCall_27__get_full_name)
                                                                         , '~',32,__Vtask___VforkTask_2__278____VlefCall_28__get_inst_id) , "PHASE EXIT TIMEOUT"s));
                this->__Vtask_uvm_report_info__358__id = "PH/TRC/EXE/3"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__359__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__359__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__360__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__360__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__358__id, this->__Vtask_uvm_report_info__358__message, __Vtask_uvm_report_info__358__verbosity, this->__Vtask_uvm_report_info__358__filename, __Vtask_uvm_report_info__358__line, this->__Vtask_uvm_report_info__358__context_name, (IData)(__Vtask_uvm_report_info__358__report_enabled_checked));
            }
        }
    } else {
        co_await VlForever{};
    }
    __Vfork_5__sync.done("../../uvm/distrib/src/base/uvm_phase.svh", 
                         1469);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __Vtask___VforkTask_1__225____VDynScope_execute_phase_0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_14__get_inst_id;
    __Vtask___VforkTask_1__225____VlefCall_14__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_12__uvm_report_enabled;
    __Vtask___VforkTask_1__225____VlefCall_12__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_11__get_inst_id;
    __Vtask___VforkTask_1__225____VlefCall_11__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_9__uvm_report_enabled;
    __Vtask___VforkTask_1__225____VlefCall_9__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_8__get_inst_id;
    __Vtask___VforkTask_1__225____VlefCall_8__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_6__uvm_report_enabled;
    __Vtask___VforkTask_1__225____VlefCall_6__uvm_report_enabled = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_5__get_inst_id;
    __Vtask___VforkTask_1__225____VlefCall_5__get_inst_id = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_3__uvm_report_enabled;
    __Vtask___VforkTask_1__225____VlefCall_3__uvm_report_enabled = 0;
    CData/*0:0*/ __Vtask___VforkTask_1__225____VlefLogAnd_2;
    __Vtask___VforkTask_1__225____VlefLogAnd_2 = 0;
    IData/*31:0*/ __Vtask___VforkTask_1__225____VlefCall_0__get_objection_total;
    __Vtask___VforkTask_1__225____VlefCall_0__get_objection_total = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15> __Vtask___VforkTask_1__225__unnamedblk114__DOT__iter;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> __Vtask___VforkTask_1__225__unnamedblk114__DOT__cb;
    CData/*0:0*/ __Vtask___VforkTask_1__225__do_ready_to_end;
    __Vtask___VforkTask_1__225__do_ready_to_end = 0;
    IData/*31:0*/ __Vtask_get_objection_total__226__Vfuncout;
    __Vtask_get_objection_total__226__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__229__Vfuncout;
    __Vfunc_uvm_report_enabled__229__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__229__verbosity;
    __Vfunc_uvm_report_enabled__229__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__229__severity;
    __Vfunc_uvm_report_enabled__229__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__230__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__231__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__232__Vfuncout;
    __Vtask_uvm_report_enabled__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__234__Vfuncout;
    __Vfunc_get_inst_id__234__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__235__verbosity;
    __Vtask_uvm_report_info__235__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__235__line;
    __Vtask_uvm_report_info__235__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__235__report_enabled_checked;
    __Vtask_uvm_report_info__235__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__239__Vfuncout;
    __Vfunc_uvm_report_enabled__239__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__239__verbosity;
    __Vfunc_uvm_report_enabled__239__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__239__severity;
    __Vfunc_uvm_report_enabled__239__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__240__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__241__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__242__Vfuncout;
    __Vtask_uvm_report_enabled__242__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__244__Vfuncout;
    __Vfunc_get_inst_id__244__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__245__verbosity;
    __Vtask_uvm_report_info__245__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__245__line;
    __Vtask_uvm_report_info__245__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__245__report_enabled_checked;
    __Vtask_uvm_report_info__245__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__246__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__247__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__251__Vfuncout;
    __Vfunc_uvm_report_enabled__251__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__251__verbosity;
    __Vfunc_uvm_report_enabled__251__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__251__severity;
    __Vfunc_uvm_report_enabled__251__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__252__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__253__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__254__Vfuncout;
    __Vtask_uvm_report_enabled__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__256__Vfuncout;
    __Vfunc_get_inst_id__256__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__257__verbosity;
    __Vtask_uvm_report_info__257__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__257__line;
    __Vtask_uvm_report_info__257__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__257__report_enabled_checked;
    __Vtask_uvm_report_info__257__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__258__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__259__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__261__Vfuncout;
    __Vfunc_uvm_report_enabled__261__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__261__verbosity;
    __Vfunc_uvm_report_enabled__261__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__261__severity;
    __Vfunc_uvm_report_enabled__261__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__262__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__263__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__264__Vfuncout;
    __Vtask_uvm_report_enabled__264__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__266__Vfuncout;
    __Vfunc_get_inst_id__266__Vfuncout = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__267__verbosity;
    __Vtask_uvm_report_info__267__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__267__line;
    __Vtask_uvm_report_info__267__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__267__report_enabled_checked;
    __Vtask_uvm_report_info__267__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__268__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__269__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__272__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__274__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_5__sync.onKill(vlProcess);
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 = 0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 = 0;
    __Vtask___VforkTask_1__225____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_1__225__do_ready_to_end = 0U;
    VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1432)->__VnoInFunc_get_objection_total(vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__225____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1432)
                                                                                ->__PVT__top, __Vtask_get_objection_total__226__Vfuncout);
    __Vtask___VforkTask_1__225____VlefCall_0__get_objection_total 
        = __Vtask_get_objection_total__226__Vfuncout;
    __Vtask___VforkTask_1__225____VlefLogAnd_2 = (0U 
                                                  != __Vtask___VforkTask_1__225____VlefCall_0__get_objection_total);
    if ((1U & (~ (IData)(__Vtask___VforkTask_1__225____VlefLogAnd_2)))) {
        __Vtask___VforkTask_1__225____VlefLogAnd_2 
            = vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic;
        if (__Vtask___VforkTask_1__225____VlefLogAnd_2) {
            VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/base/uvm_phase.svh", 1433)->__VnoInFunc_get_name(vlSymsp, this->__Vtask_get_name__227__Vfuncout);
            this->__Vtask___VforkTask_1__225____VlefCall_1__get_name 
                = this->__Vtask_get_name__227__Vfuncout;
            __Vtask___VforkTask_1__225____VlefLogAnd_2 
                = ("run"s == this->__Vtask___VforkTask_1__225____VlefCall_1__get_name);
        }
    }
    if (__Vtask___VforkTask_1__225____VlefLogAnd_2) {
        if ((1U & (~ VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1434)
                   ->__PVT__m_top_all_dropped))) {
            co_await VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1435)->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, VL_NULL_CHECK(__Vtask___VforkTask_1__225____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1435)
                                                                                ->__PVT__top);
        }
        this->__Vfunc_uvm_report_enabled__229__id = "PH/TRC/EXE/ALLDROP"s;
        __Vfunc_uvm_report_enabled__229__severity = 0U;
        __Vfunc_uvm_report_enabled__229__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__230__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__230__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__231__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__231__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__229__verbosity, (IData)(__Vfunc_uvm_report_enabled__229__severity), this->__Vfunc_uvm_report_enabled__229__id, __Vtask_uvm_report_enabled__232__Vfuncout);
        __Vfunc_uvm_report_enabled__229__Vfuncout = __Vtask_uvm_report_enabled__232__Vfuncout;
        __Vtask___VforkTask_1__225____VlefCall_3__uvm_report_enabled 
            = __Vfunc_uvm_report_enabled__229__Vfuncout;
        if ((0U != __Vtask___VforkTask_1__225____VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__233__Vfuncout);
            this->__Vtask___VforkTask_1__225____VlefCall_4__get_full_name 
                = this->__Vfunc_get_full_name__233__Vfuncout;
            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__234__Vfuncout);
            __Vtask___VforkTask_1__225____VlefCall_5__get_inst_id 
                = __Vfunc_get_inst_id__234__Vfuncout;
            __Vtask_uvm_report_info__235__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__235__context_name = ""s;
            __Vtask_uvm_report_info__235__line = 0x0000059cU;
            this->__Vtask_uvm_report_info__235__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__235__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__235__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(this->__Vtask___VforkTask_1__225____VlefCall_4__get_full_name)
                                                                     , '~',32,__Vtask___VforkTask_1__225____VlefCall_5__get_inst_id) , "PHASE EXIT ALL_DROPPED"s));
            this->__Vtask_uvm_report_info__235__id = "PH/TRC/EXE/ALLDROP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__236__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__236__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__237__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__235__id, this->__Vtask_uvm_report_info__235__message, __Vtask_uvm_report_info__235__verbosity, this->__Vtask_uvm_report_info__235__filename, __Vtask_uvm_report_info__235__line, this->__Vtask_uvm_report_info__235__context_name, (IData)(__Vtask_uvm_report_info__235__report_enabled_checked));
        }
    } else if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        this->__Vfunc_uvm_report_enabled__239__id = "PH/TRC/SKIP"s;
        __Vfunc_uvm_report_enabled__239__severity = 0U;
        __Vfunc_uvm_report_enabled__239__verbosity = 0x00000064U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__240__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__240__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__241__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__241__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__239__verbosity, (IData)(__Vfunc_uvm_report_enabled__239__severity), this->__Vfunc_uvm_report_enabled__239__id, __Vtask_uvm_report_enabled__242__Vfuncout);
        __Vfunc_uvm_report_enabled__239__Vfuncout = __Vtask_uvm_report_enabled__242__Vfuncout;
        __Vtask___VforkTask_1__225____VlefCall_6__uvm_report_enabled 
            = __Vfunc_uvm_report_enabled__239__Vfuncout;
        if ((0U != __Vtask___VforkTask_1__225____VlefCall_6__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__243__Vfuncout);
            this->__Vtask___VforkTask_1__225____VlefCall_7__get_full_name 
                = this->__Vfunc_get_full_name__243__Vfuncout;
            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__244__Vfuncout);
            __Vtask___VforkTask_1__225____VlefCall_8__get_inst_id 
                = __Vfunc_get_inst_id__244__Vfuncout;
            __Vtask_uvm_report_info__245__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__245__context_name = ""s;
            __Vtask_uvm_report_info__245__line = 0x0000059fU;
            this->__Vtask_uvm_report_info__245__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__245__verbosity = 0x00000064U;
            this->__Vtask_uvm_report_info__245__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(this->__Vtask___VforkTask_1__225____VlefCall_7__get_full_name)
                                                                     , '~',32,__Vtask___VforkTask_1__225____VlefCall_8__get_inst_id) , "No objections raised, skipping phase"s));
            this->__Vtask_uvm_report_info__245__id = "PH/TRC/SKIP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__246__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__246__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__247__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__247__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__245__id, this->__Vtask_uvm_report_info__245__message, __Vtask_uvm_report_info__245__verbosity, this->__Vtask_uvm_report_info__245__filename, __Vtask_uvm_report_info__245__line, this->__Vtask_uvm_report_info__245__context_name, (IData)(__Vtask_uvm_report_info__245__report_enabled_checked));
        }
    }
    co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
    __Vtask___VforkTask_1__225__do_ready_to_end = 1U;
    while (__Vtask___VforkTask_1__225__do_ready_to_end) {
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_heb53d3cb__1;
        __VdynTrigger_heb53d3cb__1 = 0;
        __VdynTrigger_heb53d3cb__1 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (IData)(__VdynTrigger_heb53d3cb__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                         "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                         461);
            __VdynTrigger_heb53d3cb__1 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_heb53d3cb__1);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__1 
                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     461);
        this->__Vfunc_uvm_report_enabled__251__id = "PH_READY_TO_END"s;
        __Vfunc_uvm_report_enabled__251__severity = 0U;
        __Vfunc_uvm_report_enabled__251__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__252__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__252__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__253__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__253__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__251__verbosity, (IData)(__Vfunc_uvm_report_enabled__251__severity), this->__Vfunc_uvm_report_enabled__251__id, __Vtask_uvm_report_enabled__254__Vfuncout);
        __Vfunc_uvm_report_enabled__251__Vfuncout = __Vtask_uvm_report_enabled__254__Vfuncout;
        __Vtask___VforkTask_1__225____VlefCall_9__uvm_report_enabled 
            = __Vfunc_uvm_report_enabled__251__Vfuncout;
        if ((0U != __Vtask___VforkTask_1__225____VlefCall_9__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__255__Vfuncout);
            this->__Vtask___VforkTask_1__225____VlefCall_10__get_full_name 
                = this->__Vfunc_get_full_name__255__Vfuncout;
            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__256__Vfuncout);
            __Vtask___VforkTask_1__225____VlefCall_11__get_inst_id 
                = __Vfunc_get_inst_id__256__Vfuncout;
            __Vtask_uvm_report_info__257__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__257__context_name = ""s;
            __Vtask_uvm_report_info__257__line = 0x000005abU;
            this->__Vtask_uvm_report_info__257__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__257__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__257__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                     , 'S',&(this->__Vtask___VforkTask_1__225____VlefCall_10__get_full_name)
                                                                     , '~',32,__Vtask___VforkTask_1__225____VlefCall_11__get_inst_id) , "PHASE READY TO END"s));
            this->__Vtask_uvm_report_info__257__id = "PH_READY_TO_END"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__258__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__258__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__259__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__259__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__257__id, this->__Vtask_uvm_report_info__257__message, __Vtask_uvm_report_info__257__verbosity, this->__Vtask_uvm_report_info__257__filename, __Vtask_uvm_report_info__257__line, this->__Vtask_uvm_report_info__257__context_name, (IData)(__Vtask_uvm_report_info__257__report_enabled_checked));
        }
        this->__PVT__m_ready_to_end_count = ((IData)(1U) 
                                             + this->__PVT__m_ready_to_end_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            this->__Vfunc_uvm_report_enabled__261__id = "PH_READY_TO_END_CB"s;
            __Vfunc_uvm_report_enabled__261__severity = 0U;
            __Vfunc_uvm_report_enabled__261__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__262__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__262__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__263__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__263__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__261__verbosity, (IData)(__Vfunc_uvm_report_enabled__261__severity), this->__Vfunc_uvm_report_enabled__261__id, __Vtask_uvm_report_enabled__264__Vfuncout);
            __Vfunc_uvm_report_enabled__261__Vfuncout 
                = __Vtask_uvm_report_enabled__264__Vfuncout;
            __Vtask___VforkTask_1__225____VlefCall_12__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__261__Vfuncout;
            if ((0U != __Vtask___VforkTask_1__225____VlefCall_12__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__265__Vfuncout);
                this->__Vtask___VforkTask_1__225____VlefCall_13__get_full_name 
                    = this->__Vfunc_get_full_name__265__Vfuncout;
                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__266__Vfuncout);
                __Vtask___VforkTask_1__225____VlefCall_14__get_inst_id 
                    = __Vfunc_get_inst_id__266__Vfuncout;
                __Vtask_uvm_report_info__267__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__267__context_name = ""s;
                __Vtask_uvm_report_info__267__line = 0x000005aeU;
                this->__Vtask_uvm_report_info__267__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__267__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__267__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(this->__Vtask___VforkTask_1__225____VlefCall_13__get_full_name)
                                                                         , '~',32,__Vtask___VforkTask_1__225____VlefCall_14__get_inst_id) , "CALLING READY_TO_END CB"s));
                this->__Vtask_uvm_report_info__267__id = "PH_READY_TO_END_CB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__268__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__268__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__269__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__269__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__267__id, this->__Vtask_uvm_report_info__267__message, __Vtask_uvm_report_info__267__verbosity, this->__Vtask_uvm_report_info__267__filename, __Vtask_uvm_report_info__267__line, this->__Vtask_uvm_report_info__267__context_name, (IData)(__Vtask_uvm_report_info__267__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1__225____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1455)
                      ->__PVT__state_chg, "../../uvm/distrib/src/base/uvm_phase.svh", 1455)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 0x00000020U;
        __Vtask___VforkTask_1__225__unnamedblk114__DOT__iter 
            = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz14_TBz15, vlSymsp, 
                     VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(__Vtask___VforkTask_1__225__unnamedblk114__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1457)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__272__Vfuncout);
        __Vtask___VforkTask_1__225__unnamedblk114__DOT__cb 
            = __Vtask_first__272__Vfuncout;
        while ((VlNull{} != __Vtask___VforkTask_1__225__unnamedblk114__DOT__cb)) {
            VL_NULL_CHECK(__Vtask___VforkTask_1__225__unnamedblk114__DOT__cb, "../../uvm/distrib/src/base/uvm_phase.svh", 1457)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__Vtask___VforkTask_1__225____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1457)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(__Vtask___VforkTask_1__225__unnamedblk114__DOT__iter, "../../uvm/distrib/src/base/uvm_phase.svh", 1457)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__274__Vfuncout);
            __Vtask___VforkTask_1__225__unnamedblk114__DOT__cb 
                = __Vtask_next__274__Vfuncout;
        }
        if ((VlNull{} != this->__PVT__m_imp)) {
            VL_NULL_CHECK(this->__PVT__m_imp, "../../uvm/distrib/src/base/uvm_phase.svh", 1459)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__225____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1459)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, 0x00000020U);
        }
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_heb53d3cb__2;
        __VdynTrigger_heb53d3cb__2 = 0;
        __VdynTrigger_heb53d3cb__2 = 0U;
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        while ((1U & (~ (IData)(__VdynTrigger_heb53d3cb__2)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                         "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                         461);
            __VdynTrigger_heb53d3cb__2 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                          != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_heb53d3cb__2);
            __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__2 
                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     461);
        co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
        __Vtask___VforkTask_1__225__do_ready_to_end 
            = ((0x00000010U == this->__PVT__m_state) 
               & (this->__PVT__m_ready_to_end_count 
                  < this->__PVT__max_ready_to_end_iter));
    }
    __Vfork_5__sync.done("../../uvm/distrib/src/base/uvm_phase.svh", 
                         1429);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_globals.svh", 
                                            460);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h8b5250ea__2;
        __Vintraval_h8b5250ea__2 = 0;
        __Vintraval_h8b5250ea__2 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h8b5250ea__2);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__2;
    __VdynTrigger_h2615856f__2 = 0;
    __VdynTrigger_h2615856f__2 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        __VdynTrigger_h2615856f__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                 460);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h8b5250ea__2;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_globals.svh", 
                                            460);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h8b5250ea__1;
        __Vintraval_h8b5250ea__1 = 0;
        __Vintraval_h8b5250ea__1 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h8b5250ea__1);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__1;
    __VdynTrigger_h2615856f__1 = 0;
    __VdynTrigger_h2615856f__1 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        __VdynTrigger_h2615856f__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                 460);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h8b5250ea__1;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync, IData/*31:0*/ __VlefCall_7__uvm_report_enabled, std::string __VlefCall_8__get_full_name, IData/*31:0*/ __VlefCall_9__get_inst_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__215__verbosity;
    __Vfunc_uvm_report_enabled__215__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__215__severity;
    __Vfunc_uvm_report_enabled__215__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__216__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__217__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__221__verbosity;
    __Vtask_uvm_report_info__221__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__221__line;
    __Vtask_uvm_report_info__221__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__221__report_enabled_checked;
    __Vtask_uvm_report_info__221__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__222__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__223__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_5__sync.onKill(vlProcess);
    if ((1U & (~ (IData)(this->__PVT__m_premature_end)))) {
        CData/*0:0*/ __VdynTrigger_hee8e4518__0;
        __VdynTrigger_hee8e4518__0 = 0;
        __VdynTrigger_hee8e4518__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hee8e4518__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1424);
            __VdynTrigger_hee8e4518__0 = this->__PVT__m_premature_end;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hee8e4518__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                     "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                     1424);
    }
    this->__Vfunc_uvm_report_enabled__215__id = "PH/TRC/EXE/JUMP"s;
    __Vfunc_uvm_report_enabled__215__severity = 0U;
    __Vfunc_uvm_report_enabled__215__verbosity = 0x000001f4U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__216__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__216__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__217__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__217__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__215__verbosity, (IData)(__Vfunc_uvm_report_enabled__215__severity), this->__Vfunc_uvm_report_enabled__215__id, __VlefCall_7__uvm_report_enabled);
    if ((0U != __VlefCall_7__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
        this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_9__get_inst_id);
        __Vtask_uvm_report_info__221__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_info__221__context_name = ""s;
        __Vtask_uvm_report_info__221__line = 0x00000591U;
        this->__Vtask_uvm_report_info__221__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__221__verbosity = 0x000001f4U;
        this->__Vtask_uvm_report_info__221__message 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                 , 'S',&(__VlefCall_8__get_full_name)
                                                                 , '~',32,__VlefCall_9__get_inst_id) , "PHASE EXIT ON JUMP REQUEST"s));
        this->__Vtask_uvm_report_info__221__id = "PH/TRC/EXE/JUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__222__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__222__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__223__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__223__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__221__id, this->__Vtask_uvm_report_info__221__message, __Vtask_uvm_report_info__221__verbosity, this->__Vtask_uvm_report_info__221__filename, __Vtask_uvm_report_info__221__line, this->__Vtask_uvm_report_info__221__context_name, (IData)(__Vtask_uvm_report_info__221__report_enabled_checked));
    }
    __Vfork_5__sync.done("../../uvm/distrib/src/base/uvm_phase.svh", 
                         1423);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_globals.svh", 
                                            460);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h8b5250ea__0;
        __Vintraval_h8b5250ea__0 = 0;
        __Vintraval_h8b5250ea__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h8b5250ea__0);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__0;
    __VdynTrigger_h2615856f__0 = 0;
    __VdynTrigger_h2615856f__0 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        __VdynTrigger_h2615856f__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                 460);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h8b5250ea__0;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03a__VDynScope_2> __Vtask___VforkTask_0__211____VDynScope_execute_phase_0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__211____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_phase.svh", 
                                            1400);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, this->__PVT__m_phase_proc);
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__211____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1408)
                  ->__PVT__task_phase, "../../uvm/distrib/src/base/uvm_phase.svh", 1408)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__211____VDynScope_execute_phase_0, "../../uvm/distrib/src/base/uvm_phase.svh", 1408)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
    co_await VlForever{};
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> &pred) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__p__Vnext;
    CData/*0:0*/ unnamedblk122__DOT__p__Vmore;
    unnamedblk122__DOT__p__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__p__Vnext;
    CData/*0:0*/ unnamedblk123__DOT__p__Vmore;
    unnamedblk123__DOT__p__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__unnamedblk124__DOT__next_p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vnext;
    CData/*0:0*/ unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vmore;
    unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__p;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__p__Vnext;
    CData/*0:0*/ unnamedblk125__DOT__p__Vmore;
    unnamedblk125__DOT__p__Vmore = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    CData/*0:0*/ done;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> predecessors;
    IData/*31:0*/ idx;
    done = 0U;
    predecessors.clear();
    predecessors.atDefault() = 0;
    idx = 0U;
    unnamedblk122__DOT__p__Vmore = (0U != this->__PVT__m_predecessors.first(unnamedblk122__DOT__p__Vnext));
    while (unnamedblk122__DOT__p__Vmore) {
        unnamedblk122__DOT__p = unnamedblk122__DOT__p__Vnext;
        unnamedblk122__DOT__p__Vmore = (0U != this->__PVT__m_predecessors.next(unnamedblk122__DOT__p__Vnext));
        predecessors.at(unnamedblk122__DOT__p) = 1U;
    }
    do {
        done = 1U;
        unnamedblk123__DOT__p__Vmore = (0U != predecessors.first(unnamedblk123__DOT__p__Vnext));
        while (unnamedblk123__DOT__p__Vmore) {
            unnamedblk123__DOT__p = unnamedblk123__DOT__p__Vnext;
            unnamedblk123__DOT__p__Vmore = (0U != predecessors.next(unnamedblk123__DOT__p__Vnext));
            VL_NULL_CHECK(unnamedblk123__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1676)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
            if ((1U != __VlefCall_0__get_phase_type)) {
                predecessors.erase(unnamedblk123__DOT__p);
                unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk123__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1678)
                       ->__PVT__m_predecessors.first(unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vnext));
                while (unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vmore) {
                    unnamedblk123__DOT__unnamedblk124__DOT__next_p 
                        = unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vnext;
                    unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk123__DOT__p, "../../uvm/distrib/src/base/uvm_phase.svh", 1678)
                           ->__PVT__m_predecessors.next(unnamedblk123__DOT__unnamedblk124__DOT__next_p__Vnext));
                    predecessors.at(unnamedblk123__DOT__unnamedblk124__DOT__next_p) = 1U;
                }
                done = 0U;
            }
        }
    } while ((1U & (~ (IData)(done))));
    pred.renew(predecessors.size());
    unnamedblk125__DOT__p__Vmore = (0U != predecessors.first(unnamedblk125__DOT__p__Vnext));
    while (unnamedblk125__DOT__p__Vmore) {
        unnamedblk125__DOT__p = unnamedblk125__DOT__p__Vnext;
        unnamedblk125__DOT__p__Vmore = (0U != predecessors.next(unnamedblk125__DOT__p__Vnext));
        __Vincrement1 = idx;
        idx = ((IData)(1U) + idx);
        pred.atWrite(__Vincrement1) = unnamedblk125__DOT__p;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> &succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk126__DOT__s;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk126__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk126__DOT__s__Vmore;
    unnamedblk126__DOT__s__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__s;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk127__DOT__s__Vmore;
    unnamedblk127__DOT__s__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__unnamedblk128__DOT__next_s;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vnext;
    CData/*0:0*/ unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vmore;
    unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__s;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__s__Vnext;
    CData/*0:0*/ unnamedblk129__DOT__s__Vmore;
    unnamedblk129__DOT__s__Vmore = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    CData/*0:0*/ done;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> successors;
    IData/*31:0*/ idx;
    done = 0U;
    successors.clear();
    successors.atDefault() = 0;
    idx = 0U;
    unnamedblk126__DOT__s__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk126__DOT__s__Vnext));
    while (unnamedblk126__DOT__s__Vmore) {
        unnamedblk126__DOT__s = unnamedblk126__DOT__s__Vnext;
        unnamedblk126__DOT__s__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk126__DOT__s__Vnext));
        successors.at(unnamedblk126__DOT__s) = 1U;
    }
    do {
        done = 1U;
        unnamedblk127__DOT__s__Vmore = (0U != successors.first(unnamedblk127__DOT__s__Vnext));
        while (unnamedblk127__DOT__s__Vmore) {
            unnamedblk127__DOT__s = unnamedblk127__DOT__s__Vnext;
            unnamedblk127__DOT__s__Vmore = (0U != successors.next(unnamedblk127__DOT__s__Vnext));
            VL_NULL_CHECK(unnamedblk127__DOT__s, "../../uvm/distrib/src/base/uvm_phase.svh", 1705)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
            if ((1U != __VlefCall_0__get_phase_type)) {
                successors.erase(unnamedblk127__DOT__s);
                unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk127__DOT__s, "../../uvm/distrib/src/base/uvm_phase.svh", 1707)
                       ->__PVT__m_successors.first(unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vnext));
                while (unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vmore) {
                    unnamedblk127__DOT__unnamedblk128__DOT__next_s 
                        = unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vnext;
                    unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk127__DOT__s, "../../uvm/distrib/src/base/uvm_phase.svh", 1707)
                           ->__PVT__m_successors.next(unnamedblk127__DOT__unnamedblk128__DOT__next_s__Vnext));
                    successors.at(unnamedblk127__DOT__unnamedblk128__DOT__next_s) = 1U;
                }
                done = 0U;
            }
        }
    } while ((1U & (~ (IData)(done))));
    succ.renew(successors.size());
    unnamedblk129__DOT__s__Vmore = (0U != successors.first(unnamedblk129__DOT__s__Vnext));
    while (unnamedblk129__DOT__s__Vmore) {
        unnamedblk129__DOT__s = unnamedblk129__DOT__s__Vnext;
        unnamedblk129__DOT__s__Vmore = (0U != successors.next(unnamedblk129__DOT__s__Vnext));
        __Vincrement2 = idx;
        idx = ((IData)(1U) + idx);
        succ.atWrite(__Vincrement2) = unnamedblk129__DOT__s;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_phase_type;
    IData/*31:0*/ unnamedblk130__DOT__s;
    unnamedblk130__DOT__s = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk130__DOT__unnamedblk131__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk130__DOT__unnamedblk131__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk130__DOT__unnamedblk131__DOT__pred__Vmore;
    unnamedblk130__DOT__unnamedblk131__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk132__DOT__pred__Vmore;
    unnamedblk132__DOT__pred__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__unnamedblk133__DOT__next_pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vnext;
    CData/*0:0*/ unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vmore;
    unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vmore = 0;
    CData/*0:0*/ done;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> successors;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    done = 0U;
    successors.clear();
    this->__VnoInFunc_get_adjacent_successor_nodes(vlSymsp, successors);
    unnamedblk130__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk130__DOT__s, successors.size())) {
        unnamedblk130__DOT__unnamedblk131__DOT__pred__Vmore 
            = (0U != VL_NULL_CHECK(successors.at(unnamedblk130__DOT__s), "../../uvm/distrib/src/base/uvm_phase.svh", 1730)
               ->__PVT__m_predecessors.first(unnamedblk130__DOT__unnamedblk131__DOT__pred__Vnext));
        while (unnamedblk130__DOT__unnamedblk131__DOT__pred__Vmore) {
            unnamedblk130__DOT__unnamedblk131__DOT__pred 
                = unnamedblk130__DOT__unnamedblk131__DOT__pred__Vnext;
            unnamedblk130__DOT__unnamedblk131__DOT__pred__Vmore 
                = (0U != VL_NULL_CHECK(successors.at(unnamedblk130__DOT__s), "../../uvm/distrib/src/base/uvm_phase.svh", 1730)
                   ->__PVT__m_predecessors.next(unnamedblk130__DOT__unnamedblk131__DOT__pred__Vnext));
            pred_of_succ.at(unnamedblk130__DOT__unnamedblk131__DOT__pred) = 1U;
        }
        unnamedblk130__DOT__s = ((IData)(1U) + unnamedblk130__DOT__s);
    }
    do {
        done = 1U;
        unnamedblk132__DOT__pred__Vmore = (0U != pred_of_succ.first(unnamedblk132__DOT__pred__Vnext));
        while (unnamedblk132__DOT__pred__Vmore) {
            unnamedblk132__DOT__pred = unnamedblk132__DOT__pred__Vnext;
            unnamedblk132__DOT__pred__Vmore = (0U != pred_of_succ.next(unnamedblk132__DOT__pred__Vnext));
            VL_NULL_CHECK(unnamedblk132__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1738)->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_0__get_phase_type);
            if ((1U != __VlefCall_0__get_phase_type)) {
                pred_of_succ.erase(unnamedblk132__DOT__pred);
                unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vmore 
                    = (0U != VL_NULL_CHECK(unnamedblk132__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1740)
                       ->__PVT__m_predecessors.first(unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vnext));
                while (unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vmore) {
                    unnamedblk132__DOT__unnamedblk133__DOT__next_pred 
                        = unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vnext;
                    unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vmore 
                        = (0U != VL_NULL_CHECK(unnamedblk132__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1740)
                           ->__PVT__m_predecessors.next(unnamedblk132__DOT__unnamedblk133__DOT__next_pred__Vnext));
                    pred_of_succ.at(unnamedblk132__DOT__unnamedblk133__DOT__next_pred) = 1U;
                }
                done = 0U;
            }
        }
    } while ((1U & (~ (IData)(done))));
    pred_of_succ.erase(VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred\n"); );
    // Locals
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__460__pred_of_succ;
    __Vtask_get_predecessors_for_successors__460__pred_of_succ.atDefault() = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__463__verbosity;
    __Vfunc_uvm_report_enabled__463__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__463__severity;
    __Vfunc_uvm_report_enabled__463__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__464__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__465__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__469__verbosity;
    __Vtask_uvm_report_info__469__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__469__line;
    __Vtask_uvm_report_info__469__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__469__report_enabled_checked;
    __Vtask_uvm_report_info__469__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__470__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__471__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__476__verbosity;
    __Vfunc_uvm_report_enabled__476__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__476__severity;
    __Vfunc_uvm_report_enabled__476__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__477__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__478__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__482__verbosity;
    __Vtask_uvm_report_info__482__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__482__line;
    __Vtask_uvm_report_info__482__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__482__report_enabled_checked;
    __Vtask_uvm_report_info__482__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__483__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__484__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__487__verbosity;
    __Vfunc_uvm_report_enabled__487__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__487__severity;
    __Vfunc_uvm_report_enabled__487__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__488__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__489__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__493__verbosity;
    __Vtask_uvm_report_info__493__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__493__line;
    __Vtask_uvm_report_info__493__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__493__report_enabled_checked;
    __Vtask_uvm_report_info__493__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__494__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__495__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__497__verbosity;
    __Vfunc_uvm_report_enabled__497__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__497__severity;
    __Vfunc_uvm_report_enabled__497__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__498__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__499__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__503__verbosity;
    __Vtask_uvm_report_info__503__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__503__line;
    __Vtask_uvm_report_info__503__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__503__report_enabled_checked;
    __Vtask_uvm_report_info__503__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__504__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__505__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_16__get_inst_id;
    std::string __VlefCall_15__get_full_name;
    IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_13__get_inst_id;
    std::string __VlefCall_12__get_full_name;
    IData/*31:0*/ __VlefCall_11__uvm_report_enabled;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__get_inst_id;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    std::string __VlefCall_5__get_name;
    IData/*31:0*/ __VlefCall_4__get_inst_id;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__sibling;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__sibling__Vnext;
    CData/*0:0*/ unnamedblk134__DOT__sibling__Vmore;
    unnamedblk134__DOT__sibling__Vmore = 0;
    std::string unnamedblk134__DOT__unnamedblk135__DOT__s;
    std::string unnamedblk134__DOT__unnamedblk136__DOT__s;
    std::string unnamedblk137__DOT__s;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk137__DOT__unnamedblk138__DOT__pred;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk137__DOT__unnamedblk138__DOT__pred__Vnext;
    CData/*0:0*/ unnamedblk137__DOT__unnamedblk138__DOT__pred__Vmore;
    unnamedblk137__DOT__unnamedblk138__DOT__pred__Vmore = 0;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> pred_of_succ;
    pred_of_succ.clear();
    pred_of_succ.atDefault() = 0;
    this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__460__pred_of_succ);
    pred_of_succ = __Vtask_get_predecessors_for_successors__460__pred_of_succ;
    unnamedblk134__DOT__sibling__Vmore = (0U != pred_of_succ.first(unnamedblk134__DOT__sibling__Vnext));
    while (unnamedblk134__DOT__sibling__Vmore) {
        unnamedblk134__DOT__sibling = unnamedblk134__DOT__sibling__Vnext;
        unnamedblk134__DOT__sibling__Vmore = (0U != pred_of_succ.next(unnamedblk134__DOT__sibling__Vnext));
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            unnamedblk134__DOT__unnamedblk135__DOT__s = ""s;
            VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1768)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1768)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __Vtemp_1 = Vhello_uvm_v1___024unit::__Venumtab_enum_name37
                .at(VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1768)
                    ->__PVT__m_state);
            VL_SFORMAT_NX(unnamedblk134__DOT__unnamedblk135__DOT__s
                          ,"Waiting for phase '%s' (%0d) to be READY_TO_END. Current state is %s",3
                          , 'S',&(__VlefCall_0__get_name)
                          , '~',32,__VlefCall_1__get_inst_id
                          , 'S',&(__Vtemp_1));
            this->__Vfunc_uvm_report_enabled__463__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__463__severity = 0U;
            __Vfunc_uvm_report_enabled__463__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__464__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__464__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__465__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__465__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__463__verbosity, (IData)(__Vfunc_uvm_report_enabled__463__severity), this->__Vfunc_uvm_report_enabled__463__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_4__get_inst_id);
                __Vtask_uvm_report_info__469__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__469__context_name = ""s;
                __Vtask_uvm_report_info__469__line = 0x000006e9U;
                this->__Vtask_uvm_report_info__469__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__469__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__469__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_3__get_full_name)
                                                                         , '~',32,__VlefCall_4__get_inst_id) , unnamedblk134__DOT__unnamedblk135__DOT__s));
                this->__Vtask_uvm_report_info__469__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__470__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__470__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__471__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__471__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__469__id, this->__Vtask_uvm_report_info__469__message, __Vtask_uvm_report_info__469__verbosity, this->__Vtask_uvm_report_info__469__filename, __Vtask_uvm_report_info__469__line, this->__Vtask_uvm_report_info__469__context_name, (IData)(__Vtask_uvm_report_info__469__report_enabled_checked));
            }
        }
        co_await VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1772)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000020U, 5U);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            unnamedblk134__DOT__unnamedblk136__DOT__s = ""s;
            VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1777)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
            VL_NULL_CHECK(unnamedblk134__DOT__sibling, "../../uvm/distrib/src/base/uvm_phase.svh", 1777)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
            VL_SFORMAT_NX(unnamedblk134__DOT__unnamedblk136__DOT__s
                          ,"Phase '%s' (%0d) is now READY_TO_END. Releasing phase",2
                          , 'S',&(__VlefCall_5__get_name)
                          , '~',32,__VlefCall_6__get_inst_id);
            this->__Vfunc_uvm_report_enabled__476__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__476__severity = 0U;
            __Vfunc_uvm_report_enabled__476__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__477__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__477__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__478__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__478__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__476__verbosity, (IData)(__Vfunc_uvm_report_enabled__476__severity), this->__Vfunc_uvm_report_enabled__476__id, __VlefCall_7__uvm_report_enabled);
            if ((0U != __VlefCall_7__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_9__get_inst_id);
                __Vtask_uvm_report_info__482__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__482__context_name = ""s;
                __Vtask_uvm_report_info__482__line = 0x000006f2U;
                this->__Vtask_uvm_report_info__482__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__482__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__482__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_8__get_full_name)
                                                                         , '~',32,__VlefCall_9__get_inst_id) , unnamedblk134__DOT__unnamedblk136__DOT__s));
                this->__Vtask_uvm_report_info__482__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__483__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__483__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__484__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__484__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__482__id, this->__Vtask_uvm_report_info__482__message, __Vtask_uvm_report_info__482__verbosity, this->__Vtask_uvm_report_info__482__filename, __Vtask_uvm_report_info__482__line, this->__Vtask_uvm_report_info__482__context_name, (IData)(__Vtask_uvm_report_info__482__report_enabled_checked));
            }
        }
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != pred_of_succ.size())) {
            unnamedblk137__DOT__s = "( "s;
            unnamedblk137__DOT__unnamedblk138__DOT__pred__Vmore 
                = (0U != pred_of_succ.first(unnamedblk137__DOT__unnamedblk138__DOT__pred__Vnext));
            while (unnamedblk137__DOT__unnamedblk138__DOT__pred__Vmore) {
                unnamedblk137__DOT__unnamedblk138__DOT__pred 
                    = unnamedblk137__DOT__unnamedblk138__DOT__pred__Vnext;
                unnamedblk137__DOT__unnamedblk138__DOT__pred__Vmore 
                    = (0U != pred_of_succ.next(unnamedblk137__DOT__unnamedblk138__DOT__pred__Vnext));
                VL_NULL_CHECK(unnamedblk137__DOT__unnamedblk138__DOT__pred, "../../uvm/distrib/src/base/uvm_phase.svh", 1787)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                unnamedblk137__DOT__s = VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(unnamedblk137__DOT__s, __VlefCall_10__get_full_name), " "s);
            }
            unnamedblk137__DOT__s = VL_CONCATN_NNN(unnamedblk137__DOT__s, ")"s);
            this->__Vfunc_uvm_report_enabled__487__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__487__severity = 0U;
            __Vfunc_uvm_report_enabled__487__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__488__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__488__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__489__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__489__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__487__verbosity, (IData)(__Vfunc_uvm_report_enabled__487__severity), this->__Vfunc_uvm_report_enabled__487__id, __VlefCall_11__uvm_report_enabled);
            if ((0U != __VlefCall_11__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_12__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_13__get_inst_id);
                __Vtask_uvm_report_info__493__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__493__context_name = ""s;
                __Vtask_uvm_report_info__493__line = 0x000006feU;
                this->__Vtask_uvm_report_info__493__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__493__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__493__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_12__get_full_name)
                                                                         , '~',32,__VlefCall_13__get_inst_id) , 
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("*** All pred to succ "s, unnamedblk137__DOT__s), " in READY_TO_END state, so ending phase ***"s)));
                this->__Vtask_uvm_report_info__493__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__494__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__494__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__495__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__495__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__493__id, this->__Vtask_uvm_report_info__493__message, __Vtask_uvm_report_info__493__verbosity, this->__Vtask_uvm_report_info__493__filename, __Vtask_uvm_report_info__493__line, this->__Vtask_uvm_report_info__493__context_name, (IData)(__Vtask_uvm_report_info__493__report_enabled_checked));
            }
        } else {
            this->__Vfunc_uvm_report_enabled__497__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            __Vfunc_uvm_report_enabled__497__severity = 0U;
            __Vfunc_uvm_report_enabled__497__verbosity = 0x0000012cU;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__498__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__498__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__499__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__499__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__497__verbosity, (IData)(__Vfunc_uvm_report_enabled__497__severity), this->__Vfunc_uvm_report_enabled__497__id, __VlefCall_14__uvm_report_enabled);
            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_15__get_full_name);
                this->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_16__get_inst_id);
                __Vtask_uvm_report_info__503__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__503__context_name = ""s;
                __Vtask_uvm_report_info__503__line = 0x00000702U;
                this->__Vtask_uvm_report_info__503__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__503__verbosity = 0x0000012cU;
                this->__Vtask_uvm_report_info__503__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0s' (id=%0d) ",2
                                                                         , 'S',&(__VlefCall_15__get_full_name)
                                                                         , '~',32,__VlefCall_16__get_inst_id) , "*** No pred to succ other than myself, so ending phase ***"s));
                this->__Vtask_uvm_report_info__503__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__504__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__504__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__505__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__505__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__503__id, this->__Vtask_uvm_report_info__503__message, __Vtask_uvm_report_info__503__verbosity, this->__Vtask_uvm_report_info__503__filename, __Vtask_uvm_report_info__503__line, this->__Vtask_uvm_report_info__503__context_name, (IData)(__Vtask_uvm_report_info__503__report_enabled_checked));
            }
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_phase.svh", 
                                            1798);
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__509__verbosity;
    __Vfunc_uvm_report_enabled__509__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__509__severity;
    __Vfunc_uvm_report_enabled__509__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__510__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__511__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__515__verbosity;
    __Vtask_uvm_report_error__515__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__515__line;
    __Vtask_uvm_report_error__515__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__515__report_enabled_checked;
    __Vtask_uvm_report_error__515__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__516__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__517__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_phase_type;
    std::string __VlefCall_0__get_full_name;
    std::string m_action;
    std::string m_addon;
    std::string m_obj_name;
    m_action = ""s;
    m_addon = ""s;
    if ((VlNull{} == obj)) {
        __VlefCall_0__get_full_name = "uvm_top"s;
    } else {
        VL_NULL_CHECK(obj, "../../uvm/distrib/src/base/uvm_phase.svh", 1813)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    }
    m_obj_name = __VlefCall_0__get_full_name;
    if ((("raise"s == action) | ("drop"s == action))) {
        if ((1U != count)) {
            VL_SFORMAT_NX(m_action,"%s %0d objections",2
                          , 'S',&(action), '~',32,count);
        } else {
            VL_SFORMAT_NX(m_action,"%s an objection",1
                          , 'S',&(action));
        }
    } else if (("get_objection_count"s == action)) {
        m_action = "call get_objection_count"s;
    }
    this->__VnoInFunc_get_phase_type(vlSymsp, __VlefCall_1__get_phase_type);
    if ((0U == __VlefCall_1__get_phase_type)) {
        m_addon = " (This is a UVM_PHASE_IMP, you have to query the schedule to find the UVM_PHASE_NODE)"s;
    }
    this->__Vfunc_uvm_report_enabled__509__id = "UVM/PH/NULL_OBJECTION"s;
    __Vfunc_uvm_report_enabled__509__severity = 2U;
    __Vfunc_uvm_report_enabled__509__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__510__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__510__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__511__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__511__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__509__verbosity, (IData)(__Vfunc_uvm_report_enabled__509__severity), this->__Vfunc_uvm_report_enabled__509__id, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __Vtask_uvm_report_error__515__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__515__context_name = ""s;
        __Vtask_uvm_report_error__515__line = 0x0000072bU;
        this->__Vtask_uvm_report_error__515__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_error__515__verbosity = 0U;
        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__515__message
                      ,"'%s' attempted to %s on '%s', however '%s' is not a task-based phase node! %s",5
                      , 'S',&(m_obj_name), 'S',&(m_action)
                      , 'S',&(__VlefCall_3__get_name)
                      , 'S',&(__VlefCall_4__get_name)
                      , 'S',&(m_addon));
        this->__Vtask_uvm_report_error__515__id = "UVM/PH/NULL_OBJECTION"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__516__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__516__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__517__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__517__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__515__id, this->__Vtask_uvm_report_error__515__message, __Vtask_uvm_report_error__515__verbosity, this->__Vtask_uvm_report_error__515__filename, __Vtask_uvm_report_error__515__line, this->__Vtask_uvm_report_error__515__context_name, (IData)(__Vtask_uvm_report_error__515__report_enabled_checked));
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} != this->__PVT__phase_done)) {
        VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1846)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "raise"s);
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} != this->__PVT__phase_done)) {
        VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1859)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "drop"s);
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    get_objection_count__Vfuncrtn = 0U;
    if ((VlNull{} != this->__PVT__phase_done)) {
        VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 1869)->__VnoInFunc_get_objection_count(vlSymsp, obj, get_objection_count__Vfuncrtn);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, ""s, 0U, "get_objection_count"s);
        get_objection_count__Vfuncrtn = 0U;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__526__verbosity;
    __Vfunc_uvm_report_enabled__526__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__526__severity;
    __Vfunc_uvm_report_enabled__526__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__527__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__528__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__530__verbosity;
    __Vtask_uvm_report_fatal__530__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__530__line;
    __Vtask_uvm_report_fatal__530__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__530__report_enabled_checked;
    __Vtask_uvm_report_fatal__530__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__531__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__532__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__verbosity;
    __Vfunc_uvm_report_enabled__535__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__535__severity;
    __Vfunc_uvm_report_enabled__535__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__539__verbosity;
    __Vtask_uvm_report_fatal__539__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__539__line;
    __Vtask_uvm_report_fatal__539__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__539__report_enabled_checked;
    __Vtask_uvm_report_fatal__539__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__540__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__541__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__546__verbosity;
    __Vfunc_uvm_report_enabled__546__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__546__severity;
    __Vfunc_uvm_report_enabled__546__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__547__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__548__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__550__verbosity;
    __Vtask_uvm_report_fatal__550__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__550__line;
    __Vtask_uvm_report_fatal__550__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__550__report_enabled_checked;
    __Vtask_uvm_report_fatal__550__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__551__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__552__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__554__verbosity;
    __Vfunc_uvm_report_enabled__554__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__554__severity;
    __Vfunc_uvm_report_enabled__554__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__555__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__556__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__558__verbosity;
    __Vtask_uvm_report_fatal__558__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__558__line;
    __Vtask_uvm_report_fatal__558__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__558__report_enabled_checked;
    __Vtask_uvm_report_fatal__558__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__559__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__560__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__is_domain;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_domain;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk139__DOT__visited;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> unnamedblk139__DOT__queue;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk139__DOT__unnamedblk140__DOT__node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vmore;
    unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__from_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk142__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk142__DOT__found_to;
    VlQueue<IData/*31:0*/> unnamedblk142__DOT__found_from;
    {
        this->__VnoInFunc_is_domain(vlSymsp, __VlefCall_0__is_domain);
        if (__VlefCall_0__is_domain) {
            if ((VlNull{} == target)) {
                this->__Vfunc_uvm_report_enabled__526__id = "PH_BADSYNC"s;
                __Vfunc_uvm_report_enabled__526__severity = 3U;
                __Vfunc_uvm_report_enabled__526__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__527__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__527__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__528__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__528__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__526__verbosity, (IData)(__Vfunc_uvm_report_enabled__526__severity), this->__Vfunc_uvm_report_enabled__526__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__530__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__530__context_name = ""s;
                    __Vtask_uvm_report_fatal__530__line = 0x0000075eU;
                    this->__Vtask_uvm_report_fatal__530__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_fatal__530__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__530__message = "sync() called with a null target domain"s;
                    this->__Vtask_uvm_report_fatal__530__id = "PH_BADSYNC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__531__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__531__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__532__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__532__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__530__id, this->__Vtask_uvm_report_fatal__530__message, __Vtask_uvm_report_fatal__530__verbosity, this->__Vtask_uvm_report_fatal__530__filename, __Vtask_uvm_report_fatal__530__line, this->__Vtask_uvm_report_fatal__530__context_name, (IData)(__Vtask_uvm_report_fatal__530__report_enabled_checked));
                }
            } else {
                VL_NULL_CHECK(target, "../../uvm/distrib/src/base/uvm_phase.svh", 1888)->__VnoInFunc_is_domain(vlSymsp, __VlefCall_2__is_domain);
                if (__VlefCall_2__is_domain) {
                    if (((VlNull{} == phase) & (VlNull{} 
                                                != with_phase))) {
                        this->__Vfunc_uvm_report_enabled__535__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__535__severity = 3U;
                        __Vfunc_uvm_report_enabled__535__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__536__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__536__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__537__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__535__verbosity, (IData)(__Vfunc_uvm_report_enabled__535__severity), this->__Vfunc_uvm_report_enabled__535__id, __VlefCall_3__uvm_report_enabled);
                        if ((0U != __VlefCall_3__uvm_report_enabled)) {
                            __Vtask_uvm_report_fatal__539__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_fatal__539__context_name = ""s;
                            __Vtask_uvm_report_fatal__539__line = 0x00000764U;
                            this->__Vtask_uvm_report_fatal__539__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_fatal__539__verbosity = 0U;
                            this->__Vtask_uvm_report_fatal__539__message = "sync() called with null phase and non-null with phase"s;
                            this->__Vtask_uvm_report_fatal__539__id = "PH_BADSYNC"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__540__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                = __Vfunc_get__540__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__541__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                = __Vtask_get_root__541__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__539__id, this->__Vtask_uvm_report_fatal__539__message, __Vtask_uvm_report_fatal__539__verbosity, this->__Vtask_uvm_report_fatal__539__filename, __Vtask_uvm_report_fatal__539__line, this->__Vtask_uvm_report_fatal__539__context_name, (IData)(__Vtask_uvm_report_fatal__539__report_enabled_checked));
                        }
                    } else if ((VlNull{} == phase)) {
                        unnamedblk139__DOT__visited.clear();
                        unnamedblk139__DOT__visited.atDefault() = 0;
                        unnamedblk139__DOT__queue.clear();
                        unnamedblk139__DOT__queue.push_back(
                                                            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
                        unnamedblk139__DOT__visited.at(
                                                       VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                        while ((0U != unnamedblk139__DOT__queue.size())) {
                            unnamedblk139__DOT__unnamedblk140__DOT__node 
                                = unnamedblk139__DOT__queue.pop_front();
                            if ((VlNull{} != VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1903)
                                 ->__PVT__m_imp)) {
                                this->__VnoInFunc_sync(vlSymsp, target, VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1904)
                                                       ->__PVT__m_imp, VlNull{});
                            }
                            unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vmore 
                                = (0U != VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1906)
                                   ->__PVT__m_successors.first(unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vnext));
                            while (unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vmore) {
                                unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ 
                                    = unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vnext;
                                unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vmore 
                                    = (0U != VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1906)
                                       ->__PVT__m_successors.next(unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ__Vnext));
                                if ((! unnamedblk139__DOT__visited.exists(unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ))) {
                                    unnamedblk139__DOT__queue.push_back(unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ);
                                    unnamedblk139__DOT__visited.at(unnamedblk139__DOT__unnamedblk140__DOT__unnamedblk141__DOT__succ) = 1U;
                                }
                            }
                        }
                    } else {
                        unnamedblk142__DOT__found_to.clear();
                        unnamedblk142__DOT__found_to.atDefault() = 0;
                        unnamedblk142__DOT__found_from.clear();
                        unnamedblk142__DOT__found_from.atDefault() = 0;
                        if ((VlNull{} == with_phase)) {
                            with_phase = phase;
                        }
                        this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, unnamedblk142__DOT__from_node);
                        VL_NULL_CHECK(target, "../../uvm/distrib/src/base/uvm_phase.svh", 1920)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, unnamedblk142__DOT__to_node);
                        if (((VlNull{} == unnamedblk142__DOT__from_node) 
                             | (VlNull{} == unnamedblk142__DOT__to_node))) {
                            goto __Vlabel0;
                        }
                        unnamedblk142__DOT__found_to 
                            = VL_NULL_CHECK(unnamedblk142__DOT__from_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1922)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk142__DOT__to_node));
                            }
                        );
                        unnamedblk142__DOT__found_from 
                            = VL_NULL_CHECK(unnamedblk142__DOT__to_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1923)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk142__DOT__from_node));
                            }
                        );
                        if ((0U == unnamedblk142__DOT__found_to.size())) {
                            VL_NULL_CHECK(unnamedblk142__DOT__from_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1924)->__PVT__m_sync.push_back(unnamedblk142__DOT__to_node);
                        }
                        if ((0U == unnamedblk142__DOT__found_from.size())) {
                            VL_NULL_CHECK(unnamedblk142__DOT__to_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1925)->__PVT__m_sync.push_back(unnamedblk142__DOT__from_node);
                        }
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__546__id = "PH_BADSYNC"s;
                    __Vfunc_uvm_report_enabled__546__severity = 3U;
                    __Vfunc_uvm_report_enabled__546__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__547__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__547__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__548__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__548__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__546__verbosity, (IData)(__Vfunc_uvm_report_enabled__546__severity), this->__Vfunc_uvm_report_enabled__546__id, __VlefCall_4__uvm_report_enabled);
                    if ((0U != __VlefCall_4__uvm_report_enabled)) {
                        __Vtask_uvm_report_fatal__550__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_fatal__550__context_name = ""s;
                        __Vtask_uvm_report_fatal__550__line = 0x00000761U;
                        this->__Vtask_uvm_report_fatal__550__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_fatal__550__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__550__message = "sync() called with a non-domain phase schedule node as target"s;
                        this->__Vtask_uvm_report_fatal__550__id = "PH_BADSYNC"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__551__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__551__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__552__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__552__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__550__id, this->__Vtask_uvm_report_fatal__550__message, __Vtask_uvm_report_fatal__550__verbosity, this->__Vtask_uvm_report_fatal__550__filename, __Vtask_uvm_report_fatal__550__line, this->__Vtask_uvm_report_fatal__550__context_name, (IData)(__Vtask_uvm_report_fatal__550__report_enabled_checked));
                    }
                }
            }
        } else {
            this->__Vfunc_uvm_report_enabled__554__id = "PH_BADSYNC"s;
            __Vfunc_uvm_report_enabled__554__severity = 3U;
            __Vfunc_uvm_report_enabled__554__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__555__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__555__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__556__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__556__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__554__verbosity, (IData)(__Vfunc_uvm_report_enabled__554__severity), this->__Vfunc_uvm_report_enabled__554__id, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__558__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__558__context_name = ""s;
                __Vtask_uvm_report_fatal__558__line = 0x0000075bU;
                this->__Vtask_uvm_report_fatal__558__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__558__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__558__message = "sync() called from a non-domain phase schedule node"s;
                this->__Vtask_uvm_report_fatal__558__id = "PH_BADSYNC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__559__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__559__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__560__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__560__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__558__id, this->__Vtask_uvm_report_fatal__558__message, __Vtask_uvm_report_fatal__558__verbosity, this->__Vtask_uvm_report_fatal__558__filename, __Vtask_uvm_report_fatal__558__line, this->__Vtask_uvm_report_fatal__558__context_name, (IData)(__Vtask_uvm_report_fatal__558__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__563__verbosity;
    __Vfunc_uvm_report_enabled__563__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__563__severity;
    __Vfunc_uvm_report_enabled__563__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__564__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__565__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__567__verbosity;
    __Vtask_uvm_report_fatal__567__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__567__line;
    __Vtask_uvm_report_fatal__567__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__567__report_enabled_checked;
    __Vtask_uvm_report_fatal__567__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__568__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__569__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__572__verbosity;
    __Vfunc_uvm_report_enabled__572__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__572__severity;
    __Vfunc_uvm_report_enabled__572__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__573__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__574__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__576__verbosity;
    __Vtask_uvm_report_fatal__576__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__576__line;
    __Vtask_uvm_report_fatal__576__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__576__report_enabled_checked;
    __Vtask_uvm_report_fatal__576__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__577__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__578__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__583__verbosity;
    __Vfunc_uvm_report_enabled__583__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__583__severity;
    __Vfunc_uvm_report_enabled__583__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__584__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__585__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__587__verbosity;
    __Vtask_uvm_report_fatal__587__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__587__line;
    __Vtask_uvm_report_fatal__587__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__587__report_enabled_checked;
    __Vtask_uvm_report_fatal__587__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__588__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__589__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__591__verbosity;
    __Vfunc_uvm_report_enabled__591__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__591__severity;
    __Vfunc_uvm_report_enabled__591__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__592__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__593__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__595__verbosity;
    __Vtask_uvm_report_fatal__595__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__595__line;
    __Vtask_uvm_report_fatal__595__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__595__report_enabled_checked;
    __Vtask_uvm_report_fatal__595__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__596__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__597__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__is_domain;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__is_domain;
    VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk143__DOT__visited;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>> unnamedblk143__DOT__queue;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk143__DOT__unnamedblk144__DOT__node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vnext;
    CData/*0:0*/ unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vmore;
    unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vmore = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk146__DOT__from_node;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk146__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk146__DOT__found_to;
    VlQueue<IData/*31:0*/> unnamedblk146__DOT__found_from;
    {
        this->__VnoInFunc_is_domain(vlSymsp, __VlefCall_0__is_domain);
        if (__VlefCall_0__is_domain) {
            if ((VlNull{} == target)) {
                this->__Vfunc_uvm_report_enabled__563__id = "PH_BADSYNC"s;
                __Vfunc_uvm_report_enabled__563__severity = 3U;
                __Vfunc_uvm_report_enabled__563__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__564__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__564__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__565__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__565__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__563__verbosity, (IData)(__Vfunc_uvm_report_enabled__563__severity), this->__Vfunc_uvm_report_enabled__563__id, __VlefCall_1__uvm_report_enabled);
                if ((0U != __VlefCall_1__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__567__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__567__context_name = ""s;
                    __Vtask_uvm_report_fatal__567__line = 0x00000793U;
                    this->__Vtask_uvm_report_fatal__567__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_fatal__567__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__567__message = "unsync() called with a null target domain"s;
                    this->__Vtask_uvm_report_fatal__567__id = "PH_BADSYNC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__568__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__568__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__569__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__569__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__567__id, this->__Vtask_uvm_report_fatal__567__message, __Vtask_uvm_report_fatal__567__verbosity, this->__Vtask_uvm_report_fatal__567__filename, __Vtask_uvm_report_fatal__567__line, this->__Vtask_uvm_report_fatal__567__context_name, (IData)(__Vtask_uvm_report_fatal__567__report_enabled_checked));
                }
            } else {
                VL_NULL_CHECK(target, "../../uvm/distrib/src/base/uvm_phase.svh", 1940)->__VnoInFunc_is_domain(vlSymsp, __VlefCall_2__is_domain);
                if (__VlefCall_2__is_domain) {
                    if (((VlNull{} == phase) & (VlNull{} 
                                                != with_phase))) {
                        this->__Vfunc_uvm_report_enabled__572__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__572__severity = 3U;
                        __Vfunc_uvm_report_enabled__572__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__573__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__573__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__574__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__574__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__572__verbosity, (IData)(__Vfunc_uvm_report_enabled__572__severity), this->__Vfunc_uvm_report_enabled__572__id, __VlefCall_3__uvm_report_enabled);
                        if ((0U != __VlefCall_3__uvm_report_enabled)) {
                            __Vtask_uvm_report_fatal__576__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_fatal__576__context_name = ""s;
                            __Vtask_uvm_report_fatal__576__line = 0x00000797U;
                            this->__Vtask_uvm_report_fatal__576__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_fatal__576__verbosity = 0U;
                            this->__Vtask_uvm_report_fatal__576__message = "unsync() called with null phase and non-null with phase"s;
                            this->__Vtask_uvm_report_fatal__576__id = "PH_BADSYNC"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__577__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                = __Vfunc_get__577__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__578__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                = __Vtask_get_root__578__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__576__id, this->__Vtask_uvm_report_fatal__576__message, __Vtask_uvm_report_fatal__576__verbosity, this->__Vtask_uvm_report_fatal__576__filename, __Vtask_uvm_report_fatal__576__line, this->__Vtask_uvm_report_fatal__576__context_name, (IData)(__Vtask_uvm_report_fatal__576__report_enabled_checked));
                        }
                    } else if ((VlNull{} == phase)) {
                        unnamedblk143__DOT__visited.clear();
                        unnamedblk143__DOT__visited.atDefault() = 0;
                        unnamedblk143__DOT__queue.clear();
                        unnamedblk143__DOT__queue.push_back(
                                                            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
                        unnamedblk143__DOT__visited.at(
                                                       VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                        while ((0U != unnamedblk143__DOT__queue.size())) {
                            unnamedblk143__DOT__unnamedblk144__DOT__node 
                                = unnamedblk143__DOT__queue.pop_front();
                            if ((VlNull{} != VL_NULL_CHECK(unnamedblk143__DOT__unnamedblk144__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1953)
                                 ->__PVT__m_imp)) {
                                this->__VnoInFunc_unsync(vlSymsp, target, VL_NULL_CHECK(unnamedblk143__DOT__unnamedblk144__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1953)
                                                         ->__PVT__m_imp, VlNull{});
                            }
                            unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vmore 
                                = (0U != VL_NULL_CHECK(unnamedblk143__DOT__unnamedblk144__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1954)
                                   ->__PVT__m_successors.first(unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vnext));
                            while (unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vmore) {
                                unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ 
                                    = unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vnext;
                                unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vmore 
                                    = (0U != VL_NULL_CHECK(unnamedblk143__DOT__unnamedblk144__DOT__node, "../../uvm/distrib/src/base/uvm_phase.svh", 1954)
                                       ->__PVT__m_successors.next(unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ__Vnext));
                                if ((! unnamedblk143__DOT__visited.exists(unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ))) {
                                    unnamedblk143__DOT__queue.push_back(unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ);
                                    unnamedblk143__DOT__visited.at(unnamedblk143__DOT__unnamedblk144__DOT__unnamedblk145__DOT__succ) = 1U;
                                }
                            }
                        }
                    } else {
                        unnamedblk146__DOT__found_to.clear();
                        unnamedblk146__DOT__found_to.atDefault() = 0;
                        unnamedblk146__DOT__found_from.clear();
                        unnamedblk146__DOT__found_from.atDefault() = 0;
                        if ((VlNull{} == with_phase)) {
                            with_phase = phase;
                        }
                        this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, unnamedblk146__DOT__from_node);
                        VL_NULL_CHECK(target, "../../uvm/distrib/src/base/uvm_phase.svh", 1968)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, unnamedblk146__DOT__to_node);
                        if (((VlNull{} == unnamedblk146__DOT__from_node) 
                             | (VlNull{} == unnamedblk146__DOT__to_node))) {
                            goto __Vlabel0;
                        }
                        unnamedblk146__DOT__found_to 
                            = VL_NULL_CHECK(unnamedblk146__DOT__from_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1970)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk146__DOT__to_node));
                            }
                        );
                        unnamedblk146__DOT__found_from 
                            = VL_NULL_CHECK(unnamedblk146__DOT__to_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1971)
                            ->__PVT__m_sync.find_index(
                                                       [&](
                                                           IData/*31:0*/ node__DOT__index, 
                                                           VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> node) -> 
                                                       CData/*31:0*/ {
                                return ((node == unnamedblk146__DOT__from_node));
                            }
                        );
                        if ((0U != unnamedblk146__DOT__found_to.size())) {
                            VL_NULL_CHECK(unnamedblk146__DOT__from_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1972)->__PVT__m_sync.erase(unnamedblk146__DOT__found_to.at(0U));
                        }
                        if ((0U != unnamedblk146__DOT__found_from.size())) {
                            VL_NULL_CHECK(unnamedblk146__DOT__to_node, "../../uvm/distrib/src/base/uvm_phase.svh", 1973)->__PVT__m_sync.erase(unnamedblk146__DOT__found_from.at(0U));
                        }
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__583__id = "PH_BADSYNC"s;
                    __Vfunc_uvm_report_enabled__583__severity = 3U;
                    __Vfunc_uvm_report_enabled__583__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__584__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__584__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__585__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__585__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__583__verbosity, (IData)(__Vfunc_uvm_report_enabled__583__severity), this->__Vfunc_uvm_report_enabled__583__id, __VlefCall_4__uvm_report_enabled);
                    if ((0U != __VlefCall_4__uvm_report_enabled)) {
                        __Vtask_uvm_report_fatal__587__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_fatal__587__context_name = ""s;
                        __Vtask_uvm_report_fatal__587__line = 0x00000795U;
                        this->__Vtask_uvm_report_fatal__587__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_fatal__587__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__587__message = "unsync() called with a non-domain phase schedule node as target"s;
                        this->__Vtask_uvm_report_fatal__587__id = "PH_BADSYNC"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__588__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__588__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__589__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__589__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__587__id, this->__Vtask_uvm_report_fatal__587__message, __Vtask_uvm_report_fatal__587__verbosity, this->__Vtask_uvm_report_fatal__587__filename, __Vtask_uvm_report_fatal__587__line, this->__Vtask_uvm_report_fatal__587__context_name, (IData)(__Vtask_uvm_report_fatal__587__report_enabled_checked));
                    }
                }
            }
        } else {
            this->__Vfunc_uvm_report_enabled__591__id = "PH_BADSYNC"s;
            __Vfunc_uvm_report_enabled__591__severity = 3U;
            __Vfunc_uvm_report_enabled__591__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__592__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__592__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__593__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__593__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__591__verbosity, (IData)(__Vfunc_uvm_report_enabled__591__severity), this->__Vfunc_uvm_report_enabled__591__id, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                __Vtask_uvm_report_fatal__595__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_fatal__595__context_name = ""s;
                __Vtask_uvm_report_fatal__595__line = 0x00000791U;
                this->__Vtask_uvm_report_fatal__595__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_fatal__595__verbosity = 0U;
                this->__Vtask_uvm_report_fatal__595__message = "unsync() called from a non-domain phase schedule node"s;
                this->__Vtask_uvm_report_fatal__595__id = "PH_BADSYNC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__596__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                    = __Vfunc_get__596__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__597__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                    = __Vtask_get_root__597__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__595__id, this->__Vtask_uvm_report_fatal__595__message, __Vtask_uvm_report_fatal__595__verbosity, this->__Vtask_uvm_report_fatal__595__filename, __Vtask_uvm_report_fatal__595__line, this->__Vtask_uvm_report_fatal__595__context_name, (IData)(__Vtask_uvm_report_fatal__595__report_enabled_checked));
            }
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he2e5dbc0__0;
    __Vtrigprevexpr_he2e5dbc0__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_he2f74c3e__0;
    __Vtrigprevexpr_he2f74c3e__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_he21c281a__0;
    __Vtrigprevexpr_he21c281a__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_he24b987b__0;
    __Vtrigprevexpr_he24b987b__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h1e7d6003__0;
    __Vtrigprevexpr_h1e7d6003__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h1e94882c__0;
    __Vtrigprevexpr_h1e94882c__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((3U == op)) {
        if ((0U == (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_h24dac58a__0;
            __VdynTrigger_h24dac58a__0 = 0;
            __VdynTrigger_h24dac58a__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h24dac58a__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1983);
                __Vtrigprevexpr_h1e94882c__0 = (0U 
                                                != 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_h24dac58a__0 = __Vtrigprevexpr_h1e94882c__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24dac58a__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1983);
        }
    } else if ((2U == op)) {
        if ((0U != (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_h28819cb1__0;
            __VdynTrigger_h28819cb1__0 = 0;
            __VdynTrigger_h28819cb1__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h28819cb1__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1984);
                __Vtrigprevexpr_h1e7d6003__0 = (0U 
                                                == 
                                                (state 
                                                 & this->__PVT__m_state));
                __VdynTrigger_h28819cb1__0 = __Vtrigprevexpr_h1e7d6003__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h28819cb1__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1984);
        }
    } else if ((0U == op)) {
        if (VL_GTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_he433d519__0;
            __VdynTrigger_he433d519__0 = 0;
            __VdynTrigger_he433d519__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he433d519__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1985);
                __Vtrigprevexpr_he24b987b__0 = VL_LTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_he433d519__0 = __Vtrigprevexpr_he24b987b__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he433d519__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1985);
        }
    } else if ((1U == op)) {
        if (VL_GTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_he4636588__0;
            __VdynTrigger_he4636588__0 = 0;
            __VdynTrigger_he4636588__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he4636588__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1986);
                __Vtrigprevexpr_he21c281a__0 = VL_LTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_he4636588__0 = __Vtrigprevexpr_he21c281a__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he4636588__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1986);
        }
    } else if ((4U == op)) {
        if (VL_LTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_he0f780e4__0;
            __VdynTrigger_he0f780e4__0 = 0;
            __VdynTrigger_he0f780e4__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he0f780e4__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1987);
                __Vtrigprevexpr_he2f74c3e__0 = VL_GTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_he0f780e4__0 = __Vtrigprevexpr_he2f74c3e__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he0f780e4__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1987);
        }
    } else if ((5U == op)) {
        if (VL_LTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_he1091066__0;
            __VdynTrigger_he1091066__0 = 0;
            __VdynTrigger_he1091066__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he1091066__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                             "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                             1988);
                __Vtrigprevexpr_he2e5dbc0__0 = VL_GTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_he1091066__0 = __Vtrigprevexpr_he2e5dbc0__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he1091066__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                         "../../uvm/distrib/src/base/uvm_phase.svh", 
                                                         1988);
        }
    }
    co_return;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__599__verbosity;
    __Vfunc_uvm_report_enabled__599__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__599__severity;
    __Vfunc_uvm_report_enabled__599__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__600__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__601__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__604__verbosity;
    __Vtask_uvm_report_error__604__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__604__line;
    __Vtask_uvm_report_error__604__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__604__report_enabled_checked;
    __Vtask_uvm_report_error__604__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__605__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__606__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__612__verbosity;
    __Vfunc_uvm_report_enabled__612__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__612__severity;
    __Vfunc_uvm_report_enabled__612__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__613__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__614__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__616__verbosity;
    __Vtask_uvm_report_fatal__616__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__616__line;
    __Vtask_uvm_report_fatal__616__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__616__report_enabled_checked;
    __Vtask_uvm_report_fatal__616__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__617__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__618__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__620__verbosity;
    __Vfunc_uvm_report_enabled__620__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__620__severity;
    __Vfunc_uvm_report_enabled__620__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__621__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__622__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__625__verbosity;
    __Vtask_uvm_report_info__625__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__625__line;
    __Vtask_uvm_report_info__625__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__625__report_enabled_checked;
    __Vtask_uvm_report_info__625__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__626__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__627__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__629__verbosity;
    __Vfunc_uvm_report_enabled__629__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__629__severity;
    __Vfunc_uvm_report_enabled__629__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__630__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__631__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__634__verbosity;
    __Vtask_uvm_report_info__634__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__634__line;
    __Vtask_uvm_report_info__634__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__634__report_enabled_checked;
    __Vtask_uvm_report_info__634__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__635__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__636__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_name;
    std::string __VlefCall_3__get_name;
    std::string __VlefExpr_2;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string unnamedblk147__DOT__msg;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> d;
    if ((VL_GTS_III(32, 8U, this->__PVT__m_state) | 
         VL_LTS_III(32, 0x00000040U, this->__PVT__m_state))) {
        this->__Vfunc_uvm_report_enabled__599__id = "JMPPHIDL"s;
        __Vfunc_uvm_report_enabled__599__severity = 2U;
        __Vfunc_uvm_report_enabled__599__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__600__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__600__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__601__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__601__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__599__verbosity, (IData)(__Vfunc_uvm_report_enabled__599__severity), this->__Vfunc_uvm_report_enabled__599__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __VlefExpr_2 = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN("Attempting to jump from phase \""s, __VlefCall_1__get_name), "\" which is not currently active (current state is "s), Vhello_uvm_v1___024unit::__Venumtab_enum_name37
                                                         .at(this->__PVT__m_state));
                __Vtask_uvm_report_error__604__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__604__context_name = ""s;
                __Vtask_uvm_report_error__604__line = 0x000007dbU;
                this->__Vtask_uvm_report_error__604__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_error__604__verbosity = 0U;
                this->__Vtask_uvm_report_error__604__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(__VlefExpr_2, "). The jump will not happen until the phase becomes "s), "active."s));
                this->__Vtask_uvm_report_error__604__id = "JMPPHIDL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__605__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__605__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__606__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__606__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__604__id, this->__Vtask_uvm_report_error__604__message, __Vtask_uvm_report_error__604__verbosity, this->__Vtask_uvm_report_error__604__filename, __Vtask_uvm_report_error__604__line, this->__Vtask_uvm_report_error__604__context_name, (IData)(__Vtask_uvm_report_error__604__report_enabled_checked));
            }
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
        if ((VlNull{} == d)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, VlNull{}, d);
            if ((VlNull{} == d)) {
                unnamedblk147__DOT__msg = ""s;
                VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 2036)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                VL_SFORMAT_NX(unnamedblk147__DOT__msg
                              ,"phase %s is neither a predecessor or successor of phase %s or is non-existant, so we cannot jump to it.  Phase control flow is now undefined so the simulation must terminate"s,4, 'M',vlSymsp->name(),"uvm_pkg.uvm_phase.set_jump_phase.unnamedblk147", 'T',-12
                              , 'S',&(__VlefCall_3__get_name)
                              , 'S',&(__VlefCall_4__get_name));
                this->__Vfunc_uvm_report_enabled__612__id = "PH_BADJUMP"s;
                __Vfunc_uvm_report_enabled__612__severity = 3U;
                __Vfunc_uvm_report_enabled__612__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__613__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__613__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__614__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__614__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__612__verbosity, (IData)(__Vfunc_uvm_report_enabled__612__severity), this->__Vfunc_uvm_report_enabled__612__id, __VlefCall_5__uvm_report_enabled);
                if ((0U != __VlefCall_5__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__616__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__616__context_name = ""s;
                    __Vtask_uvm_report_fatal__616__line = 0x000007f5U;
                    this->__Vtask_uvm_report_fatal__616__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_fatal__616__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__616__message 
                        = unnamedblk147__DOT__msg;
                    this->__Vtask_uvm_report_fatal__616__id = "PH_BADJUMP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__617__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__617__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__618__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__618__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__616__id, this->__Vtask_uvm_report_fatal__616__message, __Vtask_uvm_report_fatal__616__verbosity, this->__Vtask_uvm_report_fatal__616__filename, __Vtask_uvm_report_fatal__616__line, this->__Vtask_uvm_report_fatal__616__context_name, (IData)(__Vtask_uvm_report_fatal__616__report_enabled_checked));
                }
            } else {
                this->__PVT__m_jump_fwd = 1U;
                this->__Vfunc_uvm_report_enabled__620__id = "PH_JUMPF"s;
                __Vfunc_uvm_report_enabled__620__severity = 0U;
                __Vfunc_uvm_report_enabled__620__verbosity = 0x000001f4U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__621__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__621__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__622__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__622__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__620__verbosity, (IData)(__Vfunc_uvm_report_enabled__620__severity), this->__Vfunc_uvm_report_enabled__620__id, __VlefCall_6__uvm_report_enabled);
                if ((0U != __VlefCall_6__uvm_report_enabled)) {
                    VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 2042)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                    __Vtask_uvm_report_info__625__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_info__625__context_name = ""s;
                    __Vtask_uvm_report_info__625__line = 0x000007faU;
                    this->__Vtask_uvm_report_info__625__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__625__verbosity = 0x000001f4U;
                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__625__message
                                  ,"jumping forward to phase %s",1
                                  , 'S',&(__VlefCall_7__get_name));
                    this->__Vtask_uvm_report_info__625__id = "PH_JUMPF"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__626__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__626__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__627__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__627__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__625__id, this->__Vtask_uvm_report_info__625__message, __Vtask_uvm_report_info__625__verbosity, this->__Vtask_uvm_report_info__625__filename, __Vtask_uvm_report_info__625__line, this->__Vtask_uvm_report_info__625__context_name, (IData)(__Vtask_uvm_report_info__625__report_enabled_checked));
                }
            }
        } else {
            this->__PVT__m_jump_bkwd = 1U;
            this->__Vfunc_uvm_report_enabled__629__id = "PH_JUMPB"s;
            __Vfunc_uvm_report_enabled__629__severity = 0U;
            __Vfunc_uvm_report_enabled__629__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__630__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__630__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__631__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__631__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__629__verbosity, (IData)(__Vfunc_uvm_report_enabled__629__severity), this->__Vfunc_uvm_report_enabled__629__id, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(phase, "../../uvm/distrib/src/base/uvm_phase.svh", 2048)
                ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                __Vtask_uvm_report_info__634__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__634__context_name = ""s;
                __Vtask_uvm_report_info__634__line = 0x00000800U;
                this->__Vtask_uvm_report_info__634__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__634__verbosity = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__634__message
                              ,"jumping backward to phase %s",1
                              , 'S',&(__VlefCall_9__get_name));
                this->__Vtask_uvm_report_info__634__id = "PH_JUMPB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__635__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__635__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__636__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__636__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__634__id, this->__Vtask_uvm_report_info__634__message, __Vtask_uvm_report_info__634__verbosity, this->__Vtask_uvm_report_info__634__filename, __Vtask_uvm_report_info__634__line, this->__Vtask_uvm_report_info__634__context_name, (IData)(__Vtask_uvm_report_info__634__report_enabled_checked));
            }
        }
        this->__PVT__m_jump_phase = d;
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely\n"); );
        // Body
        this->__PVT__m_premature_end = 1U;
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> phase) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump\n"); );
        // Body
        this->__VnoInFunc_set_jump_phase(vlSymsp, phase);
        {
            // Inlined CFunc: __VnoInFunc_end_prematurely
            this->__PVT__m_premature_end = 1U;
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target\n"); );
        // Body
        get_jump_target__Vfuncrtn = this->__PVT__m_jump_phase;
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        this->__PVT__m_state = state;
        this->__PVT__m_phase_proc = VlNull{};
        if ((VlNull{} != this->__PVT__phase_done)) {
            VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2099)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> end_state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors\n"); );
        // Body
        VlProcess::currentp(vlProcess.get());
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__succ;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__succ__Vnext;
        CData/*0:0*/ unnamedblk148__DOT__succ__Vmore;
        unnamedblk148__DOT__succ__Vmore = 0;
        {
            if ((VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this} 
                 == end_state)) {
                goto __Vlabel0;
            }
            this->__VnoInFunc_clear(vlProcess, vlSymsp, state);
            unnamedblk148__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk148__DOT__succ__Vnext));
            while (unnamedblk148__DOT__succ__Vmore) {
                unnamedblk148__DOT__succ = unnamedblk148__DOT__succ__Vnext;
                unnamedblk148__DOT__succ__Vmore = (0U 
                                                   != this->__PVT__m_successors.next(unnamedblk148__DOT__succ__Vnext));
                VL_NULL_CHECK(unnamedblk148__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 2115)
                ->__VnoInFunc_clear_successors(vlProcess, vlSymsp, state, end_state);
            }
            __Vlabel0: ;
        }
    }

    VlCoroutine Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop\n"); );
        // Locals
        VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__645__pred_of_succ;
        __Vtask_get_predecessors_for_successors__645__pred_of_succ.atDefault() = 0;
        // Body
        VlProcess::currentp(vlProcess.get());
        VL_KEEP_THIS;
        CData/*0:0*/ __VlefLogAnd_3;
        IData/*31:0*/ __VlefCall_2__get_objection_total;
        CData/*0:0*/ __VlefLogAnd_1;
        IData/*31:0*/ __VlefCall_0__get_objection_total;
        IData/*31:0*/ unnamedblk149__DOT__i;
        unnamedblk149__DOT__i = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__sib;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__sib__Vnext;
        CData/*0:0*/ unnamedblk150__DOT__sib__Vmore;
        unnamedblk150__DOT__sib__Vmore = 0;
        CData/*0:0*/ need_to_check_all;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
        VlAssocArray<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> siblings;
        need_to_check_all = 1U;
        siblings.clear();
        siblings.atDefault() = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_phase.svh", 2134)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__645__pred_of_succ);
        siblings = __Vtask_get_predecessors_for_successors__645__pred_of_succ;
        unnamedblk149__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk149__DOT__i, this->__PVT__m_sync.size())) {
            siblings.at(this->__PVT__m_sync.at(unnamedblk149__DOT__i)) = 1U;
            unnamedblk149__DOT__i = ((IData)(1U) + unnamedblk149__DOT__i);
        }
        while (need_to_check_all) {
            need_to_check_all = 0U;
            __VlefLogAnd_1 = (VlNull{} != this->__PVT__phase_done);
            if (__VlefLogAnd_1) {
                VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2145)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_0__get_objection_total);
                __VlefLogAnd_1 = (0U != __VlefCall_0__get_objection_total);
            }
            if (__VlefLogAnd_1) {
                this->__PVT__m_state = 0x00000010U;
                co_await VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2147)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                need_to_check_all = 1U;
            }
            unnamedblk150__DOT__sib__Vmore = (0U != siblings.first(unnamedblk150__DOT__sib__Vnext));
            while (unnamedblk150__DOT__sib__Vmore) {
                unnamedblk150__DOT__sib = unnamedblk150__DOT__sib__Vnext;
                unnamedblk150__DOT__sib__Vmore = (0U 
                                                  != siblings.next(unnamedblk150__DOT__sib__Vnext));
                co_await VL_NULL_CHECK(unnamedblk150__DOT__sib, "../../uvm/distrib/src/base/uvm_phase.svh", 2153)
                ->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000010U, 5U);
                __VlefLogAnd_3 = (VlNull{} != VL_NULL_CHECK(unnamedblk150__DOT__sib, "../../uvm/distrib/src/base/uvm_phase.svh", 2154)
                                  ->__PVT__phase_done);
                if (__VlefLogAnd_3) {
                    VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk150__DOT__sib, "../../uvm/distrib/src/base/uvm_phase.svh", 2154)
                                  ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2154)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_2__get_objection_total);
                    __VlefLogAnd_3 = (0U != __VlefCall_2__get_objection_total);
                }
                if (__VlefLogAnd_3) {
                    this->__PVT__m_state = 0x00000010U;
                    co_await VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk150__DOT__sib, "../../uvm/distrib/src/base/uvm_phase.svh", 2156)
                                           ->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2156)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                    need_to_check_all = 1U;
                }
            }
        }
        co_return;
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__651__verbosity;
        __Vfunc_uvm_report_enabled__651__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__651__severity;
        __Vfunc_uvm_report_enabled__651__severity = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__652__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__653__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__656__verbosity;
        __Vtask_uvm_report_info__656__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__656__line;
        __Vtask_uvm_report_info__656__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__656__report_enabled_checked;
        __Vtask_uvm_report_info__656__report_enabled_checked = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__657__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__658__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        this->__Vfunc_uvm_report_enabled__651__id = "PH_KILL"s;
        __Vfunc_uvm_report_enabled__651__severity = 0U;
        __Vfunc_uvm_report_enabled__651__verbosity = 0x000001f4U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__652__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__652__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__653__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__653__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__651__verbosity, (IData)(__Vfunc_uvm_report_enabled__651__severity), this->__Vfunc_uvm_report_enabled__651__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_info__656__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__656__context_name = ""s;
            __Vtask_uvm_report_info__656__line = 0x00000878U;
            this->__Vtask_uvm_report_info__656__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__656__verbosity = 0x000001f4U;
            this->__Vtask_uvm_report_info__656__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("killing phase '"s, __VlefCall_1__get_name), "'"s));
            this->__Vtask_uvm_report_info__656__id = "PH_KILL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__657__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__657__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__658__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__658__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__656__id, this->__Vtask_uvm_report_info__656__message, __Vtask_uvm_report_info__656__verbosity, this->__Vtask_uvm_report_info__656__filename, __Vtask_uvm_report_info__656__line, this->__Vtask_uvm_report_info__656__context_name, (IData)(__Vtask_uvm_report_info__656__report_enabled_checked));
        }
        if ((VlNull{} != this->__PVT__m_phase_proc)) {
            VL_NULL_CHECK(this->__PVT__m_phase_proc, "../../uvm/distrib/src/base/uvm_phase.svh", 2171)
                ->__VnoInFunc_kill(vlSymsp);
            this->__PVT__m_phase_proc = VlNull{};
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk151__DOT__succ;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase> unnamedblk151__DOT__succ__Vnext;
        CData/*0:0*/ unnamedblk151__DOT__succ__Vmore;
        unnamedblk151__DOT__succ__Vmore = 0;
        unnamedblk151__DOT__succ__Vmore = (0U != this->__PVT__m_successors.first(unnamedblk151__DOT__succ__Vnext));
        while (unnamedblk151__DOT__succ__Vmore) {
            unnamedblk151__DOT__succ = unnamedblk151__DOT__succ__Vnext;
            unnamedblk151__DOT__succ__Vmore = (0U != this->__PVT__m_successors.next(unnamedblk151__DOT__succ__Vnext));
            VL_NULL_CHECK(unnamedblk151__DOT__succ, "../../uvm/distrib/src/base/uvm_phase.svh", 2185)
                ->__VnoInFunc_kill_successors(vlSymsp);
        }
        {
            // Inlined CFunc: __VnoInFunc_kill
            IData/*31:0*/ __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__verbosity;
            __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__verbosity = 0;
            CData/*1:0*/ __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__severity;
            __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__severity = 0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vinline_0___VnoInFunc_kill___Vfunc_get__652__Vfuncout;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vinline_0___VnoInFunc_kill___Vtask_get_root__653__Vfuncout;
            IData/*31:0*/ __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__verbosity;
            __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__verbosity = 0;
            IData/*31:0*/ __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__line;
            __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__line = 0;
            CData/*0:0*/ __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__report_enabled_checked;
            __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__report_enabled_checked = 0;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vinline_0___VnoInFunc_kill___Vfunc_get__657__Vfuncout;
            VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vinline_0___VnoInFunc_kill___Vtask_get_root__658__Vfuncout;
            std::string __Vinline_0___VnoInFunc_kill___VlefCall_1__get_name;
            IData/*31:0*/ __Vinline_0___VnoInFunc_kill___VlefCall_0__uvm_report_enabled;
            this->__Vfunc_uvm_report_enabled__651__id = "PH_KILL"s;
            __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__severity = 0U;
            __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vinline_0___VnoInFunc_kill___Vfunc_get__652__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vinline_0___VnoInFunc_kill___Vfunc_get__652__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_kill___Vtask_get_root__653__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vinline_0___VnoInFunc_kill___Vtask_get_root__653__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__verbosity, __Vinline_0___VnoInFunc_kill___Vfunc_uvm_report_enabled__651__severity, this->__Vfunc_uvm_report_enabled__651__id, __Vinline_0___VnoInFunc_kill___VlefCall_0__uvm_report_enabled);
            if ((0U != __Vinline_0___VnoInFunc_kill___VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __Vinline_0___VnoInFunc_kill___VlefCall_1__get_name);
                __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__656__context_name = ""s;
                __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__line = 0x00000878U;
                this->__Vtask_uvm_report_info__656__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__verbosity = 0x000001f4U;
                this->__Vtask_uvm_report_info__656__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("killing phase '"s, __Vinline_0___VnoInFunc_kill___VlefCall_1__get_name), "'"s));
                this->__Vtask_uvm_report_info__656__id = "PH_KILL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vinline_0___VnoInFunc_kill___Vfunc_get__657__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vinline_0___VnoInFunc_kill___Vfunc_get__657__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_kill___Vtask_get_root__658__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vinline_0___VnoInFunc_kill___Vtask_get_root__658__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__656__id, this->__Vtask_uvm_report_info__656__message, __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__verbosity, this->__Vtask_uvm_report_info__656__filename, __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__line, this->__Vtask_uvm_report_info__656__context_name, __Vinline_0___VnoInFunc_kill___Vtask_uvm_report_info__656__report_enabled_checked);
            }
            if ((VlNull{} != this->__PVT__m_phase_proc)) {
                VL_NULL_CHECK(this->__PVT__m_phase_proc, "../../uvm/distrib/src/base/uvm_phase.svh", 2171)
                ->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_phase_proc = VlNull{};
            }
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase\n"); );
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        if ((VlNull{} != this->__PVT__phase_done)) {
            VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2226)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase>{this});
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__666__verbosity;
        __Vfunc_uvm_report_enabled__666__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__666__severity;
        __Vfunc_uvm_report_enabled__666__severity = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__667__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__668__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__672__verbosity;
        __Vtask_uvm_report_info__672__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__672__line;
        __Vtask_uvm_report_info__672__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__672__report_enabled_checked;
        __Vtask_uvm_report_info__672__report_enabled_checked = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__673__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__674__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__676__verbosity;
        __Vfunc_uvm_report_enabled__676__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__676__severity;
        __Vfunc_uvm_report_enabled__676__severity = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__677__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__678__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_info__681__verbosity;
        __Vtask_uvm_report_info__681__verbosity = 0;
        IData/*31:0*/ __Vtask_uvm_report_info__681__line;
        __Vtask_uvm_report_info__681__line = 0;
        CData/*0:0*/ __Vtask_uvm_report_info__681__report_enabled_checked;
        __Vtask_uvm_report_info__681__report_enabled_checked = 0;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__682__Vfuncout;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__683__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlProcess::currentp(vlProcess.get());
        std::string __VlefCall_4__get_name;
        IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
        IData/*31:0*/ __VlefCall_2__get_objection_total;
        std::string __VlefCall_1__get_name;
        IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> cs;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_phase.svh", 2237)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
        if ((VlNull{} != this->__PVT__phase_done)) {
            this->__Vfunc_uvm_report_enabled__666__id = "PH_TERMSTATE"s;
            __Vfunc_uvm_report_enabled__666__severity = 0U;
            __Vfunc_uvm_report_enabled__666__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__667__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__667__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__668__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__668__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__666__verbosity, (IData)(__Vfunc_uvm_report_enabled__666__severity), this->__Vfunc_uvm_report_enabled__666__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(this->__PVT__phase_done, "../../uvm/distrib/src/base/uvm_phase.svh", 2242)
                ->__VnoInFunc_get_objection_total(vlSymsp, top, __VlefCall_2__get_objection_total);
                __Vtask_uvm_report_info__672__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__672__context_name = ""s;
                __Vtask_uvm_report_info__672__line = 0x000008c2U;
                this->__Vtask_uvm_report_info__672__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__672__verbosity = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__672__message
                              ,"phase %s outstanding objections = %0d",2
                              , 'S',&(__VlefCall_1__get_name)
                              , '~',32,__VlefCall_2__get_objection_total);
                this->__Vtask_uvm_report_info__672__id = "PH_TERMSTATE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__673__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__673__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__674__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__674__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__672__id, this->__Vtask_uvm_report_info__672__message, __Vtask_uvm_report_info__672__verbosity, this->__Vtask_uvm_report_info__672__filename, __Vtask_uvm_report_info__672__line, this->__Vtask_uvm_report_info__672__context_name, (IData)(__Vtask_uvm_report_info__672__report_enabled_checked));
            }
        } else {
            this->__Vfunc_uvm_report_enabled__676__id = "PH_TERMSTATE"s;
            __Vfunc_uvm_report_enabled__676__severity = 0U;
            __Vfunc_uvm_report_enabled__676__verbosity = 0x000001f4U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__677__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__677__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__678__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__678__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__676__verbosity, (IData)(__Vfunc_uvm_report_enabled__676__severity), this->__Vfunc_uvm_report_enabled__676__id, __VlefCall_3__uvm_report_enabled);
            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
                __Vtask_uvm_report_info__681__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_info__681__context_name = ""s;
                __Vtask_uvm_report_info__681__line = 0x000008c8U;
                this->__Vtask_uvm_report_info__681__filename = "../../uvm/distrib/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__681__verbosity = 0x000001f4U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_info__681__message
                              ,"phase %s has no outstanding objections",1
                              , 'S',&(__VlefCall_4__get_name));
                this->__Vtask_uvm_report_info__681__id = "PH_TERMSTATE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__682__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__682__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__683__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__683__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__681__id, this->__Vtask_uvm_report_info__681__message, __Vtask_uvm_report_info__681__verbosity, this->__Vtask_uvm_report_info__681__filename, __Vtask_uvm_report_info__681__line, this->__Vtask_uvm_report_info__681__context_name, (IData)(__Vtask_uvm_report_info__681__report_enabled_checked));
            }
        }
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize\n"); );
        // Body
        IData/*31:0*/ __VlefCall_0____VBasicRand;
        Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & __VlefCall_0____VBasicRand);
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vsetup_constraints\n"); );
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::__VnoInFunc___VBasicRand\n"); );
        // Body
        __VBasicRand__Vfuncrtn = 1U;
    }

    void Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__m_phase_type = 0;
        __PVT__m_state = 0;
        __PVT__m_run_count = 0;
        __PVT__m_num_procs_not_yet_returned = 0;
        __PVT__m_predecessors.atDefault() = 0;
        __PVT__m_successors.atDefault() = 0;
        __PVT__m_ready_to_end_count = 0;
        __PVT__m_jump_bkwd = 0;
        __PVT__m_jump_fwd = 0;
        __PVT__m_premature_end = 0;
    }

    Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase() {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_phase::~\n"); );
    }
