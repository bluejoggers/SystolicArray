// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::init(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__physical = 1U;
    this->__PVT__big_endian = 1U;
    this->__PVT__scope = VL_NEW(Vuvm_pkg_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
    this->__PVT__byte_size = 8U;
    this->__PVT__word_size = 0x00000010U;
    this->__PVT__policy = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_index_error\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__1__verbosity;
    __Vtask_uvm_report_error__1__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__1__line;
    __Vtask_uvm_report_error__1__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__1__report_enabled_checked;
    __Vtask_uvm_report_error__1__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __Vtask_uvm_report_error__1__report_enabled_checked = 0U;
    this->__Vtask_uvm_report_error__1__context_name = ""s;
    __Vtask_uvm_report_error__1__line = 0U;
    this->__Vtask_uvm_report_error__1__filename = ""s;
    __Vtask_uvm_report_error__1__verbosity = 0U;
    VL_SFORMAT_NX(this->__Vtask_uvm_report_error__1__message
                  ,"index %0d for get_%0s too large; valid index range is 0-%0d.",3
                  , '~',32,index, 'S',&(id), '~',32,
                  (VL_DIVS_III(32, ((this->__PVT__m_packed_size 
                                     + sz) - (IData)(1U)), sz) 
                   - (IData)(1U)));
    this->__Vtask_uvm_report_error__1__id = "PCKIDX"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__3__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__1__id, this->__Vtask_uvm_report_error__1__message, __Vtask_uvm_report_error__1__verbosity, this->__Vtask_uvm_report_error__1__filename, __Vtask_uvm_report_error__1__line, this->__Vtask_uvm_report_error__1__context_name, (IData)(__Vtask_uvm_report_error__1__report_enabled_checked));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_enough_bits\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        enough_bits__Vfuncrtn = 0U;
        if (VL_LTS_III(32, (this->__PVT__m_packed_size 
                            - this->__PVT__count), needed)) {
            __Vtask_uvm_report_error__5__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__5__context_name = ""s;
            __Vtask_uvm_report_error__5__line = 0U;
            this->__Vtask_uvm_report_error__5__filename = ""s;
            __Vtask_uvm_report_error__5__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__5__message
                          ,"%0d bits needed to unpack %0s, yet only %0d available.",3
                          , '~',32,needed, 'S',&(id)
                          , '~',32,(this->__PVT__m_packed_size 
                                    - this->__PVT__count));
            this->__Vtask_uvm_report_error__5__id = "PCKSZ"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__6__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__5__id, this->__Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, this->__Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, this->__Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
            enough_bits__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        enough_bits__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_size\n"); );
    // Body
    get_packed_size__Vfuncrtn = this->__PVT__m_packed_size;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_size(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_set_packed_size\n"); );
    // Body
    this->__PVT__m_packed_size = this->__PVT__count;
    this->__PVT__count = 0U;
}

