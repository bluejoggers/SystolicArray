// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_mem__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_write\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_write\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_pre_read\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_post_read\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_sample\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ size, IData/*31:0*/ n_bits, std::string access, IData/*31:0*/ has_coverage) {
    VUVM_Activator_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    this->__PVT__m_locked = 0U;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__2__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0x000003afU;
            this->__Vtask_uvm_report_error__7__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            this->__Vtask_uvm_report_error__7__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' cannot have 0 bits"s));
            this->__Vtask_uvm_report_error__7__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
        }
        n_bits = 1U;
    }
    this->__PVT__m_size = size;
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_backdoor = VlNull{};
    this->__PVT__m_access = VL_TOUPPER_NN(access);
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_hdl_paths_pool = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz105, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__12__verbosity;
    __Vfunc_uvm_report_enabled__12__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__12__severity;
    __Vfunc_uvm_report_enabled__12__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__16__verbosity;
    __Vtask_uvm_report_fatal__16__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__16__line;
    __Vtask_uvm_report_fatal__16__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__16__report_enabled_checked;
    __Vtask_uvm_report_fatal__16__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__verbosity;
    __Vfunc_uvm_report_enabled__20__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__20__severity;
    __Vfunc_uvm_report_enabled__20__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
    __Vtask_uvm_report_error__25__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__25__line;
    __Vtask_uvm_report_error__25__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
    __Vtask_uvm_report_error__25__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_full_name;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg> unnamedblk431__DOT__cfg;
    if ((VlNull{} == parent)) {
        this->__Vfunc_uvm_report_enabled__12__id = "REG/NULL_PARENT"s;
        __Vfunc_uvm_report_enabled__12__severity = 3U;
        __Vfunc_uvm_report_enabled__12__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__13__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__13__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__14__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__12__verbosity, (IData)(__Vfunc_uvm_report_enabled__12__severity), this->__Vfunc_uvm_report_enabled__12__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_fatal__16__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_fatal__16__context_name = ""s;
            __Vtask_uvm_report_fatal__16__line = 0x000003c5U;
            this->__Vtask_uvm_report_fatal__16__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_fatal__16__verbosity = 0U;
            this->__Vtask_uvm_report_fatal__16__message = "configure: parent argument is null"s;
            this->__Vtask_uvm_report_fatal__16__id = "REG/NULL_PARENT"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                = __Vfunc_get__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                = __Vtask_get_root__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__16__id, this->__Vtask_uvm_report_fatal__16__message, __Vtask_uvm_report_fatal__16__verbosity, this->__Vtask_uvm_report_fatal__16__filename, __Vtask_uvm_report_fatal__16__line, this->__Vtask_uvm_report_fatal__16__context_name, (IData)(__Vtask_uvm_report_fatal__16__report_enabled_checked));
        }
    }
    this->__PVT__m_parent = parent;
    if ((("RW"s != this->__PVT__m_access) & ("RO"s 
                                             != this->__PVT__m_access))) {
        this->__Vfunc_uvm_report_enabled__20__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__20__severity = 2U;
        __Vfunc_uvm_report_enabled__20__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__21__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__21__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__22__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__20__verbosity, (IData)(__Vfunc_uvm_report_enabled__20__severity), this->__Vfunc_uvm_report_enabled__20__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__25__context_name = ""s;
            __Vtask_uvm_report_error__25__line = 0x000003caU;
            this->__Vtask_uvm_report_error__25__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_error__25__verbosity = 0U;
            this->__Vtask_uvm_report_error__25__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Memory '"s, __VlefCall_2__get_full_name), "' can only be RW or RO"s));
            this->__Vtask_uvm_report_error__25__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__27__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__25__id, this->__Vtask_uvm_report_error__25__message, __Vtask_uvm_report_error__25__verbosity, this->__Vtask_uvm_report_error__25__filename, __Vtask_uvm_report_error__25__line, this->__Vtask_uvm_report_error__25__context_name, (IData)(__Vtask_uvm_report_error__25__report_enabled_checked));
        }
        this->__PVT__m_access = "RW"s;
    }
    unnamedblk431__DOT__cfg = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam_cfg, vlSymsp);
    VL_NULL_CHECK(unnamedblk431__DOT__cfg, "../../uvm/distrib/src/reg/uvm_mem.svh", 977)->__PVT__n_bytes 
        = ((IData)(1U) + ((this->__PVT__m_n_bits - (IData)(1U)) 
                          >> 3U));
    VL_NULL_CHECK(unnamedblk431__DOT__cfg, "../../uvm/distrib/src/reg/uvm_mem.svh", 978)->__PVT__start_offset = 0ULL;
    VL_NULL_CHECK(unnamedblk431__DOT__cfg, "../../uvm/distrib/src/reg/uvm_mem.svh", 979)->__PVT__end_offset 
        = (this->__PVT__m_size - 1ULL);
    VL_NULL_CHECK(unnamedblk431__DOT__cfg, "../../uvm/distrib/src/reg/uvm_mem.svh", 981)->__PVT__mode = 0U;
    VL_NULL_CHECK(unnamedblk431__DOT__cfg, "../../uvm/distrib/src/reg/uvm_mem.svh", 982)->__PVT__locality = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    this->__PVT__mam = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_mem_mam, vlSymsp, 
                              VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name), unnamedblk431__DOT__cfg, 
                              VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this});
    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 987)->__VnoInFunc_add_mem(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this});
    if ((""s != hdl_path)) {
        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__34__verbosity;
    __Vfunc_uvm_report_enabled__34__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__34__severity;
    __Vfunc_uvm_report_enabled__34__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__39__verbosity;
    __Vtask_uvm_report_error__39__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__39__line;
    __Vtask_uvm_report_error__39__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__39__report_enabled_checked;
    __Vtask_uvm_report_error__39__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
             & (VlNull{} == map))) {
            this->__Vfunc_uvm_report_enabled__34__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__34__severity = 2U;
            __Vfunc_uvm_report_enabled__34__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__35__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__36__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__34__verbosity, (IData)(__Vfunc_uvm_report_enabled__34__severity), this->__Vfunc_uvm_report_enabled__34__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_error__39__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__39__context_name = ""s;
                __Vtask_uvm_report_error__39__line = 0x000003ebU;
                this->__Vtask_uvm_report_error__39__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__39__verbosity = 0U;
                this->__Vtask_uvm_report_error__39__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("set_offset requires a non-null map when memory '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s));
                this->__Vtask_uvm_report_error__39__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__39__id, this->__Vtask_uvm_report_error__39__message, __Vtask_uvm_report_error__39__verbosity, this->__Vtask_uvm_report_error__39__filename, __Vtask_uvm_report_error__39__line, this->__Vtask_uvm_report_error__39__context_name, (IData)(__Vtask_uvm_report_error__39__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_offset()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1012)->__VnoInFunc_m_set_mem_offset(vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, offset, (IData)(unmapped));
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_map\n"); );
    // Body
    this->__PVT__m_maps.at(map) = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xlock_modelX\n"); );
    // Body
    this->__PVT__m_locked = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    std::string __VlefCall_0__get_full_name;
    {
        get_full_name__Vfuncrtn = ""s;
        if ((VlNull{} == this->__PVT__m_parent)) {
            this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 1036)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_block\n"); );
    // Body
    get_block__Vfuncrtn = this->__PVT__m_parent;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_maps\n"); );
    // Body
    get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map>> &maps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_maps\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk432__DOT__map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk432__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk432__DOT__map__Vmore;
    unnamedblk432__DOT__map__Vmore = 0;
    unnamedblk432__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk432__DOT__map__Vnext));
    while (unnamedblk432__DOT__map__Vmore) {
        unnamedblk432__DOT__map = unnamedblk432__DOT__map__Vnext;
        unnamedblk432__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk432__DOT__map__Vnext));
        maps.push_back(unnamedblk432__DOT__map);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_is_in_map\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__l;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk433__DOT__l__Vmore;
    unnamedblk433__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__local_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk433__DOT__unnamedblk434__DOT__parent_map;
    {
        is_in_map__Vfuncrtn = 0U;
        if (this->__PVT__m_maps.exists(map)) {
            is_in_map__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk433__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk433__DOT__l__Vnext));
        while (unnamedblk433__DOT__l__Vmore) {
            unnamedblk433__DOT__l = unnamedblk433__DOT__l__Vnext;
            unnamedblk433__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk433__DOT__l__Vnext));
            unnamedblk433__DOT__unnamedblk434__DOT__local_map 
                = unnamedblk433__DOT__l;
            VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1070)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__parent_map);
            while ((VlNull{} != unnamedblk433__DOT__unnamedblk434__DOT__parent_map)) {
                if ((unnamedblk433__DOT__unnamedblk434__DOT__parent_map 
                     == map)) {
                    is_in_map__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk433__DOT__unnamedblk434__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1075)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk433__DOT__unnamedblk434__DOT__parent_map);
            }
        }
        is_in_map__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_local_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__53__verbosity;
    __Vfunc_uvm_report_enabled__53__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__53__severity;
    __Vfunc_uvm_report_enabled__53__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__verbosity;
    __Vtask_uvm_report_warning__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__59__line;
    __Vtask_uvm_report_warning__59__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__59__report_enabled_checked;
    __Vtask_uvm_report_warning__59__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk435__DOT__l;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk435__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk435__DOT__l__Vmore;
    unnamedblk435__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk435__DOT__unnamedblk436__DOT__local_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk435__DOT__unnamedblk436__DOT__parent_map;
    {
        if ((VlNull{} == map)) {
            this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, ""s, get_local_map__Vfuncrtn);
            goto __Vlabel0;
        }
        if (this->__PVT__m_maps.exists(map)) {
            get_local_map__Vfuncrtn = map;
            goto __Vlabel0;
        }
        unnamedblk435__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk435__DOT__l__Vnext));
        while (unnamedblk435__DOT__l__Vmore) {
            unnamedblk435__DOT__l = unnamedblk435__DOT__l__Vnext;
            unnamedblk435__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk435__DOT__l__Vnext));
            unnamedblk435__DOT__unnamedblk436__DOT__local_map 
                = unnamedblk435__DOT__l;
            VL_NULL_CHECK(unnamedblk435__DOT__unnamedblk436__DOT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1091)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk435__DOT__unnamedblk436__DOT__parent_map);
            while ((VlNull{} != unnamedblk435__DOT__unnamedblk436__DOT__parent_map)) {
                if ((unnamedblk435__DOT__unnamedblk436__DOT__parent_map 
                     == map)) {
                    get_local_map__Vfuncrtn = unnamedblk435__DOT__unnamedblk436__DOT__local_map;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk435__DOT__unnamedblk436__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1096)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk435__DOT__unnamedblk436__DOT__parent_map);
            }
        }
        this->__Vfunc_uvm_report_enabled__53__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__53__severity = 1U;
        __Vfunc_uvm_report_enabled__53__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__54__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__54__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__55__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__53__verbosity, (IData)(__Vfunc_uvm_report_enabled__53__severity), this->__Vfunc_uvm_report_enabled__53__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
            VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1101)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__59__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__59__context_name = ""s;
            __Vtask_uvm_report_warning__59__line = 0x0000044dU;
            this->__Vtask_uvm_report_warning__59__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__59__verbosity = 0U;
            this->__Vtask_uvm_report_warning__59__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' is not contained within map '"s), __VlefCall_2__get_full_name), "'"s), 
                                                    ((""s 
                                                      == caller)
                                                      ? ""s
                                                      : 
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
            this->__Vtask_uvm_report_warning__59__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__59__id, this->__Vtask_uvm_report_warning__59__message, __Vtask_uvm_report_warning__59__verbosity, this->__Vtask_uvm_report_warning__59__filename, __Vtask_uvm_report_warning__59__line, this->__Vtask_uvm_report_warning__59__context_name, (IData)(__Vtask_uvm_report_warning__59__report_enabled_checked));
        }
        get_local_map__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string caller, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_default_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__verbosity;
    __Vfunc_uvm_report_enabled__63__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__63__severity;
    __Vfunc_uvm_report_enabled__63__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__68__verbosity;
    __Vtask_uvm_report_warning__68__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__68__line;
    __Vtask_uvm_report_warning__68__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__68__report_enabled_checked;
    __Vtask_uvm_report_warning__68__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__l;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk437__DOT__l__Vmore;
    unnamedblk437__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__unnamedblk438__DOT__map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> unnamedblk437__DOT__unnamedblk438__DOT__blk;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__unnamedblk438__DOT__default_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk437__DOT__unnamedblk438__DOT__unnamedblk439__DOT__local_map;
    {
        if ((0U == this->__PVT__m_maps.size())) {
            this->__Vfunc_uvm_report_enabled__63__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__63__severity = 1U;
            __Vfunc_uvm_report_enabled__63__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__64__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__64__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__65__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__63__verbosity, (IData)(__Vfunc_uvm_report_enabled__63__severity), this->__Vfunc_uvm_report_enabled__63__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                __Vtask_uvm_report_warning__68__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__68__context_name = ""s;
                __Vtask_uvm_report_warning__68__line = 0x0000045aU;
                this->__Vtask_uvm_report_warning__68__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__68__verbosity = 0U;
                this->__Vtask_uvm_report_warning__68__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s), 
                                                        ((""s 
                                                          == caller)
                                                          ? ""s
                                                          : 
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
                this->__Vtask_uvm_report_warning__68__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__69__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__70__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__68__id, this->__Vtask_uvm_report_warning__68__message, __Vtask_uvm_report_warning__68__verbosity, this->__Vtask_uvm_report_warning__68__filename, __Vtask_uvm_report_warning__68__line, this->__Vtask_uvm_report_warning__68__context_name, (IData)(__Vtask_uvm_report_warning__68__report_enabled_checked));
            }
            get_default_map__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((1U == this->__PVT__m_maps.size())) {
            std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        }
        unnamedblk437__DOT__l__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk437__DOT__l__Vnext));
        while (unnamedblk437__DOT__l__Vmore) {
            unnamedblk437__DOT__l = unnamedblk437__DOT__l__Vnext;
            unnamedblk437__DOT__l__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk437__DOT__l__Vnext));
            unnamedblk437__DOT__unnamedblk438__DOT__map 
                = unnamedblk437__DOT__l;
            VL_NULL_CHECK(unnamedblk437__DOT__unnamedblk438__DOT__map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1126)->__VnoInFunc_get_parent(vlSymsp, unnamedblk437__DOT__unnamedblk438__DOT__blk);
            VL_NULL_CHECK(unnamedblk437__DOT__unnamedblk438__DOT__blk, "../../uvm/distrib/src/reg/uvm_mem.svh", 1127)->__VnoInFunc_get_default_map(vlSymsp, unnamedblk437__DOT__unnamedblk438__DOT__default_map);
            if ((VlNull{} != unnamedblk437__DOT__unnamedblk438__DOT__default_map)) {
                this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk437__DOT__unnamedblk438__DOT__default_map, ""s, unnamedblk437__DOT__unnamedblk438__DOT__unnamedblk439__DOT__local_map);
                if ((VlNull{} != unnamedblk437__DOT__unnamedblk438__DOT__unnamedblk439__DOT__local_map)) {
                    get_default_map__Vfuncrtn = unnamedblk437__DOT__unnamedblk438__DOT__unnamedblk439__DOT__local_map;
                    goto __Vlabel0;
                }
            }
        }
        std::ignore = this->__PVT__m_maps.first(get_default_map__Vfuncrtn);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_access__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_access\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__84__verbosity;
    __Vtask_uvm_report_error__84__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__84__line;
    __Vtask_uvm_report_error__84__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__84__report_enabled_checked;
    __Vtask_uvm_report_error__84__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__85__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__86__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__88__verbosity;
    __Vfunc_uvm_report_enabled__88__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__88__severity;
    __Vfunc_uvm_report_enabled__88__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__89__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__90__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__93__verbosity;
    __Vtask_uvm_report_error__93__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__93__line;
    __Vtask_uvm_report_error__93__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__93__report_enabled_checked;
    __Vtask_uvm_report_error__93__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__97__verbosity;
    __Vfunc_uvm_report_enabled__97__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__97__severity;
    __Vfunc_uvm_report_enabled__97__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__98__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__99__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__103__verbosity;
    __Vtask_uvm_report_error__103__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__103__line;
    __Vtask_uvm_report_error__103__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__103__report_enabled_checked;
    __Vtask_uvm_report_error__103__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__104__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__105__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__107__verbosity;
    __Vfunc_uvm_report_enabled__107__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__107__severity;
    __Vfunc_uvm_report_enabled__107__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__108__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__109__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__112__verbosity;
    __Vtask_uvm_report_error__112__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__112__line;
    __Vtask_uvm_report_error__112__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__112__report_enabled_checked;
    __Vtask_uvm_report_error__112__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__113__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__114__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__verbosity;
    __Vfunc_uvm_report_enabled__116__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__116__severity;
    __Vfunc_uvm_report_enabled__116__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__122__verbosity;
    __Vtask_uvm_report_error__122__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__122__line;
    __Vtask_uvm_report_error__122__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__122__report_enabled_checked;
    __Vtask_uvm_report_error__122__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__123__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__124__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_full_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_full_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    std::string __VlefCall_9__get_full_name;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    std::string __VlefCall_1__get_rights;
    IData/*31:0*/ __VlefCall_0__get_n_maps;
    {
        get_access__Vfuncrtn = ""s;
        get_access__Vfuncrtn = this->__PVT__m_access;
        this->__VnoInFunc_get_n_maps(vlSymsp, __VlefCall_0__get_n_maps);
        if ((1U == __VlefCall_0__get_n_maps)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_access()"s, map);
        if ((VlNull{} == map)) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_rights(vlProcess, vlSymsp, map, __VlefCall_1__get_rights);
        if ((1U & (~ ("RW"s == __VlefCall_1__get_rights)))) {
            if (("RO"s == __VlefCall_1__get_rights)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("RO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "RO"s;
                } else if (("WO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__78__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__78__severity = 2U;
                    __Vfunc_uvm_report_enabled__78__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__79__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__80__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1162)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vtask_uvm_report_error__84__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__84__context_name = ""s;
                        __Vtask_uvm_report_error__84__line = 0x0000048aU;
                        this->__Vtask_uvm_report_error__84__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__84__verbosity = 0U;
                        this->__Vtask_uvm_report_error__84__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("WO memory '"s, __VlefCall_3__get_full_name), "' restricted to RO in map '"s), __VlefCall_4__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__84__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__85__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__85__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__86__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__86__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__84__id, this->__Vtask_uvm_report_error__84__message, __Vtask_uvm_report_error__84__verbosity, this->__Vtask_uvm_report_error__84__filename, __Vtask_uvm_report_error__84__line, this->__Vtask_uvm_report_error__84__context_name, (IData)(__Vtask_uvm_report_error__84__report_enabled_checked));
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__88__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__88__severity = 2U;
                    __Vfunc_uvm_report_enabled__88__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__89__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__89__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__90__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__90__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__88__verbosity, (IData)(__Vfunc_uvm_report_enabled__88__severity), this->__Vfunc_uvm_report_enabled__88__id, __VlefCall_5__uvm_report_enabled);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_error__93__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__93__context_name = ""s;
                        __Vtask_uvm_report_error__93__line = 0x0000048dU;
                        this->__Vtask_uvm_report_error__93__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__93__verbosity = 0U;
                        this->__Vtask_uvm_report_error__93__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_6__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__93__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__94__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__94__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__95__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__93__id, this->__Vtask_uvm_report_error__93__message, __Vtask_uvm_report_error__93__verbosity, this->__Vtask_uvm_report_error__93__filename, __Vtask_uvm_report_error__93__line, this->__Vtask_uvm_report_error__93__context_name, (IData)(__Vtask_uvm_report_error__93__report_enabled_checked));
                    }
                }
            } else if (("WO"s == __VlefCall_1__get_rights)) {
                if ((("RW"s == get_access__Vfuncrtn) 
                     || ("WO"s == get_access__Vfuncrtn))) {
                    get_access__Vfuncrtn = "WO"s;
                } else if (("RO"s == get_access__Vfuncrtn)) {
                    this->__Vfunc_uvm_report_enabled__97__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__97__severity = 2U;
                    __Vfunc_uvm_report_enabled__97__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__98__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__98__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__99__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__99__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__97__verbosity, (IData)(__Vfunc_uvm_report_enabled__97__severity), this->__Vfunc_uvm_report_enabled__97__id, __VlefCall_7__uvm_report_enabled);
                    if ((0U != __VlefCall_7__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1173)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_9__get_full_name);
                        __Vtask_uvm_report_error__103__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__103__context_name = ""s;
                        __Vtask_uvm_report_error__103__line = 0x00000495U;
                        this->__Vtask_uvm_report_error__103__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__103__verbosity = 0U;
                        this->__Vtask_uvm_report_error__103__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("RO memory '"s, __VlefCall_8__get_full_name), "' restricted to WO in map '"s), __VlefCall_9__get_full_name), "'"s));
                        this->__Vtask_uvm_report_error__103__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__104__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__104__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__105__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__105__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__103__id, this->__Vtask_uvm_report_error__103__message, __Vtask_uvm_report_error__103__verbosity, this->__Vtask_uvm_report_error__103__filename, __Vtask_uvm_report_error__103__line, this->__Vtask_uvm_report_error__103__context_name, (IData)(__Vtask_uvm_report_error__103__report_enabled_checked));
                    }
                } else {
                    this->__Vfunc_uvm_report_enabled__107__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__107__severity = 2U;
                    __Vfunc_uvm_report_enabled__107__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__108__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__108__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__109__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__109__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__107__verbosity, (IData)(__Vfunc_uvm_report_enabled__107__severity), this->__Vfunc_uvm_report_enabled__107__id, __VlefCall_10__uvm_report_enabled);
                    if ((0U != __VlefCall_10__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        __Vtask_uvm_report_error__112__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__112__context_name = ""s;
                        __Vtask_uvm_report_error__112__line = 0x00000498U;
                        this->__Vtask_uvm_report_error__112__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__112__verbosity = 0U;
                        this->__Vtask_uvm_report_error__112__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_11__get_full_name), "' has invalid access mode, '"s), get_access__Vfuncrtn), "'"s));
                        this->__Vtask_uvm_report_error__112__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__113__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__113__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__114__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__114__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__112__id, this->__Vtask_uvm_report_error__112__message, __Vtask_uvm_report_error__112__verbosity, this->__Vtask_uvm_report_error__112__filename, __Vtask_uvm_report_error__112__line, this->__Vtask_uvm_report_error__112__context_name, (IData)(__Vtask_uvm_report_error__112__report_enabled_checked));
                    }
                }
            } else {
                this->__Vfunc_uvm_report_enabled__116__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__116__severity = 2U;
                __Vfunc_uvm_report_enabled__116__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__117__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__117__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__118__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__116__verbosity, (IData)(__Vfunc_uvm_report_enabled__116__severity), this->__Vfunc_uvm_report_enabled__116__id, __VlefCall_12__uvm_report_enabled);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1180)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    __Vtask_uvm_report_error__122__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__122__context_name = ""s;
                    __Vtask_uvm_report_error__122__line = 0x0000049cU;
                    this->__Vtask_uvm_report_error__122__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__122__verbosity = 0U;
                    this->__Vtask_uvm_report_error__122__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Shared memory '"s, __VlefCall_13__get_full_name), "' is not shared in map '"s), __VlefCall_14__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__122__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__123__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__123__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__124__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__124__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__122__id, this->__Vtask_uvm_report_error__122__message, __Vtask_uvm_report_error__122__verbosity, this->__Vtask_uvm_report_error__122__filename, __Vtask_uvm_report_error__122__line, this->__Vtask_uvm_report_error__122__context_name, (IData)(__Vtask_uvm_report_error__122__report_enabled_checked));
                }
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_rights\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> info;
    {
        get_rights__Vfuncrtn = ""s;
        if (VL_GTES_III(32, 1U, this->__PVT__m_maps.size())) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_rights()"s, map);
        if ((VlNull{} == map)) {
            get_rights__Vfuncrtn = "RW"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1201)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, info);
        get_rights__Vfuncrtn = VL_NULL_CHECK(info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1202)
            ->__PVT__rights;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__130__verbosity;
    __Vfunc_uvm_report_enabled__130__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__130__severity;
    __Vfunc_uvm_report_enabled__130__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__131__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__132__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__137__verbosity;
    __Vtask_uvm_report_warning__137__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__137__line;
    __Vtask_uvm_report_warning__137__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__137__report_enabled_checked;
    __Vtask_uvm_report_warning__137__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__138__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__139__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_offset__Vfuncrtn = 0ULL;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_offset()"s, map);
        if ((VlNull{} == map)) {
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1220)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1222)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__130__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__130__severity = 1U;
            __Vfunc_uvm_report_enabled__130__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__131__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__131__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__132__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__132__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__130__verbosity, (IData)(__Vfunc_uvm_report_enabled__130__severity), this->__Vfunc_uvm_report_enabled__130__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1225)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1225)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__137__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__137__context_name = ""s;
                __Vtask_uvm_report_warning__137__line = 0x000004c9U;
                this->__Vtask_uvm_report_warning__137__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__137__verbosity = 0U;
                this->__Vtask_uvm_report_warning__137__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__137__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__138__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__138__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__139__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__139__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__137__id, this->__Vtask_uvm_report_warning__137__message, __Vtask_uvm_report_warning__137__verbosity, this->__Vtask_uvm_report_warning__137__filename, __Vtask_uvm_report_warning__137__line, this->__Vtask_uvm_report_warning__137__context_name, (IData)(__Vtask_uvm_report_warning__137__report_enabled_checked));
            }
            get_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1229)
            ->__PVT__offset;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg>> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__vreg;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk440__DOT__vreg__Vnext;
    CData/*0:0*/ unnamedblk440__DOT__vreg__Vmore;
    unnamedblk440__DOT__vreg__Vmore = 0;
    unnamedblk440__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk440__DOT__vreg__Vnext));
    while (unnamedblk440__DOT__vreg__Vmore) {
        unnamedblk440__DOT__vreg = unnamedblk440__DOT__vreg__Vnext;
        unnamedblk440__DOT__vreg__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk440__DOT__vreg__Vnext));
        regs.push_back(unnamedblk440__DOT__vreg);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field>> &fields) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk441__DOT__l;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk441__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk441__DOT__l__Vmore;
    unnamedblk441__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk441__DOT__unnamedblk442__DOT__vreg;
    unnamedblk441__DOT__l__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk441__DOT__l__Vnext));
    while (unnamedblk441__DOT__l__Vmore) {
        unnamedblk441__DOT__l = unnamedblk441__DOT__l__Vnext;
        unnamedblk441__DOT__l__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk441__DOT__l__Vnext));
        unnamedblk441__DOT__unnamedblk442__DOT__vreg 
            = unnamedblk441__DOT__l;
        VL_NULL_CHECK(unnamedblk441__DOT__unnamedblk442__DOT__vreg, "../../uvm/distrib/src/reg/uvm_mem.svh", 1250)->__VnoInFunc_get_fields(vlSymsp, fields);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vfield_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__144__verbosity;
    __Vfunc_uvm_report_enabled__144__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__144__severity;
    __Vfunc_uvm_report_enabled__144__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__145__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__146__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__149__verbosity;
    __Vtask_uvm_report_warning__149__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__149__line;
    __Vtask_uvm_report_warning__149__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__149__report_enabled_checked;
    __Vtask_uvm_report_warning__149__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__150__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__151__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    IData/*31:0*/ unnamedblk443__DOT__i;
    unnamedblk443__DOT__i = 0;
    IData/*31:0*/ unnamedblk443__DOT__i__Vloopsize;
    unnamedblk443__DOT__i__Vloopsize = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg_field>> vfields;
    {
        vfields.clear();
        this->__VnoInFunc_get_virtual_fields(vlSymsp, vfields);
        unnamedblk443__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk443__DOT__i, vfields.size())) {
            unnamedblk443__DOT__i__Vloopsize = vfields.size();
            VL_NULL_CHECK(vfields.at(unnamedblk443__DOT__i), "../../uvm/distrib/src/reg/uvm_mem.svh", 1264)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vfield_by_name__Vfuncrtn = vfields.at(unnamedblk443__DOT__i);
                goto __Vlabel0;
            }
            if ((unnamedblk443__DOT__i__Vloopsize <= vfields.size())) {
                unnamedblk443__DOT__i = ((IData)(1U) 
                                         + unnamedblk443__DOT__i);
            }
        }
        this->__Vfunc_uvm_report_enabled__144__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__144__severity = 1U;
        __Vfunc_uvm_report_enabled__144__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__145__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__145__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__146__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__146__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__144__verbosity, (IData)(__Vfunc_uvm_report_enabled__144__severity), this->__Vfunc_uvm_report_enabled__144__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__149__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__149__context_name = ""s;
            __Vtask_uvm_report_warning__149__line = 0x000004f4U;
            this->__Vtask_uvm_report_warning__149__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__149__verbosity = 0U;
            this->__Vtask_uvm_report_warning__149__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual field '"s, name), "' in memory '"s), __VlefCall_2__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__149__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__150__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__150__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__151__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__151__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__149__id, this->__Vtask_uvm_report_warning__149__message, __Vtask_uvm_report_warning__149__verbosity, this->__Vtask_uvm_report_warning__149__filename, __Vtask_uvm_report_warning__149__line, this->__Vtask_uvm_report_warning__149__context_name, (IData)(__Vtask_uvm_report_warning__149__report_enabled_checked));
        }
        get_vfield_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_name\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
    __Vfunc_uvm_report_enabled__154__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
    __Vfunc_uvm_report_enabled__154__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__155__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__156__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__159__verbosity;
    __Vtask_uvm_report_warning__159__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__159__line;
    __Vtask_uvm_report_warning__159__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__159__report_enabled_checked;
    __Vtask_uvm_report_warning__159__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk444__DOT__l;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk444__DOT__l__Vnext;
    CData/*0:0*/ unnamedblk444__DOT__l__Vmore;
    unnamedblk444__DOT__l__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> unnamedblk444__DOT__unnamedblk445__DOT__vreg;
    {
        unnamedblk444__DOT__l__Vmore = (0U != this->__PVT__m_vregs.first(unnamedblk444__DOT__l__Vnext));
        while (unnamedblk444__DOT__l__Vmore) {
            unnamedblk444__DOT__l = unnamedblk444__DOT__l__Vnext;
            unnamedblk444__DOT__l__Vmore = (0U != this->__PVT__m_vregs.next(unnamedblk444__DOT__l__Vnext));
            unnamedblk444__DOT__unnamedblk445__DOT__vreg 
                = unnamedblk444__DOT__l;
            VL_NULL_CHECK(unnamedblk444__DOT__unnamedblk445__DOT__vreg, "../../uvm/distrib/src/reg/uvm_mem.svh", 1280)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
            if ((__VlefCall_0__get_name == name)) {
                get_vreg_by_name__Vfuncrtn = unnamedblk444__DOT__unnamedblk445__DOT__vreg;
                goto __Vlabel0;
            }
        }
        this->__Vfunc_uvm_report_enabled__154__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__154__severity = 1U;
        __Vfunc_uvm_report_enabled__154__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__155__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__155__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__156__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__156__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), this->__Vfunc_uvm_report_enabled__154__id, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            __Vtask_uvm_report_warning__159__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_warning__159__context_name = ""s;
            __Vtask_uvm_report_warning__159__line = 0x00000505U;
            this->__Vtask_uvm_report_warning__159__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_warning__159__verbosity = 0U;
            this->__Vtask_uvm_report_warning__159__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to find virtual register '"s, name), "' in memory '"s), __VlefCall_2__get_full_name), "'"s));
            this->__Vtask_uvm_report_warning__159__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__160__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__160__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__161__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__159__id, this->__Vtask_uvm_report_warning__159__message, __Vtask_uvm_report_warning__159__verbosity, this->__Vtask_uvm_report_warning__159__filename, __Vtask_uvm_report_warning__159__line, this->__Vtask_uvm_report_warning__159__context_name, (IData)(__Vtask_uvm_report_warning__159__report_enabled_checked));
        }
        get_vreg_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_vreg_by_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__163__verbosity;
    __Vfunc_uvm_report_enabled__163__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__163__severity;
    __Vfunc_uvm_report_enabled__163__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__164__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__165__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__167__verbosity;
    __Vtask_uvm_report_error__167__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__167__line;
    __Vtask_uvm_report_error__167__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__167__report_enabled_checked;
    __Vtask_uvm_report_error__167__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__168__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__169__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__163__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__163__severity = 2U;
    __Vfunc_uvm_report_enabled__163__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__164__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__164__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__165__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__165__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__163__verbosity, (IData)(__Vfunc_uvm_report_enabled__163__severity), this->__Vfunc_uvm_report_enabled__163__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_error__167__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_error__167__context_name = ""s;
        __Vtask_uvm_report_error__167__line = 0x0000050fU;
        this->__Vtask_uvm_report_error__167__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_error__167__verbosity = 0U;
        this->__Vtask_uvm_report_error__167__message = "uvm_mem::get_vreg_by_offset() not yet implemented"s;
        this->__Vtask_uvm_report_error__167__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__168__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__168__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__169__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__169__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__167__id, this->__Vtask_uvm_report_error__167__message, __Vtask_uvm_report_error__167__verbosity, this->__Vtask_uvm_report_error__167__filename, __Vtask_uvm_report_error__167__line, this->__Vtask_uvm_report_error__167__context_name, (IData)(__Vtask_uvm_report_error__167__report_enabled_checked));
    }
    get_vreg_by_offset__Vfuncrtn = VlNull{};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__173__verbosity;
    __Vfunc_uvm_report_enabled__173__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__173__severity;
    __Vfunc_uvm_report_enabled__173__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__174__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__175__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__180__verbosity;
    __Vtask_uvm_report_warning__180__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__180__line;
    __Vtask_uvm_report_warning__180__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__180__report_enabled_checked;
    __Vtask_uvm_report_warning__180__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__184__Vfuncout;
    __Vtask_get_n_bytes__184__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk446__DOT__i;
    unnamedblk446__DOT__i = 0;
    IData/*31:0*/ unnamedblk446__DOT__i__Vloopsize;
    unnamedblk446__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> orig_map;
    {
        get_addresses__Vfuncrtn = 0U;
        orig_map = map;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_addresses()"s, map);
        if ((VlNull{} == map)) {
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1316)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        if (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1318)
            ->__PVT__unmapped) {
            this->__Vfunc_uvm_report_enabled__173__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__173__severity = 1U;
            __Vfunc_uvm_report_enabled__173__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__174__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__174__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__175__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__175__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__173__verbosity, (IData)(__Vfunc_uvm_report_enabled__173__severity), this->__Vfunc_uvm_report_enabled__173__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                if ((VlNull{} == orig_map)) {
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1321)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                } else {
                    VL_NULL_CHECK(orig_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1321)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                }
                __Vtask_uvm_report_warning__180__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__180__context_name = ""s;
                __Vtask_uvm_report_warning__180__line = 0x00000529U;
                this->__Vtask_uvm_report_warning__180__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__180__verbosity = 0U;
                this->__Vtask_uvm_report_warning__180__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_warning__180__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__181__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__181__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__182__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__182__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__180__id, this->__Vtask_uvm_report_warning__180__message, __Vtask_uvm_report_warning__180__verbosity, this->__Vtask_uvm_report_warning__180__filename, __Vtask_uvm_report_warning__180__line, this->__Vtask_uvm_report_warning__180__context_name, (IData)(__Vtask_uvm_report_warning__180__report_enabled_checked));
            }
            get_addresses__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        addr = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1325)
            ->__PVT__addr;
        unnamedblk446__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk446__DOT__i, addr.size())) {
            unnamedblk446__DOT__i__Vloopsize = addr.size();
            addr.atWrite(unnamedblk446__DOT__i) = (addr.at(unnamedblk446__DOT__i) 
                                                   + 
                                                   ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1328)
                                                                    ->__PVT__mem_range[0U])) 
                                                    * offset));
            if ((unnamedblk446__DOT__i__Vloopsize <= addr.size())) {
                unnamedblk446__DOT__i = ((IData)(1U) 
                                         + unnamedblk446__DOT__i);
            }
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1330)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__184__Vfuncout);
        get_addresses__Vfuncrtn = __Vtask_get_n_bytes__184__Vfuncout;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_address\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_addresses__185__Vfuncout;
    __Vtask_get_addresses__185__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlQueue<QData/*63:0*/> addr;
    get_address__Vfuncrtn = 0ULL;
    addr.clear();
    addr.atDefault() = 0;
    this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, offset, map, addr, __Vtask_get_addresses__185__Vfuncout);
    get_address__Vfuncrtn = addr.at(0U);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size(VUVM_Activator__Syms* __restrict vlSymsp, QData/*63:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_size\n"); );
    // Body
    get_size__Vfuncrtn = this->__PVT__m_size;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bits\n"); );
    // Body
    get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = ((IData)(1U) + ((this->__PVT__m_n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_build_coverage\n"); );
    // Locals
    CData/*0:0*/ __Vtask_read_by_name__187__Vfuncout;
    __Vtask_read_by_name__187__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read_by_name__187__val;
    __Vtask_read_by_name__187__val = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    build_coverage__Vfuncrtn = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    __Vtask_read_by_name__187__val = build_coverage__Vfuncrtn;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz89__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__187__val, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, __Vtask_read_by_name__187__Vfuncout);
    build_coverage__Vfuncrtn = __Vtask_read_by_name__187__val;
    build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                & models);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_coverage\n"); );
    // Body
    this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                | models);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_coverage\n"); );
    // Body
    has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                               & models) == models);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_coverage\n"); );
    // Body
    {
        set_coverage__Vfuncrtn = 0U;
        if ((0U == is_on)) {
            this->__PVT__m_cover_on = is_on;
            set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
            goto __Vlabel0;
        }
        this->__PVT__m_cover_on = (this->__PVT__m_has_cover 
                                   & is_on);
        set_coverage__Vfuncrtn = this->__PVT__m_cover_on;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_coverage\n"); );
    // Body
    CData/*0:0*/ __VlefCall_0__has_coverage;
    {
        get_coverage__Vfuncrtn = 0U;
        this->__VnoInFunc_has_coverage(vlSymsp, is_on, __VlefCall_0__has_coverage);
        if ((1U & (~ (IData)(__VlefCall_0__has_coverage)))) {
            get_coverage__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        get_coverage__Vfuncrtn = ((this->__PVT__m_cover_on 
                                   & is_on) == is_on);
        __Vlabel0: ;
    }
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1447)->__PVT__element 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1448)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1449)->__PVT__kind = 1U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1450)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1451)->__PVT__value.atWrite(0U) 
        = value;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1452)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1453)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1454)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1455)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1456)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1457)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1458)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1462)
        ->__PVT__status;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    value = 0ULL;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1482)->__PVT__element 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1483)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1484)->__PVT__kind = 0U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1485)->__PVT__value.atWrite(0U) = 0ULL;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1486)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1487)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1488)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1489)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1490)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1491)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1492)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1493)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1497)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1498)
        ->__PVT__value.at(0U);
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_write\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_write"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1518)->__PVT__element 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1519)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1520)->__PVT__kind = 3U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1521)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1522)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1523)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1524)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1525)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1526)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1527)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1528)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1529)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1533)
        ->__PVT__status;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_burst_read\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    status = 0U;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_burst_read"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1553)->__PVT__element 
        = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1554)->__PVT__element_kind = 2U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1555)->__PVT__kind = 2U;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1556)->__PVT__offset 
        = offset;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1557)->__PVT__value 
        = value;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1558)->__PVT__path 
        = path;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1559)->__PVT__map 
        = map;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1560)->__PVT__parent 
        = parent;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1561)->__PVT__prior 
        = prior;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1562)->__PVT__extension 
        = extension;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1563)->__PVT__fname 
        = fname;
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1564)->__PVT__lineno 
        = lineno;
    co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1568)
        ->__PVT__status;
    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1569)
        ->__PVT__value;
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__202__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__221__verbosity;
    __Vfunc_uvm_report_enabled__221__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__221__severity;
    __Vfunc_uvm_report_enabled__221__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__222__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__223__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__228__verbosity;
    __Vtask_uvm_report_info__228__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__228__line;
    __Vtask_uvm_report_info__228__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__228__report_enabled_checked;
    __Vtask_uvm_report_info__228__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__229__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__230__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_7__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_6__get_backdoor;
    std::string __VlefCond_5;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    std::string __VlefCall_2__get_access;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk447__DOT__cb;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk448__DOT__system_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk448__DOT__unnamedblk449__DOT__fd;
    QData/*63:0*/ unnamedblk448__DOT__unnamedblk450__DOT__idx;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk451__DOT__bkdr;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk452__DOT__cb;
    std::string unnamedblk453__DOT__path_s;
    std::string unnamedblk453__DOT__value_s;
    std::string unnamedblk453__DOT__pre_s;
    std::string unnamedblk453__DOT__range_s;
    IData/*31:0*/ unnamedblk453__DOT__unnamedblk454__DOT__i;
    unnamedblk453__DOT__unnamedblk454__DOT__i = 0;
    IData/*31:0*/ unnamedblk453__DOT__unnamedblk454__DOT__i__Vloopsize;
    unnamedblk453__DOT__unnamedblk454__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz91> cbs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz91, vlSymsp, 
                     VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1581)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1582)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__202__map_info, "burst_write()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__202__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_write_in_progress = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1589)->__PVT__status = 0U;
        this->__VnoInFunc_pre_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1593)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk447__DOT__cb);
        while ((VlNull{} != unnamedblk447__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk447__DOT__cb, "../../uvm/distrib/src/reg/uvm_mem.svh", 1594)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1593)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk447__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1596)
             ->__PVT__status)) {
            this->__PVT__m_write_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1602)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1605)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1607)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1607)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk448__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1609)
                 ->__PVT__frontdoor)) {
                unnamedblk448__DOT__unnamedblk449__DOT__fd 
                    = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1610)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk448__DOT__unnamedblk449__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1611)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk448__DOT__unnamedblk449__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1612)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk448__DOT__system_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1613)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk448__DOT__unnamedblk449__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1613)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk448__DOT__unnamedblk449__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1614)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk448__DOT__unnamedblk449__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1614)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1614)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1617)
                                       ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1617)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1620)
                 ->__PVT__status)) {
                unnamedblk448__DOT__unnamedblk450__DOT__idx = 0ULL;
                unnamedblk448__DOT__unnamedblk450__DOT__idx 
                    = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1621)
                    ->__PVT__offset;
                while ((unnamedblk448__DOT__unnamedblk450__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1622)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1622)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1624)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk448__DOT__unnamedblk450__DOT__idx), 0U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1624)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 1625)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1625)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1626)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk448__DOT__unnamedblk450__DOT__idx)), 0U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1627)
                                                                                ->__PVT__map);
                    unnamedblk448__DOT__unnamedblk450__DOT__idx 
                        = (1ULL + unnamedblk448__DOT__unnamedblk450__DOT__idx);
                }
            }
        } else {
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1634)
                                         ->__PVT__map, __VlefCall_2__get_access);
            if (("RW"s == __VlefCall_2__get_access)) {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk451__DOT__bkdr);
                if ((VlNull{} != unnamedblk451__DOT__bkdr)) {
                    VL_NULL_CHECK(unnamedblk451__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_mem.svh", 1637)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                } else {
                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                }
            } else {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1642)->__PVT__status = 0U;
            }
        }
        this->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk452__DOT__cb);
        while ((VlNull{} != unnamedblk452__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk452__DOT__cb, "../../uvm/distrib/src/reg/uvm_mem.svh", 1648)->__VnoInFunc_post_write(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1647)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk452__DOT__cb);
        }
        this->__Vfunc_uvm_report_enabled__221__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__221__severity = 0U;
        __Vfunc_uvm_report_enabled__221__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__222__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__222__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__223__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__223__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__221__verbosity, (IData)(__Vfunc_uvm_report_enabled__221__severity), this->__Vfunc_uvm_report_enabled__221__id, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            unnamedblk453__DOT__path_s = ""s;
            unnamedblk453__DOT__value_s = ""s;
            unnamedblk453__DOT__pre_s = ""s;
            unnamedblk453__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1653)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1654)
                     ->__PVT__frontdoor)) {
                    __VlefCond_5 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1655)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1655)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    __VlefCond_5 = VL_CONCATN_NNN("map "s, __VlefCall_4__get_full_name);
                }
                unnamedblk453__DOT__path_s = __VlefCond_5;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_6__get_backdoor);
                if ((VlNull{} != __VlefCall_6__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk453__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1659)
                           ->__PVT__value.size())) {
                unnamedblk453__DOT__value_s = "='{"s;
                unnamedblk453__DOT__pre_s = "Burst "s;
                unnamedblk453__DOT__unnamedblk454__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk453__DOT__unnamedblk454__DOT__i, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1662)
                                  ->__PVT__value.size())) {
                    unnamedblk453__DOT__unnamedblk454__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1662)
                        ->__PVT__value.size();
                    unnamedblk453__DOT__value_s = VL_CONCATN_NNN(unnamedblk453__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1663)
                                                                                ->__PVT__value.at(unnamedblk453__DOT__unnamedblk454__DOT__i)) );
                    if ((unnamedblk453__DOT__unnamedblk454__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1662)
                         ->__PVT__value.size())) {
                        unnamedblk453__DOT__unnamedblk454__DOT__i 
                            = ((IData)(1U) + unnamedblk453__DOT__unnamedblk454__DOT__i);
                    }
                }
                unnamedblk453__DOT__value_s = VL_PUTC_N(unnamedblk453__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk453__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                VL_SFORMAT_NX(unnamedblk453__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1665)
                              ->__PVT__offset, '#',64,
                              (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1665)
                               ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1665)
                                                                 ->__PVT__value.size()))));
            } else {
                VL_SFORMAT_NX(unnamedblk453__DOT__value_s
                              ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1668)
                              ->__PVT__value.at(0U));
                VL_SFORMAT_NX(unnamedblk453__DOT__range_s
                              ,"[%0d]",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1669)
                              ->__PVT__offset);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
            __Vtask_uvm_report_info__228__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_info__228__context_name = ""s;
            __Vtask_uvm_report_info__228__line = 0U;
            this->__Vtask_uvm_report_info__228__filename = ""s;
            __Vtask_uvm_report_info__228__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__228__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk453__DOT__pre_s, "Wrote memory via "s), unnamedblk453__DOT__path_s), ": "s), __VlefCall_7__get_full_name), unnamedblk453__DOT__range_s), unnamedblk453__DOT__value_s));
            this->__Vtask_uvm_report_info__228__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__229__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__229__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__230__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__230__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__228__id, this->__Vtask_uvm_report_info__228__message, __Vtask_uvm_report_info__228__verbosity, this->__Vtask_uvm_report_info__228__filename, __Vtask_uvm_report_info__228__line, this->__Vtask_uvm_report_info__228__context_name, (IData)(__Vtask_uvm_report_info__228__report_enabled_checked));
        }
        this->__PVT__m_write_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__233__map_info;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__251__verbosity;
    __Vfunc_uvm_report_enabled__251__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__251__severity;
    __Vfunc_uvm_report_enabled__251__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__252__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__253__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__258__verbosity;
    __Vtask_uvm_report_info__258__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__258__line;
    __Vtask_uvm_report_info__258__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__258__report_enabled_checked;
    __Vtask_uvm_report_info__258__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__259__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__260__Vfuncout;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_6__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_5__get_backdoor;
    std::string __VlefCond_4;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_1__get_sequencer;
    CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk455__DOT__cb;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk456__DOT__system_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk456__DOT__unnamedblk457__DOT__fd;
    QData/*63:0*/ unnamedblk456__DOT__unnamedblk458__DOT__idx;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk459__DOT__bkdr;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk460__DOT__cb;
    std::string unnamedblk461__DOT__path_s;
    std::string unnamedblk461__DOT__value_s;
    std::string unnamedblk461__DOT__pre_s;
    std::string unnamedblk461__DOT__range_s;
    IData/*31:0*/ unnamedblk461__DOT__unnamedblk462__DOT__i;
    unnamedblk461__DOT__unnamedblk462__DOT__i = 0;
    IData/*31:0*/ unnamedblk461__DOT__unnamedblk462__DOT__i__Vloopsize;
    unnamedblk461__DOT__unnamedblk462__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz91> cbs;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        cbs = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_callback_iter__Tz93_TBz91, vlSymsp, 
                     VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this});
        this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1688)
            ->__PVT__fname;
        this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1689)
            ->__PVT__lineno;
        this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__233__map_info, "burst_read()"s, __VlefCall_0__Xcheck_accessX);
        map_info = __Vfunc_Xcheck_accessX__233__map_info;
        if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
            goto __Vlabel0;
        }
        this->__PVT__m_read_in_progress = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1696)->__PVT__status = 0U;
        this->__VnoInFunc_pre_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1700)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk455__DOT__cb);
        while ((VlNull{} != unnamedblk455__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk455__DOT__cb, "../../uvm/distrib/src/reg/uvm_mem.svh", 1701)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1700)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk455__DOT__cb);
        }
        if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1703)
             ->__PVT__status)) {
            this->__PVT__m_read_in_progress = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1709)->__PVT__status = 1U;
        if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1712)
             ->__PVT__path)) {
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1714)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1714)->__VnoInFunc_get_root_map(vlSymsp, unnamedblk456__DOT__system_map);
            if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1716)
                 ->__PVT__frontdoor)) {
                unnamedblk456__DOT__unnamedblk457__DOT__fd 
                    = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1717)
                    ->__PVT__frontdoor;
                VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1718)->__PVT__rw_info 
                    = rw;
                if ((VlNull{} == VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1719)
                     ->__PVT__sequencer)) {
                    VL_NULL_CHECK(unnamedblk456__DOT__system_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1720)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_1__get_sequencer);
                    VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1720)->__PVT__sequencer 
                        = __VlefCall_1__get_sequencer;
                }
                co_await VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1721)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk456__DOT__unnamedblk457__DOT__fd, "../../uvm/distrib/src/reg/uvm_mem.svh", 1721)
                                                                                ->__PVT__sequencer, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1721)
                                                                                ->__PVT__parent, 0xffffffffU, 1U);
            } else {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1724)
                                       ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1724)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            }
            if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1727)
                 ->__PVT__status)) {
                unnamedblk456__DOT__unnamedblk458__DOT__idx = 0ULL;
                unnamedblk456__DOT__unnamedblk458__DOT__idx 
                    = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1728)
                    ->__PVT__offset;
                while ((unnamedblk456__DOT__unnamedblk458__DOT__idx 
                        <= (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1729)
                            ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1729)
                                                              ->__PVT__value.size()))))) {
                    this->__VnoInFunc_XsampleX(vlSymsp, 
                                               ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1731)
                                                                ->__PVT__mem_range[0U])) 
                                                * unnamedblk456__DOT__unnamedblk458__DOT__idx), 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1731)
                                               ->__PVT__map);
                    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 1732)->__VnoInFunc_XsampleX(vlSymsp, 
                                                                                (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1732)
                                                                                ->__PVT__offset 
                                                                                + 
                                                                                ((QData)((IData)(VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1733)
                                                                                ->__PVT__mem_range[0U])) 
                                                                                * unnamedblk456__DOT__unnamedblk458__DOT__idx)), 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1734)
                                                                                ->__PVT__map);
                    unnamedblk456__DOT__unnamedblk458__DOT__idx 
                        = (1ULL + unnamedblk456__DOT__unnamedblk458__DOT__idx);
                }
            }
        } else {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk459__DOT__bkdr);
            if ((VlNull{} != unnamedblk459__DOT__bkdr)) {
                VL_NULL_CHECK(unnamedblk459__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_mem.svh", 1742)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
            } else {
                this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
            }
        }
        this->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1749)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk460__DOT__cb);
        while ((VlNull{} != unnamedblk460__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk460__DOT__cb, "../../uvm/distrib/src/reg/uvm_mem.svh", 1750)->__VnoInFunc_post_read(vlSymsp, rw);
            VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_mem.svh", 1749)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk460__DOT__cb);
        }
        this->__Vfunc_uvm_report_enabled__251__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__251__severity = 0U;
        __Vfunc_uvm_report_enabled__251__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__252__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__252__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__253__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__253__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__251__verbosity, (IData)(__Vfunc_uvm_report_enabled__251__severity), this->__Vfunc_uvm_report_enabled__251__id, __VlefCall_2__uvm_report_enabled);
        if ((0U != __VlefCall_2__uvm_report_enabled)) {
            unnamedblk461__DOT__path_s = ""s;
            unnamedblk461__DOT__value_s = ""s;
            unnamedblk461__DOT__pre_s = ""s;
            unnamedblk461__DOT__range_s = ""s;
            if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1755)
                 ->__PVT__path)) {
                if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1756)
                     ->__PVT__frontdoor)) {
                    __VlefCond_4 = "user frontdoor"s;
                } else {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1757)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1757)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                    __VlefCond_4 = VL_CONCATN_NNN("map "s, __VlefCall_3__get_full_name);
                }
                unnamedblk461__DOT__path_s = __VlefCond_4;
            } else {
                this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_5__get_backdoor);
                if ((VlNull{} != __VlefCall_5__get_backdoor)) {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x73657220U;
                    __Vtemp_1[3U] = 0x00000075U;
                } else {
                    __Vtemp_1[0U] = 0x646f6f72U;
                    __Vtemp_1[1U] = 0x6261636bU;
                    __Vtemp_1[2U] = 0x44504920U;
                    __Vtemp_1[3U] = 0U;
                }
                unnamedblk461__DOT__path_s = VL_CVT_PACK_STR_NW(4, __Vtemp_1);
            }
            if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1761)
                           ->__PVT__value.size())) {
                unnamedblk461__DOT__value_s = "='{"s;
                unnamedblk461__DOT__pre_s = "Burst "s;
                unnamedblk461__DOT__unnamedblk462__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk461__DOT__unnamedblk462__DOT__i, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1764)
                                  ->__PVT__value.size())) {
                    unnamedblk461__DOT__unnamedblk462__DOT__i__Vloopsize 
                        = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1764)
                        ->__PVT__value.size();
                    unnamedblk461__DOT__value_s = VL_CONCATN_NNN(unnamedblk461__DOT__value_s, VL_SFORMATF_N_NX("%0h,",1
                                                                                , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1765)
                                                                                ->__PVT__value.at(unnamedblk461__DOT__unnamedblk462__DOT__i)) );
                    if ((unnamedblk461__DOT__unnamedblk462__DOT__i__Vloopsize 
                         <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1764)
                         ->__PVT__value.size())) {
                        unnamedblk461__DOT__unnamedblk462__DOT__i 
                            = ((IData)(1U) + unnamedblk461__DOT__unnamedblk462__DOT__i);
                    }
                }
                unnamedblk461__DOT__value_s = VL_PUTC_N(unnamedblk461__DOT__value_s, 
                                                        (VL_LEN_IN(unnamedblk461__DOT__value_s) 
                                                         - (IData)(1U)), 0x7dU);
                VL_SFORMAT_NX(unnamedblk461__DOT__range_s
                              ,"[%0d:%0d]",2, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1767)
                              ->__PVT__offset, '#',64,
                              (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1767)
                               ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1767)
                                                                 ->__PVT__value.size()))));
            } else {
                VL_SFORMAT_NX(unnamedblk461__DOT__value_s
                              ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1770)
                              ->__PVT__value.at(0U));
                VL_SFORMAT_NX(unnamedblk461__DOT__range_s
                              ,"[%0d]",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1771)
                              ->__PVT__offset);
            }
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__258__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_info__258__context_name = ""s;
            __Vtask_uvm_report_info__258__line = 0U;
            this->__Vtask_uvm_report_info__258__filename = ""s;
            __Vtask_uvm_report_info__258__verbosity = 0x0000012cU;
            this->__Vtask_uvm_report_info__258__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk461__DOT__pre_s, "Read memory via "s), unnamedblk461__DOT__path_s), ": "s), __VlefCall_6__get_full_name), unnamedblk461__DOT__range_s), unnamedblk461__DOT__value_s));
            this->__Vtask_uvm_report_info__258__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__259__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__259__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__260__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__260__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__258__id, this->__Vtask_uvm_report_info__258__message, __Vtask_uvm_report_info__258__verbosity, this->__Vtask_uvm_report_info__258__filename, __Vtask_uvm_report_info__258__line, this->__Vtask_uvm_report_info__258__context_name, (IData)(__Vtask_uvm_report_info__258__report_enabled_checked));
        }
        this->__PVT__m_read_in_progress = 0U;
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xcheck_accessX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__268__verbosity;
    __Vtask_uvm_report_error__268__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__268__line;
    __Vtask_uvm_report_error__268__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__268__report_enabled_checked;
    __Vtask_uvm_report_error__268__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__269__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__270__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__275__verbosity;
    __Vfunc_uvm_report_enabled__275__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__275__severity;
    __Vfunc_uvm_report_enabled__275__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__276__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__277__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__280__verbosity;
    __Vtask_uvm_report_warning__280__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__280__line;
    __Vtask_uvm_report_warning__280__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__280__report_enabled_checked;
    __Vtask_uvm_report_warning__280__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__287__verbosity;
    __Vfunc_uvm_report_enabled__287__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__287__severity;
    __Vfunc_uvm_report_enabled__287__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__288__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__289__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__293__verbosity;
    __Vtask_uvm_report_error__293__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__293__line;
    __Vtask_uvm_report_error__293__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__293__report_enabled_checked;
    __Vtask_uvm_report_error__293__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__294__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__295__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__298__verbosity;
    __Vfunc_uvm_report_enabled__298__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__298__severity;
    __Vfunc_uvm_report_enabled__298__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__299__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__300__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__304__verbosity;
    __Vtask_uvm_report_error__304__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__304__line;
    __Vtask_uvm_report_error__304__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__304__report_enabled_checked;
    __Vtask_uvm_report_error__304__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__305__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__306__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__310__verbosity;
    __Vfunc_uvm_report_enabled__310__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__310__severity;
    __Vfunc_uvm_report_enabled__310__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__311__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__312__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__316__verbosity;
    __Vtask_uvm_report_error__316__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__316__line;
    __Vtask_uvm_report_error__316__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__316__report_enabled_checked;
    __Vtask_uvm_report_error__316__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__317__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__318__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__320__verbosity;
    __Vfunc_uvm_report_enabled__320__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__320__severity;
    __Vfunc_uvm_report_enabled__320__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__321__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__322__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__324__verbosity;
    __Vtask_uvm_report_error__324__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__324__line;
    __Vtask_uvm_report_error__324__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__324__report_enabled_checked;
    __Vtask_uvm_report_error__324__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__325__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__326__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_23__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_22__get_n_bytes;
    IData/*31:0*/ __VlefCall_21__get_n_bits;
    IData/*31:0*/ __VlefCall_20__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_19__get_n_bytes;
    IData/*31:0*/ __VlefCall_18__get_n_bits;
    std::string __VlefCall_17__get_full_name;
    std::string __VlefCall_16__get_full_name;
    IData/*31:0*/ __VlefCall_15__uvm_report_enabled;
    std::string __VlefCall_14__get_full_name;
    std::string __VlefCall_13__get_type_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_type_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> __VlefCall_10__get_local_map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> __VlefCall_9__backdoor;
    std::string __VlefCall_8__get_full_name;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_6;
    CData/*0:0*/ __VlefCall_5__has_hdl_path;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_4__get_backdoor;
    IData/*31:0*/ __VlefCall_3__get_default_path;
    std::string __VlefCall_2__get_type_name;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    std::string __VlefCall_0__get_type_name;
    {
        Xcheck_accessX__Vfuncrtn = 0U;
        if ((VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1789)
             ->__PVT__offset >= this->__PVT__m_size)) {
            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            this->__Vfunc_uvm_report_enabled__263__id 
                = VL_CVT_PACK_STR_NN(__VlefCall_0__get_type_name);
            __Vfunc_uvm_report_enabled__263__severity = 2U;
            __Vfunc_uvm_report_enabled__263__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__264__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__264__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__265__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), this->__Vfunc_uvm_report_enabled__263__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__268__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__268__context_name = ""s;
                __Vtask_uvm_report_error__268__line = 0x00000700U;
                this->__Vtask_uvm_report_error__268__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__268__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__268__message
                              ,"Offset 'h%0h exceeds size of memory, 'h%0h",2
                              , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1792)
                              ->__PVT__offset, '#',64,this->__PVT__m_size);
                this->__Vtask_uvm_report_error__268__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_2__get_type_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__269__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__269__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__270__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__270__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__268__id, this->__Vtask_uvm_report_error__268__message, __Vtask_uvm_report_error__268__verbosity, this->__Vtask_uvm_report_error__268__filename, __Vtask_uvm_report_error__268__line, this->__Vtask_uvm_report_error__268__context_name, (IData)(__Vtask_uvm_report_error__268__report_enabled_checked));
            }
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1793)->__PVT__status = 1U;
            Xcheck_accessX__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        if ((3U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1797)
             ->__PVT__path)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 1798)->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_3__get_default_path);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1798)->__PVT__path 
                = __VlefCall_3__get_default_path;
        }
        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1800)
             ->__PVT__path)) {
            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_4__get_backdoor);
            __VlefLogAnd_6 = (VlNull{} == __VlefCall_4__get_backdoor);
            if (__VlefLogAnd_6) {
                this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_5__has_hdl_path);
                __VlefLogAnd_6 = (1U & (~ (IData)(__VlefCall_5__has_hdl_path)));
            }
            if (__VlefLogAnd_6) {
                this->__Vfunc_uvm_report_enabled__275__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__275__severity = 1U;
                __Vfunc_uvm_report_enabled__275__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__276__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__276__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__277__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__277__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__275__verbosity, (IData)(__Vfunc_uvm_report_enabled__275__severity), this->__Vfunc_uvm_report_enabled__275__id, __VlefCall_7__uvm_report_enabled);
                if ((0U != __VlefCall_7__uvm_report_enabled)) {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_8__get_full_name);
                    __Vtask_uvm_report_warning__280__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__280__context_name = ""s;
                    __Vtask_uvm_report_warning__280__line = 0x0000070cU;
                    this->__Vtask_uvm_report_warning__280__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_warning__280__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__280__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No backdoor access available for memory '"s, __VlefCall_8__get_full_name), "' . Using frontdoor instead."s));
                    this->__Vtask_uvm_report_warning__280__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__281__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__281__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__282__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__280__id, this->__Vtask_uvm_report_warning__280__message, __Vtask_uvm_report_warning__280__verbosity, this->__Vtask_uvm_report_warning__280__filename, __Vtask_uvm_report_warning__280__line, this->__Vtask_uvm_report_warning__280__context_name, (IData)(__Vtask_uvm_report_warning__280__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1805)->__PVT__path = 0U;
            } else {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_9__backdoor);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1808)->__PVT__map 
                    = __VlefCall_9__backdoor;
            }
        }
        if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1811)
             ->__PVT__path)) {
            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1813)
                                            ->__PVT__map, caller, __VlefCall_10__get_local_map);
            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1813)->__PVT__local_map 
                = __VlefCall_10__get_local_map;
            if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1815)
                 ->__PVT__local_map)) {
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_11__get_type_name);
                this->__Vfunc_uvm_report_enabled__287__id 
                    = VL_CVT_PACK_STR_NN(__VlefCall_11__get_type_name);
                __Vfunc_uvm_report_enabled__287__severity = 2U;
                __Vfunc_uvm_report_enabled__287__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__288__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__288__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__289__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__289__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__287__verbosity, (IData)(__Vfunc_uvm_report_enabled__287__severity), this->__Vfunc_uvm_report_enabled__287__id, __VlefCall_12__uvm_report_enabled);
                if ((0U != __VlefCall_12__uvm_report_enabled)) {
                    this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1818)
                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1818)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                    __Vtask_uvm_report_error__293__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_error__293__context_name = ""s;
                    __Vtask_uvm_report_error__293__line = 0x0000071aU;
                    this->__Vtask_uvm_report_error__293__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                    __Vtask_uvm_report_error__293__verbosity = 0U;
                    this->__Vtask_uvm_report_error__293__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("No transactor available to physically access memory from map '"s, __VlefCall_14__get_full_name), "'"s));
                    this->__Vtask_uvm_report_error__293__id 
                        = VL_CVT_PACK_STR_NN(__VlefCall_13__get_type_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__294__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__294__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__295__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__295__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__293__id, this->__Vtask_uvm_report_error__293__message, __Vtask_uvm_report_error__293__verbosity, this->__Vtask_uvm_report_error__293__filename, __Vtask_uvm_report_error__293__line, this->__Vtask_uvm_report_error__293__context_name, (IData)(__Vtask_uvm_report_error__293__report_enabled_checked));
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1819)->__PVT__status = 1U;
                Xcheck_accessX__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1823)
                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1823)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
            if ((VlNull{} == VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1825)
                 ->__PVT__frontdoor)) {
                if (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1827)
                    ->__PVT__unmapped) {
                    this->__Vfunc_uvm_report_enabled__298__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__298__severity = 2U;
                    __Vfunc_uvm_report_enabled__298__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__299__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__299__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__300__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__300__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__298__verbosity, (IData)(__Vfunc_uvm_report_enabled__298__severity), this->__Vfunc_uvm_report_enabled__298__id, __VlefCall_15__uvm_report_enabled);
                    if ((0U != __VlefCall_15__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_16__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1830)
                                      ->__PVT__map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1830)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                        __Vtask_uvm_report_error__304__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__304__context_name = ""s;
                        __Vtask_uvm_report_error__304__line = 0x00000726U;
                        this->__Vtask_uvm_report_error__304__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__304__verbosity = 0U;
                        this->__Vtask_uvm_report_error__304__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_16__get_full_name), "' unmapped in map '"s), __VlefCall_17__get_full_name), "' and does not have a user-defined frontdoor"s));
                        this->__Vtask_uvm_report_error__304__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__305__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__305__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__306__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__306__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__304__id, this->__Vtask_uvm_report_error__304__message, __Vtask_uvm_report_error__304__verbosity, this->__Vtask_uvm_report_error__304__filename, __Vtask_uvm_report_error__304__line, this->__Vtask_uvm_report_error__304__context_name, (IData)(__Vtask_uvm_report_error__304__report_enabled_checked));
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1831)->__PVT__status = 1U;
                    Xcheck_accessX__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                if (VL_LTS_III(32, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1835)
                               ->__PVT__value.size())) {
                    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_18__get_n_bits);
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1836)
                                  ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1836)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_19__get_n_bytes);
                    if ((__VlefCall_18__get_n_bits 
                         > (__VlefCall_19__get_n_bytes 
                            << 3U))) {
                        this->__Vfunc_uvm_report_enabled__310__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__310__severity = 2U;
                        __Vfunc_uvm_report_enabled__310__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__311__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__311__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__312__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__312__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__310__verbosity, (IData)(__Vfunc_uvm_report_enabled__310__severity), this->__Vfunc_uvm_report_enabled__310__id, __VlefCall_20__uvm_report_enabled);
                        if ((0U != __VlefCall_20__uvm_report_enabled)) {
                            this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_21__get_n_bits);
                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1839)
                                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1839)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_22__get_n_bytes);
                            __Vtask_uvm_report_error__316__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__316__context_name = ""s;
                            __Vtask_uvm_report_error__316__line = 0x0000072fU;
                            this->__Vtask_uvm_report_error__316__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__316__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__316__message
                                          ,"Cannot burst a %0d-bit memory through a narrower data path (%0d bytes)",2
                                          , '#',32,__VlefCall_21__get_n_bits
                                          , '#',32,
                                          (__VlefCall_22__get_n_bytes 
                                           << 3U));
                            this->__Vtask_uvm_report_error__316__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__317__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__317__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__318__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__318__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__316__id, this->__Vtask_uvm_report_error__316__message, __Vtask_uvm_report_error__316__verbosity, this->__Vtask_uvm_report_error__316__filename, __Vtask_uvm_report_error__316__line, this->__Vtask_uvm_report_error__316__context_name, (IData)(__Vtask_uvm_report_error__316__report_enabled_checked));
                        }
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1840)->__PVT__status = 1U;
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                    if (((VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1843)
                          ->__PVT__offset + (QData)((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1843)
                                                            ->__PVT__value.size()))) 
                         > this->__PVT__m_size)) {
                        this->__Vfunc_uvm_report_enabled__320__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__320__severity = 2U;
                        __Vfunc_uvm_report_enabled__320__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__321__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__321__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__322__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__322__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__320__verbosity, (IData)(__Vfunc_uvm_report_enabled__320__severity), this->__Vfunc_uvm_report_enabled__320__id, __VlefCall_23__uvm_report_enabled);
                        if ((0U != __VlefCall_23__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__324__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__324__context_name = ""s;
                            __Vtask_uvm_report_error__324__line = 0x00000736U;
                            this->__Vtask_uvm_report_error__324__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_error__324__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__324__message
                                          ,"Burst of size 'd%0d starting at offset 'd%0d exceeds size of memory, 'd%0d",3
                                          , '~',32,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1846)
                                          ->__PVT__value.size()
                                          , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1846)
                                          ->__PVT__offset
                                          , '#',64,this->__PVT__m_size);
                            this->__Vtask_uvm_report_error__324__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__325__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__325__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__326__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__326__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__324__id, this->__Vtask_uvm_report_error__324__message, __Vtask_uvm_report_error__324__verbosity, this->__Vtask_uvm_report_error__324__filename, __Vtask_uvm_report_error__324__line, this->__Vtask_uvm_report_error__324__context_name, (IData)(__Vtask_uvm_report_error__324__report_enabled_checked));
                        }
                        Xcheck_accessX__Vfuncrtn = 0U;
                        goto __Vlabel0;
                    }
                }
            }
            if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1852)
                 ->__PVT__map)) {
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1853)->__PVT__map 
                    = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1853)
                    ->__PVT__local_map;
            }
        }
        Xcheck_accessX__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__330__verbosity;
    __Vfunc_uvm_report_enabled__330__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__330__severity;
    __Vfunc_uvm_report_enabled__330__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__331__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__332__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__335__verbosity;
    __Vtask_uvm_report_error__335__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__335__line;
    __Vtask_uvm_report_error__335__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__335__report_enabled_checked;
    __Vtask_uvm_report_error__335__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__336__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__337__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__343__verbosity;
    __Vfunc_uvm_report_enabled__343__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__343__severity;
    __Vfunc_uvm_report_enabled__343__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__344__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__345__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__348__verbosity;
    __Vtask_uvm_report_info__348__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__348__line;
    __Vtask_uvm_report_info__348__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__348__report_enabled_checked;
    __Vtask_uvm_report_info__348__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__349__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__350__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    {
        status = 0U;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__330__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__330__severity = 2U;
            __Vfunc_uvm_report_enabled__330__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__331__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__331__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__332__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__332__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__330__verbosity, (IData)(__Vfunc_uvm_report_enabled__330__severity), this->__Vfunc_uvm_report_enabled__330__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__335__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__335__context_name = ""s;
                __Vtask_uvm_report_error__335__line = 0x0000075aU;
                this->__Vtask_uvm_report_error__335__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__335__verbosity = 0U;
                this->__Vtask_uvm_report_error__335__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__335__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__336__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__336__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__337__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__337__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__335__id, this->__Vtask_uvm_report_error__335__message, __Vtask_uvm_report_error__335__verbosity, this->__Vtask_uvm_report_error__335__filename, __Vtask_uvm_report_error__335__line, this->__Vtask_uvm_report_error__335__context_name, (IData)(__Vtask_uvm_report_error__335__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1889)->__PVT__element 
            = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1890)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1891)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1892)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1893)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1894)->__PVT__value.atWrite(0U) 
            = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                        - 1ULL));
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1895)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1896)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1897)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1898)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1899)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_mem.svh", 1902)->__VnoInFunc_write(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1906)
            ->__PVT__status;
        this->__Vfunc_uvm_report_enabled__343__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__343__severity = 0U;
        __Vfunc_uvm_report_enabled__343__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__344__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__344__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__345__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__345__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__343__verbosity, (IData)(__Vfunc_uvm_report_enabled__343__severity), this->__Vfunc_uvm_report_enabled__343__id, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__348__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__348__context_name = ""s;
            __Vtask_uvm_report_info__348__line = 0x00000775U;
            this->__Vtask_uvm_report_info__348__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__348__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__348__message
                          ,"Poked memory '%s[%0d]' with value 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__348__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__349__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__349__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__350__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__350__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__348__id, this->__Vtask_uvm_report_info__348__message, __Vtask_uvm_report_info__348__verbosity, this->__Vtask_uvm_report_info__348__filename, __Vtask_uvm_report_info__348__line, this->__Vtask_uvm_report_info__348__context_name, (IData)(__Vtask_uvm_report_info__348__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__354__verbosity;
    __Vfunc_uvm_report_enabled__354__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__354__severity;
    __Vfunc_uvm_report_enabled__354__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__355__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__356__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__359__verbosity;
    __Vtask_uvm_report_error__359__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__359__line;
    __Vtask_uvm_report_error__359__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__359__report_enabled_checked;
    __Vtask_uvm_report_error__359__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__360__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__361__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__367__verbosity;
    __Vfunc_uvm_report_enabled__367__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__367__severity;
    __Vfunc_uvm_report_enabled__367__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__368__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__369__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__372__verbosity;
    __Vtask_uvm_report_info__372__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__372__line;
    __Vtask_uvm_report_info__372__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__372__report_enabled_checked;
    __Vtask_uvm_report_info__372__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__373__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__374__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__get_full_name;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_1;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        status = 0U;
        value = 0ULL;
        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        __VlefLogAnd_1 = (VlNull{} == bkdr);
        if (__VlefLogAnd_1) {
            this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
            __VlefLogAnd_1 = (1U & (~ (IData)(__VlefCall_0__has_hdl_path)));
        }
        if (__VlefLogAnd_1) {
            this->__Vfunc_uvm_report_enabled__354__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__354__severity = 2U;
            __Vfunc_uvm_report_enabled__354__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__355__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__355__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__356__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__356__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__354__verbosity, (IData)(__Vfunc_uvm_report_enabled__354__severity), this->__Vfunc_uvm_report_enabled__354__id, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                __Vtask_uvm_report_error__359__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__359__context_name = ""s;
                __Vtask_uvm_report_error__359__line = 0x0000078cU;
                this->__Vtask_uvm_report_error__359__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__359__verbosity = 0U;
                this->__Vtask_uvm_report_error__359__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("No backdoor access available in memory '"s, __VlefCall_3__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__359__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__360__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__360__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__361__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__361__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__359__id, this->__Vtask_uvm_report_error__359__message, __Vtask_uvm_report_error__359__verbosity, this->__Vtask_uvm_report_error__359__filename, __Vtask_uvm_report_error__359__line, this->__Vtask_uvm_report_error__359__context_name, (IData)(__Vtask_uvm_report_error__359__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1939)->__PVT__element 
            = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this};
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1940)->__PVT__path = 1U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1941)->__PVT__element_kind = 2U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1942)->__PVT__kind = 0U;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1943)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1944)->__PVT__bd_kind 
            = kind;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1945)->__PVT__parent 
            = parent;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1946)->__PVT__extension 
            = extension;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1947)->__PVT__fname 
            = fname;
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1948)->__PVT__lineno 
            = lineno;
        if ((VlNull{} != bkdr)) {
            VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_mem.svh", 1951)->__VnoInFunc_read(vlProcess, vlSymsp, rw);
        } else {
            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
        }
        status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1955)
            ->__PVT__status;
        value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 1956)
            ->__PVT__value.at(0U);
        this->__Vfunc_uvm_report_enabled__367__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__367__severity = 0U;
        __Vfunc_uvm_report_enabled__367__verbosity = 0x0000012cU;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__368__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__368__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__369__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__369__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__367__verbosity, (IData)(__Vfunc_uvm_report_enabled__367__severity), this->__Vfunc_uvm_report_enabled__367__id, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
            __Vtask_uvm_report_info__372__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_info__372__context_name = ""s;
            __Vtask_uvm_report_info__372__line = 0x000007a7U;
            this->__Vtask_uvm_report_info__372__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
            __Vtask_uvm_report_info__372__verbosity = 0x0000012cU;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__372__message
                          ,"Peeked memory '%s[%0d]' has value 'h%h",3
                          , 'S',&(__VlefCall_6__get_full_name)
                          , '#',64,offset, '#',64,value);
            this->__Vtask_uvm_report_info__372__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__373__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__373__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__374__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__374__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__372__id, this->__Vtask_uvm_report_info__372__message, __Vtask_uvm_report_info__372__verbosity, this->__Vtask_uvm_report_info__372__filename, __Vtask_uvm_report_info__372__line, this->__Vtask_uvm_report_info__372__context_name, (IData)(__Vtask_uvm_report_info__372__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__377__verbosity;
    __Vfunc_uvm_report_enabled__377__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__377__severity;
    __Vfunc_uvm_report_enabled__377__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__378__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__379__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__383__verbosity;
    __Vtask_uvm_report_error__383__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__383__line;
    __Vtask_uvm_report_error__383__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__383__report_enabled_checked;
    __Vtask_uvm_report_error__383__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__384__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__385__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__PVT__m_fname = fname;
        this->__PVT__m_lineno = lineno;
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__377__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__377__severity = 2U;
            __Vfunc_uvm_report_enabled__377__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__378__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__378__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__379__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__379__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__377__verbosity, (IData)(__Vfunc_uvm_report_enabled__377__severity), this->__Vfunc_uvm_report_enabled__377__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1981)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__383__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__383__context_name = ""s;
                __Vtask_uvm_report_error__383__line = 0x000007bdU;
                this->__Vtask_uvm_report_error__383__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__383__verbosity = 0U;
                this->__Vtask_uvm_report_error__383__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__383__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__384__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__384__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__385__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__385__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__383__id, this->__Vtask_uvm_report_error__383__message, __Vtask_uvm_report_error__383__verbosity, this->__Vtask_uvm_report_error__383__filename, __Vtask_uvm_report_error__383__line, this->__Vtask_uvm_report_error__383__context_name, (IData)(__Vtask_uvm_report_error__383__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 1985)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 1986)->__PVT__frontdoor 
            = ftdr;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_frontdoor\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__389__verbosity;
    __Vfunc_uvm_report_enabled__389__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__389__severity;
    __Vfunc_uvm_report_enabled__389__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__390__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__391__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__395__verbosity;
    __Vtask_uvm_report_error__395__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__395__line;
    __Vtask_uvm_report_error__395__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__395__report_enabled_checked;
    __Vtask_uvm_report_error__395__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__396__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__397__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    {
        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
        if ((VlNull{} == map)) {
            this->__Vfunc_uvm_report_enabled__389__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__389__severity = 2U;
            __Vfunc_uvm_report_enabled__389__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__390__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__390__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__391__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__391__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__389__verbosity, (IData)(__Vfunc_uvm_report_enabled__389__severity), this->__Vfunc_uvm_report_enabled__389__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2000)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                __Vtask_uvm_report_error__395__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__395__context_name = ""s;
                __Vtask_uvm_report_error__395__line = 0x000007d0U;
                this->__Vtask_uvm_report_error__395__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__395__verbosity = 0U;
                this->__Vtask_uvm_report_error__395__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, __VlefCall_1__get_full_name), "' not found in map '"s), __VlefCall_2__get_full_name), "'"s));
                this->__Vtask_uvm_report_error__395__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__396__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__396__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__397__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__397__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__395__id, this->__Vtask_uvm_report_error__395__message, __Vtask_uvm_report_error__395__verbosity, this->__Vtask_uvm_report_error__395__filename, __Vtask_uvm_report_error__395__line, this->__Vtask_uvm_report_error__395__context_name, (IData)(__Vtask_uvm_report_error__395__report_enabled_checked));
            }
            get_frontdoor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2004)->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_mem>{this}, 1U, map_info);
        get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_mem.svh", 2005)
            ->__PVT__frontdoor;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_backdoor\n"); );
    // Body
    this->__PVT__m_fname = fname;
    this->__PVT__m_lineno = lineno;
    this->__PVT__m_backdoor = bkdr;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_backdoor\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> unnamedblk463__DOT__blk;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk463__DOT__bkdr;
    if (inherited) {
        this->__VnoInFunc_get_parent(vlSymsp, unnamedblk463__DOT__blk);
        {
            while ((VlNull{} != unnamedblk463__DOT__blk)) {
                VL_NULL_CHECK(unnamedblk463__DOT__blk, "../../uvm/distrib/src/reg/uvm_mem.svh", 2033)->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk463__DOT__bkdr);
                if ((VlNull{} != unnamedblk463__DOT__bkdr)) {
                    this->__PVT__m_backdoor = unnamedblk463__DOT__bkdr;
                    goto __Vlabel0;
                }
                VL_NULL_CHECK(unnamedblk463__DOT__blk, "../../uvm/distrib/src/reg/uvm_mem.svh", 2038)->__VnoInFunc_get_parent(vlSymsp, unnamedblk463__DOT__blk);
            }
            __Vlabel0: ;
        }
    }
    get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

