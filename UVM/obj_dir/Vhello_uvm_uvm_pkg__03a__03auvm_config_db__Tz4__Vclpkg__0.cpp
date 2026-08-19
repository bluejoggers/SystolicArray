// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ &value, CData/*0:0*/ &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> __Vfunc_get_highest_precedence__8__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__is_tracing;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> __VlefCall_2__get_type;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> r;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz29> rq;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        get__Vfuncrtn = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        if ((VlNull{} == cntxt)) {
            VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_config_db.svh", 101)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
            cntxt = __Vtask_get_root__2__Vfuncout;
        }
        if ((""s == inst_name)) {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 103)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
        } else {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 104)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            if ((""s != __VlefCall_0__get_full_name)) {
                VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 105)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz4__Vclpkg.__VnoInFunc_get_type(vlProcess, vlSymsp, __VlefCall_2__get_type);
        VL_NULL_CHECK(rp, "../../uvm/distrib/src/base/uvm_config_db.svh", 107)->__VnoInFunc_lookup_regex_names(vlProcess, vlSymsp, inst_name, field_name, __VlefCall_2__get_type, rq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource__Tz4__Vclpkg.__VnoInFunc_get_highest_precedence(vlProcess, vlSymsp, rq, __Vfunc_get_highest_precedence__8__Vfuncout);
        r = __Vfunc_get_highest_precedence__8__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_3__is_tracing);
        if (__VlefCall_3__is_tracing) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz4__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/GET"s, "Configuration"s, "read"s, inst_name, field_name, cntxt, r);
        }
        if ((VlNull{} == r)) {
            get__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_config_db.svh", 116)->__VnoInFunc_read(vlProcess, vlSymsp, cntxt, value);
        get__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlWide<128>/*4095:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_re_match__33____Vincrement1;
    __Vfunc_uvm_re_match__33____Vincrement1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_11__is_tracing;
    IData/*31:0*/ __VlefCall_10__uvm_re_match;
    std::string __VlefCall_9__uvm_glob_to_re;
    IData/*31:0*/ __VlefCall_8__size;
    IData/*31:0*/ __VlefCond_7;
    IData/*31:0*/ __VlefCall_6__get_depth;
    CData/*0:0*/ __VlefLogAnd_5;
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__exists;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz31> __VlefCall_2__new;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource_pool> unnamedblk1__DOT__rp;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03am_uvm_waiter> unnamedblk2__DOT__w;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_phase> curr_phase;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> r;
    CData/*0:0*/ exists;
    std::string lookup;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz31> pool;
    std::string rstate;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vhello_uvm_std__03a__03aprocess> p;
    exists = 0U;
    lookup = ""s;
    rstate = ""s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_config_db.svh", 169)->__VnoInFunc_get_randstate(vlSymsp, rstate);
    }
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_config_db.svh", 171)->__VnoInFunc_get_root(vlProcess, vlSymsp, top);
    curr_phase = VL_NULL_CHECK(top, "../../uvm/distrib/src/base/uvm_config_db.svh", 173)
        ->__PVT__m_current_phase;
    if ((VlNull{} == cntxt)) {
        cntxt = top;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 178)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
    } else {
        VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 179)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 180)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
        }
    }
    if ((! this->__PVT__m_rsc.exists(cntxt))) {
        __VlefCall_2__new = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_pool__Tz5_TBz31, vlProcess, vlSymsp, ""s);
        this->__PVT__m_rsc.at(cntxt) = __VlefCall_2__new;
    }
    pool = this->__PVT__m_rsc.at(cntxt);
    lookup = VL_CONCATN_NNN(VL_CONCATN_NNN(inst_name, "__M_UVM__"s), field_name);
    VL_NULL_CHECK(pool, "../../uvm/distrib/src/base/uvm_config_db.svh", 193)->__VnoInFunc_exists(vlSymsp, lookup, __VlefCall_3__exists);
    if ((0U != __VlefCall_3__exists)) {
        VL_NULL_CHECK(pool, "../../uvm/distrib/src/base/uvm_config_db.svh", 198)->__VnoInFunc_get(vlSymsp, lookup, r);
        exists = 1U;
    } else {
        r = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4, vlProcess, vlSymsp, field_name, inst_name);
        VL_NULL_CHECK(pool, "../../uvm/distrib/src/base/uvm_config_db.svh", 195)->__VnoInFunc_add(vlSymsp, lookup, r);
    }
    __VlefLogAnd_5 = (VlNull{} != curr_phase);
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(curr_phase, "../../uvm/distrib/src/base/uvm_config_db.svh", 202)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
        __VlefLogAnd_5 = ("build"s == __VlefCall_4__get_name);
    }
    if (__VlefLogAnd_5) {
        VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 203)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_6__get_depth);
        __VlefCond_7 = ((IData)(0x000003e8U) - __VlefCall_6__get_depth);
    } else {
        __VlefCond_7 = 0x000003e8U;
    }
    VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_config_db.svh", 203)->__PVT__precedence 
        = __VlefCond_7;
    VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_config_db.svh", 207)->__VnoInFunc_write(vlProcess, vlSymsp, value, cntxt);
    if (exists) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__rp);
        VL_NULL_CHECK(unnamedblk1__DOT__rp, "../../uvm/distrib/src/base/uvm_config_db.svh", 211)->__VnoInFunc_set_priority_name(vlProcess, vlSymsp, r, 0U);
    } else {
        VL_NULL_CHECK(r, "../../uvm/distrib/src/base/uvm_config_db.svh", 215)->__VnoInFunc_set_override(vlProcess, vlSymsp, 3U);
    }
    if (this->__PVT__m_waiters.exists(field_name)) {
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 221)->__VnoInFunc_size(vlSymsp, __VlefCall_8__size);
            if (!(VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, __VlefCall_8__size))) break;
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 222)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk2__DOT__unnamedblk3__DOT__i, unnamedblk2__DOT__w);
            this->__Vfunc_uvm_glob_to_re__32__glob 
                = inst_name;
            __VlefCall_9__uvm_glob_to_re = this->__Vfunc_uvm_glob_to_re__32__glob;
            this->__Vfunc_uvm_re_match__33__str = VL_CVT_PACK_STR_NN(VL_NULL_CHECK(unnamedblk2__DOT__w, "../../uvm/distrib/src/base/uvm_config_db.svh", 223)
                                                                     ->__PVT__inst_name);
            this->__Vfunc_uvm_re_match__33__re = VL_CVT_PACK_STR_NN(__VlefCall_9__uvm_glob_to_re);
            __Vfunc_uvm_re_match__33____Vincrement1 = 0U;
            {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                if ((0U == VL_LEN_IN(this->__Vfunc_uvm_re_match__33__re))) {
                    __VlefCall_10__uvm_re_match = 0U;
                    goto __Vlabel0;
                }
                if ((0x5eU == VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,0U))) {
                    this->__Vfunc_uvm_re_match__33__re 
                        = VL_SUBSTR_N(this->__Vfunc_uvm_re_match__33__re,1U,
                                      (VL_LEN_IN(this->__Vfunc_uvm_re_match__33__re) 
                                       - (IData)(1U)));
                }
                while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                         != VL_LEN_IN(this->__Vfunc_uvm_re_match__33__str)) 
                        & (0x2aU != VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    if (((VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                          != VL_GETC_N(this->__Vfunc_uvm_re_match__33__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                         & (0x3fU != VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        __VlefCall_10__uvm_re_match = 1U;
                        goto __Vlabel0;
                    }
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                }
                while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                        != VL_LEN_IN(this->__Vfunc_uvm_re_match__33__str))) {
                    if ((0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                             == VL_LEN_IN(this->__Vfunc_uvm_re_match__33__re))) {
                            __VlefCall_10__uvm_re_match = 0U;
                            goto __Vlabel0;
                        }
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else if (((VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                 == VL_GETC_N(this->__Vfunc_uvm_re_match__33__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                    } else {
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                        __Vfunc_uvm_re_match__33____Vincrement1 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                            = __Vfunc_uvm_re_match__33____Vincrement1;
                    }
                }
                while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                   VL_LEN_IN(this->__Vfunc_uvm_re_match__33__re)) 
                        & (0x2aU == VL_GETC_N(this->__Vfunc_uvm_re_match__33__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                }
                __VlefCall_10__uvm_re_match = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                == 
                                                VL_LEN_IN(this->__Vfunc_uvm_re_match__33__re))
                                                ? 0U
                                                : 1U);
                __Vlabel0: ;
            }
            if ((0U == __VlefCall_10__uvm_re_match)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(unnamedblk2__DOT__w, "../../uvm/distrib/src/base/uvm_config_db.svh", 224)
                                   ->__PVT__trigger);
            }
            unnamedblk2__DOT__unnamedblk3__DOT__i = 
                ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
        }
    }
    if ((VlNull{} != p)) {
        VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_config_db.svh", 229)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db_options__Vclpkg.__VnoInFunc_is_tracing(vlProcess, vlSymsp, __VlefCall_11__is_tracing);
    if (__VlefCall_11__is_tracing) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz4__Vclpkg.__VnoInFunc_m_show_msg(vlProcess, vlSymsp, "CFGDB/SET"s, "Configuration"s, "set"s, inst_name, field_name, cntxt, r);
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_exists(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_exists\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_resource__Tz4> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    exists__Vfuncrtn = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_config_db.svh", 253)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
        cntxt = __Vtask_get_root__38__Vfuncout;
    }
    if ((""s == inst_name)) {
        VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 255)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
    } else {
        VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 256)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        if ((""s != __VlefCall_0__get_full_name)) {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 257)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz4__Vclpkg.__VnoInFunc_get_by_name(vlSymsp, inst_name, field_name, (IData)(spell_chk), __VlefCall_2__get_by_name);
    exists__Vfuncrtn = (VlNull{} != __VlefCall_2__get_by_name);
}

VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_wait_modified(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg::__VnoInFunc_wait_modified\n"); );
    // Locals
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03am_uvm_waiter> __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__size;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz28> __VlefCall_2__new;
    std::string __VlefCall_1__get_full_name;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __VlefCall_0__get_root;
    IData/*31:0*/ unnamedblk4__DOT__i;
    VlClassRef<Vhello_uvm_std__03a__03aprocess> p;
    std::string rstate;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03am_uvm_waiter> waiter;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, p);
    VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_config_db.svh", 272)->__VnoInFunc_get_randstate(vlSymsp, rstate);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    if ((VlNull{} == cntxt)) {
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_config_db.svh", 277)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
        cntxt = __Vtask_get_root__46__Vfuncout;
    }
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/base/uvm_config_db.svh", 278)->__VnoInFunc_get_root(vlProcess, vlSymsp, __VlefCall_0__get_root);
    if ((cntxt != __VlefCall_0__get_root)) {
        if ((""s != inst_name)) {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 280)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            inst_name = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s), inst_name);
        } else {
            VL_NULL_CHECK(cntxt, "../../uvm/distrib/src/base/uvm_config_db.svh", 282)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, inst_name);
        }
    }
    waiter = VL_NEW(Vhello_uvm_uvm_pkg__03a__03am_uvm_waiter, vlSymsp, inst_name, field_name);
    if ((! this->__PVT__m_waiters.exists(field_name))) {
        __VlefCall_2__new = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz28, vlProcess, vlSymsp, ""s);
        this->__PVT__m_waiters.at(field_name) = __VlefCall_2__new;
    }
    VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 289)->__VnoInFunc_push_back(vlSymsp, waiter);
    VL_NULL_CHECK(p, "../../uvm/distrib/src/base/uvm_config_db.svh", 291)->__VnoInFunc_set_randstate(vlSymsp, rstate);
    CData/*0:0*/ __VdynTrigger_h9ae78926__0;
    __VdynTrigger_h9ae78926__0 = 0;
    __VdynTrigger_h9ae78926__0 = 0U;
    if ((VlNull{} != waiter)) {
        VL_NULL_CHECK(waiter, "../../uvm/distrib/src/base/uvm_config_db.svh", 294)->__PVT__trigger.clearFired();
    }
    while ((1U & (~ (IData)(__VdynTrigger_h9ae78926__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_config_db__Tz4__Vclpkg.waiter.trigger)", 
                                                     "../../uvm/distrib/src/base/uvm_config_db.svh", 
                                                     294);
        __VdynTrigger_h9ae78926__0 = ((VlNull{} != waiter) 
                                      && VL_NULL_CHECK(waiter, "../../uvm/distrib/src/base/uvm_config_db.svh", 294)
                                      ->__PVT__trigger.isFired());
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9ae78926__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_config_db__Tz4__Vclpkg.waiter.trigger)", 
                                                     "../../uvm/distrib/src/base/uvm_config_db.svh", 
                                                     294);
        if ((VlNull{} != waiter)) {
            VL_NULL_CHECK(waiter, "../../uvm/distrib/src/base/uvm_config_db.svh", 294)->__PVT__trigger.clearFired();
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_config_db__Tz4__Vclpkg.waiter.trigger)", 
                                                 "../../uvm/distrib/src/base/uvm_config_db.svh", 
                                                 294);
    unnamedblk4__DOT__i = 0U;
    unnamedblk4__DOT__i = 0U;
    {
        while (true) {
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 297)->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
            if (!(VL_LTS_III(32, unnamedblk4__DOT__i, __VlefCall_3__size))) break;
            VL_NULL_CHECK(this->__PVT__m_waiters.at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 298)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk4__DOT__i, __VlefCall_4__get);
            if ((__VlefCall_4__get == waiter)) {
                VL_NULL_CHECK(this->__PVT__m_waiters
                              .at(field_name), "../../uvm/distrib/src/base/uvm_config_db.svh", 299)->__VnoInFunc_delete(vlSymsp, unnamedblk4__DOT__i);
                goto __Vlabel0;
            }
            unnamedblk4__DOT__i = ((IData)(1U) + unnamedblk4__DOT__i);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4::init(Vhello_uvm__Syms* __restrict vlSymsp) {
    Vhello_uvm_uvm_pkg__03a__03auvm_resource_db__Tz4::init(vlSymsp);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4::new\n"); );
    // Body
    /*super.new*/;
}

Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4::~Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_config_db__Tz4::~\n"); );
}
