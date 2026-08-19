// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47__Vclpkg::__VnoInFunc_get_global_queue(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> &get_global_queue__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47__Vclpkg::__VnoInFunc_get_global_queue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_queue)) {
        this->__PVT__m_global_queue = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47, vlProcess, vlSymsp, "global_queue"s);
    }
    get_global_queue__Vfuncrtn = this->__PVT__m_global_queue;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47__Vclpkg::__VnoInFunc_get_global(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> gqueue;
    this->__VnoInFunc_get_global_queue(vlSymsp, gqueue);
    VL_NULL_CHECK(gqueue, "../../uvm/distrib/src/base/uvm_queue.svh", 75)->__VnoInFunc_get(vlProcess, vlSymsp, index, get_global__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_get(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__3__verbosity;
    __Vtask_uvm_report_warning__3__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__3__line;
    __Vtask_uvm_report_warning__3__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__3__report_enabled_checked;
    __Vtask_uvm_report_warning__3__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> default_value;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__3__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__3__context_name = ""s;
            __Vtask_uvm_report_warning__3__line = 0U;
            this->__Vtask_uvm_report_warning__3__filename = ""s;
            __Vtask_uvm_report_warning__3__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__3__message
                          ,"get: given index out of range for queue of size %0d. Ignoring get request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__3__id = "QUEUEGET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__3__id, this->__Vtask_uvm_report_warning__3__message, __Vtask_uvm_report_warning__3__verbosity, this->__Vtask_uvm_report_warning__3__filename, __Vtask_uvm_report_warning__3__line, this->__Vtask_uvm_report_warning__3__context_name, (IData)(__Vtask_uvm_report_warning__3__report_enabled_checked));
            get__Vfuncrtn = default_value;
            goto __Vlabel0;
        }
        get__Vfuncrtn = this->__PVT__queue.at(index);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_size(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_insert(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_insert\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__9__verbosity;
    __Vtask_uvm_report_warning__9__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__line;
    __Vtask_uvm_report_warning__9__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__9__report_enabled_checked;
    __Vtask_uvm_report_warning__9__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__9__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__9__context_name = ""s;
            __Vtask_uvm_report_warning__9__line = 0U;
            this->__Vtask_uvm_report_warning__9__filename = ""s;
            __Vtask_uvm_report_warning__9__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__9__message
                          ,"insert: given index out of range for queue of size %0d. Ignoring insert request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__9__id = "QUEUEINS"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__9__id, this->__Vtask_uvm_report_warning__9__message, __Vtask_uvm_report_warning__9__verbosity, this->__Vtask_uvm_report_warning__9__filename, __Vtask_uvm_report_warning__9__line, this->__Vtask_uvm_report_warning__9__context_name, (IData)(__Vtask_uvm_report_warning__9__report_enabled_checked));
            goto __Vlabel0;
        }
        this->__PVT__queue.insert(index, item);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_delete(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__15__report_enabled_checked;
    __Vtask_uvm_report_warning__15__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0xffffffffU, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__15__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__15__context_name = ""s;
            __Vtask_uvm_report_warning__15__line = 0U;
            this->__Vtask_uvm_report_warning__15__filename = ""s;
            __Vtask_uvm_report_warning__15__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__15__message
                          ,"delete: given index out of range for queue of size %0d. Ignoring delete request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__15__id = "QUEUEDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__15__id, this->__Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, this->__Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line, this->__Vtask_uvm_report_warning__15__context_name, (IData)(__Vtask_uvm_report_warning__15__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((0xffffffffU == index)) {
            this->__PVT__queue.clear();
        } else {
            this->__PVT__queue.erase(index);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_pop_front(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_pop_front\n"); );
    // Body
    pop_front__Vfuncrtn = this->__PVT__queue.pop_front();
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_pop_back(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_pop_back\n"); );
    // Body
    pop_back__Vfuncrtn = this->__PVT__queue.pop_back();
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_push_front(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_push_front\n"); );
    // Body
    this->__PVT__queue.push_front(item);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_push_back(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_push_back\n"); );
    // Body
    this->__PVT__queue.push_back(item);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> v;
    v = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47, vlProcess, vlSymsp, name);
    create__Vfuncrtn = v;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_queue"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47> p;
    {
        Vuvm_pkg_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefLogOr_1 = (VlNull{} == rhs);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, p);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            goto __Vlabel0;
        }
        this->__PVT__queue = VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_queue.svh", 191)
            ->__PVT__queue;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__queue);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%p",1, '!',&(__Vtemp_1));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::~Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz47::~\n"); );
}
