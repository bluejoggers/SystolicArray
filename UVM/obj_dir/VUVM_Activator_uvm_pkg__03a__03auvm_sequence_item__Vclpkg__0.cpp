// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Activator.h for the primary calling header

#include "VUVM_Activator__pch.h"

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi3> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::init(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Activator_uvm_pkg__03a__03auvm_transaction::init(vlProcess, vlSymsp, name, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_sequence_id = 0xffffffffU;
    this->__PVT__m_depth = 0xffffffffU;
    /*super.new*/;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_item"s;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_object_registry__pi3> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi3__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id\n"); );
    // Body
    this->__PVT__m_sequence_id = id;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id\n"); );
    // Body
    get_sequence_id__Vfuncrtn = this->__PVT__m_sequence_id;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_depth;
    this->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    if ((VlNull{} != parent_seq)) {
        this->__VnoInFunc_set_parent_sequence(vlSymsp, parent_seq);
    }
    if (((VlNull{} == sequencer) & (VlNull{} != this->__PVT__m_parent_sequence))) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 114)->__VnoInFunc_get_sequencer(vlSymsp, sequencer);
    }
    this->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 116)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
        this->__VnoInFunc_set_depth(vlSymsp, ((IData)(1U) 
                                              + __VlefCall_0__get_depth));
    }
    this->__VnoInFunc_reseed(vlProcess, vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info\n"); );
    // Body
    this->__PVT__m_use_sequence_info = value;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info\n"); );
    // Body
    get_use_sequence_info__Vfuncrtn = this->__PVT__m_use_sequence_info;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_2__get_sequence_id;
    IData/*31:0*/ __VlefCall_1__get_transaction_id;
    std::string __VlefCall_0__get_full_name;
    if ((VlNull{} == item)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), "set_id_info called with null parameter"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 153)->__VnoInFunc_get_transaction_id(vlSymsp, __VlefCall_1__get_transaction_id);
    this->__VnoInFunc_set_transaction_id(vlSymsp, __VlefCall_1__get_transaction_id);
    VL_NULL_CHECK(item, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 154)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_2__get_sequence_id);
    this->__VnoInFunc_set_sequence_id(vlSymsp, __VlefCall_2__get_sequence_id);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer\n"); );
    // Body
    this->__PVT__m_sequencer = sequencer;
    this->__VnoInFunc_m_set_p_sequencer(vlSymsp);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer\n"); );
    // Body
    get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence\n"); );
    // Body
    this->__PVT__m_parent_sequence = parent;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence\n"); );
    // Body
    get_parent_sequence__Vfuncrtn = this->__PVT__m_parent_sequence;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth\n"); );
    // Body
    this->__PVT__m_depth = value;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__get_depth;
    {
        get_depth__Vfuncrtn = 0U;
        if ((0xffffffffU != this->__PVT__m_depth)) {
            get_depth__Vfuncrtn = this->__PVT__m_depth;
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__m_parent_sequence)) {
            this->__PVT__m_depth = 1U;
        } else {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 228)->__VnoInFunc_get_depth(vlSymsp, __VlefCall_0__get_depth);
            this->__PVT__m_depth = ((IData)(1U) + __VlefCall_0__get_depth);
        }
        get_depth__Vfuncrtn = this->__PVT__m_depth;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item(VUVM_Activator__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_3__get_name;
    std::string __VlefCall_2__get_name;
    std::string __VlefCall_1__get_full_name;
    std::string __VlefCall_0__get_full_name;
    get_full_name__Vfuncrtn = ""s;
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 251)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s);
    } else if ((VlNull{} != this->__PVT__m_sequencer)) {
        VL_NULL_CHECK(this->__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 253)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(__VlefCall_1__get_full_name, "."s);
    }
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
    if ((""s != __VlefCall_2__get_name)) {
        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, __VlefCall_3__get_name);
    } else {
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(get_full_name__Vfuncrtn, "_item"s);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name\n"); );
    // Body
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    get_root_sequence_name__Vfuncrtn = ""s;
    this->__VnoInFunc_get_root_sequence(vlSymsp, root_seq);
    if ((VlNull{} == root_seq)) {
        get_root_sequence_name__Vfuncrtn = ""s;
    } else {
        VL_NULL_CHECK(root_seq, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 272)->__VnoInFunc_get_name(vlSymsp, get_root_sequence_name__Vfuncrtn);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_set_p_sequencer(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_m_set_p_sequencer\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence(VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__24__Vfuncout;
    // Body
    IData/*31:0*/ __VlefExpr_1;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_0__get_parent_sequence;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> root_seq_base;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    {
        root_seq_base = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item>{this};
        while (true) {
            VL_NULL_CHECK(root_seq_base, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 294)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_0__get_parent_sequence);
            if ((VlNull{} != __VlefCall_0__get_parent_sequence)) {
                VL_NULL_CHECK(root_seq_base, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 295)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__24__Vfuncout);
                root_seq_base = __Vtask_get_parent_sequence__24__Vfuncout;
                __VlefExpr_1 = VL_CAST_DYNAMIC(root_seq_base, root_seq);
                if (VL_UNLIKELY(((! __VlefExpr_1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_item.svh:296: Assertion failed in %m: '$cast' failed.\n",3, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequence_item.get_root_sequence", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("../../uvm/distrib/src/seq/uvm_sequence_item.svh", 296, "");
                }
            } else {
                get_root_sequence__Vfuncrtn = root_seq;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path(VUVM_Activator__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__27__Vfuncout;
    // Body
    std::string __VlefCall_1__get_name;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_base> __VlefCall_0__get_parent_sequence;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item> this_item;
    std::string seq_path;
    {
        get_sequence_path__Vfuncrtn = ""s;
        seq_path = ""s;
        this_item = VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item>{this};
        this->__VnoInFunc_get_name(vlSymsp, seq_path);
        while (true) {
            VL_NULL_CHECK(this_item, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 315)->__VnoInFunc_get_parent_sequence(vlSymsp, __VlefCall_0__get_parent_sequence);
            if ((VlNull{} != __VlefCall_0__get_parent_sequence)) {
                VL_NULL_CHECK(this_item, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 316)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__27__Vfuncout);
                this_item = __Vtask_get_parent_sequence__27__Vfuncout;
                VL_NULL_CHECK(this_item, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 317)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                seq_path = VL_CONCATN_NNN(VL_CONCATN_NNN(__VlefCall_1__get_name, "."s), seq_path);
            } else {
                get_sequence_path__Vfuncrtn = seq_path;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object\n"); );
    // Locals
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    if ((VlNull{} == this->__PVT__m_sequencer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__cs);
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 338)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
        uvm_get_report_object__Vfuncrtn = __Vtask_get_root__30__Vfuncout;
    } else {
        uvm_get_report_object__Vfuncrtn = this->__PVT__m_sequencer;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_report_verbosity_level;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        uvm_report_enabled__Vfuncrtn = 0U;
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, l_report_object);
        VL_NULL_CHECK(l_report_object, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 346)->__VnoInFunc_get_report_verbosity_level(vlSymsp, severity, id, __VlefCall_0__get_report_verbosity_level);
        if (VL_LTS_III(32, __VlefCall_0__get_report_verbosity_level, verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (IData)(report_enabled_checked)))) {
            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (IData)(severity), id, __VlefCall_0__uvm_report_enabled);
            if ((1U & (~ (0U != __VlefCall_0__uvm_report_enabled)))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, l_report_message);
        VL_NULL_CHECK(l_report_message, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 367)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_sequence_path;
    std::string __VlefCall_0__get_context;
    VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_report_object> l_report_object;
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, l_report_object);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 436)->__VnoInFunc_set_report_object(vlSymsp, l_report_object);
    VL_NULL_CHECK(report_message, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 437)->__VnoInFunc_get_context(vlSymsp, __VlefCall_0__get_context);
    if ((""s == __VlefCall_0__get_context)) {
        this->__VnoInFunc_get_sequence_path(vlSymsp, __VlefCall_1__get_sequence_path);
        VL_NULL_CHECK(report_message, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 438)->__VnoInFunc_set_context(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_sequence_path));
    }
    VL_NULL_CHECK(VL_NULL_CHECK(l_report_object, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 439)
                  ->__PVT__m_rh, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 439)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(VlProcessRef vlProcess, VUVM_Activator__Syms* __restrict vlSymsp, VlClassRef<VUVM_Activator_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string temp_str0;
    std::string temp_str1;
    IData/*31:0*/ depth;
    temp_str0 = ""s;
    temp_str1 = ""s;
    this->__VnoInFunc_get_depth(vlSymsp, depth);
    VUVM_Activator_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if (((IData)(this->__PVT__print_sequence_info) 
         | (IData)(this->__PVT__m_use_sequence_info))) {
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 452)->__VnoInFunc_print_field_int(vlSymsp, "depth"s, 
                                                                                VL_EXTENDS_QI(64,32, depth), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
        if ((VlNull{} != this->__PVT__m_parent_sequence)) {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 454)->__VnoInFunc_get_name(vlSymsp, temp_str0);
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 455)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 457)->__VnoInFunc_print_string(vlSymsp, "parent sequence (name)"s, temp_str0, 0x2eU);
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 458)->__VnoInFunc_print_string(vlSymsp, "parent sequence (full name)"s, temp_str1, 0x2eU);
        temp_str1 = ""s;
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            VL_NULL_CHECK(this->__PVT__m_sequencer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 461)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, temp_str1);
        }
        VL_NULL_CHECK(printer, "../../uvm/distrib/src/seq/uvm_sequence_item.svh", 463)->__VnoInFunc_print_string(vlSymsp, "sequencer"s, temp_str1, 0x2eU);
    }
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Activator_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand(VUVM_Activator__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset(VUVM_Activator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_use_sequence_info = 0;
    __PVT__print_sequence_info = 0;
}

VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::~VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Activator_uvm_pkg__03a__03auvm_sequence_item::~\n"); );
}
