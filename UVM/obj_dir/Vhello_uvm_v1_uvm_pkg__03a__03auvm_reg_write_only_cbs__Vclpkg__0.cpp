// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi33> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_me)) {
        this->__PVT__m_me = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s);
    }
    get__Vfuncrtn = this->__PVT__m_me;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add\n"); );
    // Body
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_1__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_0__get;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i__Vloopsize;
    unnamedblk3__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field>> flds;
    flds.clear();
    this->__VnoInFunc_get(vlSymsp, __VlefCall_0__get);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg.__VnoInFunc_add(vlSymsp, rg, __VlefCall_0__get, 0U);
    VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 502)->__VnoInFunc_get_fields(vlSymsp, flds);
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, flds.size())) {
        unnamedblk3__DOT__i__Vloopsize = flds.size();
        this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz69_TBz66__Vclpkg.__VnoInFunc_add(vlSymsp, flds.at(unnamedblk3__DOT__i), __VlefCall_1__get, 0U);
        if ((unnamedblk3__DOT__i__Vloopsize <= flds.size())) {
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__8__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_4__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_3__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_2__get_cb;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> __VlefCall_1__get;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs> __VlefCall_0__get_cb;
    IData/*31:0*/ unnamedblk4__DOT__i;
    unnamedblk4__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__i__Vloopsize;
    unnamedblk4__DOT__i__Vloopsize = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz65_TBz66> cbs;
    VlQueue<VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field>> flds;
    {
        cbs = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_callback_iter__Tz65_TBz66, vlSymsp, rg);
        flds.clear();
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 517)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__8__Vfuncout);
        while (true) {
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 518)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_0__get_cb);
            this->__VnoInFunc_get(vlSymsp, __VlefCall_1__get);
            if (!((__VlefCall_0__get_cb != __VlefCall_1__get))) break;
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 519)->__VnoInFunc_get_cb(vlSymsp, __VlefCall_2__get_cb);
            if ((VlNull{} == __VlefCall_2__get_cb)) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 521)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__12__Vfuncout);
        }
        this->__VnoInFunc_get(vlSymsp, __VlefCall_3__get);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz65_TBz66__Vclpkg.__VnoInFunc_delete(vlSymsp, rg, __VlefCall_3__get);
        VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 524)->__VnoInFunc_get_fields(vlSymsp, flds);
        unnamedblk4__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk4__DOT__i, flds.size())) {
            unnamedblk4__DOT__i__Vloopsize = flds.size();
            this->__VnoInFunc_get(vlSymsp, __VlefCall_4__get);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz69_TBz66__Vclpkg.__VnoInFunc_delete(vlSymsp, flds.at(unnamedblk4__DOT__i), __VlefCall_4__get);
            if ((unnamedblk4__DOT__i__Vloopsize <= flds.size())) {
                unnamedblk4__DOT__i = ((IData)(1U) 
                                       + unnamedblk4__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::init(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name) {
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_cbs::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type(Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object_registry__pi33> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s);
    } else {
        tmp = VL_NEW(Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name(Vhello_uvm_v1__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_write_only_cbs"s;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 461)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vhello_uvm_v1_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read(VlProcessRef vlProcess, Vhello_uvm_v1__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_field> unnamedblk2__DOT__fld;
    VlClassRef<Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg> unnamedblk2__DOT__rg;
    std::string name;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 468)
                      ->__PVT__element, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 468)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
        if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 470)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 473)
             ->__PVT__element_kind)) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 476)
                                           ->__PVT__element, unnamedblk2__DOT__fld);
            if (VL_UNLIKELY(((! __VlefExpr_0)))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_cbs.svh:476: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_reg_write_only_cbs.pre_read.unnamedblk2", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 476, "");
            }
            VL_NULL_CHECK(unnamedblk2__DOT__fld, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 477)->__VnoInFunc_get_parent(vlSymsp, unnamedblk2__DOT__rg);
            VL_NULL_CHECK(unnamedblk2__DOT__rg, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 478)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, name);
        }
        this->__Vfunc_uvm_report_enabled__9__id = "UVM/REG/WRTEONLY"s;
        __Vfunc_uvm_report_enabled__9__severity = 2U;
        __Vfunc_uvm_report_enabled__9__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__10__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__11__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), this->__Vfunc_uvm_report_enabled__9__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__13__context_name = ""s;
            __Vtask_uvm_report_error__13__line = 0x000001e2U;
            this->__Vtask_uvm_report_error__13__filename = "../../uvm/distrib/src/reg/uvm_reg_cbs.svh"s;
            __Vtask_uvm_report_error__13__verbosity = 0U;
            this->__Vtask_uvm_report_error__13__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, " is write-only. Cannot call read() method."s));
            this->__Vtask_uvm_report_error__13__id = "UVM/REG/WRTEONLY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__13__id, this->__Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, this->__Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, this->__Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_cbs.svh", 484)->__PVT__status = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vhello_uvm_v1_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vsetup_constraints(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___VBasicRand(Vhello_uvm_v1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset(Vhello_uvm_v1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::~Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_v1_uvm_pkg__03a__03auvm_reg_write_only_cbs::~\n"); );
}
