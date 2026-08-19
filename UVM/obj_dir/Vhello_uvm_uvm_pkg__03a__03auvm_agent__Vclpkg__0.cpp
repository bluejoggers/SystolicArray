// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> parent) {
    Vhello_uvm_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__PVT__is_active = 1U;
    /*super.new*/;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase\n"); );
    // Locals
    CData/*0:0*/ __Vtask_from_name__14__Vfuncout;
    __Vtask_from_name__14__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_12__read;
    IData/*31:0*/ __VlefExpr_11;
    IData/*31:0*/ __VlefCall_10__read;
    IData/*31:0*/ __VlefExpr_9;
    IData/*31:0*/ __VlefCall_8__read;
    IData/*31:0*/ __VlefExpr_7;
    VlWide<128>/*4095:0*/ __VlefCall_6__read;
    IData/*31:0*/ __VlefExpr_5;
    QData/*63:0*/ __VlefCall_4__read;
    IData/*31:0*/ __VlefExpr_3;
    IData/*31:0*/ __VlefExpr_2;
    IData/*31:0*/ __VlefCall_1__size;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk1__DOT__i;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_base> unnamedblk1__DOT__unnamedblk2__DOT__rsrc;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz55> unnamedblk1__DOT__unnamedblk2__DOT__rap;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz53> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rit;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rbs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ri;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz54> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__riu;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz5> unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__rs;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> rq;
    Vhello_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    VL_NULL_CHECK(rp, "../../uvm/distrib/src/comps/uvm_agent.svh", 68)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "is_active"s, VlNull{}, 0U, rq);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
    unnamedblk1__DOT__i = 0U;
    unnamedblk1__DOT__i = 0U;
    {
        while (true) {
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/comps/uvm_agent.svh", 70)->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            if (!(VL_LTS_III(32, unnamedblk1__DOT__i, __VlefCall_1__size))) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/comps/uvm_agent.svh", 71)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk1__DOT__i, unnamedblk1__DOT__unnamedblk2__DOT__rsrc);
            __VlefExpr_2 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__rap);
            if (__VlefExpr_2) {
                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__rap, "../../uvm/distrib/src/comps/uvm_agent.svh", 75)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, this->__PVT__is_active);
                goto __Vlabel0;
            } else {
                __VlefExpr_3 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rit);
                if (__VlefExpr_3) {
                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__rit, "../../uvm/distrib/src/comps/uvm_agent.svh", 81)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_4__read);
                    this->__PVT__is_active = (1U & (IData)(__VlefCall_4__read));
                    goto __Vlabel0;
                } else {
                    __VlefExpr_5 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rbs);
                    if (__VlefExpr_5) {
                        VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__rbs, "../../uvm/distrib/src/comps/uvm_agent.svh", 87)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_6__read);
                        this->__PVT__is_active = (1U 
                                                  & __VlefCall_6__read[0U]);
                        goto __Vlabel0;
                    } else {
                        __VlefExpr_7 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ri);
                        if (__VlefExpr_7) {
                            VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ri, "../../uvm/distrib/src/comps/uvm_agent.svh", 93)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_8__read);
                            this->__PVT__is_active 
                                = (1U & __VlefCall_8__read);
                            goto __Vlabel0;
                        } else {
                            __VlefExpr_9 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__riu);
                            if (__VlefExpr_9) {
                                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__riu, "../../uvm/distrib/src/comps/uvm_agent.svh", 99)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_10__read);
                                this->__PVT__is_active 
                                    = (1U & __VlefCall_10__read);
                                goto __Vlabel0;
                            } else {
                                __VlefExpr_11 = VL_CAST_DYNAMIC(unnamedblk1__DOT__unnamedblk2__DOT__rsrc, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__rs);
                                if (__VlefExpr_11) {
                                    VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__rs, "../../uvm/distrib/src/comps/uvm_agent.svh", 105)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_agent>{this}, __VlefCall_12__read);
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg.__VnoInFunc_from_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_12__read), this->__PVT__is_active, __Vtask_from_name__14__Vfuncout);
                                    goto __Vlabel0;
                                }
                            }
                        }
                    }
                }
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_agent"s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_is_active__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_get_is_active\n"); );
    // Body
    get_is_active__Vfuncrtn = this->__PVT__is_active;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vhello_uvm_uvm_pkg__03a__03auvm_agent::~Vhello_uvm_uvm_pkg__03a__03auvm_agent() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_agent::~\n"); );
}
