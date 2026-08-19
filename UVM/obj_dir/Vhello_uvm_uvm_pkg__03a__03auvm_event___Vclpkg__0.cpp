// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_uvm_pkg__03a__03auvm_event_base::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_trigger_data(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_trigger_data\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, data);
    co_return;
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_ptrigger_data(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_wait_ptrigger_data\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_wait_ptrigger(vlSymsp);
    this->__VnoInFunc_get_trigger_data(vlSymsp, data);
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_trigger\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__pre_trigger;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_> unnamedblk1__DOT__unnamedblk2__DOT__tmp;
    IData/*31:0*/ unnamedblk3__DOT__i;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_> unnamedblk3__DOT__unnamedblk4__DOT__tmp;
    IData/*31:0*/ skip;
    skip = 0U;
    if ((0U != Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
            unnamedblk1__DOT__unnamedblk2__DOT__tmp 
                = Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.at(unnamedblk1__DOT__i);
            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__tmp, "../../uvm/distrib/src/base/uvm_event.svh", 306)->__VnoInFunc_pre_trigger(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_>{this}, data, __VlefCall_0__pre_trigger);
            skip = (skip + (IData)(__VlefCall_0__pre_trigger));
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
    }
    if ((0U == skip)) {
        vlSymsp->fireEvent(Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__m_event);
        if ((0U != Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
            unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__i, Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
                unnamedblk3__DOT__unnamedblk4__DOT__tmp 
                    = Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.at(unnamedblk3__DOT__i);
                VL_NULL_CHECK(unnamedblk3__DOT__unnamedblk4__DOT__tmp, "../../uvm/distrib/src/base/uvm_event.svh", 314)->__VnoInFunc_post_trigger(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_>{this}, data);
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        }
        Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__num_waiters = 0U;
        Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__on = 1U;
        Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__trigger_time 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__trigger_data = data;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_trigger_data(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_trigger_data\n"); );
    // Body
    get_trigger_data__Vfuncrtn = this->__PVT__trigger_data;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_event"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_add_callback(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_> cb, CData/*0:0*/ append) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_add_callback\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__7__report_enabled_checked;
    __Vtask_uvm_report_warning__7__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk5__DOT__i;
    {
        unnamedblk5__DOT__i = 0U;
        unnamedblk5__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk5__DOT__i, Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
            if ((cb == Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.at(unnamedblk5__DOT__i))) {
                __Vtask_uvm_report_warning__7__report_enabled_checked = 0U;
                this->__Vtask_uvm_report_warning__7__context_name = ""s;
                __Vtask_uvm_report_warning__7__line = 0U;
                this->__Vtask_uvm_report_warning__7__filename = ""s;
                __Vtask_uvm_report_warning__7__verbosity = 0U;
                this->__Vtask_uvm_report_warning__7__message = "add_callback: Callback already registered. Ignoring."s;
                this->__Vtask_uvm_report_warning__7__id = "CBRGED"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__7__id, this->__Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, this->__Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line, this->__Vtask_uvm_report_warning__7__context_name, (IData)(__Vtask_uvm_report_warning__7__report_enabled_checked));
                goto __Vlabel0;
            }
            unnamedblk5__DOT__i = ((IData)(1U) + unnamedblk5__DOT__i);
        }
        if (append) {
            Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.push_back(cb);
        } else {
            Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.push_front(cb);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_delete_callback(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_callback_> cb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_delete_callback\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__11__verbosity;
    __Vtask_uvm_report_warning__11__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__11__line;
    __Vtask_uvm_report_warning__11__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__11__report_enabled_checked;
    __Vtask_uvm_report_warning__11__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk6__DOT__i;
    {
        unnamedblk6__DOT__i = 0U;
        unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk6__DOT__i, Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.size())) {
            if ((cb == Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.at(unnamedblk6__DOT__i))) {
                Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__PVT__callbacks.erase(unnamedblk6__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk6__DOT__i = ((IData)(1U) + unnamedblk6__DOT__i);
        }
        __Vtask_uvm_report_warning__11__report_enabled_checked = 0U;
        this->__Vtask_uvm_report_warning__11__context_name = ""s;
        __Vtask_uvm_report_warning__11__line = 0U;
        this->__Vtask_uvm_report_warning__11__filename = ""s;
        __Vtask_uvm_report_warning__11__verbosity = 0U;
        this->__Vtask_uvm_report_warning__11__message = "delete_callback: Callback not found. Ignoring delete request."s;
        this->__Vtask_uvm_report_warning__11__id = "CBNTFD"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__12__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__11__id, this->__Vtask_uvm_report_warning__11__message, __Vtask_uvm_report_warning__11__verbosity, this->__Vtask_uvm_report_warning__11__filename, __Vtask_uvm_report_warning__11__line, this->__Vtask_uvm_report_warning__11__context_name, (IData)(__Vtask_uvm_report_warning__11__report_enabled_checked));
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_event.svh", 378)->__VnoInFunc_print_object(vlProcess, vlSymsp, "trigger_data"s, this->__PVT__trigger_data, 0x2eU);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> e;
    {
        Vhello_uvm_uvm_pkg__03a__03auvm_event_base::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, e);
        if (((! __VlefExpr_0) || (VlNull{} == e))) {
            goto __Vlabel0;
        }
        this->__PVT__trigger_data = VL_NULL_CHECK(e, "../../uvm/distrib/src/base/uvm_event.svh", 385)
            ->__PVT__trigger_data;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_event_> v;
    v = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, name);
    create__Vfuncrtn = v;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_event_::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_uvm_pkg__03a__03auvm_event_::~Vhello_uvm_uvm_pkg__03a__03auvm_event_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_event_::~\n"); );
}
