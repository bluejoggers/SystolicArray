// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::init(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem_mam> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__Xstart_offsetX = start_offset;
    this->__PVT__Xend_offsetX = end_offset;
    this->__PVT__len = len;
    this->__PVT__n_bytes = n_bytes;
    this->__PVT__parent = parent;
    this->__PVT__XvregX = VlNull{};
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_start_offset\n"); );
    // Body
    get_start_offset__Vfuncrtn = this->__PVT__Xstart_offsetX;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset(VUVM_Register8b__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_end_offset\n"); );
    // Body
    get_end_offset__Vfuncrtn = this->__PVT__Xend_offsetX;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_len\n"); );
    // Body
    get_len__Vfuncrtn = this->__PVT__len;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_n_bytes\n"); );
    // Body
    get_n_bytes__Vfuncrtn = this->__PVT__n_bytes;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_convert2string\n"); );
    // Body
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"['h%h:'h%h]",2
                  , '#',64,this->__PVT__Xstart_offsetX
                  , '#',64,this->__PVT__Xend_offsetX);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_release_region\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 639)->__VnoInFunc_release_region(vlSymsp, 
                                                                                VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region>{this});
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_memory\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 644)->__VnoInFunc_get_memory(vlSymsp, get_memory__Vfuncrtn);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers(VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    get_virtual_registers__Vfuncrtn = this->__PVT__XvregX;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_write__20__status;
    __Vtask_write__20__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 835)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__3__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__3__severity = 2U;
            __Vfunc_uvm_report_enabled__3__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__5__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), this->__Vfunc_uvm_report_enabled__3__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__7__context_name = ""s;
                __Vtask_uvm_report_error__7__line = 0x00000348U;
                this->__Vtask_uvm_report_error__7__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__7__verbosity = 0U;
                this->__Vtask_uvm_report_error__7__message = "Cannot use uvm_mem_region::write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__7__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__8__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__7__id, this->__Vtask_uvm_report_error__7__message, __Vtask_uvm_report_error__7__verbosity, this->__Vtask_uvm_report_error__7__filename, __Vtask_uvm_report_error__7__line, this->__Vtask_uvm_report_error__7__context_name, (IData)(__Vtask_uvm_report_error__7__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__11__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__11__severity = 2U;
            __Vfunc_uvm_report_enabled__11__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), this->__Vfunc_uvm_report_enabled__11__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__15__context_name = ""s;
                __Vtask_uvm_report_error__15__line = 0x00000350U;
                this->__Vtask_uvm_report_error__15__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__15__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__15__message
                              ,"Attempting to write to an offset outside of the allocated region (%0d > %0d)",2
                              , '#',64,offset, '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__15__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__17__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__15__id, this->__Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, this->__Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, this->__Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 853)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__20__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_write__20__status;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__26__verbosity;
    __Vtask_uvm_report_error__26__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__26__line;
    __Vtask_uvm_report_error__26__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__26__report_enabled_checked;
    __Vtask_uvm_report_error__26__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__34__verbosity;
    __Vtask_uvm_report_error__34__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__34__line;
    __Vtask_uvm_report_error__34__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__34__report_enabled_checked;
    __Vtask_uvm_report_error__34__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    IData/*31:0*/ __Vtask_read__39__status;
    __Vtask_read__39__status = 0;
    QData/*63:0*/ __Vtask_read__39__value;
    __Vtask_read__39__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 868)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__22__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__22__severity = 2U;
            __Vfunc_uvm_report_enabled__22__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__24__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), this->__Vfunc_uvm_report_enabled__22__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__26__context_name = ""s;
                __Vtask_uvm_report_error__26__line = 0x00000369U;
                this->__Vtask_uvm_report_error__26__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__26__verbosity = 0U;
                this->__Vtask_uvm_report_error__26__message = "Cannot use uvm_mem_region::read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__26__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__27__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__27__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__28__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__26__id, this->__Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, this->__Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, this->__Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__30__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__30__severity = 2U;
            __Vfunc_uvm_report_enabled__30__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__31__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__31__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__32__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), this->__Vfunc_uvm_report_enabled__30__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__34__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__34__context_name = ""s;
                __Vtask_uvm_report_error__34__line = 0x00000371U;
                this->__Vtask_uvm_report_error__34__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__34__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__34__message
                              ,"Attempting to read from an offset outside of the allocated region (%0d > %0d)",2
                              , '#',64,offset, '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__34__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__36__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__34__id, this->__Vtask_uvm_report_error__34__message, __Vtask_uvm_report_error__34__verbosity, this->__Vtask_uvm_report_error__34__filename, __Vtask_uvm_report_error__34__line, this->__Vtask_uvm_report_error__34__context_name, (IData)(__Vtask_uvm_report_error__34__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 886)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__39__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), __Vtask_read__39__value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_read__39__status;
        value = __Vtask_read__39__value;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
    __Vtask_uvm_report_error__45__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__45__line;
    __Vtask_uvm_report_error__45__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
    __Vtask_uvm_report_error__45__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__53__verbosity;
    __Vtask_uvm_report_error__53__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__53__line;
    __Vtask_uvm_report_error__53__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__53__report_enabled_checked;
    __Vtask_uvm_report_error__53__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__54__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__55__Vfuncout;
    IData/*31:0*/ __Vtask_burst_write__58__status;
    __Vtask_burst_write__58__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 901)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__41__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__41__severity = 2U;
            __Vfunc_uvm_report_enabled__41__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__42__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__42__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__43__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), this->__Vfunc_uvm_report_enabled__41__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__45__context_name = ""s;
                __Vtask_uvm_report_error__45__line = 0x0000038aU;
                this->__Vtask_uvm_report_error__45__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__45__verbosity = 0U;
                this->__Vtask_uvm_report_error__45__message = "Cannot use uvm_mem_region::burst_write() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__45__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__46__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__46__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__47__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__45__id, this->__Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, this->__Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, this->__Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__49__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__49__severity = 2U;
            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__50__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), this->__Vfunc_uvm_report_enabled__49__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__53__context_name = ""s;
                __Vtask_uvm_report_error__53__line = 0x00000392U;
                this->__Vtask_uvm_report_error__53__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__53__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__53__message
                              ,"Attempting to burst-write to an offset outside of the allocated region (burst to [%0d:%0d] > mem_size %0d)",3
                              , '#',64,offset, '#',64,
                              (offset + (QData)((IData)(value.size())))
                              , '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__53__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__54__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__54__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__53__id, this->__Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, this->__Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, this->__Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 919)->__VnoInFunc_burst_write(vlSymsp, __Vtask_burst_write__58__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_write__58__status;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_burst_read\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__64__verbosity;
    __Vtask_uvm_report_error__64__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__64__line;
    __Vtask_uvm_report_error__64__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__64__report_enabled_checked;
    __Vtask_uvm_report_error__64__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
    __Vfunc_uvm_report_enabled__68__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
    __Vfunc_uvm_report_enabled__68__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__72__verbosity;
    __Vtask_uvm_report_error__72__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__72__line;
    __Vtask_uvm_report_error__72__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__72__report_enabled_checked;
    __Vtask_uvm_report_error__72__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__73__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__74__Vfuncout;
    IData/*31:0*/ __Vtask_burst_read__77__status;
    __Vtask_burst_read__77__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value.clear();
        value.atDefault() = 0;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 935)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__60__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__60__severity = 2U;
            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__62__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), this->__Vfunc_uvm_report_enabled__60__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__64__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__64__context_name = ""s;
                __Vtask_uvm_report_error__64__line = 0x000003acU;
                this->__Vtask_uvm_report_error__64__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__64__verbosity = 0U;
                this->__Vtask_uvm_report_error__64__message = "Cannot use uvm_mem_region::burst_read() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__64__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__64__id, this->__Vtask_uvm_report_error__64__message, __Vtask_uvm_report_error__64__verbosity, this->__Vtask_uvm_report_error__64__filename, __Vtask_uvm_report_error__64__line, this->__Vtask_uvm_report_error__64__context_name, (IData)(__Vtask_uvm_report_error__64__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if (((offset + (QData)((IData)(value.size()))) 
             > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__68__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__68__severity = 2U;
            __Vfunc_uvm_report_enabled__68__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__69__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__70__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), this->__Vfunc_uvm_report_enabled__68__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__72__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__72__context_name = ""s;
                __Vtask_uvm_report_error__72__line = 0x000003b4U;
                this->__Vtask_uvm_report_error__72__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__72__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__72__message
                              ,"Attempting to burst-read to an offset outside of the allocated region (burst to [%0d:%0d] > mem_size %0d)",3
                              , '#',64,offset, '#',64,
                              (offset + (QData)((IData)(value.size())))
                              , '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__72__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__73__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__73__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__74__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__74__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__72__id, this->__Vtask_uvm_report_error__72__message, __Vtask_uvm_report_error__72__verbosity, this->__Vtask_uvm_report_error__72__filename, __Vtask_uvm_report_error__72__line, this->__Vtask_uvm_report_error__72__context_name, (IData)(__Vtask_uvm_report_error__72__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        co_await VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 953)->__VnoInFunc_burst_read(vlSymsp, __Vtask_burst_read__77__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, path, map, parent, prior, extension, ""s, 0U);
        status = __Vtask_burst_read__77__status;
        __Vlabel0: ;
    }
    co_return;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_poke\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
    __Vfunc_uvm_report_enabled__79__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
    __Vfunc_uvm_report_enabled__79__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__83__verbosity;
    __Vtask_uvm_report_error__83__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__83__line;
    __Vtask_uvm_report_error__83__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__83__report_enabled_checked;
    __Vtask_uvm_report_error__83__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__verbosity;
    __Vfunc_uvm_report_enabled__87__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__87__severity;
    __Vfunc_uvm_report_enabled__87__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_poke__96__status;
    __Vtask_poke__96__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 966)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__79__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__79__severity = 2U;
            __Vfunc_uvm_report_enabled__79__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__80__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__80__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__81__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), this->__Vfunc_uvm_report_enabled__79__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__83__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__83__context_name = ""s;
                __Vtask_uvm_report_error__83__line = 0x000003cbU;
                this->__Vtask_uvm_report_error__83__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__83__verbosity = 0U;
                this->__Vtask_uvm_report_error__83__message = "Cannot use uvm_mem_region::poke() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__83__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__84__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__84__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__85__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__83__id, this->__Vtask_uvm_report_error__83__message, __Vtask_uvm_report_error__83__verbosity, this->__Vtask_uvm_report_error__83__filename, __Vtask_uvm_report_error__83__line, this->__Vtask_uvm_report_error__83__context_name, (IData)(__Vtask_uvm_report_error__83__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__87__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__87__severity = 2U;
            __Vfunc_uvm_report_enabled__87__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__88__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__88__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__89__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__87__verbosity, (IData)(__Vfunc_uvm_report_enabled__87__severity), this->__Vfunc_uvm_report_enabled__87__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__91__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__91__context_name = ""s;
                __Vtask_uvm_report_error__91__line = 0x000003d3U;
                this->__Vtask_uvm_report_error__91__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__91__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__91__message
                              ,"Attempting to poke to an offset outside of the allocated region (%0d > %0d)",2
                              , '#',64,offset, '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__91__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__92__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__92__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__93__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__91__id, this->__Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, this->__Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, this->__Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 984)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__96__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_poke__96__status;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::__VnoInFunc_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__102__verbosity;
    __Vtask_uvm_report_error__102__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__102__line;
    __Vtask_uvm_report_error__102__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__102__report_enabled_checked;
    __Vtask_uvm_report_error__102__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__106__verbosity;
    __Vfunc_uvm_report_enabled__106__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__106__severity;
    __Vfunc_uvm_report_enabled__106__severity = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__107__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__108__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__110__verbosity;
    __Vtask_uvm_report_error__110__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__110__line;
    __Vtask_uvm_report_error__110__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__110__report_enabled_checked;
    __Vtask_uvm_report_error__110__report_enabled_checked = 0;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    IData/*31:0*/ __Vtask_peek__115__status;
    __Vtask_peek__115__status = 0;
    QData/*63:0*/ __Vtask_peek__115__value;
    __Vtask_peek__115__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_2__get_start_offset;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_mem> mem;
    {
        status = 0U;
        value = 0ULL;
        VL_NULL_CHECK(this->__PVT__parent, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 995)->__VnoInFunc_get_memory(vlSymsp, mem);
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        if ((VlNull{} == mem)) {
            this->__Vfunc_uvm_report_enabled__98__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__98__severity = 2U;
            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__99__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__99__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__100__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), this->__Vfunc_uvm_report_enabled__98__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__102__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__102__context_name = ""s;
                __Vtask_uvm_report_error__102__line = 0x000003e8U;
                this->__Vtask_uvm_report_error__102__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__102__verbosity = 0U;
                this->__Vtask_uvm_report_error__102__message = "Cannot use uvm_mem_region::peek() on a region that was allocated by a Memory Allocation Manager that was not associated with a uvm_mem instance"s;
                this->__Vtask_uvm_report_error__102__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__103__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__103__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__104__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__102__id, this->__Vtask_uvm_report_error__102__message, __Vtask_uvm_report_error__102__verbosity, this->__Vtask_uvm_report_error__102__filename, __Vtask_uvm_report_error__102__line, this->__Vtask_uvm_report_error__102__context_name, (IData)(__Vtask_uvm_report_error__102__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        if ((offset > (QData)((IData)(this->__PVT__len)))) {
            this->__Vfunc_uvm_report_enabled__106__id = "RegModel"s;
            __Vfunc_uvm_report_enabled__106__severity = 2U;
            __Vfunc_uvm_report_enabled__106__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__107__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__107__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__108__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__108__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__106__verbosity, (IData)(__Vfunc_uvm_report_enabled__106__severity), this->__Vfunc_uvm_report_enabled__106__id, __VlefCall_1__uvm_report_enabled);
            if ((0U != __VlefCall_1__uvm_report_enabled)) {
                __Vtask_uvm_report_error__110__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__110__context_name = ""s;
                __Vtask_uvm_report_error__110__line = 0x000003f0U;
                this->__Vtask_uvm_report_error__110__filename = "../../uvm/distrib/src/reg/uvm_mem_mam.svh"s;
                __Vtask_uvm_report_error__110__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__110__message
                              ,"Attempting to peek from an offset outside of the allocated region (%0d > %0d)",2
                              , '#',64,offset, '#',32,this->__PVT__len);
                this->__Vtask_uvm_report_error__110__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__110__id, this->__Vtask_uvm_report_error__110__message, __Vtask_uvm_report_error__110__verbosity, this->__Vtask_uvm_report_error__110__filename, __Vtask_uvm_report_error__110__line, this->__Vtask_uvm_report_error__110__context_name, (IData)(__Vtask_uvm_report_error__110__report_enabled_checked));
            }
            status = 1U;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_start_offset(vlSymsp, __VlefCall_2__get_start_offset);
        VL_NULL_CHECK(mem, "../../uvm/distrib/src/reg/uvm_mem_mam.svh", 1013)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__115__status, 
                                                                                (offset 
                                                                                + __VlefCall_2__get_start_offset), __Vtask_peek__115__value, ""s, parent, extension, ""s, 0U);
        status = __Vtask_peek__115__status;
        value = __Vtask_peek__115__value;
        __Vlabel0: ;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_mem_region::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__Xstart_offsetX = 0;
    __PVT__Xend_offsetX = 0;
    __PVT__len = 0;
    __PVT__n_bytes = 0;
    __PVT__lineno = 0;
}