extern const VlWide<1024>/*32767:0*/ Vuvm_pkg__ConstPool__CONST_hbc03216d_0;

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__count = 0U;
    VL_ASSIGN_W(32768, this->__PVT__m_bits, Vuvm_pkg__ConstPool__CONST_hbc03216d_0);
    this->__PVT__m_packed_size = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits(Vuvm_pkg__Syms* __restrict vlSymsp, VlWide<1024>/*32767:0*/ &get_packed_bits__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_packed_bits\n"); );
    // Body
    VL_ASSIGN_W(32768, get_packed_bits__Vfuncrtn, this->__PVT__m_bits);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bits(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk53__DOT__i;
    bits.renew(this->__PVT__m_packed_size);
    unnamedblk53__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk53__DOT__i, this->__PVT__m_packed_size)) {
        bits.atWrite(unnamedblk53__DOT__i) = (1U & 
                                              (this->__PVT__m_bits
                                               [(0x000003ffU 
                                                 & (unnamedblk53__DOT__i 
                                                    >> 5U))] 
                                               >> (0x0000001fU 
                                                   & unnamedblk53__DOT__i)));
        unnamedblk53__DOT__i = ((IData)(1U) + unnamedblk53__DOT__i);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bytes(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytes) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk54__DOT__i;
    CData/*7:0*/ unnamedblk54__DOT__unnamedblk55__DOT__tmp;
    IData/*31:0*/ sz;
    CData/*7:0*/ v;
    v = 0U;
    sz = VL_DIVS_III(32, ((IData)(7U) + this->__PVT__m_packed_size), (IData)(8U));
    bytes.renew(sz);
    unnamedblk54__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk54__DOT__i, sz)) {
        v = (0x000000ffU & (((unnamedblk54__DOT__i 
                              != (sz - (IData)(1U))) 
                             | (0U == VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(8U))))
                             ? (((0U == (0x0000001fU 
                                         & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i)))
                                  ? 0U : (this->__PVT__m_bits
                                          [(((IData)(7U) 
                                             + (0x00007fffU 
                                                & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i))) 
                                            >> 5U)] 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i))))) 
                                | (this->__PVT__m_bits
                                   [(0x000003ffU & 
                                     (VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i) 
                                      >> 5U))] >> (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i))))
                             : ((((0U == (0x0000001fU 
                                          & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i)))
                                   ? 0U : (this->__PVT__m_bits
                                           [(((IData)(7U) 
                                              + (0x00007fffU 
                                                 & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i))) 
                                             >> 5U)] 
                                           << ((IData)(0x00000020U) 
                                               - (0x0000001fU 
                                                  & VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i))))) 
                                 | (this->__PVT__m_bits
                                    [(0x000003ffU & 
                                      (VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i) 
                                       >> 5U))] >> 
                                    (0x0000001fU & 
                                     VL_MULS_III(32, (IData)(8U), unnamedblk54__DOT__i)))) 
                                & VL_SHIFTR_III(8,32,32, 0x000000ffU, 
                                                ((IData)(8U) 
                                                 - 
                                                 VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(8U)))))));
        if (this->__PVT__big_endian) {
            unnamedblk54__DOT__unnamedblk55__DOT__tmp = 0U;
            unnamedblk54__DOT__unnamedblk55__DOT__tmp 
                = v;
            v = ((0xf8U & (IData)(v)) | ((4U & ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                >> 7U)))));
            v = ((0xc7U & (IData)(v)) | (((4U & (IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp)) 
                                          | ((2U & 
                                              ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                   >> 4U)))) 
                                         << 3U));
            v = ((0x3fU & (IData)(v)) | (((2U & ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                 << 1U)) 
                                          | (1U & ((IData)(unnamedblk54__DOT__unnamedblk55__DOT__tmp) 
                                                   >> 1U))) 
                                         << 6U));
        }
        bytes.atWrite(unnamedblk54__DOT__i) = v;
        unnamedblk54__DOT__i = ((IData)(1U) + unnamedblk54__DOT__i);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_ints(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &ints) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk57__DOT__i;
    IData/*31:0*/ unnamedblk57__DOT__unnamedblk58__DOT__tmp;
    IData/*31:0*/ sz;
    IData/*31:0*/ v;
    v = 0U;
    sz = VL_DIVS_III(32, ((IData)(0x0000001fU) + this->__PVT__m_packed_size), (IData)(0x00000020U));
    ints.renew(sz);
    unnamedblk57__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk57__DOT__i, sz)) {
        v = (((unnamedblk57__DOT__i != (sz - (IData)(1U))) 
              | (0U == VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(0x00000020U))))
              ? (((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i)))
                   ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                 + 
                                                 (0x00007fffU 
                                                  & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i))) 
                                                >> 5U)] 
                           << ((IData)(0x00000020U) 
                               - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i))))) 
                 | (this->__PVT__m_bits[(0x000003ffU 
                                         & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i) 
                                            >> 5U))] 
                    >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i))))
              : ((((0U == (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i)))
                    ? 0U : (this->__PVT__m_bits[(((IData)(0x0000001fU) 
                                                  + 
                                                  (0x00007fffU 
                                                   & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i))) 
                                                 >> 5U)] 
                            << ((IData)(0x00000020U) 
                                - (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i))))) 
                  | (this->__PVT__m_bits[(0x000003ffU 
                                          & (VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i) 
                                             >> 5U))] 
                     >> (0x0000001fU & VL_MULS_III(32, (IData)(0x00000020U), unnamedblk57__DOT__i)))) 
                 & VL_SHIFTR_III(32,32,32, 0xffffffffU, 
                                 ((IData)(0x00000020U) 
                                  - VL_MODDIVS_III(32, this->__PVT__m_packed_size, (IData)(0x00000020U))))));
        if (this->__PVT__big_endian) {
            unnamedblk57__DOT__unnamedblk58__DOT__tmp = 0U;
            unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                = v;
            v = ((0xfffffff8U & v) | ((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                             >> 0x0000001bU)) 
                                      | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                >> 0x0000001dU)) 
                                         | (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                            >> 0x1fU))));
            v = ((0xffffffc7U & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 0x00000018U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x0000001aU)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x1cU)))) 
                                      << 3U));
            v = ((0xfffffe3fU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 0x00000015U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x00000017U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x19U)))) 
                                      << 6U));
            v = ((0xfffff1ffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 0x00000012U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x00000014U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x16U)))) 
                                      << 9U));
            v = ((0xffff8fffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 0x0000000fU)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x00000011U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x13U)))) 
                                      << 0x0000000cU));
            v = ((0xfffc7fffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 0x0000000cU)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x0000000eU)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x10U)))) 
                                      << 0x0000000fU));
            v = ((0xffe3ffffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 9U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 0x0000000bU)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x0dU)))) 
                                      << 0x00000012U));
            v = ((0xff1fffffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 6U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 8U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 0x0aU)))) 
                                      << 0x00000015U));
            v = ((0xf8ffffffU & v) | (((4U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              >> 3U)) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 5U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 7U)))) 
                                      << 0x00000018U));
            v = ((0xc7ffffffU & v) | (((4U & unnamedblk57__DOT__unnamedblk58__DOT__tmp) 
                                       | ((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                 >> 2U)) 
                                          | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                   >> 4U)))) 
                                      << 0x0000001bU));
            v = ((0x3fffffffU & v) | (((2U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                              << 1U)) 
                                       | (1U & (unnamedblk57__DOT__unnamedblk58__DOT__tmp 
                                                >> 1U))) 
                                      << 0x0000001eU));
        }
        ints.atWrite(unnamedblk57__DOT__i) = v;
        unnamedblk57__DOT__i = ((IData)(1U) + unnamedblk57__DOT__i);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bits(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bits\n"); );
    // Body
    IData/*31:0*/ unnamedblk60__DOT__i;
    IData/*31:0*/ unnamedblk61__DOT__i;
    IData/*31:0*/ bit_size;
    bit_size = bitstream.size();
    if (this->__PVT__big_endian) {
        unnamedblk60__DOT__i = (bit_size - (IData)(1U));
        while (VL_LTES_III(32, 0U, unnamedblk60__DOT__i)) {
            this->__PVT__m_bits[(0x000003ffU & (unnamedblk60__DOT__i 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk60__DOT__i))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (unnamedblk60__DOT__i 
                                              >> 5U))]) 
                   | (bitstream.at(unnamedblk60__DOT__i) 
                      << (0x0000001fU & unnamedblk60__DOT__i)));
            unnamedblk60__DOT__i = (unnamedblk60__DOT__i 
                                    - (IData)(1U));
        }
    } else {
        unnamedblk61__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk61__DOT__i, bit_size)) {
            this->__PVT__m_bits[(0x000003ffU & (unnamedblk61__DOT__i 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk61__DOT__i))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (unnamedblk61__DOT__i 
                                              >> 5U))]) 
                   | (bitstream.at(unnamedblk61__DOT__i) 
                      << (0x0000001fU & unnamedblk61__DOT__i)));
            unnamedblk61__DOT__i = ((IData)(1U) + unnamedblk61__DOT__i);
        }
    }
    this->__PVT__m_packed_size = bit_size;
    this->__PVT__count = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bytes(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_bytes\n"); );
    // Body
    IData/*31:0*/ unnamedblk62__DOT__i;
    CData/*7:0*/ unnamedblk62__DOT__unnamedblk63__DOT__tb;
    IData/*31:0*/ byte_size;
    IData/*31:0*/ index;
    CData/*7:0*/ b;
    b = 0U;
    byte_size = bytestream.size();
    index = 0U;
    unnamedblk62__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk62__DOT__i, byte_size)) {
        b = bytestream.at(unnamedblk62__DOT__i);
        if (this->__PVT__big_endian) {
            unnamedblk62__DOT__unnamedblk63__DOT__tb = 0U;
            unnamedblk62__DOT__unnamedblk63__DOT__tb 
                = b;
            b = ((0xf8U & (IData)(b)) | ((4U & ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                >> 7U)))));
            b = ((0xc7U & (IData)(b)) | (((4U & (IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb)) 
                                          | ((2U & 
                                              ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                   >> 4U)))) 
                                         << 3U));
            b = ((0x3fU & (IData)(b)) | (((2U & ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                 << 1U)) 
                                          | (1U & ((IData)(unnamedblk62__DOT__unnamedblk63__DOT__tb) 
                                                   >> 1U))) 
                                         << 6U));
        }
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & index), this->__PVT__m_bits, b);
        index = ((IData)(8U) + index);
        unnamedblk62__DOT__i = ((IData)(1U) + unnamedblk62__DOT__i);
    }
    this->__PVT__m_packed_size = VL_MULS_III(32, (IData)(8U), byte_size);
    this->__PVT__count = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_ints(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_put_ints\n"); );
    // Body
    IData/*31:0*/ unnamedblk65__DOT__i;
    IData/*31:0*/ unnamedblk65__DOT__unnamedblk66__DOT__tv;
    IData/*31:0*/ int_size;
    IData/*31:0*/ index;
    IData/*31:0*/ v;
    v = 0U;
    int_size = intstream.size();
    index = 0U;
    unnamedblk65__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk65__DOT__i, int_size)) {
        v = intstream.at(unnamedblk65__DOT__i);
        if (this->__PVT__big_endian) {
            unnamedblk65__DOT__unnamedblk66__DOT__tv = 0U;
            unnamedblk65__DOT__unnamedblk66__DOT__tv 
                = v;
            v = ((0xfffffff8U & v) | ((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                             >> 0x0000001bU)) 
                                      | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                >> 0x0000001dU)) 
                                         | (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                            >> 0x1fU))));
            v = ((0xffffffc7U & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 0x00000018U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x0000001aU)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x1cU)))) 
                                      << 3U));
            v = ((0xfffffe3fU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 0x00000015U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x00000017U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x19U)))) 
                                      << 6U));
            v = ((0xfffff1ffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 0x00000012U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x00000014U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x16U)))) 
                                      << 9U));
            v = ((0xffff8fffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 0x0000000fU)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x00000011U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x13U)))) 
                                      << 0x0000000cU));
            v = ((0xfffc7fffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 0x0000000cU)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x0000000eU)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x10U)))) 
                                      << 0x0000000fU));
            v = ((0xffe3ffffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 9U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 0x0000000bU)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x0dU)))) 
                                      << 0x00000012U));
            v = ((0xff1fffffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 6U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 8U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 0x0aU)))) 
                                      << 0x00000015U));
            v = ((0xf8ffffffU & v) | (((4U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              >> 3U)) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 5U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 7U)))) 
                                      << 0x00000018U));
            v = ((0xc7ffffffU & v) | (((4U & unnamedblk65__DOT__unnamedblk66__DOT__tv) 
                                       | ((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                 >> 2U)) 
                                          | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                   >> 4U)))) 
                                      << 0x0000001bU));
            v = ((0x3fffffffU & v) | (((2U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                              << 1U)) 
                                       | (1U & (unnamedblk65__DOT__unnamedblk66__DOT__tv 
                                                >> 1U))) 
                                      << 0x0000001eU));
        }
        VL_ASSIGNSEL_WI(32768, 32, (0x00007fffU & index), this->__PVT__m_bits, v);
        index = ((IData)(0x00000020U) + index);
        unnamedblk65__DOT__i = ((IData)(1U) + unnamedblk65__DOT__i);
    }
    this->__PVT__m_packed_size = VL_MULS_III(32, (IData)(0x00000020U), int_size);
    this->__PVT__count = 0U;
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bit(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*0:0*/ &get_bit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_bit\n"); );
    // Body
    get_bit__Vfuncrtn = 0U;
    if ((index >= this->__PVT__m_packed_size)) {
        this->__VnoInFunc_index_error(vlSymsp, index, "bit"s, 1U);
    }
    get_bit__Vfuncrtn = (1U & (this->__PVT__m_bits[
                               (0x000003ffU & (index 
                                               >> 5U))] 
                               >> (0x0000001fU & index)));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_byte(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*7:0*/ &get_byte__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_byte\n"); );
    // Body
    get_byte__Vfuncrtn = 0U;
    if ((index >= (((IData)(7U) + this->__PVT__m_packed_size) 
                   >> 3U))) {
        this->__VnoInFunc_index_error(vlSymsp, index, "byte"s, 8U);
    }
    get_byte__Vfuncrtn = (0x000000ffU & (((0U == (0x0000001fU 
                                                  & (index 
                                                     << 3U)))
                                           ? 0U : (this->__PVT__m_bits
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x00007fffU 
                                                      & (index 
                                                         << 3U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & (index 
                                                        << 3U))))) 
                                         | (this->__PVT__m_bits
                                            [(0x000003ffU 
                                              & (index 
                                                 >> 2U))] 
                                            >> (0x0000001fU 
                                                & (index 
                                                   << 3U)))));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_int(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &get_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_get_int\n"); );
    // Body
    get_int__Vfuncrtn = 0U;
    if ((index >= (((IData)(0x0000001fU) + this->__PVT__m_packed_size) 
                   >> 5U))) {
        this->__VnoInFunc_index_error(vlSymsp, index, "int"s, 0x00000020U);
    }
    get_int__Vfuncrtn = this->__PVT__m_bits[(0x000003ffU 
                                             & index)];
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__13__verbosity;
    __Vtask_uvm_report_warning__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__line;
    __Vtask_uvm_report_warning__13__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__13__report_enabled_checked;
    __Vtask_uvm_report_warning__13__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    {
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 638)
            ->__PVT__cycle_check.exists(value)) {
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 639)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            __Vtask_uvm_report_warning__13__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__13__context_name = ""s;
            __Vtask_uvm_report_warning__13__line = 0U;
            this->__Vtask_uvm_report_warning__13__filename = ""s;
            __Vtask_uvm_report_warning__13__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__13__message
                          ,"Cycle detected for object @%0d during pack",1
                          , '~',32,__VlefCall_0__get_inst_id);
            this->__Vtask_uvm_report_warning__13__id = "CYCFND"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__13__id, this->__Vtask_uvm_report_warning__13__message, __Vtask_uvm_report_warning__13__verbosity, this->__Vtask_uvm_report_warning__13__filename, __Vtask_uvm_report_warning__13__line, this->__Vtask_uvm_report_warning__13__context_name, (IData)(__Vtask_uvm_report_warning__13__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 642)->__PVT__cycle_check.at(value) = 1U;
        if (((0x00001000U != this->__PVT__policy) & 
             (VlNull{} != value))) {
            if (this->__PVT__use_metadata) {
                VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                           & this->__PVT__count), this->__PVT__m_bits, 1U);
                this->__PVT__count = ((IData)(4U) + this->__PVT__count);
            }
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 649)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_packer.svh", 649)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name));
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 650)->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00000100U, ""s);
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 651)->__VnoInFunc_do_pack(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer>{this});
            VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_packer.svh", 652)->__VnoInFunc_up(vlSymsp, 0x2eU);
        } else if (this->__PVT__use_metadata) {
            VL_ASSIGNSEL_WI(32768, 4, (0x00007fffU 
                                       & this->__PVT__count), this->__PVT__m_bits, 0U);
            this->__PVT__count = ((IData)(4U) + this->__PVT__count);
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 658)->__PVT__cycle_check.erase(value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real(Vuvm_pkg__Syms* __restrict vlSymsp, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_real\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, VL_CVT_Q_D(value), 0x00000040U);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_time\n"); );
    // Body
    this->__VnoInFunc_pack_field_int(vlSymsp, value, 0x00000040U);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field(Vuvm_pkg__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field\n"); );
    // Body
    IData/*31:0*/ unnamedblk68__DOT__i;
    unnamedblk68__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk68__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                             + unnamedblk68__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__count 
                                                   + unnamedblk68__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__count 
                                           + unnamedblk68__DOT__i) 
                                          >> 5U))]) 
               | ((1U & ((IData)(this->__PVT__big_endian)
                          ? (value[(0x0000007fU & (
                                                   ((size 
                                                     - (IData)(1U)) 
                                                    - unnamedblk68__DOT__i) 
                                                   >> 5U))] 
                             >> (0x0000001fU & ((size 
                                                 - (IData)(1U)) 
                                                - unnamedblk68__DOT__i)))
                          : (value[(0x0000007fU & (unnamedblk68__DOT__i 
                                                   >> 5U))] 
                             >> (0x0000001fU & unnamedblk68__DOT__i)))) 
                  << (0x0000001fU & (this->__PVT__count 
                                     + unnamedblk68__DOT__i))));
        unnamedblk68__DOT__i = ((IData)(1U) + unnamedblk68__DOT__i);
    }
    this->__PVT__count = (this->__PVT__count + size);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_field_int\n"); );
    // Body
    IData/*31:0*/ unnamedblk69__DOT__i;
    unnamedblk69__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk69__DOT__i, size)) {
        this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                             + unnamedblk69__DOT__i) 
                                            >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & (this->__PVT__count 
                                                   + unnamedblk69__DOT__i)))) 
                & this->__PVT__m_bits[(0x000003ffU 
                                       & ((this->__PVT__count 
                                           + unnamedblk69__DOT__i) 
                                          >> 5U))]) 
               | ((1U & ((IData)(this->__PVT__big_endian)
                          ? (IData)((value >> (0x0000003fU 
                                               & ((size 
                                                   - (IData)(1U)) 
                                                  - unnamedblk69__DOT__i))))
                          : (IData)((value >> (0x0000003fU 
                                               & unnamedblk69__DOT__i))))) 
                  << (0x0000001fU & (this->__PVT__count 
                                     + unnamedblk69__DOT__i))));
        unnamedblk69__DOT__i = ((IData)(1U) + unnamedblk69__DOT__i);
    }
    this->__PVT__count = (this->__PVT__count + size);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bits(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bits\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__28__verbosity;
    __Vtask_uvm_report_error__28__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__28__line;
    __Vtask_uvm_report_error__28__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__28__report_enabled_checked;
    __Vtask_uvm_report_error__28__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk70__DOT__i;
    {
        if (VL_GTS_III(32, 0U, size)) {
            size = value.size();
        }
        if (VL_GTS_III(32, size, value.size())) {
            this->__Vfunc_uvm_report_enabled__24__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            __Vfunc_uvm_report_enabled__24__severity = 2U;
            __Vfunc_uvm_report_enabled__24__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__25__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__25__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__26__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), this->__Vfunc_uvm_report_enabled__24__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__28__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__28__context_name = ""s;
                __Vtask_uvm_report_error__28__line = 0x000002cbU;
                this->__Vtask_uvm_report_error__28__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
                __Vtask_uvm_report_error__28__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__28__message
                              ,"pack_bits called with size '%0d', which exceeds value.size() of '%0d'",2
                              , '~',32,size, '~',32,value.size());
                this->__Vtask_uvm_report_error__28__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__29__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__29__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__30__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__28__id, this->__Vtask_uvm_report_error__28__message, __Vtask_uvm_report_error__28__verbosity, this->__Vtask_uvm_report_error__28__filename, __Vtask_uvm_report_error__28__line, this->__Vtask_uvm_report_error__28__context_name, (IData)(__Vtask_uvm_report_error__28__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk70__DOT__i = 0U;
        unnamedblk70__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk70__DOT__i, size)) {
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                                 + unnamedblk70__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__count 
                                           + unnamedblk70__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__count 
                                               + unnamedblk70__DOT__i) 
                                              >> 5U))]) 
                   | (((IData)(this->__PVT__big_endian)
                        ? value.at(((size - (IData)(1U)) 
                                    - unnamedblk70__DOT__i))
                        : value.at(unnamedblk70__DOT__i)) 
                      << (0x0000001fU & (this->__PVT__count 
                                         + unnamedblk70__DOT__i))));
            unnamedblk70__DOT__i = ((IData)(1U) + unnamedblk70__DOT__i);
        }
        this->__PVT__count = (this->__PVT__count + size);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bytes(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_bytes\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__32__verbosity;
    __Vfunc_uvm_report_enabled__32__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__32__severity;
    __Vfunc_uvm_report_enabled__32__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk71__DOT__idx_select;
    IData/*31:0*/ unnamedblk71__DOT__unnamedblk72__DOT__i;
    IData/*31:0*/ max_size;
    max_size = VL_MULS_III(32, (IData)(8U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        this->__Vfunc_uvm_report_enabled__32__id = "UVM/BASE/PACKER/BAD_SIZE"s;
        __Vfunc_uvm_report_enabled__32__severity = 2U;
        __Vfunc_uvm_report_enabled__32__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__33__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__33__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__34__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__32__verbosity, (IData)(__Vfunc_uvm_report_enabled__32__severity), this->__Vfunc_uvm_report_enabled__32__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__36__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__36__context_name = ""s;
            __Vtask_uvm_report_error__36__line = 0x000002e4U;
            this->__Vtask_uvm_report_error__36__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__36__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__36__message
                          ,"pack_bytes called with size '%0d', which exceeds value size of '%0d'",2
                          , '~',32,size, '~',32,max_size);
            this->__Vtask_uvm_report_error__36__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__37__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__37__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__38__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__36__id, this->__Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, this->__Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, this->__Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
        }
    } else {
        unnamedblk71__DOT__idx_select = 0U;
        unnamedblk71__DOT__unnamedblk72__DOT__i = 0U;
        unnamedblk71__DOT__unnamedblk72__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk71__DOT__unnamedblk72__DOT__i, size)) {
            unnamedblk71__DOT__idx_select = ((IData)(this->__PVT__big_endian)
                                              ? ((size 
                                                  - (IData)(1U)) 
                                                 - unnamedblk71__DOT__unnamedblk72__DOT__i)
                                              : unnamedblk71__DOT__unnamedblk72__DOT__i);
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                                 + unnamedblk71__DOT__unnamedblk72__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__count 
                                           + unnamedblk71__DOT__unnamedblk72__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__count 
                                               + unnamedblk71__DOT__unnamedblk72__DOT__i) 
                                              >> 5U))]) 
                   | ((1U & (value.at((unnamedblk71__DOT__idx_select 
                                       >> 3U)) >> (7U 
                                                   & VL_MODDIVS_III(32, unnamedblk71__DOT__idx_select, (IData)(8U))))) 
                      << (0x0000001fU & (this->__PVT__count 
                                         + unnamedblk71__DOT__unnamedblk72__DOT__i))));
            unnamedblk71__DOT__unnamedblk72__DOT__i 
                = ((IData)(1U) + unnamedblk71__DOT__unnamedblk72__DOT__i);
        }
        this->__PVT__count = (this->__PVT__count + size);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_ints(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_ints\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__40__verbosity;
    __Vfunc_uvm_report_enabled__40__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__40__severity;
    __Vfunc_uvm_report_enabled__40__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__44__verbosity;
    __Vtask_uvm_report_error__44__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__44__line;
    __Vtask_uvm_report_error__44__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__44__report_enabled_checked;
    __Vtask_uvm_report_error__44__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk73__DOT__idx_select;
    IData/*31:0*/ unnamedblk73__DOT__unnamedblk74__DOT__i;
    IData/*31:0*/ max_size;
    max_size = VL_MULS_III(32, (IData)(0x00000020U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        this->__Vfunc_uvm_report_enabled__40__id = "UVM/BASE/PACKER/BAD_SIZE"s;
        __Vfunc_uvm_report_enabled__40__severity = 2U;
        __Vfunc_uvm_report_enabled__40__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__41__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__41__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__42__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__40__verbosity, (IData)(__Vfunc_uvm_report_enabled__40__severity), this->__Vfunc_uvm_report_enabled__40__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__44__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__44__context_name = ""s;
            __Vtask_uvm_report_error__44__line = 0x00000304U;
            this->__Vtask_uvm_report_error__44__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__44__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__44__message
                          ,"pack_ints called with size '%0d', which exceeds value size of '%0d'",2
                          , '~',32,size, '~',32,max_size);
            this->__Vtask_uvm_report_error__44__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__45__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__45__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__46__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__44__id, this->__Vtask_uvm_report_error__44__message, __Vtask_uvm_report_error__44__verbosity, this->__Vtask_uvm_report_error__44__filename, __Vtask_uvm_report_error__44__line, this->__Vtask_uvm_report_error__44__context_name, (IData)(__Vtask_uvm_report_error__44__report_enabled_checked));
        }
    } else {
        unnamedblk73__DOT__idx_select = 0U;
        unnamedblk73__DOT__unnamedblk74__DOT__i = 0U;
        unnamedblk73__DOT__unnamedblk74__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk73__DOT__unnamedblk74__DOT__i, size)) {
            unnamedblk73__DOT__idx_select = ((IData)(this->__PVT__big_endian)
                                              ? ((size 
                                                  - (IData)(1U)) 
                                                 - unnamedblk73__DOT__unnamedblk74__DOT__i)
                                              : unnamedblk73__DOT__unnamedblk74__DOT__i);
            this->__PVT__m_bits[(0x000003ffU & ((this->__PVT__count 
                                                 + unnamedblk73__DOT__unnamedblk74__DOT__i) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (this->__PVT__count 
                                           + unnamedblk73__DOT__unnamedblk74__DOT__i)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & ((this->__PVT__count 
                                               + unnamedblk73__DOT__unnamedblk74__DOT__i) 
                                              >> 5U))]) 
                   | ((1U & (value.at((unnamedblk73__DOT__idx_select 
                                       >> 5U)) >> (0x0000001fU 
                                                   & VL_MODDIVS_III(32, unnamedblk73__DOT__idx_select, (IData)(0x00000020U))))) 
                      << (0x0000001fU & (this->__PVT__count 
                                         + unnamedblk73__DOT__unnamedblk74__DOT__i))));
            unnamedblk73__DOT__unnamedblk74__DOT__i 
                = ((IData)(1U) + unnamedblk73__DOT__unnamedblk74__DOT__i);
        }
        this->__PVT__count = (this->__PVT__count + size);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string(Vuvm_pkg__Syms* __restrict vlSymsp, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_pack_string\n"); );
    // Body
    IData/*31:0*/ unnamedblk75__DOT__index;
    unnamedblk75__DOT__index = 0;
    CData/*7:0*/ b;
    b = 0U;
    unnamedblk75__DOT__index = 0U;
    while (VL_LTS_III(32, unnamedblk75__DOT__index, 
                      VL_LEN_IN(value))) {
        if (this->__PVT__big_endian) {
            b = VL_GETC_N(value,unnamedblk75__DOT__index);
            this->__PVT__m_bits[(0x000003ffU & (this->__PVT__count 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & this->__PVT__count))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (this->__PVT__count 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 7U)) << 
                      (0x0000001fU & this->__PVT__count)));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(1U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(1U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 6U)) << 
                      (0x0000001fU & ((IData)(1U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(2U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(2U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 5U)) << 
                      (0x0000001fU & ((IData)(2U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(3U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(3U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(3U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 4U)) << 
                      (0x0000001fU & ((IData)(3U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(4U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(4U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(4U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 3U)) << 
                      (0x0000001fU & ((IData)(4U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(5U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(5U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(5U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 2U)) << 
                      (0x0000001fU & ((IData)(5U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(6U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(6U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(6U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & ((IData)(b) >> 1U)) << 
                      (0x0000001fU & ((IData)(6U) + this->__PVT__count))));
            this->__PVT__m_bits[(0x000003ffU & (((IData)(7U) 
                                                 + this->__PVT__count) 
                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(7U) 
                                           + this->__PVT__count)))) 
                    & this->__PVT__m_bits[(0x000003ffU 
                                           & (((IData)(7U) 
                                               + this->__PVT__count) 
                                              >> 5U))]) 
                   | ((1U & (IData)(b)) << (0x0000001fU 
                                            & ((IData)(7U) 
                                               + this->__PVT__count))));
        } else {
            VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU 
                                       & this->__PVT__count), this->__PVT__m_bits, 
                            VL_GETC_N(value,unnamedblk75__DOT__index));
        }
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
        unnamedblk75__DOT__index = ((IData)(1U) + unnamedblk75__DOT__index);
    }
    if (this->__PVT__use_metadata) {
        VL_ASSIGNSEL_WI(32768, 8, (0x00007fffU & this->__PVT__count), this->__PVT__m_bits, 0U);
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null(Vuvm_pkg__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_is_null\n"); );
    // Body
    is_null__Vfuncrtn = (0U == (0x0000000fU & (((0U 
                                                 == 
                                                 (0x0000001fU 
                                                  & this->__PVT__count))
                                                 ? 0U
                                                 : 
                                                (this->__PVT__m_bits
                                                 [(
                                                   ((IData)(3U) 
                                                    + 
                                                    (0x00007fffU 
                                                     & this->__PVT__count)) 
                                                   >> 5U)] 
                                                 << 
                                                 ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & this->__PVT__count)))) 
                                               | (this->__PVT__m_bits
                                                  [
                                                  (0x000003ffU 
                                                   & (this->__PVT__count 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x0000001fU 
                                                   & this->__PVT__count)))));
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_ext(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object_ext\n"); );
    // Body
    this->__VnoInFunc_unpack_object(vlSymsp, value);
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object(Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__50__verbosity;
    __Vtask_uvm_report_warning__50__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__50__line;
    __Vtask_uvm_report_warning__50__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_warning__50__report_enabled_checked;
    __Vtask_uvm_report_warning__50__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__59__verbosity;
    __Vtask_uvm_report_error__59__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__59__line;
    __Vtask_uvm_report_error__59__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__59__report_enabled_checked;
    __Vtask_uvm_report_error__59__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    CData/*7:0*/ is_non_null;
    {
        is_non_null = 0U;
        is_non_null = 1U;
        if (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 835)
            ->__PVT__cycle_check.exists(value)) {
            VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 836)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            __Vtask_uvm_report_warning__50__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_warning__50__context_name = ""s;
            __Vtask_uvm_report_warning__50__line = 0U;
            this->__Vtask_uvm_report_warning__50__filename = ""s;
            __Vtask_uvm_report_warning__50__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__50__message
                          ,"Cycle detected for object @%0d during unpack",1
                          , '~',32,__VlefCall_0__get_inst_id);
            this->__Vtask_uvm_report_warning__50__id = "CYCFND"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__51__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__51__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__52__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__50__id, this->__Vtask_uvm_report_warning__50__message, __Vtask_uvm_report_warning__50__verbosity, this->__Vtask_uvm_report_warning__50__filename, __Vtask_uvm_report_warning__50__line, this->__Vtask_uvm_report_warning__50__context_name, (IData)(__Vtask_uvm_report_warning__50__report_enabled_checked));
            goto __Vlabel0;
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 839)->__PVT__cycle_check.at(value) = 1U;
        if (this->__PVT__use_metadata) {
            is_non_null = (0x0000000fU & (((0U == (0x0000001fU 
                                                   & this->__PVT__count))
                                            ? 0U : 
                                           (this->__PVT__m_bits
                                            [(((IData)(3U) 
                                               + (0x00007fffU 
                                                  & this->__PVT__count)) 
                                              >> 5U)] 
                                            << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & this->__PVT__count)))) 
                                          | (this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (this->__PVT__count 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & this->__PVT__count))));
            this->__PVT__count = ((IData)(4U) + this->__PVT__count);
        }
        if ((VlNull{} != value)) {
            if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(is_non_null)))) {
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 850)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_packer.svh", 850)->__VnoInFunc_down(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_name));
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 851)->__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, VlNull{}, 0x00020002U, ""s);
                VL_NULL_CHECK(value, "../../uvm/distrib/src/base/uvm_packer.svh", 852)->__VnoInFunc_do_unpack(vlSymsp, 
                                                                                VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_packer>{this});
                VL_NULL_CHECK(this->__PVT__scope, "../../uvm/distrib/src/base/uvm_packer.svh", 853)->__VnoInFunc_up(vlSymsp, 0x2eU);
            }
        } else if (((0U != VL_EXTENDS_II(32,8, (IData)(is_non_null))) 
                    & (VlNull{} == value))) {
            __Vtask_uvm_report_error__59__report_enabled_checked = 0U;
            this->__Vtask_uvm_report_error__59__context_name = ""s;
            __Vtask_uvm_report_error__59__line = 0U;
            this->__Vtask_uvm_report_error__59__filename = ""s;
            __Vtask_uvm_report_error__59__verbosity = 0U;
            this->__Vtask_uvm_report_error__59__message = "cannot unpack into null object"s;
            this->__Vtask_uvm_report_error__59__id = "UNPOBJ"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__60__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__60__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__61__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__59__id, this->__Vtask_uvm_report_error__59__message, __Vtask_uvm_report_error__59__verbosity, this->__Vtask_uvm_report_error__59__filename, __Vtask_uvm_report_error__59__line, this->__Vtask_uvm_report_error__59__context_name, (IData)(__Vtask_uvm_report_error__59__report_enabled_checked));
        }
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "../../uvm/distrib/src/base/uvm_packer.svh", 864)->__PVT__cycle_check.erase(value);
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real(Vuvm_pkg__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_real\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    QData/*63:0*/ __VlefCall_1__unpack_field_int;
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_real__Vfuncrtn = 0.0;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "real"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __VlefCall_1__unpack_field_int);
        unpack_real__Vfuncrtn = VL_CVT_D_Q(__VlefCall_1__unpack_field_int);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time(Vuvm_pkg__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_time\n"); );
    // Locals
    QData/*63:0*/ __Vfunc_unpack_field_int__66__Vfuncout;
    __Vfunc_unpack_field_int__66__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_time__Vfuncrtn = 0;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 0x00000040U, "time"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000040U, __Vfunc_unpack_field_int__66__Vfuncout);
        unpack_time__Vfuncrtn = __Vfunc_unpack_field_int__66__Vfuncout;
    }
}

extern const VlWide<128>/*4095:0*/ Vuvm_pkg__ConstPool__CONST_h6e0f3f36_0;

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    IData/*31:0*/ unnamedblk77__DOT__i;
    VL_ASSIGN_W(4096, unpack_field__Vfuncrtn, Vuvm_pkg__ConstPool__CONST_h6e0f3f36_0);
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__PVT__count = (this->__PVT__count + size);
        unnamedblk77__DOT__i = 0U;
        unnamedblk77__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk77__DOT__i, size)) {
            unpack_field__Vfuncrtn[(0x0000007fU & (unnamedblk77__DOT__i 
                                                   >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & unnamedblk77__DOT__i))) 
                    & unpack_field__Vfuncrtn[(0x0000007fU 
                                              & (unnamedblk77__DOT__i 
                                                 >> 5U))]) 
                   | ((1U & ((IData)(this->__PVT__big_endian)
                              ? (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - unnamedblk77__DOT__i) 
                                                   - (IData)(1U)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - unnamedblk77__DOT__i) 
                                      - (IData)(1U))))
                              : (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - size) 
                                                   + unnamedblk77__DOT__i) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - size) + unnamedblk77__DOT__i))))) 
                      << (0x0000001fU & unnamedblk77__DOT__i)));
            unnamedblk77__DOT__i = ((IData)(1U) + unnamedblk77__DOT__i);
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_field_int\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__enough_bits;
    IData/*31:0*/ unnamedblk78__DOT__i;
    unpack_field_int__Vfuncrtn = 0ULL;
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_0__enough_bits);
    if (__VlefCall_0__enough_bits) {
        this->__PVT__count = (this->__PVT__count + size);
        unnamedblk78__DOT__i = 0U;
        unnamedblk78__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk78__DOT__i, size)) {
            unpack_field_int__Vfuncrtn = (((~ (1ULL 
                                               << (0x0000003fU 
                                                   & unnamedblk78__DOT__i))) 
                                           & unpack_field_int__Vfuncrtn) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(this->__PVT__big_endian)
                                                                  ? 
                                                                 (this->__PVT__m_bits
                                                                  [
                                                                  (0x000003ffU 
                                                                   & (((this->__PVT__count 
                                                                        - unnamedblk78__DOT__i) 
                                                                       - (IData)(1U)) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((this->__PVT__count 
                                                                       - unnamedblk78__DOT__i) 
                                                                      - (IData)(1U))))
                                                                  : 
                                                                 (this->__PVT__m_bits
                                                                  [
                                                                  (0x000003ffU 
                                                                   & (((this->__PVT__count 
                                                                        - size) 
                                                                       + unnamedblk78__DOT__i) 
                                                                      >> 5U))] 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & ((this->__PVT__count 
                                                                       - size) 
                                                                      + unnamedblk78__DOT__i))))))) 
                                             << (0x0000003fU 
                                                 & unnamedblk78__DOT__i)));
            unnamedblk78__DOT__i = ((IData)(1U) + unnamedblk78__DOT__i);
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bits\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69__verbosity;
    __Vfunc_uvm_report_enabled__69__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__69__severity;
    __Vfunc_uvm_report_enabled__69__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__70__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__71__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__73__verbosity;
    __Vtask_uvm_report_error__73__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__73__line;
    __Vtask_uvm_report_error__73__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__73__report_enabled_checked;
    __Vtask_uvm_report_error__73__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__74__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__75__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__enough_bits;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk79__DOT__i;
    {
        if (VL_GTS_III(32, 0U, size)) {
            size = value.size();
        }
        if (VL_GTS_III(32, size, value.size())) {
            this->__Vfunc_uvm_report_enabled__69__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            __Vfunc_uvm_report_enabled__69__severity = 2U;
            __Vfunc_uvm_report_enabled__69__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__70__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__70__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__71__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__71__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__69__verbosity, (IData)(__Vfunc_uvm_report_enabled__69__severity), this->__Vfunc_uvm_report_enabled__69__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                __Vtask_uvm_report_error__73__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__73__context_name = ""s;
                __Vtask_uvm_report_error__73__line = 0x000003a3U;
                this->__Vtask_uvm_report_error__73__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
                __Vtask_uvm_report_error__73__verbosity = 0U;
                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__73__message
                              ,"unpack_bits called with size '%0d', which exceeds value.size() of '%0d'",2
                              , '~',32,size, '~',32,value.size());
                this->__Vtask_uvm_report_error__73__id = "UVM/BASE/PACKER/BAD_SIZE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__74__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__74__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__75__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__75__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__73__id, this->__Vtask_uvm_report_error__73__message, __Vtask_uvm_report_error__73__verbosity, this->__Vtask_uvm_report_error__73__filename, __Vtask_uvm_report_error__73__line, this->__Vtask_uvm_report_error__73__context_name, (IData)(__Vtask_uvm_report_error__73__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_1__enough_bits);
        if (__VlefCall_1__enough_bits) {
            this->__PVT__count = (this->__PVT__count 
                                  + size);
            unnamedblk79__DOT__i = 0U;
            unnamedblk79__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk79__DOT__i, size)) {
                value.atWrite(unnamedblk79__DOT__i) 
                    = (1U & ((IData)(this->__PVT__big_endian)
                              ? (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - unnamedblk79__DOT__i) 
                                                   - (IData)(1U)) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - unnamedblk79__DOT__i) 
                                      - (IData)(1U))))
                              : (this->__PVT__m_bits
                                 [(0x000003ffU & ((
                                                   (this->__PVT__count 
                                                    - size) 
                                                   + unnamedblk79__DOT__i) 
                                                  >> 5U))] 
                                 >> (0x0000001fU & 
                                     ((this->__PVT__count 
                                       - size) + unnamedblk79__DOT__i)))));
                unnamedblk79__DOT__i = ((IData)(1U) 
                                        + unnamedblk79__DOT__i);
            }
        }
        __Vlabel0: ;
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bytes(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_bytes\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__82__verbosity;
    __Vtask_uvm_report_error__82__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__82__line;
    __Vtask_uvm_report_error__82__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__82__report_enabled_checked;
    __Vtask_uvm_report_error__82__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__enough_bits;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk80__DOT__i;
    IData/*31:0*/ max_size;
    max_size = VL_MULS_III(32, (IData)(8U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        this->__Vfunc_uvm_report_enabled__78__id = "UVM/BASE/PACKER/BAD_SIZE"s;
        __Vfunc_uvm_report_enabled__78__severity = 2U;
        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__79__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__79__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__80__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), this->__Vfunc_uvm_report_enabled__78__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__82__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__82__context_name = ""s;
            __Vtask_uvm_report_error__82__line = 0x000003bdU;
            this->__Vtask_uvm_report_error__82__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__82__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__82__message
                          ,"unpack_bytes called with size '%0d', which exceeds value size of '%0d'",2
                          , '~',32,size, '~',32,value.size());
            this->__Vtask_uvm_report_error__82__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__82__id, this->__Vtask_uvm_report_error__82__message, __Vtask_uvm_report_error__82__verbosity, this->__Vtask_uvm_report_error__82__filename, __Vtask_uvm_report_error__82__line, this->__Vtask_uvm_report_error__82__context_name, (IData)(__Vtask_uvm_report_error__82__report_enabled_checked));
        }
    } else {
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_1__enough_bits);
        if (__VlefCall_1__enough_bits) {
            this->__PVT__count = (this->__PVT__count 
                                  + size);
            unnamedblk80__DOT__i = 0U;
            unnamedblk80__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk80__DOT__i, size)) {
                value.atWrite((unnamedblk80__DOT__i 
                               >> 3U)) = (((~ ((IData)(1U) 
                                               << (7U 
                                                   & VL_MODDIVS_III(32, unnamedblk80__DOT__i, (IData)(8U))))) 
                                           & value.atWrite(
                                                           (unnamedblk80__DOT__i 
                                                            >> 3U))) 
                                          | (0x00ffU 
                                             & ((1U 
                                                 & ((IData)(this->__PVT__big_endian)
                                                     ? 
                                                    (this->__PVT__m_bits
                                                     [
                                                     (0x000003ffU 
                                                      & (((this->__PVT__count 
                                                           - unnamedblk80__DOT__i) 
                                                          - (IData)(1U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((this->__PVT__count 
                                                          - unnamedblk80__DOT__i) 
                                                         - (IData)(1U))))
                                                     : 
                                                    (this->__PVT__m_bits
                                                     [
                                                     (0x000003ffU 
                                                      & (((this->__PVT__count 
                                                           - size) 
                                                          + unnamedblk80__DOT__i) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((this->__PVT__count 
                                                          - size) 
                                                         + unnamedblk80__DOT__i))))) 
                                                << 
                                                (7U 
                                                 & VL_MODDIVS_III(32, unnamedblk80__DOT__i, (IData)(8U))))));
                unnamedblk80__DOT__i = ((IData)(1U) 
                                        + unnamedblk80__DOT__i);
            }
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_ints(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &value, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_ints\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__verbosity;
    __Vfunc_uvm_report_enabled__87__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__87__severity;
    __Vfunc_uvm_report_enabled__87__severity = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vuvm_pkg_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__enough_bits;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    IData/*31:0*/ unnamedblk81__DOT__i;
    IData/*31:0*/ max_size;
    max_size = VL_MULS_III(32, (IData)(0x00000020U), value.size());
    if (VL_GTS_III(32, 0U, size)) {
        size = max_size;
    }
    if (VL_GTS_III(32, size, max_size)) {
        this->__Vfunc_uvm_report_enabled__87__id = "UVM/BASE/PACKER/BAD_SIZE"s;
        __Vfunc_uvm_report_enabled__87__severity = 2U;
        __Vfunc_uvm_report_enabled__87__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__88__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__88__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__89__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__87__verbosity, (IData)(__Vfunc_uvm_report_enabled__87__severity), this->__Vfunc_uvm_report_enabled__87__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            __Vtask_uvm_report_error__91__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__91__context_name = ""s;
            __Vtask_uvm_report_error__91__line = 0x000003dbU;
            this->__Vtask_uvm_report_error__91__filename = "../../uvm/distrib/src/base/uvm_packer.svh"s;
            __Vtask_uvm_report_error__91__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__91__message
                          ,"unpack_ints called with size '%0d', which exceeds value size of '%0d'",2
                          , '~',32,size, '~',32,value.size());
            this->__Vtask_uvm_report_error__91__id = "UVM/BASE/PACKER/BAD_SIZE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__91__id, this->__Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, this->__Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, this->__Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
        }
    } else {
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, size, "integral"s, __VlefCall_1__enough_bits);
        if (__VlefCall_1__enough_bits) {
            this->__PVT__count = (this->__PVT__count 
                                  + size);
            unnamedblk81__DOT__i = 0U;
            unnamedblk81__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk81__DOT__i, size)) {
                value.atWrite((unnamedblk81__DOT__i 
                               >> 5U)) = (((~ ((IData)(1U) 
                                               << (0x0000001fU 
                                                   & VL_MODDIVS_III(32, unnamedblk81__DOT__i, (IData)(0x00000020U))))) 
                                           & value.atWrite(
                                                           (unnamedblk81__DOT__i 
                                                            >> 5U))) 
                                          | (0x00000000ffffffffULL 
                                             & ((1U 
                                                 & ((IData)(this->__PVT__big_endian)
                                                     ? 
                                                    (this->__PVT__m_bits
                                                     [
                                                     (0x000003ffU 
                                                      & (((this->__PVT__count 
                                                           - unnamedblk81__DOT__i) 
                                                          - (IData)(1U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((this->__PVT__count 
                                                          - unnamedblk81__DOT__i) 
                                                         - (IData)(1U))))
                                                     : 
                                                    (this->__PVT__m_bits
                                                     [
                                                     (0x000003ffU 
                                                      & (((this->__PVT__count 
                                                           - size) 
                                                          + unnamedblk81__DOT__i) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & ((this->__PVT__count 
                                                          - size) 
                                                         + unnamedblk81__DOT__i))))) 
                                                << 
                                                (0x0000001fU 
                                                 & VL_MODDIVS_III(32, unnamedblk81__DOT__i, (IData)(0x00000020U))))));
                unnamedblk81__DOT__i = ((IData)(1U) 
                                        + unnamedblk81__DOT__i);
            }
        }
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ num_chars, std::string &unpack_string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::__VnoInFunc_unpack_string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__enough_bits;
    CData/*0:0*/ __VlefCall_0__enough_bits;
    unpack_string__Vfuncrtn = ""s;
    CData/*7:0*/ b;
    CData/*0:0*/ is_null_term;
    IData/*31:0*/ i;
    b = 0U;
    i = 0U;
    is_null_term = (0xffffffffU == num_chars);
    while (true) {
        this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_0__enough_bits);
        if (!((((IData)(__VlefCall_0__enough_bits) 
                && (1U & ((0U != (0x000000ffU & (((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & this->__PVT__count))
                                                   ? 0U
                                                   : 
                                                  (this->__PVT__m_bits
                                                   [
                                                   (((IData)(7U) 
                                                     + 
                                                     (0x00007fffU 
                                                      & this->__PVT__count)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & this->__PVT__count)))) 
                                                 | (this->__PVT__m_bits
                                                    [
                                                    (0x000003ffU 
                                                     & (this->__PVT__count 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x0000001fU 
                                                     & this->__PVT__count))))) 
                          | (~ (IData)(is_null_term))))) 
               && (VL_LTS_III(32, i, num_chars) | (IData)(is_null_term))))) break;
        unpack_string__Vfuncrtn = VL_CONCATN_NNN(unpack_string__Vfuncrtn, " "s);
        if (this->__PVT__big_endian) {
            b = ((0x7fU & (IData)(b)) | (0x00000080U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (this->__PVT__count 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & this->__PVT__count)) 
                                            << 7U)));
            b = ((0xbfU & (IData)(b)) | (0x00000040U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(1U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(1U) 
                                                    + this->__PVT__count))) 
                                            << 6U)));
            b = ((0xdfU & (IData)(b)) | (0x00000020U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(2U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(2U) 
                                                    + this->__PVT__count))) 
                                            << 5U)));
            b = ((0xefU & (IData)(b)) | (0x00000010U 
                                         & ((this->__PVT__m_bits
                                             [(0x000003ffU 
                                               & (((IData)(3U) 
                                                   + this->__PVT__count) 
                                                  >> 5U))] 
                                             >> (0x0000001fU 
                                                 & ((IData)(3U) 
                                                    + this->__PVT__count))) 
                                            << 4U)));
            b = ((0xf7U & (IData)(b)) | (8U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(4U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(4U) 
                                                    + this->__PVT__count))) 
                                               << 3U)));
            b = ((0xfbU & (IData)(b)) | (4U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(5U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(5U) 
                                                    + this->__PVT__count))) 
                                               << 2U)));
            b = ((0xfdU & (IData)(b)) | (2U & ((this->__PVT__m_bits
                                                [(0x000003ffU 
                                                  & (((IData)(6U) 
                                                      + this->__PVT__count) 
                                                     >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & ((IData)(6U) 
                                                    + this->__PVT__count))) 
                                               << 1U)));
            b = ((0xfeU & (IData)(b)) | (1U & (this->__PVT__m_bits
                                               [(0x000003ffU 
                                                 & (((IData)(7U) 
                                                     + this->__PVT__count) 
                                                    >> 5U))] 
                                               >> (0x0000001fU 
                                                   & ((IData)(7U) 
                                                      + this->__PVT__count)))));
            unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, b);
        } else {
            unpack_string__Vfuncrtn = VL_PUTC_N(unpack_string__Vfuncrtn, i, 
                                                (0x000000ffU 
                                                 & (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & this->__PVT__count))
                                                      ? 0U
                                                      : 
                                                     (this->__PVT__m_bits
                                                      [
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x00007fffU 
                                                         & this->__PVT__count)) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & this->__PVT__count)))) 
                                                    | (this->__PVT__m_bits
                                                       [
                                                       (0x000003ffU 
                                                        & (this->__PVT__count 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & this->__PVT__count)))));
        }
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
        i = ((IData)(1U) + i);
    }
    this->__VnoInFunc_enough_bits(vlProcess, vlSymsp, 8U, "string"s, __VlefCall_1__enough_bits);
    if (__VlefCall_1__enough_bits) {
        this->__PVT__count = ((IData)(8U) + this->__PVT__count);
    }
}

void Vuvm_pkg_uvm_pkg__03a__03auvm_packer::_ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuvm_pkg_uvm_pkg__03a__03auvm_packer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__abstract = 0;
    __PVT__use_metadata = 0;
    __PVT__count = 0;
    __PVT__reverse_order = 0;
    __PVT__nopack = 0;
    VL_ZERO_W(32768, __PVT__m_bits);
    __PVT__m_packed_size = 0;
}
