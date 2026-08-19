// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi33> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__pi33> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, "uvm_reg_single_bit_bash_seq"s);
    } else {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_single_bit_bash_seq"s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 60)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.size())) {
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.resize(1U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.size())) {
        Vuvm_pkg_uvm_pkg__03a__03auvm_void::__Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_lsb_pos__17__Vfuncout;
    __Vtask_get_lsb_pos__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__18__Vfuncout;
    __Vtask_get_n_bits__18__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_10__get_full_name;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_7__get_compare;
    IData/*31:0*/ __VlefCall_6__get_n_bytes;
    CData/*0:0*/ __VlefLogOr_5;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz40> __VlefCall_4__get_by_name;
    std::string __VlefCall_3__get_full_name;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz40> __VlefCall_2__get_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk2__DOT__j;
    unnamedblk2__DOT__j = 0;
    IData/*31:0*/ unnamedblk2__DOT__j__Vloopsize;
    unnamedblk2__DOT__j__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlUnpacked<std::string, 64> mode;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map>> maps;
    QData/*63:0*/ dc_mask;
    IData/*31:0*/ n_bits;
    std::string field_access;
    {
        fields.clear();
        for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
            mode[__Vi0].clear();
        }
        maps.clear();
        dc_mask = 0ULL;
        n_bits = 0U;
        field_access = ""s;
        if ((VlNull{} == this->__PVT__rg)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, "No register specified to run sequence on"s, 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x0000004cU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 81)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_1__get_full_name)), "NO_REG_TESTS"s, 0U, __VlefCall_2__get_by_name);
        __VlefLogOr_5 = (VlNull{} != __VlefCall_2__get_by_name);
        if ((1U & (~ (IData)(__VlefLogOr_5)))) {
            VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 83)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, __VlefCall_3__get_full_name)), "NO_REG_BIT_BASH_TEST"s, 0U, __VlefCall_4__get_by_name);
            __VlefLogOr_5 = (VlNull{} != __VlefCall_4__get_by_name);
        }
        if (__VlefLogOr_5) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 87)->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_6__get_n_bytes);
        n_bits = (__VlefCall_6__get_n_bytes << 3U);
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 90)->__VnoInFunc_get_fields(vlSymsp, fields);
        VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 93)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk2__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__j, maps.size())) {
            unnamedblk2__DOT__j__Vloopsize = maps.size();
            unnamedblk2__DOT__unnamedblk3__DOT__next_lsb = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__next_lsb = 0U;
            dc_mask = 0ULL;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k, fields.size())) {
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize 
                    = fields.size();
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w = 0U;
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc = 0U;
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 106)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk2__DOT__j), field_access);
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 107)->__VnoInFunc_get_compare(vlSymsp, __VlefCall_7__get_compare);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc 
                    = (0U == __VlefCall_7__get_compare);
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 108)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__17__Vfuncout);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb 
                    = __Vtask_get_lsb_pos__17__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k), "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 109)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__18__Vfuncout);
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w 
                    = __Vtask_get_n_bits__18__Vfuncout;
                if (((((("WO"s == field_access) || 
                        ("WOC"s == field_access)) || 
                       ("WOS"s == field_access)) || 
                      ("WO1"s == field_access)) || 
                     ("NOACCESS"s == field_access))) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc = 1U;
                }
                while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__next_lsb, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lsb)) {
                    __Vincrement1 = unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
                    unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                    mode[(0x0000003fU & __Vincrement1)] = "RO"s;
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    mode[(0x0000003fU & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)] 
                        = field_access;
                    dc_mask = (((~ (1ULL << (0x0000003fU 
                                             & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb))) 
                                & dc_mask) | ((QData)((IData)(
                                                              (1U 
                                                               & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dc))) 
                                              << (0x0000003fU 
                                                  & unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)));
                    unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                if ((unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k__Vloopsize 
                     <= fields.size())) {
                    unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k 
                        = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__k);
                }
            }
            while (VL_GTS_III(32, 0x00000040U, unnamedblk2__DOT__unnamedblk3__DOT__next_lsb)) {
                __Vincrement2 = unnamedblk2__DOT__unnamedblk3__DOT__next_lsb;
                unnamedblk2__DOT__unnamedblk3__DOT__next_lsb 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__next_lsb);
                mode[(0x0000003fU & __Vincrement2)] = "RO"s;
            }
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(this->__PVT__rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 129)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                VL_NULL_CHECK(maps.at(unnamedblk2__DOT__j), "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 129)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Verifying bits in register %s in map \"%s\"...",2
                                                                                , 'S',&(__VlefCall_9__get_full_name)
                                                                                , 'S',&(__VlefCall_10__get_full_name)) , 0x00000064U, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000081U, ""s, 1U);
            }
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k, n_bits)) {
                {
                    if ((1U & (IData)((dc_mask >> (0x0000003fU 
                                                   & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k))))) {
                        goto __Vlabel1;
                    }
                    co_await this->__VnoInFunc_bash_kth_bit(vlProcess, vlSymsp, this->__PVT__rg, unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k, 
                                                            VL_CVT_PACK_STR_NN(mode
                                                                               [
                                                                               (0x0000003fU 
                                                                                & unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k)]), maps.at(unnamedblk2__DOT__j), dc_mask);
                    __Vlabel1: ;
                }
                unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk6__DOT__k);
            }
            if ((unnamedblk2__DOT__j__Vloopsize <= maps.size())) {
                unnamedblk2__DOT__j = ((IData)(1U) 
                                       + unnamedblk2__DOT__j);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ k, std::string mode, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ dc_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_bash_kth_bit\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__27__status;
    __Vtask_write__27__status = 0;
    IData/*31:0*/ __Vtask_read__33__status;
    __Vtask_read__33__status = 0;
    QData/*63:0*/ __Vtask_read__33__value;
    __Vtask_read__33__value = 0;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_9__get_full_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    std::string __VlefCall_7__get_full_name;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    QData/*63:0*/ __VlefCall_4__get;
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ status;
    QData/*63:0*/ val;
    QData/*63:0*/ exp;
    QData/*63:0*/ v;
    CData/*0:0*/ bit_val;
    status = 0U;
    val = 0ULL;
    exp = 0ULL;
    v = 0ULL;
    bit_val = 0U;
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "uvm_reg_bit_bash_seq"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("...Bashing %s bit #%0d",2
                                                                                , 'S',&(mode)
                                                                                , '~',32,k) , 0x0000012cU, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x00000098U, ""s, 1U);
    }
    unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 155)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, val);
        v = val;
        exp = val;
        val = (((~ (1ULL << (0x0000003fU & k))) & val) 
               | ((QData)((IData)((1U & (~ (IData)(
                                                   (val 
                                                    >> 
                                                    (0x0000003fU 
                                                     & k))))))) 
                  << (0x0000003fU & k)));
        bit_val = (1U & (IData)((val >> (0x0000003fU 
                                         & k))));
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 161)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__27__status, val, 0U, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_write__27__status;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 164)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 164)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtemp_2 = Vuvm_pkg___024unit::__Venumtab_enum_name73
                    [(3U & status)];
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %s when writing to register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_2)
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , 'S',&(__VlefCall_3__get_full_name)) , 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000a4U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 167)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_4__get);
        exp = (__VlefCall_4__get & (~ dc_mask));
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 168)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__33__status, __Vtask_read__33__value, 0U, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
        status = __Vtask_read__33__status;
        val = __Vtask_read__33__value;
        if ((0U != status)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_5__uvm_report_enabled);
            if ((0U != __VlefCall_5__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 171)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 171)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                __Vtemp_3 = Vuvm_pkg___024unit::__Venumtab_enum_name73
                    [(3U & status)];
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Status was %s when reading register \"%s\" through map \"%s\".",3
                                                                                , 'S',&(__Vtemp_3)
                                                                                , 'S',&(__VlefCall_6__get_full_name)
                                                                                , 'S',&(__VlefCall_7__get_full_name)) , 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000abU, ""s, 1U);
            }
        }
        val = (val & (~ dc_mask));
        if ((val != exp)) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_bit_bash_seq"s, __VlefCall_8__uvm_report_enabled);
            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh", 177)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_bit_bash_seq"s, VL_SFORMATF_N_NX("Writing a %b in bit #%0d of register \"%s\" with initial value 'h%h yielded 'h%h instead of 'h%h",6
                                                                                , '#',1,bit_val
                                                                                , '~',32,k
                                                                                , 'S',&(__VlefCall_9__get_full_name)
                                                                                , '#',64,v
                                                                                , '#',64,val
                                                                                , '#',64,exp) , 0U, "../../uvm/distrib/src/reg/sequences/uvm_reg_bit_bash_seq.svh"s, 0x000000b1U, ""s, 1U);
            }
        }
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_reg_single_bit_bash_seq::~\n"); );
}
