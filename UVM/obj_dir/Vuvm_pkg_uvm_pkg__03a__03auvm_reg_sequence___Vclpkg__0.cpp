// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg::__VnoInFunc_get_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__Tz88> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence___Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz88__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_registry__Tz88> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz88__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_> tmp;
    if ((""s == name)) {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s);
    } else {
        tmp = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_, vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 59)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, __VlefCall_0__m_do_cycle_check);
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

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
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

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__14__t;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__16__t;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> unnamedblk2__DOT__reg_item;
    if ((VlNull{} == Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_SEQR"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000086U, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "REG_XLATE_NO_SEQR"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 140)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_XLATE_NO_SEQR"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, __VlefCall_2__get_full_name), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_reg_item'"s)), 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x0000008cU, ""s, 1U);
        }
        co_await VlForever{};
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "REG_XLATE_SEQ_START"s, __VlefCall_3__uvm_report_enabled);
    if ((0U != __VlefCall_3__uvm_report_enabled)) {
        VL_NULL_CHECK(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 145)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REG_XLATE_SEQ_START"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, __VlefCall_4__get_full_name), "'"s)), 0x00000064U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000091U, ""s, 1U);
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 148)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__14__t);
        unnamedblk2__DOT__reg_item = __Vtask_peek__14__t;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk2__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 150)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__16__t);
        unnamedblk2__DOT__reg_item = __Vtask_get__16__t;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 
                                                151);
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_do_reg_item\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    std::string rws;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 171)->__VnoInFunc_convert2string(vlProcess, vlSymsp, rws);
    if ((VlNull{} == Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000000adU, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000000afU, ""s, 1U);
        }
    }
    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "DO_RW_ACCESS"s, __VlefCall_2__uvm_report_enabled);
    if ((0U != __VlefCall_2__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DO_RW_ACCESS"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Doing transaction: "s, rws)), 0x0000012cU, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000000b1U, ""s, 1U);
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 180)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 181)->__PVT__parent 
            = VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this};
    }
    if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 184)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 185)
                               ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 185)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 187)
                               ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 187)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 190)->__PVT__parent 
            = this->__PVT__upstream_parent;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__28__status;
    __Vtask_write__28__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000000e8U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 234)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__28__status, value, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__28__status;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__31__status;
    __Vtask_read__31__status = 0;
    QData/*63:0*/ __Vtask_read__31__value;
    __Vtask_read__31__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000104U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 262)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__31__status, __Vtask_read__31__value, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__31__status;
        value = __Vtask_read__31__value;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__34__status;
    __Vtask_poke__34__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x0000011fU, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 289)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__34__status, value, kind, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_poke__34__status;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__37__status;
    __Vtask_peek__37__status = 0;
    QData/*63:0*/ __Vtask_peek__37__value;
    __Vtask_peek__37__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000139U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 315)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__37__status, __Vtask_peek__37__value, kind, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_peek__37__status;
        value = __Vtask_peek__37__value;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_update_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_update_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_update__40__status;
    __Vtask_update__40__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000154U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 342)->__VnoInFunc_update(vlSymsp, __Vtask_update__40__status, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_update__40__status;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_mirror_reg(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_mirror_reg\n"); );
    // Locals
    IData/*31:0*/ __Vtask_mirror__43__status;
    __Vtask_mirror__43__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == rg)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x00000170U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 370)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__43__status, check, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_mirror__43__status;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_mem(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_write_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_write__46__status;
    __Vtask_write__46__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x0000018dU, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 399)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__46__status, offset, value, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__46__status;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_mem(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_read_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_read__49__status;
    __Vtask_read__49__status = 0;
    QData/*63:0*/ __Vtask_read__49__value;
    __Vtask_read__49__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000001aaU, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 428)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__49__status, offset, __Vtask_read__49__value, path, map, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__49__status;
        value = __Vtask_read__49__value;
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_mem(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_poke_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_poke__52__status;
    __Vtask_poke__52__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000001c6U, ""s, 1U);
        }
    } else {
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 456)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__52__status, offset, value, kind, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_poke__52__status;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_mem(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_peek_mem\n"); );
    // Locals
    IData/*31:0*/ __Vtask_peek__55__status;
    __Vtask_peek__55__status = 0;
    QData/*63:0*/ __Vtask_peek__55__value;
    __Vtask_peek__55__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    status = 0U;
    value = 0ULL;
    if ((VlNull{} == mem)) {
        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh"s, 0x000001e1U, ""s, 1U);
        }
    } else {
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_reg_sequence.svh", 483)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__55__status, offset, __Vtask_peek__55__value, kind, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_>{this}, extension, fname, lineno);
        status = __Vtask_peek__55__status;
        value = __Vtask_peek__55__value;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_put_response\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::~Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuvm_pkg_uvm_pkg__03a__03auvm_reg_sequence_::~\n"); );
}
