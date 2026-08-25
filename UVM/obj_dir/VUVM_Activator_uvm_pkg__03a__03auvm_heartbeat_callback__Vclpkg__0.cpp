// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> target) {
    VUVM_Activator_uvm_pkg__03a__03auvm_objection_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::new\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, this->__PVT__cs);
    /*super.new*/;
    if ((VlNull{} != target)) {
        this->__PVT__target = target;
    } else {
        VL_NULL_CHECK(this->__PVT__cs, "../../uvm/distrib/src/base/uvm_heartbeat.svh", 303)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
        this->__PVT__target = __Vtask_get_root__2__Vfuncout;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised\n"); );
    // Body
    IData/*31:0*/ __VlefExpr_0;
    if ((obj == this->__PVT__target)) {
        if ((! this->__PVT__cnt.exists(source_obj))) {
            this->__PVT__cnt.at(source_obj) = 0U;
        }
        __VlefExpr_0 = ((IData)(1U) + this->__PVT__cnt
                        .at(source_obj));
        this->__PVT__cnt.at(source_obj) = __VlefExpr_0;
        this->__PVT__last_trigger.at(source_obj) = 
            VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> obj, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped\n"); );
    // Body
    this->__VnoInFunc_raised(vlSymsp, objection, obj, source_obj, description, count);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__i__Vmore;
    unnamedblk1__DOT__i__Vmore = 0;
    unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__cnt.first(unnamedblk1__DOT__i__Vnext));
    while (unnamedblk1__DOT__i__Vmore) {
        unnamedblk1__DOT__i = unnamedblk1__DOT__i__Vnext;
        unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__cnt.next(unnamedblk1__DOT__i__Vnext));
        this->__PVT__cnt.at(unnamedblk1__DOT__i) = 0U;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__i__Vmore;
    unnamedblk2__DOT__i__Vmore = 0;
    objects_triggered__Vfuncrtn = 0U;
    unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__cnt.first(unnamedblk2__DOT__i__Vnext));
    while (unnamedblk2__DOT__i__Vmore) {
        unnamedblk2__DOT__i = unnamedblk2__DOT__i__Vnext;
        unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__cnt.next(unnamedblk2__DOT__i__Vnext));
        __VlefExpr_0 = (0U != this->__PVT__cnt.at(unnamedblk2__DOT__i));
        if (__VlefExpr_0) {
            objects_triggered__Vfuncrtn = ((IData)(1U) 
                                           + objects_triggered__Vfuncrtn);
        }
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__cnt.atDefault() = 0;
    __PVT__last_trigger.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 6832164394050517435ULL, 14228963972983550624ull);
}

VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::~VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_heartbeat_callback::~\n"); );
}