extern const VlWide<32>/*1023:0*/ VUVM_Activator__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ VUVM_Activator__ConstPool__CONST_h2ae7f32a_0;

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__404__verbosity;
    __Vfunc_uvm_report_enabled__404__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__404__severity;
    __Vfunc_uvm_report_enabled__404__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__408__verbosity;
    __Vtask_uvm_report_info__408__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__408__line;
    __Vtask_uvm_report_info__408__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__408__report_enabled_checked;
    __Vtask_uvm_report_info__408__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__412__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__412__value);
    IData/*31:0*/ __Vtask_uvm_report_fatal__413__verbosity;
    __Vtask_uvm_report_fatal__413__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__413__line;
    __Vtask_uvm_report_fatal__413__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__413__report_enabled_checked;
    __Vtask_uvm_report_fatal__413__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__414__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__415__Vfuncout;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__417__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__417__value);
    IData/*31:0*/ __Vtask_uvm_report_fatal__418__verbosity;
    __Vtask_uvm_report_fatal__418__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__418__line;
    __Vtask_uvm_report_fatal__418__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__418__report_enabled_checked;
    __Vtask_uvm_report_fatal__418__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__422__verbosity;
    __Vfunc_uvm_report_enabled__422__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__422__severity;
    __Vfunc_uvm_report_enabled__422__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__423__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__424__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__427__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i;
    __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i__Vloopsize = 0;
    VUVM_Activator_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__size = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__428__concat;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i;
    __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i__Vloopsize;
    __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i__Vloopsize = 0;
    VUVM_Activator_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice;
    __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__offset = 0;
    __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__size = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__429__verbosity;
    __Vtask_uvm_report_error__429__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__429__line;
    __Vtask_uvm_report_error__429__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__429__report_enabled_checked;
    __Vtask_uvm_report_error__429__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__430__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__431__Vfuncout;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_3;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_6__uvm_hdl_concat2string;
    std::string __VlefCall_5__uvm_hdl_concat2string;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk464__DOT__mem_idx;
    unnamedblk464__DOT__mem_idx = 0;
    IData/*31:0*/ unnamedblk464__DOT__mem_idx__Vloopsize;
    unnamedblk464__DOT__mem_idx__Vloopsize = 0;
    std::string unnamedblk464__DOT__unnamedblk465__DOT__idx;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i;
    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i = 0;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i__Vloopsize;
    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j;
    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j = 0;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j__Vloopsize;
    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j__Vloopsize = 0;
    std::string unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__hdl_path;
    QData/*63:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__k;
    IData/*31:0*/ unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    VlWide<32>/*1023:0*/ val;
    CData/*0:0*/ ok;
    {
        backdoor_read_func__Vfuncrtn = 0U;
        paths.clear();
        VL_ZERO_W(1024, val);
        ok = 1U;
        this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                            VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2054)
                                                               ->__PVT__bd_kind), "."s);
        unnamedblk464__DOT__mem_idx = 0U;
        while (VL_LTS_III(32, unnamedblk464__DOT__mem_idx, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2056)
                          ->__PVT__value.size())) {
            unnamedblk464__DOT__mem_idx__Vloopsize 
                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2056)
                ->__PVT__value.size();
            unnamedblk464__DOT__unnamedblk465__DOT__idx = ""s;
            VL_SFORMAT_NX(unnamedblk464__DOT__unnamedblk465__DOT__idx
                          ,"%0d",1, '~',32,((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2058)
                                                    ->__PVT__offset) 
                                            + unnamedblk464__DOT__mem_idx));
            unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i, paths.size())) {
                unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i__Vloopsize 
                    = paths.size();
                unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat 
                    = paths.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i);
                VL_ASSIGN_W(1024, val, VUVM_Activator__ConstPool__CONST_hd6b7ba52_0);
                unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j, VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2062)
                                  ->__PVT__slices.size())) {
                    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2062)
                        ->__PVT__slices.size();
                    {
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__hdl_path 
                            = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2063)
                                                                           ->__PVT__slices.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j)
                                                                           .__PVT__path, "["s), unnamedblk464__DOT__unnamedblk465__DOT__idx), "]"s);
                        this->__Vfunc_uvm_report_enabled__404__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__404__severity = 0U;
                        __Vfunc_uvm_report_enabled__404__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__405__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__405__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__406__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__404__verbosity, (IData)(__Vfunc_uvm_report_enabled__404__severity), this->__Vfunc_uvm_report_enabled__404__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_info__408__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__408__context_name = ""s;
                            __Vtask_uvm_report_info__408__line = 0x00000811U;
                            this->__Vtask_uvm_report_info__408__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                            __Vtask_uvm_report_info__408__verbosity = 0x000001f4U;
                            this->__Vtask_uvm_report_info__408__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("backdoor_read from "s, unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__hdl_path));
                            this->__Vtask_uvm_report_info__408__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__409__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__409__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__410__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__408__id, this->__Vtask_uvm_report_info__408__message, __Vtask_uvm_report_info__408__verbosity, this->__Vtask_uvm_report_info__408__filename, __Vtask_uvm_report_info__408__line, this->__Vtask_uvm_report_info__408__context_name, (IData)(__Vtask_uvm_report_info__408__report_enabled_checked));
                        }
                        if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2067)
                                       ->__PVT__slices.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j)
                                       .__PVT__offset)) {
                            VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__412__value);
                            __Vtask_uvm_report_fatal__413__report_enabled_checked = 0U;
                            this->__Vtask_uvm_report_fatal__413__context_name = ""s;
                            __Vtask_uvm_report_fatal__413__line = 0U;
                            this->__Vtask_uvm_report_fatal__413__filename = ""s;
                            __Vtask_uvm_report_fatal__413__verbosity = 0U;
                            this->__Vtask_uvm_report_fatal__413__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                            this->__Vtask_uvm_report_fatal__413__id = "UVM_HDL_READ"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__414__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                = __Vfunc_get__414__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__415__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                = __Vtask_get_root__415__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__413__id, this->__Vtask_uvm_report_fatal__413__message, __Vtask_uvm_report_fatal__413__verbosity, this->__Vtask_uvm_report_fatal__413__filename, __Vtask_uvm_report_fatal__413__line, this->__Vtask_uvm_report_fatal__413__context_name, (IData)(__Vtask_uvm_report_fatal__413__report_enabled_checked));
                            __VlefCall_1__uvm_hdl_read = 0U;
                            val[0U] = __Vfunc_uvm_hdl_read__412__value[0U];
                            val[1U] = __Vfunc_uvm_hdl_read__412__value[1U];
                            val[2U] = __Vfunc_uvm_hdl_read__412__value[2U];
                            val[3U] = __Vfunc_uvm_hdl_read__412__value[3U];
                            val[4U] = __Vfunc_uvm_hdl_read__412__value[4U];
                            val[5U] = __Vfunc_uvm_hdl_read__412__value[5U];
                            val[6U] = __Vfunc_uvm_hdl_read__412__value[6U];
                            val[7U] = __Vfunc_uvm_hdl_read__412__value[7U];
                            val[8U] = __Vfunc_uvm_hdl_read__412__value[8U];
                            val[9U] = __Vfunc_uvm_hdl_read__412__value[9U];
                            val[10U] = __Vfunc_uvm_hdl_read__412__value[10U];
                            val[11U] = __Vfunc_uvm_hdl_read__412__value[11U];
                            val[12U] = __Vfunc_uvm_hdl_read__412__value[12U];
                            val[13U] = __Vfunc_uvm_hdl_read__412__value[13U];
                            val[14U] = __Vfunc_uvm_hdl_read__412__value[14U];
                            val[15U] = __Vfunc_uvm_hdl_read__412__value[15U];
                            val[16U] = __Vfunc_uvm_hdl_read__412__value[16U];
                            val[17U] = __Vfunc_uvm_hdl_read__412__value[17U];
                            val[18U] = __Vfunc_uvm_hdl_read__412__value[18U];
                            val[19U] = __Vfunc_uvm_hdl_read__412__value[19U];
                            val[20U] = __Vfunc_uvm_hdl_read__412__value[20U];
                            val[21U] = __Vfunc_uvm_hdl_read__412__value[21U];
                            val[22U] = __Vfunc_uvm_hdl_read__412__value[22U];
                            val[23U] = __Vfunc_uvm_hdl_read__412__value[23U];
                            val[24U] = __Vfunc_uvm_hdl_read__412__value[24U];
                            val[25U] = __Vfunc_uvm_hdl_read__412__value[25U];
                            val[26U] = __Vfunc_uvm_hdl_read__412__value[26U];
                            val[27U] = __Vfunc_uvm_hdl_read__412__value[27U];
                            val[28U] = __Vfunc_uvm_hdl_read__412__value[28U];
                            val[29U] = __Vfunc_uvm_hdl_read__412__value[29U];
                            val[30U] = __Vfunc_uvm_hdl_read__412__value[30U];
                            val[31U] = __Vfunc_uvm_hdl_read__412__value[31U];
                            ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_read);
                            goto __Vlabel1;
                        }
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice = 0ULL;
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__k 
                            = VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2073)
                            ->__PVT__slices.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j)
                            .__PVT__offset;
                        VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__417__value);
                        __Vtask_uvm_report_fatal__418__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_fatal__418__context_name = ""s;
                        __Vtask_uvm_report_fatal__418__line = 0U;
                        this->__Vtask_uvm_report_fatal__418__filename = ""s;
                        __Vtask_uvm_report_fatal__418__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__418__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                        this->__Vtask_uvm_report_fatal__418__id = "UVM_HDL_READ"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__419__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__419__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__420__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__418__id, this->__Vtask_uvm_report_fatal__418__message, __Vtask_uvm_report_fatal__418__verbosity, this->__Vtask_uvm_report_fatal__418__filename, __Vtask_uvm_report_fatal__418__line, this->__Vtask_uvm_report_fatal__418__context_name, (IData)(__Vtask_uvm_report_fatal__418__report_enabled_checked));
                        __VlefCall_2__uvm_hdl_read = 0U;
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice 
                            = (((QData)((IData)(__Vfunc_uvm_hdl_read__417__value[1U])) 
                                << 0x00000020U) | (QData)((IData)(__Vfunc_uvm_hdl_read__417__value[0U])));
                        ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0 
                            = VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2075)
                            ->__PVT__slices.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j)
                            .__PVT__size;
                        while (VL_LTS_III(32, 0U, unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                            __Vincrement1 = unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__k;
                            unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__k 
                                = ((IData)(1U) + unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__k);
                            val[(0x0000001fU & (__Vincrement1 
                                                >> 5U))] 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & __Vincrement1))) 
                                    & val[(0x0000001fU 
                                           & (__Vincrement1 
                                              >> 5U))]) 
                                   | ((1U & (IData)(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice)) 
                                      << (0x0000001fU 
                                          & __Vincrement1)));
                            unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice 
                                = (unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__slice 
                                   >> 1U);
                            unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                = (unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__unnamedblk469__DOT__unnamedblk470__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                   - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    if ((unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2062)
                         ->__PVT__slices.size())) {
                        unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j 
                            = ((IData)(1U) + unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__unnamedblk467__DOT__unnamedblk468__DOT__j);
                    }
                }
                VL_SHIFTL_WWI(1024,1024,32, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h2ae7f32a_0, this->__PVT__m_n_bits);
                VL_SUB_W(32, __Vtemp_3, __Vtemp_2, VUVM_Activator__ConstPool__CONST_h2ae7f32a_0);
                val[0U] = (val[0U] & __Vtemp_3[0U]);
                val[1U] = (val[1U] & __Vtemp_3[1U]);
                val[2U] = (val[2U] & __Vtemp_3[2U]);
                val[3U] = (val[3U] & __Vtemp_3[3U]);
                val[4U] = (val[4U] & __Vtemp_3[4U]);
                val[5U] = (val[5U] & __Vtemp_3[5U]);
                val[6U] = (val[6U] & __Vtemp_3[6U]);
                val[7U] = (val[7U] & __Vtemp_3[7U]);
                val[8U] = (val[8U] & __Vtemp_3[8U]);
                val[9U] = (val[9U] & __Vtemp_3[9U]);
                val[10U] = (val[10U] & __Vtemp_3[10U]);
                val[11U] = (val[11U] & __Vtemp_3[11U]);
                val[12U] = (val[12U] & __Vtemp_3[12U]);
                val[13U] = (val[13U] & __Vtemp_3[13U]);
                val[14U] = (val[14U] & __Vtemp_3[14U]);
                val[15U] = (val[15U] & __Vtemp_3[15U]);
                val[16U] = (val[16U] & __Vtemp_3[16U]);
                val[17U] = (val[17U] & __Vtemp_3[17U]);
                val[18U] = (val[18U] & __Vtemp_3[18U]);
                val[19U] = (val[19U] & __Vtemp_3[19U]);
                val[20U] = (val[20U] & __Vtemp_3[20U]);
                val[21U] = (val[21U] & __Vtemp_3[21U]);
                val[22U] = (val[22U] & __Vtemp_3[22U]);
                val[23U] = (val[23U] & __Vtemp_3[23U]);
                val[24U] = (val[24U] & __Vtemp_3[24U]);
                val[25U] = (val[25U] & __Vtemp_3[25U]);
                val[26U] = (val[26U] & __Vtemp_3[26U]);
                val[27U] = (val[27U] & __Vtemp_3[27U]);
                val[28U] = (val[28U] & __Vtemp_3[28U]);
                val[29U] = (val[29U] & __Vtemp_3[29U]);
                val[30U] = (val[30U] & __Vtemp_3[30U]);
                val[31U] = (val[31U] & __Vtemp_3[31U]);
                if ((0U == unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i)) {
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2085)->__PVT__value.atWrite(unnamedblk464__DOT__mem_idx) 
                        = (((QData)((IData)(val[1U])) 
                            << 0x00000020U) | (QData)((IData)(val[0U])));
                }
                if ((0U != ((((((((((((((((((((((((
                                                   ((((((((val[0U] 
                                                           ^ (IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2087)
                                                                     ->__PVT__value.at(unnamedblk464__DOT__mem_idx))) 
                                                          | (val[1U] 
                                                             ^ (IData)(
                                                                       (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2087)
                                                                        ->__PVT__value.at(unnamedblk464__DOT__mem_idx) 
                                                                        >> 0x00000020U)))) 
                                                         | val[2U]) 
                                                        | val[3U]) 
                                                       | val[4U]) 
                                                      | val[5U]) 
                                                     | val[6U]) 
                                                    | val[7U]) 
                                                   | val[8U]) 
                                                  | val[9U]) 
                                                 | val[10U]) 
                                                | val[11U]) 
                                               | val[12U]) 
                                              | val[13U]) 
                                             | val[14U]) 
                                            | val[15U]) 
                                           | val[16U]) 
                                          | val[17U]) 
                                         | val[18U]) 
                                        | val[19U]) 
                                       | val[20U]) 
                                      | val[21U]) | val[22U]) 
                                    | val[23U]) | val[24U]) 
                                  | val[25U]) | val[26U]) 
                                | val[27U]) | val[28U]) 
                              | val[29U]) | val[30U]) 
                            | val[31U]))) {
                    this->__Vfunc_uvm_report_enabled__422__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__422__severity = 2U;
                    __Vfunc_uvm_report_enabled__422__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__423__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__423__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__424__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__424__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__422__verbosity, (IData)(__Vfunc_uvm_report_enabled__422__severity), this->__Vfunc_uvm_report_enabled__422__id, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vfunc_uvm_hdl_concat2string__427__concat 
                            = paths.at(0U);
                        __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i = 0U;
                        __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i__Vloopsize = 0;
                        {
                            __VlefCall_5__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__427__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 390)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 391)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 392)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_5__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 393)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel2;
                            }
                            __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i__Vloopsize 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 396)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__427__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__427__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__427__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__427__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i__Vloopsize 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__427__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i 
                                        = ((IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__427__unnamedblk271__DOT__i);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__427__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__427__image, "}"s);
                            __VlefCall_5__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__427__image;
                            __Vlabel2: ;
                        }
                        __Vfunc_uvm_hdl_concat2string__428__concat 
                            = paths.at(unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i);
                        __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i = 0U;
                        __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i__Vloopsize = 0;
                        {
                            __VlefCall_6__uvm_hdl_concat2string = ""s;
                            this->__Vfunc_uvm_hdl_concat2string__428__image = "{"s;
                            if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 390)
                                   ->__PVT__slices.size()) 
                                  && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 391)
                                      ->__PVT__slices.at(0U)
                                      .__PVT__offset)) 
                                 && (0xffffffffU == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 392)
                                     ->__PVT__slices.at(0U)
                                     .__PVT__size))) {
                                __VlefCall_6__uvm_hdl_concat2string 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 393)
                                    ->__PVT__slices.at(0U)
                                    .__PVT__path;
                                goto __Vlabel3;
                            }
                            __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i = 0U;
                            while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                              ->__PVT__slices.size())) {
                                __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i__Vloopsize 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                    ->__PVT__slices.size();
                                __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice 
                                    = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 396)
                                    ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i);
                                this->__Vfunc_uvm_hdl_concat2string__428__image 
                                    = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__428__image, 
                                                                    VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                     .__PVT__path);
                                if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                .__PVT__offset)) {
                                    this->__Vfunc_uvm_hdl_concat2string__428__image 
                                        = VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__428__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__size) );
                                }
                                if ((__Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i__Vloopsize 
                                     <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__428__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                     ->__PVT__slices.size())) {
                                    __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i 
                                        = ((IData)(1U) 
                                           + __Vfunc_uvm_hdl_concat2string__428__unnamedblk271__DOT__i);
                                }
                            }
                            this->__Vfunc_uvm_hdl_concat2string__428__image 
                                = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__428__image, "}"s);
                            __VlefCall_6__uvm_hdl_concat2string 
                                = this->__Vfunc_uvm_hdl_concat2string__428__image;
                            __Vlabel3: ;
                        }
                        __Vtask_uvm_report_error__429__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__429__context_name = ""s;
                        __Vtask_uvm_report_error__429__line = 0x0000082aU;
                        this->__Vtask_uvm_report_error__429__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_error__429__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__429__message
                                      ,"Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                      , 'S',&(__VlefCall_4__get_full_name)
                                      , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2090)
                                      ->__PVT__value.at(unnamedblk464__DOT__mem_idx)
                                      , 'S',&(__VlefCall_5__uvm_hdl_concat2string)
                                      , '#',1024,val.data()
                                      , 'S',&(__VlefCall_6__uvm_hdl_concat2string));
                        this->__Vtask_uvm_report_error__429__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__430__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__430__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__431__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__431__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__429__id, this->__Vtask_uvm_report_error__429__message, __Vtask_uvm_report_error__429__verbosity, this->__Vtask_uvm_report_error__429__filename, __Vtask_uvm_report_error__429__line, this->__Vtask_uvm_report_error__429__context_name, (IData)(__Vtask_uvm_report_error__429__report_enabled_checked));
                    }
                    backdoor_read_func__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                if ((unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i__Vloopsize 
                     <= paths.size())) {
                    unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i 
                        = ((IData)(1U) + unnamedblk464__DOT__unnamedblk465__DOT__unnamedblk466__DOT__i);
                }
            }
            if ((unnamedblk464__DOT__mem_idx__Vloopsize 
                 <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2056)
                 ->__PVT__value.size())) {
                unnamedblk464__DOT__mem_idx = ((IData)(1U) 
                                               + unnamedblk464__DOT__mem_idx);
            }
        }
        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2096)->__PVT__status 
            = ((IData)(ok) ? 0U : 1U);
        backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2098)
            ->__PVT__status;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_read\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__backdoor_read_func;
    this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2105)->__PVT__status 
        = __VlefCall_0__backdoor_read_func;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_backdoor_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__435__verbosity;
    __Vfunc_uvm_report_enabled__435__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__435__severity;
    __Vfunc_uvm_report_enabled__435__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__436__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__437__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_info__439__verbosity;
    __Vtask_uvm_report_info__439__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_info__439__line;
    __Vtask_uvm_report_info__439__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_info__439__report_enabled_checked;
    __Vtask_uvm_report_info__439__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__440__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__441__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__444__verbosity;
    __Vtask_uvm_report_fatal__444__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__444__line;
    __Vtask_uvm_report_fatal__444__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__444__report_enabled_checked;
    __Vtask_uvm_report_fatal__444__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__445__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__446__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__449__verbosity;
    __Vtask_uvm_report_fatal__449__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__449__line;
    __Vtask_uvm_report_fatal__449__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__449__report_enabled_checked;
    __Vtask_uvm_report_fatal__449__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__450__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__451__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk471__DOT__mem_idx;
    unnamedblk471__DOT__mem_idx = 0;
    IData/*31:0*/ unnamedblk471__DOT__mem_idx__Vloopsize;
    unnamedblk471__DOT__mem_idx__Vloopsize = 0;
    std::string unnamedblk471__DOT__unnamedblk472__DOT__idx;
    IData/*31:0*/ unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i;
    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i = 0;
    IData/*31:0*/ unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i__Vloopsize;
    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j;
    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j = 0;
    IData/*31:0*/ unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j__Vloopsize;
    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j__Vloopsize = 0;
    QData/*63:0*/ unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__slice;
    VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    CData/*0:0*/ ok;
    paths.clear();
    ok = 1U;
    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2117)
                                                           ->__PVT__bd_kind), "."s);
    unnamedblk471__DOT__mem_idx = 0U;
    while (VL_LTS_III(32, unnamedblk471__DOT__mem_idx, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2119)
                      ->__PVT__value.size())) {
        unnamedblk471__DOT__mem_idx__Vloopsize = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2119)
            ->__PVT__value.size();
        unnamedblk471__DOT__unnamedblk472__DOT__idx = ""s;
        VL_SFORMAT_NX(unnamedblk471__DOT__unnamedblk472__DOT__idx
                      ,"%0d",1, '~',32,((IData)(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2121)
                                                ->__PVT__offset) 
                                        + unnamedblk471__DOT__mem_idx));
        unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i, paths.size())) {
            unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i__Vloopsize 
                = paths.size();
            unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat 
                = paths.at(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i);
            unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j, VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2124)
                              ->__PVT__slices.size())) {
                unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j__Vloopsize 
                    = VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2124)
                    ->__PVT__slices.size();
                {
                    this->__Vfunc_uvm_report_enabled__435__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__435__severity = 0U;
                    __Vfunc_uvm_report_enabled__435__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__436__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__436__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__437__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__437__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__435__verbosity, (IData)(__Vfunc_uvm_report_enabled__435__severity), this->__Vfunc_uvm_report_enabled__435__id, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        __Vtask_uvm_report_info__439__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__439__context_name = ""s;
                        __Vtask_uvm_report_info__439__line = 0x0000084dU;
                        this->__Vtask_uvm_report_info__439__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                        __Vtask_uvm_report_info__439__verbosity = 0x000001f4U;
                        __Vtemp_1 = VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2125)
                            ->__PVT__slices.at(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j)
                            .__PVT__path;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__439__message
                                      ,"backdoor_write to %s ",1
                                      , 'S',&(__Vtemp_1));
                        this->__Vtask_uvm_report_info__439__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__440__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__440__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__441__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__441__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__439__id, this->__Vtask_uvm_report_info__439__message, __Vtask_uvm_report_info__439__verbosity, this->__Vtask_uvm_report_info__439__filename, __Vtask_uvm_report_info__439__line, this->__Vtask_uvm_report_info__439__context_name, (IData)(__Vtask_uvm_report_info__439__report_enabled_checked));
                    }
                    if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2127)
                                   ->__PVT__slices.at(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j)
                                   .__PVT__offset)) {
                        __Vtask_uvm_report_fatal__444__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_fatal__444__context_name = ""s;
                        __Vtask_uvm_report_fatal__444__line = 0U;
                        this->__Vtask_uvm_report_fatal__444__filename = ""s;
                        __Vtask_uvm_report_fatal__444__verbosity = 0U;
                        this->__Vtask_uvm_report_fatal__444__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                        this->__Vtask_uvm_report_fatal__444__id = "UVM_HDL_DEPOSIT"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__445__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                            = __Vfunc_get__445__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__446__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                            = __Vtask_get_root__446__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__444__id, this->__Vtask_uvm_report_fatal__444__message, __Vtask_uvm_report_fatal__444__verbosity, this->__Vtask_uvm_report_fatal__444__filename, __Vtask_uvm_report_fatal__444__line, this->__Vtask_uvm_report_fatal__444__context_name, (IData)(__Vtask_uvm_report_fatal__444__report_enabled_checked));
                        __VlefCall_1__uvm_hdl_deposit = 0U;
                        ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                        goto __Vlabel0;
                    }
                    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__slice = 0ULL;
                    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__slice 
                        = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2133)
                                        ->__PVT__value.at(unnamedblk471__DOT__mem_idx), VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2133)
                                        ->__PVT__slices.at(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j)
                                        .__PVT__offset);
                    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__slice 
                        = (unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__unnamedblk476__DOT__slice 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2134)
                                            ->__PVT__slices.at(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j)
                                            .__PVT__size) 
                              - 1ULL));
                    __Vtask_uvm_report_fatal__449__report_enabled_checked = 0U;
                    this->__Vtask_uvm_report_fatal__449__context_name = ""s;
                    __Vtask_uvm_report_fatal__449__line = 0U;
                    this->__Vtask_uvm_report_fatal__449__filename = ""s;
                    __Vtask_uvm_report_fatal__449__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__449__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                    this->__Vtask_uvm_report_fatal__449__id = "UVM_HDL_DEPOSIT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__450__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__450__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__451__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__451__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__449__id, this->__Vtask_uvm_report_fatal__449__message, __Vtask_uvm_report_fatal__449__verbosity, this->__Vtask_uvm_report_fatal__449__filename, __Vtask_uvm_report_fatal__449__line, this->__Vtask_uvm_report_fatal__449__context_name, (IData)(__Vtask_uvm_report_fatal__449__report_enabled_checked));
                    __VlefCall_2__uvm_hdl_deposit = 0U;
                    ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                    __Vlabel0: ;
                }
                if ((unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j__Vloopsize 
                     <= VL_NULL_CHECK(unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2124)
                     ->__PVT__slices.size())) {
                    unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j 
                        = ((IData)(1U) + unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__unnamedblk474__DOT__unnamedblk475__DOT__j);
                }
            }
            if ((unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i__Vloopsize 
                 <= paths.size())) {
                unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i 
                    = ((IData)(1U) + unnamedblk471__DOT__unnamedblk472__DOT__unnamedblk473__DOT__i);
            }
        }
        if ((unnamedblk471__DOT__mem_idx__Vloopsize 
             <= VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2119)
             ->__PVT__value.size())) {
            unnamedblk471__DOT__mem_idx = ((IData)(1U) 
                                           + unnamedblk471__DOT__mem_idx);
        }
    }
    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_mem.svh", 2140)->__PVT__status 
        = ((IData)(ok) ? 0U : 1U);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clear_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__456__verbosity;
    __Vfunc_uvm_report_enabled__456__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__456__severity;
    __Vfunc_uvm_report_enabled__456__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__457__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__458__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__460__verbosity;
    __Vtask_uvm_report_warning__460__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__460__line;
    __Vtask_uvm_report_warning__460__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__460__report_enabled_checked;
    __Vtask_uvm_report_warning__460__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__461__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__462__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__exists;
    {
        if (("ALL"s == kind)) {
            this->__PVT__m_hdl_paths_pool = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_object_string_pool__Tz105, vlProcess, vlSymsp, "hdl_paths"s);
            goto __Vlabel0;
        }
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 2155)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2157)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            this->__Vfunc_uvm_report_enabled__456__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__456__severity = 1U;
            __Vfunc_uvm_report_enabled__456__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__457__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__457__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__458__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__458__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__456__verbosity, (IData)(__Vfunc_uvm_report_enabled__456__severity), this->__Vfunc_uvm_report_enabled__456__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_warning__460__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_warning__460__context_name = ""s;
                __Vtask_uvm_report_warning__460__line = 0x0000086eU;
                this->__Vtask_uvm_report_warning__460__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_warning__460__verbosity = 0U;
                this->__Vtask_uvm_report_warning__460__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_warning__460__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__461__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__461__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__462__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__462__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__460__id, this->__Vtask_uvm_report_warning__460__message, __Vtask_uvm_report_warning__460__verbosity, this->__Vtask_uvm_report_warning__460__filename, __Vtask_uvm_report_warning__460__line, this->__Vtask_uvm_report_warning__460__context_name, (IData)(__Vtask_uvm_report_warning__460__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2162)->__VnoInFunc_delete(vlSymsp, kind);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VUVM_Activator_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz104> paths;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2169)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    concat = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
    VL_NULL_CHECK(concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2172)->__VnoInFunc_set(vlSymsp, slices);
    VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2173)->__VnoInFunc_push_back(vlSymsp, concat);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice(VUVM_Activator__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_add_hdl_path_slice\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz104> paths;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2184)->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
    __VlefLogOr_1 = first;
    if ((1U & (~ (IData)(__VlefLogOr_1)))) {
        VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2187)->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        __VlefLogOr_1 = (0U == __VlefCall_0__size);
    }
    if (__VlefLogOr_1) {
        concat = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
        VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2189)->__VnoInFunc_push_back(vlSymsp, concat);
    } else {
        VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2192)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
        VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2192)->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                (__VlefCall_2__size 
                                                                                - (IData)(1U)), concat);
    }
    VL_NULL_CHECK(concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2194)->__VnoInFunc_add_path(vlSymsp, name, offset, size);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_has_hdl_path\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__exists;
    has_hdl_path__Vfuncrtn = 0U;
    if ((""s == kind)) {
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 2202)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
    }
    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2204)->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
    has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__480__verbosity;
    __Vfunc_uvm_report_enabled__480__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__480__severity;
    __Vfunc_uvm_report_enabled__480__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__481__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__482__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__484__verbosity;
    __Vtask_uvm_report_error__484__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__484__line;
    __Vtask_uvm_report_error__484__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__484__report_enabled_checked;
    __Vtask_uvm_report_error__484__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__485__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__486__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    IData/*31:0*/ unnamedblk477__DOT__i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk477__DOT__unnamedblk478__DOT__t;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz104> hdl_paths;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 2216)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__480__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__480__severity = 2U;
            __Vfunc_uvm_report_enabled__480__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__481__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__481__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__482__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__482__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__480__verbosity, (IData)(__Vfunc_uvm_report_enabled__480__severity), this->__Vfunc_uvm_report_enabled__480__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__484__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__484__context_name = ""s;
                __Vtask_uvm_report_error__484__line = 0x000008acU;
                this->__Vtask_uvm_report_error__484__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__484__verbosity = 0U;
                this->__Vtask_uvm_report_error__484__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__484__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__485__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__485__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__486__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__486__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__484__id, this->__Vtask_uvm_report_error__484__message, __Vtask_uvm_report_error__484__verbosity, this->__Vtask_uvm_report_error__484__filename, __Vtask_uvm_report_error__484__line, this->__Vtask_uvm_report_error__484__context_name, (IData)(__Vtask_uvm_report_error__484__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2224)->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
        unnamedblk477__DOT__i = 0U;
        unnamedblk477__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2226)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk477__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2227)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk477__DOT__i, unnamedblk477__DOT__unnamedblk478__DOT__t);
            paths.push_back(unnamedblk477__DOT__unnamedblk478__DOT__t);
            unnamedblk477__DOT__i = ((IData)(1U) + unnamedblk477__DOT__i);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds(VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_hdl_path_kinds\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__491__Vfuncout;
    __Vtask_first__491__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__492__Vfuncout;
    __Vtask_next__492__Vfuncout = 0;
    // Body
    IData/*31:0*/ __VlefCall_1__next;
    IData/*31:0*/ __VlefCall_0__first;
    std::string kind;
    {
        kind = ""s;
        kinds.clear();
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2239)->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__491__Vfuncout);
        __VlefCall_0__first = __Vtask_first__491__Vfuncout;
        if ((1U & (~ (0U != __VlefCall_0__first)))) {
            goto __Vlabel0;
        }
        do {
            kinds.push_back(kind);
            VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2243)->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__492__Vfuncout);
            __VlefCall_1__next = __Vtask_next__492__Vfuncout;
        } while ((0U != __VlefCall_1__next));
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_full_hdl_path\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__495__verbosity;
    __Vfunc_uvm_report_enabled__495__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__495__severity;
    __Vfunc_uvm_report_enabled__495__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__496__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__497__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__499__verbosity;
    __Vtask_uvm_report_error__499__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__499__line;
    __Vtask_uvm_report_error__499__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__499__report_enabled_checked;
    __Vtask_uvm_report_error__499__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__500__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__501__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__size;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__has_hdl_path;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_queue__Tz104> unnamedblk479__DOT__hdl_paths;
    VlQueue<std::string> unnamedblk479__DOT__parent_paths;
    IData/*31:0*/ unnamedblk479__DOT__unnamedblk480__DOT__i;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat;
    IData/*31:0*/ unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j;
    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j = 0;
    IData/*31:0*/ unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j__Vloopsize;
    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j__Vloopsize = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__t;
    IData/*31:0*/ unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k;
    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k = 0;
    IData/*31:0*/ unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k__Vloopsize;
    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k__Vloopsize = 0;
    {
        if ((""s == kind)) {
            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 2253)->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
        }
        this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
            this->__Vfunc_uvm_report_enabled__495__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__495__severity = 2U;
            __Vfunc_uvm_report_enabled__495__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__496__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__496__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__497__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__497__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__495__verbosity, (IData)(__Vfunc_uvm_report_enabled__495__severity), this->__Vfunc_uvm_report_enabled__495__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__499__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__499__context_name = ""s;
                __Vtask_uvm_report_error__499__line = 0x000008d1U;
                this->__Vtask_uvm_report_error__499__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
                __Vtask_uvm_report_error__499__verbosity = 0U;
                this->__Vtask_uvm_report_error__499__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Memory does not have hdl path defined for abstraction '"s, kind), "'"s));
                this->__Vtask_uvm_report_error__499__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__500__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__500__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__501__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__501__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__499__id, this->__Vtask_uvm_report_error__499__message, __Vtask_uvm_report_error__499__verbosity, this->__Vtask_uvm_report_error__499__filename, __Vtask_uvm_report_error__499__line, this->__Vtask_uvm_report_error__499__context_name, (IData)(__Vtask_uvm_report_error__499__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_mem.svh", 2262)->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk479__DOT__hdl_paths);
        unnamedblk479__DOT__parent_paths.clear();
        unnamedblk479__DOT__parent_paths.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_mem.svh", 2265)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk479__DOT__parent_paths, kind, separator);
        unnamedblk479__DOT__unnamedblk480__DOT__i = 0U;
        unnamedblk479__DOT__unnamedblk480__DOT__i = 0U;
        while (true) {
            VL_NULL_CHECK(unnamedblk479__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2267)->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
            if (!(VL_LTS_III(32, unnamedblk479__DOT__unnamedblk480__DOT__i, __VlefCall_2__size))) break;
            VL_NULL_CHECK(unnamedblk479__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_mem.svh", 2268)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk479__DOT__unnamedblk480__DOT__i, unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat);
            unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j, unnamedblk479__DOT__parent_paths.size())) {
                unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j__Vloopsize 
                    = unnamedblk479__DOT__parent_paths.size();
                unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__t 
                    = VL_NEW(VUVM_Activator_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k, VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2273)
                                  ->__PVT__slices.size())) {
                    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k__Vloopsize 
                        = VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2273)
                        ->__PVT__slices.size();
                    if ((""s == VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2274)
                         ->__PVT__slices.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k)
                         .__PVT__path)) {
                        VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__t, "../../uvm/distrib/src/reg/uvm_mem.svh", 2275)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(unnamedblk479__DOT__parent_paths.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j)), 0xffffffffU, 0xffffffffU);
                    } else {
                        VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__t, "../../uvm/distrib/src/reg/uvm_mem.svh", 2277)->__VnoInFunc_add_path(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk479__DOT__parent_paths.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j), separator), VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2277)
                                                                                ->__PVT__slices.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2278)
                                                                                ->__PVT__slices.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k)
                                                                                .__PVT__offset, VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2279)
                                                                                ->__PVT__slices.at(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k)
                                                                                .__PVT__size);
                    }
                    if ((unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k__Vloopsize 
                         <= VL_NULL_CHECK(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_mem.svh", 2273)
                         ->__PVT__slices.size())) {
                        unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k 
                            = ((IData)(1U) + unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__unnamedblk484__DOT__k);
                    }
                }
                paths.push_back(unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__unnamedblk483__DOT__t);
                if ((unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j__Vloopsize 
                     <= unnamedblk479__DOT__parent_paths.size())) {
                    unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j 
                        = ((IData)(1U) + unnamedblk479__DOT__unnamedblk480__DOT__unnamedblk481__DOT__unnamedblk482__DOT__j);
                }
            }
            unnamedblk479__DOT__unnamedblk480__DOT__i 
                = ((IData)(1U) + unnamedblk479__DOT__unnamedblk480__DOT__i);
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_set_parent\n"); );
    // Body
    this->__PVT__m_parent = parent;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_get_parent\n"); );
    // Body
    this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_7__get_access;
    QData/*63:0*/ __VlefCall_6__get_size;
    IData/*31:0*/ __VlefCall_5__get_n_bytes;
    std::string __VlefCall_4__get_full_name;
    QData/*63:0*/ __VlefCall_3__get_base_addr;
    IData/*31:0*/ __VlefCall_2__get_n_bits;
    QData/*63:0*/ __VlefCall_1__get_size;
    std::string __VlefCall_0__get_full_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__map;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__map__Vnext;
    CData/*0:0*/ unnamedblk485__DOT__map__Vmore;
    unnamedblk485__DOT__map__Vmore = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__unnamedblk486__DOT__parent_map;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk486__DOT__offset;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__endian_name;
    convert2string__Vfuncrtn = ""s;
    std::string res_str;
    std::string prefix;
    res_str = ""s;
    prefix = ""s;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_2__get_n_bits);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMemory %s -- %0dx%0d bits",4
                  , 'S',&(prefix), 'S',&(__VlefCall_0__get_full_name)
                  , '#',64,__VlefCall_1__get_size, '#',32,__VlefCall_2__get_n_bits);
    convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                 ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                 : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
    unnamedblk485__DOT__map__Vmore = (0U != this->__PVT__m_maps.first(unnamedblk485__DOT__map__Vnext));
    while (unnamedblk485__DOT__map__Vmore) {
        unnamedblk485__DOT__map = unnamedblk485__DOT__map__Vnext;
        unnamedblk485__DOT__map__Vmore = (0U != this->__PVT__m_maps.next(unnamedblk485__DOT__map__Vnext));
        unnamedblk485__DOT__unnamedblk486__DOT__parent_map 
            = unnamedblk485__DOT__map;
        unnamedblk485__DOT__unnamedblk486__DOT__offset = 0U;
        while ((VlNull{} != unnamedblk485__DOT__unnamedblk486__DOT__parent_map)) {
            unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map 
                = unnamedblk485__DOT__unnamedblk486__DOT__parent_map;
            unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__endian_name = 0U;
            VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2322)->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk485__DOT__unnamedblk486__DOT__parent_map);
            VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2323)->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__endian_name);
            if ((VlNull{} == unnamedblk485__DOT__unnamedblk486__DOT__parent_map)) {
                VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2325)->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
            } else {
                VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2326)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, __VlefCall_3__get_base_addr);
            }
            unnamedblk485__DOT__unnamedblk486__DOT__offset 
                = (IData)(__VlefCall_3__get_base_addr);
            prefix = VL_CONCATN_NNN(prefix, "  "s);
            VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2329)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, "../../uvm/distrib/src/reg/uvm_mem.svh", 2329)->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
            this->__VnoInFunc_get_size(vlSymsp, __VlefCall_6__get_size);
            this->__VnoInFunc_get_access(vlProcess, vlSymsp, unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__this_map, __VlefCall_7__get_access);
            __Vtemp_1 = VUVM_Activator___024unit::__Venumtab_enum_name79
                [(7U & unnamedblk485__DOT__unnamedblk486__DOT__unnamedblk487__DOT__endian_name)];
            VL_SFORMAT_NX(convert2string__Vfuncrtn,"%sMapped in '%s' -- buswidth %0d bytes, %s, offset 'h%0h, size 'h%0h, %s\n",7
                          , 'S',&(prefix), 'S',&(__VlefCall_4__get_full_name)
                          , '#',32,__VlefCall_5__get_n_bytes
                          , 'S',&(__Vtemp_1), '#',32,unnamedblk485__DOT__unnamedblk486__DOT__offset
                          , '#',64,__VlefCall_6__get_size
                          , 'S',&(__VlefCall_7__get_access));
        }
    }
    prefix = "  "s;
    if (this->__PVT__m_read_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing read method"s);
    }
    if (this->__PVT__m_write_in_progress) {
        if (((""s != this->__PVT__m_fname) & (0U != this->__PVT__m_lineno))) {
            VL_SFORMAT_NX(res_str,"%s:%0d ",2, 'S',&(this->__PVT__m_fname)
                          , '~',32,this->__PVT__m_lineno);
        }
        convert2string__Vfuncrtn = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(convert2string__Vfuncrtn, "  "s), res_str), "currently executing write method"s);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_1__get_size;
    IData/*31:0*/ __VlefCall_0__get_n_bits;
    VUVM_Activator_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_0__get_n_bits);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_mem.svh", 2353)->__VnoInFunc_print_field_int(vlSymsp, "n_bits"s, (QData)((IData)(__VlefCall_0__get_n_bits)), 0x00000020U, 0x03000000U, 0x2eU, ""s);
    this->__VnoInFunc_get_size(vlSymsp, __VlefCall_1__get_size);
    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_mem.svh", 2354)->__VnoInFunc_print_field_int(vlSymsp, "size"s, __VlefCall_1__get_size, 0x00000020U, 0x03000000U, 0x2eU, ""s);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__527__verbosity;
    __Vfunc_uvm_report_enabled__527__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__527__severity;
    __Vfunc_uvm_report_enabled__527__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__528__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__529__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__531__verbosity;
    __Vtask_uvm_report_fatal__531__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__531__line;
    __Vtask_uvm_report_fatal__531__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__531__report_enabled_checked;
    __Vtask_uvm_report_fatal__531__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__532__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__533__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__527__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__527__severity = 3U;
    __Vfunc_uvm_report_enabled__527__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__528__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__528__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__529__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__529__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__527__verbosity, (IData)(__Vfunc_uvm_report_enabled__527__severity), this->__Vfunc_uvm_report_enabled__527__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__531__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__531__context_name = ""s;
        __Vtask_uvm_report_fatal__531__line = 0x00000939U;
        this->__Vtask_uvm_report_fatal__531__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_fatal__531__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__531__message = "RegModel memories cannot be cloned"s;
        this->__Vtask_uvm_report_fatal__531__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__532__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__532__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__533__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__533__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__531__id, this->__Vtask_uvm_report_fatal__531__message, __Vtask_uvm_report_fatal__531__verbosity, this->__Vtask_uvm_report_fatal__531__filename, __Vtask_uvm_report_fatal__531__line, this->__Vtask_uvm_report_fatal__531__context_name, (IData)(__Vtask_uvm_report_fatal__531__report_enabled_checked));
    }
    clone__Vfuncrtn = VlNull{};
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__verbosity;
    __Vfunc_uvm_report_enabled__535__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__535__severity;
    __Vfunc_uvm_report_enabled__535__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_fatal__539__verbosity;
    __Vtask_uvm_report_fatal__539__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_fatal__539__line;
    __Vtask_uvm_report_fatal__539__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_fatal__539__report_enabled_checked;
    __Vtask_uvm_report_fatal__539__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__540__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__541__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__535__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__535__severity = 3U;
    __Vfunc_uvm_report_enabled__535__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__536__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__536__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__537__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__535__verbosity, (IData)(__Vfunc_uvm_report_enabled__535__severity), this->__Vfunc_uvm_report_enabled__535__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_fatal__539__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_fatal__539__context_name = ""s;
        __Vtask_uvm_report_fatal__539__line = 0x00000940U;
        this->__Vtask_uvm_report_fatal__539__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_fatal__539__verbosity = 0U;
        this->__Vtask_uvm_report_fatal__539__message = "RegModel memories cannot be copied"s;
        this->__Vtask_uvm_report_fatal__539__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__540__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
            = __Vfunc_get__540__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__541__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
            = __Vtask_get_root__541__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__539__id, this->__Vtask_uvm_report_fatal__539__message, __Vtask_uvm_report_fatal__539__verbosity, this->__Vtask_uvm_report_fatal__539__filename, __Vtask_uvm_report_fatal__539__line, this->__Vtask_uvm_report_fatal__539__context_name, (IData)(__Vtask_uvm_report_fatal__539__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_compare\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__543__verbosity;
    __Vfunc_uvm_report_enabled__543__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__543__severity;
    __Vfunc_uvm_report_enabled__543__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__544__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__545__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__547__verbosity;
    __Vtask_uvm_report_warning__547__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__547__line;
    __Vtask_uvm_report_warning__547__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__547__report_enabled_checked;
    __Vtask_uvm_report_warning__547__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__548__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__549__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    do_compare__Vfuncrtn = 0U;
    this->__Vfunc_uvm_report_enabled__543__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__543__severity = 1U;
    __Vfunc_uvm_report_enabled__543__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__544__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__544__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__545__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__545__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__543__verbosity, (IData)(__Vfunc_uvm_report_enabled__543__severity), this->__Vfunc_uvm_report_enabled__543__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__547__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__547__context_name = ""s;
        __Vtask_uvm_report_warning__547__line = 0x00000948U;
        this->__Vtask_uvm_report_warning__547__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__547__verbosity = 0U;
        this->__Vtask_uvm_report_warning__547__message = "RegModel memories cannot be compared"s;
        this->__Vtask_uvm_report_warning__547__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__548__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__548__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__549__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__549__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__547__id, this->__Vtask_uvm_report_warning__547__message, __Vtask_uvm_report_warning__547__verbosity, this->__Vtask_uvm_report_warning__547__filename, __Vtask_uvm_report_warning__547__line, this->__Vtask_uvm_report_warning__547__context_name, (IData)(__Vtask_uvm_report_warning__547__report_enabled_checked));
    }
    do_compare__Vfuncrtn = 0U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__551__verbosity;
    __Vfunc_uvm_report_enabled__551__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__551__severity;
    __Vfunc_uvm_report_enabled__551__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__552__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__553__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__555__verbosity;
    __Vtask_uvm_report_warning__555__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__555__line;
    __Vtask_uvm_report_warning__555__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__555__report_enabled_checked;
    __Vtask_uvm_report_warning__555__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__556__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__557__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__551__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__551__severity = 1U;
    __Vfunc_uvm_report_enabled__551__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__552__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__552__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__553__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__553__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__551__verbosity, (IData)(__Vfunc_uvm_report_enabled__551__severity), this->__Vfunc_uvm_report_enabled__551__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__555__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__555__context_name = ""s;
        __Vtask_uvm_report_warning__555__line = 0x00000950U;
        this->__Vtask_uvm_report_warning__555__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__555__verbosity = 0U;
        this->__Vtask_uvm_report_warning__555__message = "RegModel memories cannot be packed"s;
        this->__Vtask_uvm_report_warning__555__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__556__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__556__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__557__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__557__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__555__id, this->__Vtask_uvm_report_warning__555__message, __Vtask_uvm_report_warning__555__verbosity, this->__Vtask_uvm_report_warning__555__filename, __Vtask_uvm_report_warning__555__line, this->__Vtask_uvm_report_warning__555__context_name, (IData)(__Vtask_uvm_report_warning__555__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__559__verbosity;
    __Vfunc_uvm_report_enabled__559__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__559__severity;
    __Vfunc_uvm_report_enabled__559__severity = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__560__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__561__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_warning__563__verbosity;
    __Vtask_uvm_report_warning__563__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__563__line;
    __Vtask_uvm_report_warning__563__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__563__report_enabled_checked;
    __Vtask_uvm_report_warning__563__report_enabled_checked = 0;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__564__Vfuncout;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__565__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__Vfunc_uvm_report_enabled__559__id = "RegModel"s;
    __Vfunc_uvm_report_enabled__559__severity = 1U;
    __Vfunc_uvm_report_enabled__559__verbosity = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__560__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
        = __Vfunc_get__560__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__561__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
        = __Vtask_get_root__561__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__559__verbosity, (IData)(__Vfunc_uvm_report_enabled__559__severity), this->__Vfunc_uvm_report_enabled__559__id, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        __Vtask_uvm_report_warning__563__report_enabled_checked = 1U;
        this->__Vtask_uvm_report_warning__563__context_name = ""s;
        __Vtask_uvm_report_warning__563__line = 0x00000957U;
        this->__Vtask_uvm_report_warning__563__filename = "../../uvm/distrib/src/reg/uvm_mem.svh"s;
        __Vtask_uvm_report_warning__563__verbosity = 0U;
        this->__Vtask_uvm_report_warning__563__message = "RegModel memories cannot be unpacked"s;
        this->__Vtask_uvm_report_warning__563__id = "RegModel"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__564__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__564__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__565__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__565__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__563__id, this->__Vtask_uvm_report_warning__563__message, __Vtask_uvm_report_warning__563__verbosity, this->__Vtask_uvm_report_warning__563__filename, __Vtask_uvm_report_warning__563__line, this->__Vtask_uvm_report_warning__563__context_name, (IData)(__Vtask_uvm_report_warning__563__report_enabled_checked));
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xadd_vregX\n"); );
    // Body
    this->__PVT__m_vregs.at(vreg) = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_vreg> vreg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_Xdelete_vregX\n"); );
    // Body
    if (this->__PVT__m_vregs.exists(vreg)) {
        this->__PVT__m_vregs.erase(vreg);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_mem::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
    __PVT__m_read_in_progress = 0;
    __PVT__m_write_in_progress = 0;
    __PVT__m_size = 0;
    __PVT__m_maps.atDefault() = 0;
    __PVT__m_n_bits = 0;
    __PVT__m_is_powered_down = 0;
    __PVT__m_has_cover = 0;
    __PVT__m_cover_on = 0;
    __PVT__m_lineno = 0;
    __PVT__m_vregs.atDefault() = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_mem::~VUVM_Activator_uvm_pkg__03a__03auvm_mem() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_mem::~\n"); );
}
