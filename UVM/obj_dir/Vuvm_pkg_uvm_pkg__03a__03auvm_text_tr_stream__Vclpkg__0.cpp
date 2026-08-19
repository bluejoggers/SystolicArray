// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi17> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi17> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi17__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, "unnamed-uvm_text_tr_stream"s);
    } else {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_stream"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 517)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_tr_stream::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open\n"); );
    // Body
    IData/*31:0*/ __VlefCall_3__get_handle;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__open_db;
    IData/*31:0*/ __VlefExpr_0;
    __VlefExpr_0 = VL_CAST_DYNAMIC(db, this->__PVT__m_text_db);
    if (VL_UNLIKELY(((! __VlefExpr_0)))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_tr_stream.svh:537: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_text_tr_stream.do_open", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("../../uvm/distrib/src/base/uvm_tr_stream.svh", 537, "");
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 538)->__VnoInFunc_open_db(vlSymsp, __VlefCall_1__open_db);
    if (VL_UNLIKELY((__VlefCall_1__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_3__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 539)
                      ->__PVT__m_file,"  CREATE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-12
                      , '#',64,VL_TIME_UNITED_Q(1), 'S',&(__VlefCall_2__get_name)
                      , 'S',&(stream_type_name), 'S',&(scope)
                      , '~',32,__VlefCall_3__get_handle);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close\n"); );
    // Body
    IData/*31:0*/ __VlefCall_4__get_handle;
    std::string __VlefCall_3__get_scope;
    std::string __VlefCall_2__get_stream_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 551)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
        this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_3__get_scope);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 552)
                      ->__PVT__m_file,"  CLOSE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-12
                      , '#',64,VL_TIME_UNITED_Q(1), 'S',&(__VlefCall_1__get_name)
                      , 'S',&(__VlefCall_2__get_stream_type_name)
                      , 'S',&(__VlefCall_3__get_scope)
                      , '~',32,__VlefCall_4__get_handle);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free\n"); );
    // Body
    IData/*31:0*/ __VlefCall_4__get_handle;
    std::string __VlefCall_3__get_scope;
    std::string __VlefCall_2__get_stream_type_name;
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__open_db;
    VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 565)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
    if (VL_UNLIKELY((__VlefCall_0__open_db))) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        this->__VnoInFunc_get_stream_type_name(vlSymsp, __VlefCall_2__get_stream_type_name);
        this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_3__get_scope);
        this->__VnoInFunc_get_handle(vlSymsp, __VlefCall_4__get_handle);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 566)
                      ->__PVT__m_file,"  FREE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}\n",6, 'T',-12
                      , '#',64,VL_TIME_UNITED_Q(1), 'S',&(__VlefCall_1__get_name)
                      , 'S',&(__VlefCall_2__get_stream_type_name)
                      , 'S',&(__VlefCall_3__get_scope)
                      , '~',32,__VlefCall_4__get_handle);
    }
    this->__PVT__m_text_db = VlNull{};
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_text_recorder> __Vfunc_create__20__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__open_db;
    {
        VL_NULL_CHECK(this->__PVT__m_text_db, "../../uvm/distrib/src/base/uvm_tr_stream.svh", 584)->__VnoInFunc_open_db(vlSymsp, __VlefCall_0__open_db);
        if (__VlefCall_0__open_db) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi24__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, __Vfunc_create__20__Vfuncout);
            do_open_recorder__Vfuncrtn = __Vfunc_create__20__Vfuncout;
            goto __Vlabel0;
        }
        do_open_recorder__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::~Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_text_tr_stream::~\n"); );
}
