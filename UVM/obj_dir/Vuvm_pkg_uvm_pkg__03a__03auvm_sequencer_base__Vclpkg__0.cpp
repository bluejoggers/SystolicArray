// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_disable_auto_item_recording\n"); );
    // Body
    this->__PVT__m_auto_item_recording = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_auto_item_recording_enabled\n"); );
    // Body
    is_auto_item_recording_enabled__Vfuncrtn = this->__PVT__m_auto_item_recording;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::init(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_component> parent) {
    Vuvm_pkg_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_wait_relevant_count = 0U;
    this->__PVT__m_max_zero_time_wait_relevant_count = 0x0000000aU;
    this->__PVT__m_last_wait_relevant_time = 0ULL;
    this->__PVT__m_arbitration = 0U;
    this->__PVT__m_auto_item_recording = 1U;
    this->__PVT__count = 0xffffffffU;
    this->__PVT__max_random_count = 0x0000000aU;
    this->__PVT__max_random_depth = 4U;
    this->__PVT__default_sequence = "uvm_random_sequence"s;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id);
    this->__PVT__m_sequencer_id = __Vincrement1;
    this->__PVT__m_lock_arb_size = 0xffffffffU;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vuvm_pkg_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get__6__value;
    VL_ZERO_W(4096, __Vfunc_get__6__value);
    VlWide<128>/*4095:0*/ __Vfunc_get__9__value;
    VL_ZERO_W(4096, __Vfunc_get__9__value);
    VlWide<128>/*4095:0*/ __Vfunc_get__12__value;
    VL_ZERO_W(4096, __Vfunc_get__12__value);
    VlWide<128>/*4095:0*/ __Vfunc_get__15__value;
    VL_ZERO_W(4096, __Vfunc_get__15__value);
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_8__get;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_6__get;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_4__get;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get;
    IData/*31:0*/ dummy;
    dummy = 0U;
    Vuvm_pkg_uvm_pkg__03a__03auvm_component::__VnoInFunc_build(vlProcess, vlSymsp);
    this->__Vfunc_get__3__value = this->__PVT__default_sequence;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz5__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "default_sequence"s, this->__Vfunc_get__3__value, __VlefCall_0__get);
    this->__PVT__default_sequence = this->__Vfunc_get__3__value;
    if (__VlefCall_0__get) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "default_sequence config parameter is deprecated and not part of the UVM standard. See documentation for uvm_sequencer_base::start_phase_sequence()."s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000020aU, ""s, 1U);
        }
        this->__PVT__m_default_seq_set = 1U;
    }
    VL_EXTENDS_WI(4096,32, __Vfunc_get__6__value, this->__PVT__count);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "count"s, __Vfunc_get__6__value, __VlefCall_2__get);
    this->__PVT__count = __Vfunc_get__6__value[0U];
    if (__VlefCall_2__get) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "count config parameter is deprecated and not part of the UVM standard"s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000020fU, ""s, 1U);
        }
    }
    __Vfunc_get__9__value[0U] = this->__PVT__max_random_count;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_get__9__value[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "max_random_count"s, __Vfunc_get__9__value, __VlefCall_4__get);
    this->__PVT__max_random_count = __Vfunc_get__9__value[0U];
    if (__VlefCall_4__get) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "count config parameter is deprecated and not part of the UVM standard"s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000213U, ""s, 1U);
        }
    }
    __Vfunc_get__12__value[0U] = this->__PVT__max_random_depth;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vfunc_get__12__value[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "max_random_depth"s, __Vfunc_get__12__value, __VlefCall_6__get);
    this->__PVT__max_random_depth = __Vfunc_get__12__value[0U];
    if (__VlefCall_6__get) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "max_random_depth config parameter is deprecated and not part of the UVM standard. Use 'uvm_sequence_library' class for sequence library functionality"s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000218U, ""s, 1U);
        }
    }
    VL_EXTENDS_WI(4096,32, __Vfunc_get__15__value, dummy);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz4__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, ""s, "pound_zero_count"s, __Vfunc_get__15__value, __VlefCall_8__get);
    dummy = __Vfunc_get__15__value[0U];
    if (__VlefCall_8__get) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_9__uvm_report_enabled);
        if ((0U != __VlefCall_9__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "pound_zero_count was set but ignored. Sequencer/driver synchronization now uses 'uvm_wait_for_nba_region'"s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000021dU, ""s, 1U);
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk231__DOT__i;
    unnamedblk231__DOT__i = 0;
    IData/*31:0*/ unnamedblk231__DOT__i__Vloopsize;
    unnamedblk231__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk232__DOT__i;
    unnamedblk232__DOT__i = 0;
    IData/*31:0*/ unnamedblk232__DOT__i__Vloopsize;
    unnamedblk232__DOT__i__Vloopsize = 0;
    Vuvm_pkg_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 551)->__VnoInFunc_print_array_header(vlSymsp, "arbitration_queue"s, this->__PVT__arb_sequence_q.size(), "array"s, 0x2eU);
    unnamedblk231__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk231__DOT__i, this->__PVT__arb_sequence_q.size())) {
        unnamedblk231__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
        __Vtemp_1 = Vuvm_pkg___024unit::__Venumtab_enum_name61
            [(3U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk231__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 554)
              ->__PVT__request)];
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 553)->__VnoInFunc_print_string(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk231__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk231__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 554)
                                                                                ->__PVT__sequence_id) , 0x5bU);
        if ((unnamedblk231__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
            unnamedblk231__DOT__i = ((IData)(1U) + unnamedblk231__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 555)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__arb_sequence_q.size());
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 557)->__VnoInFunc_print_array_header(vlSymsp, "lock_queue"s, this->__PVT__lock_list.size(), "array"s, 0x2eU);
    unnamedblk232__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk232__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk232__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk232__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 560)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk232__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 560)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 559)->__VnoInFunc_print_string(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk232__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,__VlefCall_1__get_sequence_id) , 0x5bU);
        if ((unnamedblk232__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk232__DOT__i = ((IData)(1U) + unnamedblk232__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 561)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__lock_list.size());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists\n"); );
    // Body
    this->__PVT__m_lock_arb_size = ((IData)(1U) + this->__PVT__m_lock_arb_size);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ unnamedblk233__DOT__i;
    unnamedblk233__DOT__i = 0;
    IData/*31:0*/ unnamedblk234__DOT__i;
    unnamedblk234__DOT__i = 0;
    IData/*31:0*/ unnamedblk234__DOT__i__Vloopsize;
    unnamedblk234__DOT__i__Vloopsize = 0;
    std::string s;
    s = "  -- arb i/id/type: "s;
    unnamedblk233__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk233__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Vuvm_pkg___024unit::__Venumtab_enum_name61
            [(3U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk233__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 581)
              ->__PVT__request)];
        VL_SFORMAT_NX(s,"%s %0d/%0d/%s ",4, 'S',&(s)
                      , '~',32,unnamedblk233__DOT__i
                      , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk233__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 581)
                      ->__PVT__sequence_id, 'S',&(__Vtemp_1));
        unnamedblk233__DOT__i = ((IData)(1U) + unnamedblk233__DOT__i);
    }
    VL_SFORMAT_NX(s,"%s\n -- lock_list i/id: ",1, 'S',&(s));
    unnamedblk234__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk234__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk234__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk234__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 585)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        VL_SFORMAT_NX(s,"%s %0d/%0d",3, 'S',&(s), '~',32,unnamedblk234__DOT__i
                      , '~',32,__VlefCall_0__get_sequence_id);
        if ((unnamedblk234__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk234__DOT__i = ((IData)(1U) + unnamedblk234__DOT__i);
        }
    }
    convert2string__Vfuncrtn = s;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    m_find_number_driver_connections__Vfuncrtn = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    IData/*31:0*/ __VlefCall_0__m_get_sqr_sequence_id;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        m_register_sequence__Vfuncrtn = 0U;
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 605)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_0__m_get_sqr_sequence_id);
        if (VL_LTS_III(32, 0U, __VlefCall_0__m_get_sqr_sequence_id)) {
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 606)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
            goto __Vlabel0;
        }
        __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id);
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 608)->__VnoInFunc_m_set_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, __Vincrement2);
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 609)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__PVT__reg_sequences.at(__VlefCall_1__get_sequence_id) 
            = sequence_ptr;
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 610)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ i;
    {
        i = 0U;
        if ((0xffffffffU == sequence_id)) {
            __VlefExpr_0 = (0U != this->__PVT__reg_sequences.first(i));
            if (__VlefExpr_0) {
                m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
                    .at(i);
                goto __Vlabel0;
            }
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
            .at(sequence_id);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence\n"); );
    // Body
    {
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            goto __Vlabel0;
        }
        this->__PVT__reg_sequences.erase(sequence_id);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration\n"); );
    // Body
    user_priority_arbitration__Vfuncrtn = avail_sequences.at(0U);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks\n"); );
    // Locals
    IData/*31:0*/ __Vtask_status__33__Vfuncout;
    __Vtask_status__33__Vfuncout = 0;
    IData/*31:0*/ __Vtask_status__34__Vfuncout;
    __Vtask_status__34__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_3__is_blocked;
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk235__DOT__q;
    IData/*31:0*/ unnamedblk235__DOT__unnamedblk236__DOT__idx;
    unnamedblk235__DOT__unnamedblk236__DOT__idx = 0;
    IData/*31:0*/ unnamedblk235__DOT__unnamedblk236__DOT__idx__Vloopsize;
    unnamedblk235__DOT__unnamedblk236__DOT__idx__Vloopsize = 0;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk237__DOT__leading_lock_reqs;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk237__DOT__blocked_seqs;
    VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request>> unnamedblk237__DOT__not_blocked_seqs;
    VlQueue<IData/*31:0*/> unnamedblk237__DOT__q1;
    IData/*31:0*/ unnamedblk237__DOT__b;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk238__DOT__i;
    unnamedblk237__DOT__unnamedblk238__DOT__i = 0;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize;
    unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__item;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk240__DOT__idx;
    unnamedblk237__DOT__unnamedblk240__DOT__idx = 0;
    IData/*31:0*/ unnamedblk237__DOT__unnamedblk240__DOT__idx__Vloopsize;
    unnamedblk237__DOT__unnamedblk240__DOT__idx__Vloopsize = 0;
    unnamedblk235__DOT__q.clear();
    unnamedblk235__DOT__q = this->__PVT__arb_sequence_q.find(
                                                             [&](
                                                                 IData/*31:0*/ item__DOT__index, 
                                                                 VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                             CData/*31:0*/ {
            return (((1U == VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 664)
                      ->__PVT__request) && ((4U == 
                                             ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 664)
                                                  ->__PVT__process_id, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 664)
                                              ->__VnoInFunc_status(vlSymsp, __Vtask_status__33__Vfuncout);
                                }(), __Vtask_status__33__Vfuncout)) 
                                            || (0U 
                                                == 
                                                ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(
                                                                item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 664)
                                                  ->__PVT__process_id, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 664)
                                                 ->__VnoInFunc_status(vlSymsp, __Vtask_status__34__Vfuncout);
                                }(), __Vtask_status__34__Vfuncout)))));
        }
    );
    unnamedblk235__DOT__unnamedblk236__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk235__DOT__unnamedblk236__DOT__idx, unnamedblk235__DOT__q.size())) {
        unnamedblk235__DOT__unnamedblk236__DOT__idx__Vloopsize 
            = unnamedblk235__DOT__q.size();
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQLCKZMB"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk235__DOT__q.at(unnamedblk235__DOT__unnamedblk236__DOT__idx), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 666)
                          ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 666)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQLCKZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a lock on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_1__get_full_name)
                                                                                , 'S',&(__VlefCall_2__get_full_name)) , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000029aU, ""s, 1U);
        }
        this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk235__DOT__q.at(unnamedblk235__DOT__unnamedblk236__DOT__idx), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 668)
                                                      ->__PVT__sequence_ptr);
        if ((unnamedblk235__DOT__unnamedblk236__DOT__idx__Vloopsize 
             <= unnamedblk235__DOT__q.size())) {
            unnamedblk235__DOT__unnamedblk236__DOT__idx 
                = ((IData)(1U) + unnamedblk235__DOT__unnamedblk236__DOT__idx);
        }
    }
    unnamedblk237__DOT__leading_lock_reqs.clear();
    unnamedblk237__DOT__blocked_seqs.clear();
    unnamedblk237__DOT__not_blocked_seqs.clear();
    unnamedblk237__DOT__q1.clear();
    unnamedblk237__DOT__q1.atDefault() = 0;
    unnamedblk237__DOT__b = this->__PVT__arb_sequence_q.size();
    unnamedblk237__DOT__q1 = this->__PVT__arb_sequence_q.find_first_index(
                                                                          [&](
                                                                              IData/*31:0*/ item__DOT__index, 
                                                                              VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> item) -> 
                                                                          CData/*31:0*/ {
            return ((1U != VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 677)
                     ->__PVT__request));
        }
    );
    if ((0U != unnamedblk237__DOT__q1.size())) {
        unnamedblk237__DOT__b = unnamedblk237__DOT__q1.at(0U);
    }
    if ((0U != unnamedblk237__DOT__b)) {
        unnamedblk237__DOT__leading_lock_reqs = this->__PVT__arb_sequence_q.slice(0U, 
                                                                                (unnamedblk237__DOT__b 
                                                                                - (IData)(1U)));
        unnamedblk237__DOT__unnamedblk238__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk237__DOT__unnamedblk238__DOT__i, unnamedblk237__DOT__leading_lock_reqs.size())) {
            unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize 
                = unnamedblk237__DOT__leading_lock_reqs.size();
            unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__item 
                = unnamedblk237__DOT__leading_lock_reqs.at(unnamedblk237__DOT__unnamedblk238__DOT__i);
            this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 685)
                                         ->__PVT__sequence_ptr, __VlefCall_3__is_blocked);
            if (__VlefCall_3__is_blocked) {
                unnamedblk237__DOT__blocked_seqs.push_back(unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__item);
            } else {
                unnamedblk237__DOT__not_blocked_seqs.push_back(unnamedblk237__DOT__unnamedblk238__DOT__unnamedblk239__DOT__item);
            }
            if ((unnamedblk237__DOT__unnamedblk238__DOT__i__Vloopsize 
                 <= unnamedblk237__DOT__leading_lock_reqs.size())) {
                unnamedblk237__DOT__unnamedblk238__DOT__i 
                    = ((IData)(1U) + unnamedblk237__DOT__unnamedblk238__DOT__i);
            }
        }
        this->__PVT__arb_sequence_q = (VL_GTS_III(32, unnamedblk237__DOT__b, 
                                                  (this->__PVT__arb_sequence_q.size() 
                                                   - (IData)(1U)))
                                        ? unnamedblk237__DOT__blocked_seqs
                                        : VlQueue<VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request>>::consCC(this->__PVT__arb_sequence_q.slice(unnamedblk237__DOT__b, 
                                                                                (this->__PVT__arb_sequence_q.size() 
                                                                                - (IData)(1U))), 
                                                                                unnamedblk237__DOT__blocked_seqs));
        unnamedblk237__DOT__unnamedblk240__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk237__DOT__unnamedblk240__DOT__idx, unnamedblk237__DOT__not_blocked_seqs.size())) {
            unnamedblk237__DOT__unnamedblk240__DOT__idx__Vloopsize 
                = unnamedblk237__DOT__not_blocked_seqs.size();
            this->__PVT__lock_list.push_back(VL_NULL_CHECK(unnamedblk237__DOT__not_blocked_seqs.at(unnamedblk237__DOT__unnamedblk240__DOT__idx), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 697)
                                             ->__PVT__sequence_ptr);
            this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(unnamedblk237__DOT__not_blocked_seqs.at(unnamedblk237__DOT__unnamedblk240__DOT__idx), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 698)
                                                          ->__PVT__request_id);
            if ((unnamedblk237__DOT__unnamedblk240__DOT__idx__Vloopsize 
                 <= unnamedblk237__DOT__not_blocked_seqs.size())) {
                unnamedblk237__DOT__unnamedblk240__DOT__idx 
                    = ((IData)(1U) + unnamedblk237__DOT__unnamedblk240__DOT__idx);
            }
        }
        if ((0U != unnamedblk237__DOT__not_blocked_seqs.size())) {
            {
                // Inlined CFunc: __VnoInFunc_m_update_lists
                this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                                + this->__PVT__m_lock_arb_size);
            }
        }
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ selected_sequence;
    selected_sequence = 0U;
    do {
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            co_await this->__VnoInFunc_m_wait_for_available_sequence(vlProcess, vlSymsp);
        }
    } while ((0xffffffffU == selected_sequence));
    if (VL_LTES_III(32, 0U, selected_sequence)) {
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(selected_sequence), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 725)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(selected_sequence);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_user_priority_arbitration__66__Vfuncout;
    __Vfunc_user_priority_arbitration__66__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__convert2string;
    IData/*31:0*/ __VlefCall_13__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_12__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_11__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_10__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_9__m_get_seq_item_priority;
    CData/*0:0*/ __VlefCall_8__is_blocked;
    CData/*0:0*/ __VlefCall_7__is_relevant;
    CData/*0:0*/ __VlefCall_6__is_blocked;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    IData/*31:0*/ i;
    IData/*31:0*/ temp;
    IData/*31:0*/ sum_priority_val;
    VlQueue<IData/*31:0*/> avail_sequences;
    VlQueue<IData/*31:0*/> highest_sequences;
    IData/*31:0*/ highest_pri;
    {
        m_choose_next_request__Vfuncrtn = 0U;
        i = 0U;
        temp = 0U;
        sum_priority_val = 0U;
        avail_sequences.clear();
        avail_sequences.atDefault() = 0;
        highest_sequences.clear();
        highest_sequences.atDefault() = 0;
        highest_pri = 0U;
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        i = 0U;
        while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
            {
                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 755)
                              ->__PVT__process_id, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 755)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                __VlefLogOr_2 = (4U == __VlefCall_0__status);
                if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 756)
                                  ->__PVT__process_id, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 756)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                    __VlefLogOr_2 = (0U == __VlefCall_1__status);
                }
                if (__VlefLogOr_2) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQREQZMB"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 757)
                                      ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 757)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQREQZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a wait_for_grant on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000002f5U, ""s, 1U);
                    }
                    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 758)
                                                                  ->__PVT__sequence_ptr);
                    goto __Vlabel1;
                }
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 763)
                         ->__PVT__request)) {
                        this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 764)
                                                     ->__PVT__sequence_ptr, __VlefCall_6__is_blocked);
                        if ((1U & (~ (IData)(__VlefCall_6__is_blocked)))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 765)
                                          ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 765)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_7__is_relevant);
                            if (__VlefCall_7__is_relevant) {
                                if ((0U == this->__PVT__m_arbitration)) {
                                    m_choose_next_request__Vfuncrtn 
                                        = i;
                                    goto __Vlabel0;
                                } else {
                                    avail_sequences.push_back(i);
                                }
                            }
                        }
                    }
                }
                i = ((IData)(1U) + i);
                __Vlabel1: ;
            }
        }
        if ((0U == this->__PVT__m_arbitration)) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 1U, avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if ((1U == avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 0U, this->__PVT__lock_list.size())) {
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 791)
                                             ->__PVT__sequence_ptr, __VlefCall_8__is_blocked);
                if (__VlefCall_8__is_blocked) {
                    avail_sequences.erase(i);
                    i = (i - (IData)(1U));
                }
                i = ((IData)(1U) + i);
            }
            if (VL_GTS_III(32, 1U, avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            if ((1U == avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
                goto __Vlabel0;
            }
        }
        if ((1U == this->__PVT__m_arbitration)) {
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_9__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_9__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
            }
            temp = VL_URANDOM_RANGE_I((sum_priority_val 
                                       - (IData)(1U)), 0U);
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_10__m_get_seq_item_priority);
                if (VL_GTS_III(32, (__VlefCall_10__m_get_seq_item_priority 
                                    + sum_priority_val), temp)) {
                    m_choose_next_request__Vfuncrtn 
                        = avail_sequences.at(i);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_11__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_11__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "UVM Internal error in weighted arbitration code"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((2U == this->__PVT__m_arbitration)) {
            i = VL_URANDOM_RANGE_I((avail_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = avail_sequences.at(i);
            goto __Vlabel0;
        }
        if (((3U == this->__PVT__m_arbitration) | (4U 
                                                   == this->__PVT__m_arbitration))) {
            highest_pri = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_12__m_get_seq_item_priority);
                if (VL_GTS_III(32, __VlefCall_12__m_get_seq_item_priority, highest_pri)) {
                    highest_sequences.clear();
                    highest_sequences.push_back(avail_sequences.at(i));
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), highest_pri);
                } else {
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_13__m_get_seq_item_priority);
                    if ((__VlefCall_13__m_get_seq_item_priority 
                         == highest_pri)) {
                        highest_sequences.push_back(avail_sequences.at(i));
                    }
                }
                i = ((IData)(1U) + i);
            }
            if ((3U == this->__PVT__m_arbitration)) {
                m_choose_next_request__Vfuncrtn = highest_sequences.at(0U);
                goto __Vlabel0;
            }
            i = VL_URANDOM_RANGE_I((highest_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = highest_sequences.at(i);
            goto __Vlabel0;
        }
        if ((5U == this->__PVT__m_arbitration)) {
            this->__VnoInFunc_user_priority_arbitration(vlSymsp, avail_sequences, __Vfunc_user_priority_arbitration__66__Vfuncout);
            i = __Vfunc_user_priority_arbitration__66__Vfuncout;
            highest_sequences = avail_sequences.find(
                                                     [&](
                                                         IData/*31:0*/ item__DOT__index, 
                                                         IData/*31:0*/ item) -> 
                                                     CData/*31:0*/ {
                    return ((item == i));
                }
            );
            if ((0U == highest_sequences.size())) {
                this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_14__convert2string);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Error in User arbitration, sequence %0d not available\n%s",2
                                                                                , '~',32,i
                                                                                , 'S',&(__VlefCall_14__convert2string)) , 0U, ""s, 0U, ""s, 0U);
            }
            m_choose_next_request__Vfuncrtn = i;
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "Internal error: Failed to choose sequence"s, 0U, ""s, 0U, ""s, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h914b6a43__0;
    __Vtrigprevexpr_h914b6a43__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((this->__PVT__m_arb_size == this->__PVT__m_lock_arb_size)) {
        CData/*0:0*/ __VdynTrigger_hb333a2f1__0;
        __VdynTrigger_hb333a2f1__0 = 0;
        __VdynTrigger_hb333a2f1__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hb333a2f1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                         "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                         877);
            __Vtrigprevexpr_h914b6a43__0 = (this->__PVT__m_arb_size 
                                            != this->__PVT__m_lock_arb_size);
            __VdynTrigger_hb333a2f1__0 = __Vtrigprevexpr_h914b6a43__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb333a2f1__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                     "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                     877);
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_1__is_relevant;
    CData/*0:0*/ __VlefCall_0__is_blocked;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0;
    VlQueue<IData/*31:0*/> is_relevant_entries;
    __VDynScope_m_wait_for_available_sequence_0 = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_32, vlSymsp);
    {
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 885)->__PVT__i = 0U;
        is_relevant_entries.clear();
        is_relevant_entries.atDefault() = 0;
        this->__PVT__m_arb_size = this->__PVT__m_lock_arb_size;
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 892)->__PVT__i = 0U;
        while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 892)
                          ->__PVT__i, this->__PVT__arb_sequence_q.size())) {
            if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 893)
                                                                    ->__PVT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 893)
                 ->__PVT__request)) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 894)
                                                                                ->__PVT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 894)
                                             ->__PVT__sequence_ptr, __VlefCall_0__is_blocked);
                if ((1U & (~ (IData)(__VlefCall_0__is_blocked)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 895)
                                                                               ->__PVT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 895)
                                  ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 895)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_1__is_relevant);
                    if ((1U & (~ (IData)(__VlefCall_1__is_relevant)))) {
                        is_relevant_entries.push_back(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 896)
                                                      ->__PVT__i);
                    }
                }
            }
            VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 892)->__PVT__i 
                = ((IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 892)
                   ->__PVT__i);
        }
        if ((0U == is_relevant_entries.size())) {
            co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
            goto __Vlabel0;
        }
        {
            VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                          908);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_32> &__VDynScope_m_wait_for_available_sequence_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0);
        co_await __Vfork_2__sync.join(vlProcess, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                      910);
    }
    vlProcess->disableFork();
    __Vfork_1__sync.done("../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                         909);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    this->__Vtask___VforkTask_2__74__is_relevant_entries 
        = is_relevant_entries;
    this->__Vtask___VforkTask_2__74____VDynScope_m_wait_for_available_sequence_0 
        = __VDynScope_m_wait_for_available_sequence_0;
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                      912);
    }
    __Vfork_2__sync.done("../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                         911);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
    __Vfork_3__sync.done("../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                         942);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    CData/*0:0*/ __Vtrigprevexpr_h8896beb8__0;
    __Vtrigprevexpr_h8896beb8__0 = 0;
    this->__Vtask___VforkTask_1__75__is_relevant_entries 
        = this->__Vtask___VforkTask_2__74__is_relevant_entries;
    __Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0 
        = this->__Vtask___VforkTask_2__74____VDynScope_m_wait_for_available_sequence_0;
    this->__PVT__m_is_relevant_completed = 0U;
    VL_NULL_CHECK(__Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 917)->__PVT__i = 0U;
    while (VL_LTS_III(32, VL_NULL_CHECK(__Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 917)
                      ->__PVT__i, this->__Vtask___VforkTask_1__75__is_relevant_entries.size())) {
        this->__Vtask___VforkTask_1__75___Vwrapped_unnamedblk241_6__DOT____VDynScope_unnamedblk241_6 
            = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_38, vlSymsp);
        VL_NULL_CHECK(this->__Vtask___VforkTask_1__75___Vwrapped_unnamedblk241_6__DOT____VDynScope_unnamedblk241_6, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 919)->__PVT__k 
            = VL_NULL_CHECK(__Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 919)
            ->__PVT__i;
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 917)->__PVT__i 
            = ((IData)(1U) + VL_NULL_CHECK(__Vtask___VforkTask_1__75____VDynScope_m_wait_for_available_sequence_0, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 917)
               ->__PVT__i);
    }
    if (VL_GTES_III(32, 0U, this->__PVT__m_is_relevant_completed)) {
        CData/*0:0*/ __VdynTrigger_h7ad7ec0e__0;
        __VdynTrigger_h7ad7ec0e__0 = 0;
        __VdynTrigger_h7ad7ec0e__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h7ad7ec0e__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                         "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                         938);
            __Vtrigprevexpr_h8896beb8__0 = VL_LTS_III(32, 0U, this->__PVT__m_is_relevant_completed);
            __VdynTrigger_h7ad7ec0e__0 = __Vtrigprevexpr_h8896beb8__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h7ad7ec0e__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                     "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                     938);
    }
    __Vfork_3__sync.done("../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                         913);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0\n"); );
    // Locals
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_0__77__is_relevant_entries;
    __Vtask___VforkTask_0__77__is_relevant_entries.atDefault() = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_38> __Vtask___VforkTask_0__77____VDynScope_unnamedblk241_6;
    IData/*31:0*/ __Vtask___VforkTask_0__77____VlefCall_0__uvm_report_enabled;
    __Vtask___VforkTask_0__77____VlefCall_0__uvm_report_enabled = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__Vfuncout;
    __Vfunc_uvm_report_enabled__79__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__77____VDynScope_unnamedblk241_6 
        = this->__Vtask___VforkTask_1__75___Vwrapped_unnamedblk241_6__DOT____VDynScope_unnamedblk241_6;
    __Vtask___VforkTask_0__77__is_relevant_entries 
        = this->__Vtask___VforkTask_1__75__is_relevant_entries;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                            918);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(__Vtask___VforkTask_0__77__is_relevant_entries.at(VL_NULL_CHECK(__Vtask___VforkTask_0__77____VDynScope_unnamedblk241_6, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 922)
                                                                                ->__PVT__k)), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 922)
                           ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 922)->__VnoInFunc_wait_for_relevant(vlProcess, vlSymsp);
    if ((VL_TIME_UNITED_D(1) != VL_ITOR_D_Q(64, this->__PVT__m_last_wait_relevant_time))) {
        this->__PVT__m_last_wait_relevant_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        this->__PVT__m_wait_relevant_count = 0U;
    } else {
        this->__PVT__m_wait_relevant_count = ((IData)(1U) 
                                              + this->__PVT__m_wait_relevant_count);
        if (VL_GTS_III(32, this->__PVT__m_wait_relevant_count, this->__PVT__m_max_zero_time_wait_relevant_count)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "SEQRELEVANTLOOP"s, __Vfunc_uvm_report_enabled__79__Vfuncout);
            __Vtask___VforkTask_0__77____VlefCall_0__uvm_report_enabled 
                = __Vfunc_uvm_report_enabled__79__Vfuncout;
            if ((0U != __Vtask___VforkTask_0__77____VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRELEVANTLOOP"s, VL_SFORMATF_N_NX("Zero time loop detected, passed wait_for_relevant %0d times without time advancing",1
                                                                                , '~',32,this->__PVT__m_wait_relevant_count) , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000003a2U, ""s, 1U);
            }
        }
    }
    this->__PVT__m_is_relevant_completed = 1U;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_priority;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_priority;
    std::string __VlefCall_0__get_full_name;
    {
        m_get_seq_item_priority__Vfuncrtn = 0U;
        if ((0xffffffffU != VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 959)
             ->__PVT__item_priority)) {
            if (VL_GTES_III(32, 0U, VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 960)
                            ->__PVT__item_priority)) {
                VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 963)
                              ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 963)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQITEMPRI"s, VL_SFORMATF_N_NX("Sequence item from %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 964)
                                                                                ->__PVT__item_priority) , 0U, ""s, 0U, ""s, 0U);
            }
            m_get_seq_item_priority__Vfuncrtn = VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 966)
                ->__PVT__item_priority;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 969)
                      ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 969)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
        if (VL_GTS_III(32, 0U, __VlefCall_1__get_priority)) {
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 972)
                          ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 972)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 973)
                          ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 973)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_3__get_priority);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQDEFPRI"s, VL_SFORMATF_N_NX("Sequence %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , '~',32,__VlefCall_3__get_priority) , 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 975)
                      ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 975)->__VnoInFunc_get_priority(vlSymsp, m_get_seq_item_priority__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_ha8f22451__0;
    __Vtrigprevexpr_ha8f22451__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ lock_arb_size;
    {
        lock_arb_size = 0U;
        while (true) {
            lock_arb_size = this->__PVT__m_lock_arb_size;
            if (this->__PVT__arb_completed.exists(request_id)) {
                this->__PVT__arb_completed.erase(request_id);
                goto __Vlabel0;
            }
            if ((lock_arb_size == this->__PVT__m_lock_arb_size)) {
                CData/*0:0*/ __VdynTrigger_h9afd586f__0;
                __VdynTrigger_h9afd586f__0 = 0;
                __VdynTrigger_h9afd586f__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h9afd586f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                 "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                                 994);
                    __Vtrigprevexpr_ha8f22451__0 = 
                        (lock_arb_size != this->__PVT__m_lock_arb_size);
                    __VdynTrigger_h9afd586f__0 = __Vtrigprevexpr_ha8f22451__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9afd586f__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                             "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                             994);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed\n"); );
    // Body
    this->__PVT__arb_completed.at(request_id) = 1U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> child_parent;
    {
        is_child__Vfuncrtn = 0U;
        if ((VlNull{} == child)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null child"s, 0U, ""s, 0U, ""s, 0U);
        }
        if ((VlNull{} == parent)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null parent"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(child, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1022)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        while ((VlNull{} != child_parent)) {
            VL_NULL_CHECK(child_parent, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1024)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(parent, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1024)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                is_child__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(child_parent, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1027)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        }
        is_child__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> seq;
    seq = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "uvm_sequence"s);
    VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1040)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this});
    VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1041)->__VnoInFunc_set_parent_sequence(vlSymsp, seq);
    VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1042)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this});
    co_await VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1043)->__VnoInFunc_start_item(vlProcess, vlSymsp, item, 0xffffffffU, VlNull{});
    co_await VL_NULL_CHECK(seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1044)->__VnoInFunc_finish_item(vlProcess, vlSymsp, item, 0xffffffffU);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __VlefCall_1__self;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __VlefCall_0__self;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> req_s;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "wait_for_grant passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    if (lock_request) {
        req_s = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1067)->__PVT__grant = 0U;
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1068)->__PVT__sequence_id 
            = my_seq_id;
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1069)->__PVT__request = 1U;
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1070)->__PVT__sequence_ptr 
            = sequence_ptr;
        __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1071)->__PVT__request_id 
            = __Vincrement3;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_0__self);
        VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1072)->__PVT__process_id 
            = __VlefCall_0__self;
        this->__PVT__arb_sequence_q.push_back(req_s);
    }
    req_s = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1078)->__PVT__grant = 0U;
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1079)->__PVT__request = 0U;
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1080)->__PVT__sequence_id 
        = my_seq_id;
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1081)->__PVT__item_priority 
        = item_priority;
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1082)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1083)->__PVT__request_id 
        = __Vincrement4;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1084)->__PVT__process_id 
        = __VlefCall_1__self;
    this->__PVT__arb_sequence_q.push_back(req_s);
    {
        // Inlined CFunc: __VnoInFunc_m_update_lists
        this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                        + this->__PVT__m_lock_arb_size);
    }
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1090)
                                                                ->__PVT__request_id);
    VL_NULL_CHECK(VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1095)
                  ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1095)->__PVT__m_wait_for_grant_semaphore 
        = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(req_s, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1095)
                                       ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1095)
           ->__PVT__m_wait_for_grant_semaphore);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hee6dd475__0;
    __Vtrigprevexpr_hee6dd475__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h774fd7f4__0;
    __Vtrigprevexpr_h774fd7f4__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ sequence_id;
    sequence_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1107)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, sequence_id);
    this->__PVT__m_wait_for_item_sequence_id = 0xffffffffU;
    this->__PVT__m_wait_for_item_transaction_id = 0xffffffffU;
    if ((0xffffffffU == transaction_id)) {
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            CData/*0:0*/ __VdynTrigger_h8d2f14a2__0;
            __VdynTrigger_h8d2f14a2__0 = 0;
            __VdynTrigger_h8d2f14a2__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h8d2f14a2__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                             "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                             1112);
                __Vtrigprevexpr_h774fd7f4__0 = (this->__PVT__m_wait_for_item_sequence_id 
                                                == sequence_id);
                __VdynTrigger_h8d2f14a2__0 = __Vtrigprevexpr_h774fd7f4__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8d2f14a2__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                         "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                         1112);
        }
    } else if ((1U & (~ ((this->__PVT__m_wait_for_item_sequence_id 
                          == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                             == transaction_id))))) {
        CData/*0:0*/ __VdynTrigger_h1891091b__0;
        __VdynTrigger_h1891091b__0 = 0;
        __VdynTrigger_h1891091b__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h1891091b__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                         "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                         1114);
            __Vtrigprevexpr_hee6dd475__0 = ((this->__PVT__m_wait_for_item_sequence_id 
                                             == sequence_id) 
                                            & (this->__PVT__m_wait_for_item_transaction_id 
                                               == transaction_id));
            __VdynTrigger_h1891091b__0 = __Vtrigprevexpr_hee6dd475__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1891091b__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                     "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                                     1114);
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__is_child;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk242__DOT__i;
    unnamedblk242__DOT__i = 0;
    IData/*31:0*/ unnamedblk242__DOT__i__Vloopsize;
    unnamedblk242__DOT__i__Vloopsize = 0;
    {
        is_blocked__Vfuncrtn = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "is_blocked passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        }
        unnamedblk242__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk242__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk242__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk242__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1129)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1130)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __VlefLogAnd_3 = (__VlefCall_0__get_inst_id 
                              != __VlefCall_1__get_inst_id);
            if (__VlefLogAnd_3) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, this->__PVT__lock_list.at(unnamedblk242__DOT__i), sequence_ptr, __VlefCall_2__is_child);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__is_child)));
            }
            if (__VlefLogAnd_3) {
                is_blocked__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk242__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk242__DOT__i = ((IData)(1U) 
                                         + unnamedblk242__DOT__i);
            }
        }
        is_blocked__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk243__DOT__i;
    unnamedblk243__DOT__i = 0;
    IData/*31:0*/ unnamedblk243__DOT__i__Vloopsize;
    unnamedblk243__DOT__i__Vloopsize = 0;
    IData/*31:0*/ my_seq_id;
    {
        has_lock__Vfuncrtn = 0U;
        my_seq_id = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "has_lock passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
        unnamedblk243__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk243__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk243__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk243__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1150)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1150)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                has_lock__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk243__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk243__DOT__i = ((IData)(1U) 
                                         + unnamedblk243__DOT__i);
            }
        }
        has_lock__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __VlefCall_1__self;
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ __Vincrement5;
    __Vincrement5 = 0;
    IData/*31:0*/ my_seq_id;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request> new_req;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "lock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    new_req = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1173)->__PVT__grant = 0U;
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1174)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1174)->__PVT__sequence_id 
        = __VlefCall_0__get_sequence_id;
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1175)->__PVT__request = 1U;
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1176)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1177)->__PVT__request_id 
        = __Vincrement5;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1178)->__PVT__process_id 
        = __VlefCall_1__self;
    if (lock) {
        this->__PVT__arb_sequence_q.push_back(new_req);
    } else {
        this->__PVT__arb_sequence_q.push_front(new_req);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(new_req, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1194)
                                                                ->__PVT__request_id);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__128__Vfuncout;
    __Vtask_get_inst_id__128__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    VlQueue<IData/*31:0*/> unnamedblk244__DOT__q;
    IData/*31:0*/ unnamedblk244__DOT__seqid;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "m_unlock_req passed null sequence_ptr"s, 0U, ""s, 0U, ""s, 0U);
    }
    unnamedblk244__DOT__q.clear();
    unnamedblk244__DOT__q.atDefault() = 0;
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1211)->__VnoInFunc_get_inst_id(vlSymsp, unnamedblk244__DOT__seqid);
    unnamedblk244__DOT__q = this->__PVT__lock_list.find_first_index(
                                                                    [&](
                                                                        IData/*31:0*/ item__DOT__index, 
                                                                        VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> item) -> 
                                                                    CData/*31:0*/ {
            return ((([&]() {
                            VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1212)
                      ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__128__Vfuncout);
                        }(), __Vtask_get_inst_id__128__Vfuncout) 
                     == unnamedblk244__DOT__seqid));
        }
    );
    if ((1U == unnamedblk244__DOT__q.size())) {
        this->__PVT__lock_list.erase(unnamedblk244__DOT__q.at(0U));
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    } else {
        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1220)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRUNL"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN("Sequence '"s, __VlefCall_0__get_full_name), "' called ungrab / unlock, but didn't have lock"s)), 0U, ""s, 0U, ""s, 0U);
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 1U);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 0U);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_12__m_get_sqr_sequence_id;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_sequence_state;
    CData/*0:0*/ __VlefCall_7__is_child;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_sequence_state;
    CData/*0:0*/ __VlefCall_0__is_child;
    IData/*31:0*/ i;
    IData/*31:0*/ seq_id;
    i = 0U;
    seq_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1267)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 0U, seq_id);
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__arb_sequence_q.size(), i)) {
            __VlefCall_0__is_child = (VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1274)
                                      ->__PVT__sequence_id 
                                      == seq_id);
            if ((1U & (~ (IData)(__VlefCall_0__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1275)
                                           ->__PVT__sequence_ptr, __VlefCall_0__is_child);
            }
            if (__VlefCall_0__is_child) {
                VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1276)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_1__get_sequence_state);
                if ((0x00000100U == __VlefCall_1__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1277)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1277)
                                      ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1277)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_3__get_full_name)
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000004fdU, ""s, 1U);
                    }
                }
                this->__PVT__arb_sequence_q.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size()));
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__lock_list.size(), i)) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1293)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1293)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
            __VlefCall_7__is_child = (__VlefCall_5__get_inst_id 
                                      == __VlefCall_6__get_inst_id);
            if ((1U & (~ (IData)(__VlefCall_7__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, this->__PVT__lock_list.at(i), __VlefCall_7__is_child);
            }
            if (__VlefCall_7__is_child) {
                VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1295)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_8__get_sequence_state);
                if ((0x00000100U == __VlefCall_8__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_9__uvm_report_enabled);
                    if ((0U != __VlefCall_9__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1296)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        VL_NULL_CHECK(this->__PVT__lock_list.at(i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1296)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_10__get_full_name)
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000510U, ""s, 1U);
                    }
                }
                this->__PVT__lock_list.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__lock_list.size()));
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1308)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_12__m_get_sqr_sequence_id);
    this->__VnoInFunc_m_unregister_sequence(vlSymsp, __VlefCall_12__m_get_sqr_sequence_id);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    while ((VlNull{} != seq_ptr)) {
        this->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, seq_ptr);
        this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    VL_NULL_CHECK(sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1340)->__VnoInFunc_m_kill(vlProcess, vlSymsp);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed\n"); );
    // Body
    is_grabbed__Vfuncrtn = (0U != this->__PVT__lock_list.size());
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber\n"); );
    // Body
    {
        if ((0U == this->__PVT__lock_list.size())) {
            current_grabber__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        current_grabber__Vfuncrtn = this->__PVT__lock_list.at(
                                                              (this->__PVT__lock_list.size() 
                                                               - (IData)(1U)));
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_2;
    CData/*0:0*/ __VlefCall_1__is_blocked;
    CData/*0:0*/ __VlefCall_0__is_relevant;
    IData/*31:0*/ unnamedblk245__DOT__i;
    unnamedblk245__DOT__i = 0;
    IData/*31:0*/ unnamedblk245__DOT__i__Vloopsize;
    unnamedblk245__DOT__i__Vloopsize = 0;
    {
        has_do_available__Vfuncrtn = 0U;
        unnamedblk245__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk245__DOT__i, this->__PVT__arb_sequence_q.size())) {
            unnamedblk245__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk245__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1369)
                          ->__PVT__sequence_ptr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1369)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_0__is_relevant);
            __VlefLogAnd_2 = __VlefCall_0__is_relevant;
            if (__VlefLogAnd_2) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk245__DOT__i), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1370)
                                             ->__PVT__sequence_ptr, __VlefCall_1__is_blocked);
                __VlefLogAnd_2 = (1U & (~ (IData)(__VlefCall_1__is_blocked)));
            }
            if (__VlefLogAnd_2) {
                has_do_available__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk245__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
                unnamedblk245__DOT__i = ((IData)(1U) 
                                         + unnamedblk245__DOT__i);
            }
        }
        has_do_available__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration\n"); );
    // Body
    this->__PVT__m_arbitration = val;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration\n"); );
    // Body
    get_arbitration__Vfuncrtn = this->__PVT__m_arbitration;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write\n"); );
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    CData/*0:0*/ __VdynTrigger_heb53d3cb__4;
    __VdynTrigger_heb53d3cb__4 = 0;
    __VdynTrigger_heb53d3cb__4 = 0U;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    while ((1U & (~ (IData)(__VdynTrigger_heb53d3cb__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     461);
        __VdynTrigger_heb53d3cb__4 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                      != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_heb53d3cb__4);
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                 461);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/base/uvm_globals.svh", 
                                            460);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_h8b5250ea__4;
    __Vintraval_h8b5250ea__4 = 0;
    __Vintraval_h8b5250ea__4 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h8b5250ea__4);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h8b5250ea__4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h2615856f__4;
    __VdynTrigger_h2615856f__4 = 0;
    __VdynTrigger_h2615856f__4 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h2615856f__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        __VdynTrigger_h2615856f__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2615856f__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                     460);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "../../uvm/distrib/src/base/uvm_globals.svh", 
                                                 460);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h8b5250ea__4;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ new_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_max_zero_time_wait_relevant_count\n"); );
    // Body
    this->__PVT__m_max_zero_time_wait_relevant_count 
        = new_val;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_27__get_name;
    std::string __VlefCall_26__get_type_name;
    IData/*31:0*/ __VlefCall_25__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_24;
    IData/*31:0*/ __VlefCond_23;
    IData/*31:0*/ __VlefCall_22__randomize;
    std::string __VlefCall_21__get_name;
    std::string __VlefCall_20__get_type_name;
    IData/*31:0*/ __VlefCall_19__uvm_report_enabled;
    std::string __VlefCall_18__get_name;
    IData/*31:0*/ __VlefCall_17__uvm_report_enabled;
    std::string __VlefCall_16__get_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_14;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> __VlefCall_13__create_object_by_type;
    std::string __VlefCall_12__get_type_name;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_8;
    std::string __VlefCall_7__get_name;
    IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_5__read;
    IData/*31:0*/ __VlefExpr_4;
    CData/*0:0*/ __VlefLogAnd_3;
    IData/*31:0*/ __VlefCall_2__size;
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk246__DOT__i;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_base> unnamedblk246__DOT__unnamedblk247__DOT__rsrc;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz16> unnamedblk246__DOT__unnamedblk247__DOT__sbr;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource__Tz6> unnamedblk246__DOT__unnamedblk247__DOT__owr;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object_wrapper> unnamedblk246__DOT__unnamedblk247__DOT__unnamedblk248__DOT__wrapper;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_resource_pool> rp;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_queue__Tz29> rq;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> f;
    __VDynScope_start_phase_sequence_7 = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1432)->__PVT__phase 
        = phase;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, rp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1437)->__VnoInFunc_get_factory(vlSymsp, f);
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1440)
                      ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1440)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        VL_NULL_CHECK(rp, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1440)->__VnoInFunc_lookup_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name), "_phase"s)), "default_sequence"s, VlNull{}, 0U, rq);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_sort_by_precedence(vlProcess, vlSymsp, rq);
        unnamedblk246__DOT__i = 0U;
        unnamedblk246__DOT__i = 0U;
        while (true) {
            __VlefLogAnd_3 = (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1445)
                              ->__PVT__seq);
            if (__VlefLogAnd_3) {
                VL_NULL_CHECK(rq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1445)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                __VlefLogAnd_3 = VL_LTS_III(32, unnamedblk246__DOT__i, __VlefCall_2__size);
            }
            if (!(__VlefLogAnd_3)) break;
            VL_NULL_CHECK(rq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1446)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk246__DOT__i, unnamedblk246__DOT__unnamedblk247__DOT__rsrc);
            __VlefExpr_4 = VL_CAST_DYNAMIC(unnamedblk246__DOT__unnamedblk247__DOT__rsrc, unnamedblk246__DOT__unnamedblk247__DOT__sbr);
            if ((__VlefExpr_4 && (VlNull{} != unnamedblk246__DOT__unnamedblk247__DOT__sbr))) {
                VL_NULL_CHECK(unnamedblk246__DOT__unnamedblk247__DOT__sbr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1456)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, __VlefCall_5__read);
                VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1456)->__PVT__seq 
                    = __VlefCall_5__read;
                if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1457)
                     ->__PVT__seq)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/SB/NULL"s, __VlefCall_6__uvm_report_enabled);
                    if ((0U != __VlefCall_6__uvm_report_enabled)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1459)
                                      ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1459)->__VnoInFunc_get_name(vlSymsp, __VlefCall_7__get_name);
                        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/SB/NULL"s, 
                                                          VL_CVT_PACK_STR_NN(
                                                                             VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_7__get_name), "' explicitly disabled"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005b3U, ""s, 1U);
                    }
                    goto __Vlabel0;
                }
            } else {
                __VlefExpr_8 = VL_CAST_DYNAMIC(unnamedblk246__DOT__unnamedblk247__DOT__rsrc, unnamedblk246__DOT__unnamedblk247__DOT__owr);
                if ((__VlefExpr_8 && (VlNull{} != unnamedblk246__DOT__unnamedblk247__DOT__owr))) {
                    VL_NULL_CHECK(unnamedblk246__DOT__unnamedblk247__DOT__owr, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1468)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, unnamedblk246__DOT__unnamedblk247__DOT__unnamedblk248__DOT__wrapper);
                    if ((VlNull{} == unnamedblk246__DOT__unnamedblk247__DOT__unnamedblk248__DOT__wrapper)) {
                        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "UVM/SQR/PH/DEF/OW/NULL"s, __VlefCall_9__uvm_report_enabled);
                        if ((0U != __VlefCall_9__uvm_report_enabled)) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1471)
                                          ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1471)->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/SQR/PH/DEF/OW/NULL"s, 
                                                              VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default phase sequence for phase '"s, __VlefCall_10__get_name), "' explicitly disabled"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005bfU, ""s, 1U);
                        }
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                    VL_NULL_CHECK(unnamedblk246__DOT__unnamedblk247__DOT__unnamedblk248__DOT__wrapper, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1476)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_12__get_type_name);
                    VL_NULL_CHECK(f, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1475)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, unnamedblk246__DOT__unnamedblk247__DOT__unnamedblk248__DOT__wrapper, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_11__get_full_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_12__get_type_name), __VlefCall_13__create_object_by_type);
                    __VlefExpr_14 = VL_CAST_DYNAMIC(__VlefCall_13__create_object_by_type, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1475)
                                                    ->__PVT__seq);
                    if (((! __VlefExpr_14) || (VlNull{} 
                                               == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1477)
                                               ->__PVT__seq))) {
                        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "PHASESEQ"s, __VlefCall_15__uvm_report_enabled);
                        if ((0U != __VlefCall_15__uvm_report_enabled)) {
                            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1479)
                                          ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1479)->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                                 VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default sequence for phase '"s, __VlefCall_16__get_name), "' %s is not a sequence type"s)), 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005c7U, ""s, 1U);
                        }
                        goto __Vlabel0;
                    }
                }
            }
            unnamedblk246__DOT__i = ((IData)(1U) + unnamedblk246__DOT__i);
        }
        if ((VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1485)
             ->__PVT__seq)) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_17__uvm_report_enabled);
            if ((0U != __VlefCall_17__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1487)
                              ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1487)->__VnoInFunc_get_name(vlSymsp, __VlefCall_18__get_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default phase sequence for phase '"s, __VlefCall_18__get_name), "'"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005cfU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_19__uvm_report_enabled);
        if ((0U != __VlefCall_19__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1492)
                          ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1492)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_20__get_type_name);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1492)
                          ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1492)->__VnoInFunc_get_name(vlSymsp, __VlefCall_21__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting default sequence '"s, __VlefCall_20__get_type_name), "' for phase '"s), __VlefCall_21__get_name), "'"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005d4U, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1494)
                      ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1494)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1495)
                      ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1495)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1496)
                      ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1496)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1497)
                      ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1497)->__VnoInFunc_set_starting_phase(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1497)
                                                                                ->__PVT__phase);
        __VlefLogAnd_24 = (1U & (~ VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1499)
                                                 ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1499)
                                 ->__PVT__do_not_randomize));
        if (__VlefLogAnd_24) {
            if ((VlNull{} != VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1499)
                 ->__PVT__seq)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1499)
                              ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1499)->__VnoInFunc_randomize(vlSymsp, __VlefCall_22__randomize);
                __VlefCond_23 = __VlefCall_22__randomize;
            } else {
                __VlefCond_23 = 0U;
            }
            __VlefLogAnd_24 = (1U & (~ (0U != __VlefCond_23)));
        }
        if (__VlefLogAnd_24) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "STRDEFSEQ"s, __VlefCall_25__uvm_report_enabled);
            if ((0U != __VlefCall_25__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1501)
                              ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1501)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_26__get_type_name);
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1501)
                              ->__PVT__phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1501)->__VnoInFunc_get_name(vlSymsp, __VlefCall_27__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Randomization failed for default sequence '"s, __VlefCall_26__get_type_name), "' for phase '"s), __VlefCall_27__get_name), "'"s)), 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005ddU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_phase_sequence____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_start_phase_sequence_7);
        __Vlabel0: ;
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0\n"); );
    // Locals
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03a__VDynScope_39> __Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7;
    IData/*31:0*/ __Vtask___VforkTask_3__204____VlefCall_3__uvm_create_random_seed;
    __Vtask___VforkTask_3__204____VlefCall_3__uvm_create_random_seed = 0;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __Vtask___VforkTask_3__204____VlefCall_0__self;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_process_wrapper> __Vtask___VforkTask_3__204__w;
    VlClassRef<Vuvm_pkg_std__03a__03aprocess> __Vfunc_self__206__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__209__Vfuncout;
    __Vfunc_uvm_create_random_seed__209__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__209____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__209____VlefExpr_4 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__209____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__209____VlefExpr_3 = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__209____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__209____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__209____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__211____Vincrement2;
    __Vfunc_uvm_instance_scope__211____Vincrement2 = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__212__verbosity;
    __Vtask_uvm_report_error__212__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__212__line;
    __Vtask_uvm_report_error__212__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__212__report_enabled_checked;
    __Vtask_uvm_report_error__212__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__213__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__214__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__216__Vfuncout;
    __Vfunc_uvm_oneway_hash__216__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__216__seed;
    __Vfunc_uvm_oneway_hash__216__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7 
        = __VDynScope_start_phase_sequence_7;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 
                                            1505);
    __Vtask___VforkTask_3__204__w = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_process_wrapper, vlSymsp);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__206__Vfuncout);
    __Vtask___VforkTask_3__204____VlefCall_0__self 
        = __Vfunc_self__206__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_3__204__w, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1508)->__PVT__pid 
        = __Vtask___VforkTask_3__204____VlefCall_0__self;
    VL_NULL_CHECK(__Vtask___VforkTask_3__204__w, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1509)->__PVT__seq 
        = VL_NULL_CHECK(__Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1509)
        ->__PVT__seq;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1510)
                  ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1510)->__VnoInFunc_get_type_name(vlSymsp, this->__Vtask_get_type_name__207__Vfuncout);
    this->__Vtask___VforkTask_3__204____VlefCall_1__get_type_name 
        = this->__Vtask_get_type_name__207__Vfuncout;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__208__Vfuncout);
    this->__Vtask___VforkTask_3__204____VlefCall_2__get_full_name 
        = this->__Vfunc_get_full_name__208__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__209__inst_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__204____VlefCall_2__get_full_name);
    this->__Vfunc_uvm_create_random_seed__209__type_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__204____VlefCall_1__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__209__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__209__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__209__inst_id))) {
        __Vfunc_uvm_create_random_seed__209____VlefCall_0__new 
            = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.at(this->__Vfunc_uvm_create_random_seed__209__inst_id) 
            = __Vfunc_uvm_create_random_seed__209____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__209__inst_id);
    __Vfunc_uvm_instance_scope__211____Vincrement2 = 0U;
    {
        if ((""s != this->__Vfunc_uvm_instance_scope__211__Vfuncout)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(this->__Vfunc_uvm_instance_scope__211__Vfuncout
                      ,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(this->__Vfunc_uvm_instance_scope__211__Vfuncout) 
               - (IData)(1U));
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(this->__Vfunc_uvm_instance_scope__211__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vfunc_uvm_instance_scope__211____Vincrement2 
                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                   - (IData)(1U));
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vfunc_uvm_instance_scope__211____Vincrement2;
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(this->__Vfunc_uvm_instance_scope__211__Vfuncout,__Vfunc_uvm_instance_scope__211____Vincrement2);
        }
        if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
            __Vtask_uvm_report_error__212__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__212__context_name = ""s;
            __Vtask_uvm_report_error__212__line = 0U;
            this->__Vtask_uvm_report_error__212__filename = ""s;
            __Vtask_uvm_report_error__212__verbosity = 0x00000064U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__212__message
                          ,"Illegal name %s in scope string",1
                          , 'S',&(this->__Vfunc_uvm_instance_scope__211__Vfuncout));
            this->__Vtask_uvm_report_error__212__id = "SCPSTR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__213__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__213__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__214__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__214__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__212__id, this->__Vtask_uvm_report_error__212__message, __Vtask_uvm_report_error__212__verbosity, this->__Vtask_uvm_report_error__212__filename, __Vtask_uvm_report_error__212__line, this->__Vtask_uvm_report_error__212__context_name, (IData)(__Vtask_uvm_report_error__212__report_enabled_checked));
        }
        this->__Vfunc_uvm_instance_scope__211__Vfuncout 
            = VL_SUBSTR_N(this->__Vfunc_uvm_instance_scope__211__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
    this->__Vfunc_uvm_create_random_seed__209____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__211__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__209__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__209____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__209__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 414)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__209__type_id))) {
        __Vfunc_uvm_oneway_hash__216__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__216__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__209__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__209__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__216__seed)))) {
            __Vfunc_uvm_oneway_hash__216__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__216__Vfuncout = __Vfunc_uvm_oneway_hash__216__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__216__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__216__string_in,__Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel1;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__216__unnamedblk1__DOT___byte);
            }
            __Vlabel1: ;
        }
        __Vfunc_uvm_oneway_hash__216__Vfuncout = (__Vfunc_uvm_oneway_hash__216__Vfuncout 
                                                  + 
                                                  (~ 
                                                   ((((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                            >> 8U))) 
                                                     << 0x00000010U) 
                                                    | ((0x0000ff00U 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U)) 
                                                       | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__209____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__216__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 415)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__209__type_id) 
            = __Vfunc_uvm_create_random_seed__209____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 417)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__209__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 418)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__209__type_id) = 0U;
    }
    __Vfunc_uvm_create_random_seed__209____VlefExpr_3 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__209__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__209__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 424)->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__209__type_id) 
        = __Vfunc_uvm_create_random_seed__209____VlefExpr_3;
    __Vfunc_uvm_create_random_seed__209____VlefExpr_4 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__209__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 425)->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__209__type_id) 
        = __Vfunc_uvm_create_random_seed__209____VlefExpr_4;
    __Vfunc_uvm_create_random_seed__209__Vfuncout = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "../../uvm/distrib/src/base/uvm_misc.svh", 427)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__209__type_id);
    __Vtask___VforkTask_3__204____VlefCall_3__uvm_create_random_seed 
        = __Vfunc_uvm_create_random_seed__209__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__204__w, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1510)
                  ->__PVT__pid, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1510)->__VnoInFunc_srandom(vlSymsp, __Vtask___VforkTask_3__204____VlefCall_3__uvm_create_random_seed);
    this->__PVT__m_default_sequences.at(VL_NULL_CHECK(__Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1511)
                                        ->__PVT__phase) 
        = __Vtask___VforkTask_3__204__w;
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1513)
                           ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1513)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
    this->__PVT__m_default_sequences.erase(VL_NULL_CHECK(__Vtask___VforkTask_3__204____VDynScope_start_phase_sequence_7, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1514)
                                           ->__PVT__phase);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_phase_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_4__get_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_type_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if (this->__PVT__m_default_sequences.exists(phase)) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                        .at(phase), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1527)
                          ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1527)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1527)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Killing default sequence '"s, __VlefCall_1__get_type_name), "' for phase '"s), __VlefCall_2__get_name), "'"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005f7U, ""s, 1U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__m_default_sequences
                                    .at(phase), "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1528)
                      ->__PVT__seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1528)->__VnoInFunc_kill(vlProcess, vlSymsp);
    } else {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            VL_NULL_CHECK(phase, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1533)->__VnoInFunc_get_name(vlSymsp, __VlefCall_4__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default sequence to kill for phase '"s, __VlefCall_4__get_name), "'"s)), 0x00000190U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000005fdU, ""s, 1U);
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_add_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_add_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Registering sequence '"s, type_name), "' with sequencer '"s), __VlefCall_1__get_full_name), "' is deprecated. "s)), 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000616U, ""s, 1U);
    }
    if ((! this->__PVT__sequence_ids.exists(type_name))) {
        this->__PVT__sequence_ids.at(type_name) = this->__PVT__sequences.size();
        this->__PVT__sequences.push_back(type_name);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence\n"); );
    // Body
    IData/*31:0*/ unnamedblk250__DOT__i;
    this->__PVT__sequence_ids.erase(type_name);
    unnamedblk250__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk250__DOT__i, this->__PVT__sequences.size())) {
        if ((this->__PVT__sequences.at(unnamedblk250__DOT__i) 
             == type_name)) {
            this->__PVT__sequences.erase(unnamedblk250__DOT__i);
        }
        unnamedblk250__DOT__i = ((IData)(1U) + unnamedblk250__DOT__i);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_sequences_queue(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<std::string> &sequencer_sequence_lib) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_sequences_queue\n"); );
    // Body
    IData/*31:0*/ unnamedblk251__DOT__j;
    unnamedblk251__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk251__DOT__j, sequencer_sequence_lib.size())) {
        this->__PVT__sequence_ids.at(sequencer_sequence_lib.at(unnamedblk251__DOT__j)) 
            = this->__PVT__sequences.size();
        this->__PVT__sequences.push_back(sequencer_sequence_lib.at(unnamedblk251__DOT__j));
        unnamedblk251__DOT__j = ((IData)(1U) + unnamedblk251__DOT__j);
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_default_sequence(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_default_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_9;
    IData/*31:0*/ __VlefCall_8__randomize;
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> __VlefCall_6__create_object_by_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> factory;
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
        VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1605)->__VnoInFunc_get_factory(vlSymsp, factory);
        if ((((""s == this->__PVT__default_sequence) 
              | (0U == this->__PVT__count)) | ((0U 
                                                == this->__PVT__sequences.size()) 
                                               & ("uvm_random_sequence"s 
                                                  == this->__PVT__default_sequence)))) {
            goto __Vlabel0;
        }
        if (((~ (IData)(this->__PVT__m_default_seq_set)) 
             & (VlNull{} != Vuvm_pkg_uvm_pkg__03a__03auvm_component::__PVT__m_domain))) {
            this->__PVT__default_sequence = ""s;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x0000012cU, 0U, "NODEFSEQ"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NODEFSEQ"s, "The \"default_sequence\" has not been set. Since this sequencer has a runtime phase schedule, the uvm_random_sequence is not being started for the run phase."s, 0x0000012cU, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000651U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        __VlefCall_1__exists = this->__PVT__m_default_seq_set;
        if (__VlefCall_1__exists) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz16__Vclpkg.__VnoInFunc_exists(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, "run_phase"s, "default_sequence"s, 0U, __VlefCall_1__exists);
            if ((1U & (~ (IData)(__VlefCall_1__exists)))) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz6__Vclpkg.__VnoInFunc_exists(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, "run_phase"s, "default_sequence"s, 0U, __VlefCall_1__exists);
            }
        }
        if (__VlefCall_1__exists) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "MULDEFSEQ"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULDEFSEQ"s, "A default phase sequence has been set via the \"<phase_name>.default_sequence\" configuration option.The deprecated \"default_sequence\" configuration option is ignored."s, 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000065cU, ""s, 1U);
            }
            goto __Vlabel0;
        }
        if ((((2U == this->__PVT__sequences.size()) 
              & ("uvm_random_sequence"s == this->__PVT__sequences.at(0U))) 
             & ("uvm_exhaustive_sequence"s == this->__PVT__sequences.at(1U)))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOUSERSEQ"s, "No user sequence available. Not starting the (deprecated) default sequence."s, 0x0000012cU, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting (deprecated) default sequence '"s, this->__PVT__default_sequence), "' on sequencer '"s), __VlefCall_4__get_full_name), "'. See documentation for uvm_sequencer_base::start_phase_sequence() for information on "s), "starting default sequences in UVM."s)), 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000066cU, ""s, 1U);
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
        VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1647)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, this->__PVT__default_sequence, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_full_name), this->__PVT__default_sequence, __VlefCall_6__create_object_by_name);
        __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__create_object_by_name, m_seq);
        if ((! __VlefExpr_7)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("Default sequence set to invalid value : "s, this->__PVT__default_sequence)), 0U, ""s, 0U, ""s, 0U);
        }
        if ((VlNull{} == m_seq)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRDEFSEQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1657)->__VnoInFunc_set_starting_phase(vlProcess, vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__run_ph);
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1658)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1659)->__VnoInFunc_set_parent_sequence(vlSymsp, VlNull{});
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1660)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1661)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        if ((VlNull{} != m_seq)) {
            VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1662)->__VnoInFunc_randomize(vlSymsp, __VlefCall_8__randomize);
            __VlefCond_9 = __VlefCall_8__randomize;
        } else {
            __VlefCond_9 = 0U;
        }
        if ((1U & (~ (0U != __VlefCond_9)))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, "Failed to randomize sequence"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        }
        co_await VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1665)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
        __Vlabel0: ;
    }
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_seq_kind(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_seq_kind\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_seq_kind__Vfuncrtn = 0U;
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m is deprecated",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequencer_base.get_seq_kind") , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x0000068dU, ""s, 1U);
        }
        if (this->__PVT__sequence_ids.exists(type_name)) {
            get_seq_kind__Vfuncrtn = this->__PVT__sequence_ids
                .at(type_name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "SEQNF"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SEQNF"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Sequence type_name '"s, type_name), "' not registered with this sequencer."s)), 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x00000693U, ""s, 1U);
        }
        get_seq_kind__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_sequence(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_factory> factory;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    std::string m_seq_type;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, cs);
    VL_NULL_CHECK(cs, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1696)->__VnoInFunc_get_factory(vlSymsp, factory);
    m_seq_type = ""s;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m is deprecated",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequencer_base.get_sequence") , 0U, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh"s, 0x000006a4U, ""s, 1U);
    }
    if ((VL_GTS_III(32, 0U, req_kind) | VL_GTES_III(32, req_kind, this->__PVT__sequences.size()))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQRNG"s, VL_SFORMATF_N_NX("Kind arg '%0d' out of range. Need 0-%0d",2
                                                                                , '~',32,req_kind
                                                                                , '~',32,
                                                                                (this->__PVT__sequences.size() 
                                                                                - (IData)(1U))) , 0x00000064U, ""s, 0U, ""s, 0U);
    }
    m_seq_type = this->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1709)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory cannot produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1718)->__PVT__print_sequence_info = 1U;
    VL_NULL_CHECK(m_seq, "../../uvm/distrib/src/seq/uvm_sequencer_base.svh", 1719)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base>{this});
    get_sequence__Vfuncrtn = m_seq;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_num_sequences(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_num_sequences\n"); );
    // Body
    num_sequences__Vfuncrtn = this->__PVT__sequences.size();
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_add_builtin_seqs(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ add_simple) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_add_builtin_seqs\n"); );
    // Body
    if ((! this->__PVT__sequence_ids.exists("uvm_random_sequence"s))) {
        this->__VnoInFunc_add_sequence(vlSymsp, "uvm_random_sequence"s);
    }
    if ((! this->__PVT__sequence_ids.exists("uvm_exhaustive_sequence"s))) {
        this->__VnoInFunc_add_sequence(vlSymsp, "uvm_exhaustive_sequence"s);
    }
    if (add_simple) {
        if ((! this->__PVT__sequence_ids.exists("uvm_simple_sequence"s))) {
            this->__VnoInFunc_add_sequence(vlSymsp, "uvm_simple_sequence"s);
        }
    }
}

VlCoroutine Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await Vuvm_pkg_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_start_default_sequence(vlProcess, vlSymsp);
    co_return;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuvm_pkg_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__seq_kind = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__arb_completed.atDefault() = 0;
    __PVT__m_sequencer_id = 0;
    __PVT__m_lock_arb_size = 0;
    __PVT__m_arb_size = 0;
    __PVT__m_wait_for_item_sequence_id = 0;
    __PVT__m_wait_for_item_transaction_id = 0;
    __PVT__m_is_relevant_completed = 0;
    __PVT__m_random_count = 0;
    __PVT__m_exhaustive_count = 0;
    __PVT__m_simple_count = 0;
    __PVT__m_default_seq_set = 0;
    __PVT__sequence_ids.atDefault() = 0;
    __PVT__seq_kind = 0;
    __Vtask___VforkTask_2__74__is_relevant_entries.atDefault() = 0;
    __Vtask___VforkTask_1__75__is_relevant_entries.atDefault() = 0;
}

Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::~Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_sequencer_base::~\n"); );
}
