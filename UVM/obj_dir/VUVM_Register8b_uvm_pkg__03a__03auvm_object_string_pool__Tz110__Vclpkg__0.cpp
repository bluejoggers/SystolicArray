// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110__Vclpkg::__VnoInFunc_get_global_pool(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110, vlProcess, vlSymsp, "global_pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110__Vclpkg::__VnoInFunc_get_global(VUVM_Register8b__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, gpool);
    VL_NULL_CHECK(gpool, "../../uvm/distrib/src/base/uvm_pool.svh", 294)->__VnoInFunc_get(vlProcess, vlSymsp, key, get_global__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_get_type_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_get(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string key, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_get\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2> __VlefCall_0__new;
    if ((! VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.exists(key))) {
        __VlefCall_0__new = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_queue__Tz2, vlProcess, vlSymsp, key);
        VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.at(key) 
            = __VlefCall_0__new;
    }
    get__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool
        .at(key);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_delete(VUVM_Register8b__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__3__verbosity;
    __Vtask_uvm_report_warning__3__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__3__line;
    __Vtask_uvm_report_warning__3__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__3__report_enabled_checked;
    __Vtask_uvm_report_warning__3__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            __Vtask_uvm_report_warning__3__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__3__context_name = ""s;
            __Vtask_uvm_report_warning__3__line = 0U;
            this->__Vtask_uvm_report_warning__3__filename = ""s;
            __Vtask_uvm_report_warning__3__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__3__message
                          ,"delete: key '%s' doesn't exist",1
                          , 'S',&(key));
            this->__Vtask_uvm_report_warning__3__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__3__id, this->__Vtask_uvm_report_warning__3__message, __Vtask_uvm_report_warning__3__verbosity, this->__Vtask_uvm_report_warning__3__filename, __Vtask_uvm_report_warning__3__line, this->__Vtask_uvm_report_warning__3__context_name, (IData)(__Vtask_uvm_report_warning__3__report_enabled_checked));
            goto __Vlabel0;
        }
        VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string key;
    key = ""s;
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_pool.svh", 330)->__VnoInFunc_print_array_header(vlSymsp, "pool"s, VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.first(key));
    if (__VlefExpr_0) {
        do {
            VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_pool.svh", 333)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool
                                                                                .at(key), 0x5bU);
            __VlefExpr_1 = (0U != VUVM_Register8b_uvm_pkg__03a__03auvm_pool__Tz2_TBz110::__PVT__pool.next(key));
        } while (__VlefExpr_1);
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/base/uvm_pool.svh", 335)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::~VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VUVM_Register8b_uvm_pkg__03a__03auvm_object_string_pool__Tz110::~\n"); );
}
