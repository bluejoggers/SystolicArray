// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_depth(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_depth\n"); );
    // Body
    depth__Vfuncrtn = this->__PVT__m_stack.size();
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_get(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_get\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    std::string v;
    {
        get__Vfuncrtn = ""s;
        v = ""s;
        if ((0U == this->__PVT__m_stack.size())) {
            get__Vfuncrtn = this->__PVT__m_arg;
            goto __Vlabel0;
        }
        get__Vfuncrtn = this->__PVT__m_stack.at(0U);
        unnamedblk1__DOT__i = 0U;
        unnamedblk1__DOT__i = 1U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_stack.size())) {
            v = this->__PVT__m_stack.at(unnamedblk1__DOT__i);
            get__Vfuncrtn = (((""s != v) & (((0x5bU 
                                              == VL_GETC_N(v,0U)) 
                                             | (0x28U 
                                                == 
                                                VL_GETC_N(v,0U))) 
                                            | (0x7bU 
                                               == VL_GETC_N(v,0U))))
                              ? VL_CONCATN_NNN(get__Vfuncrtn, v)
                              : VL_CONCATN_NNN(VL_CONCATN_NNN(get__Vfuncrtn, "."s), v));
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        if ((""s != this->__PVT__m_arg)) {
            get__Vfuncrtn = ((""s != get__Vfuncrtn)
                              ? VL_CONCATN_NNN(VL_CONCATN_NNN(get__Vfuncrtn, "."s), this->__PVT__m_arg)
                              : this->__PVT__m_arg);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_get_arg(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_arg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_get_arg\n"); );
    // Body
    get_arg__Vfuncrtn = this->__PVT__m_arg;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set(Vhello_uvm__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_stack.clear();
    this->__PVT__m_stack.push_back(s);
    this->__PVT__m_arg = ""s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_down(Vhello_uvm__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_down\n"); );
    // Body
    this->__PVT__m_stack.push_back(s);
    this->__PVT__m_arg = ""s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_down_element(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_down_element\n"); );
    // Body
    this->__PVT__m_stack.push_back(VL_SFORMATF_N_NX("[%0d]",1
                                                    , '~',32,element) );
    this->__PVT__m_arg = ""s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_up_element(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_up_element\n"); );
    // Body
    std::string s;
    {
        s = ""s;
        if ((1U & (~ (0U != this->__PVT__m_stack.size())))) {
            goto __Vlabel0;
        }
        s = this->__PVT__m_stack.pop_back();
        if (((""s != s) & (0x5bU != VL_GETC_N(s,0U)))) {
            this->__PVT__m_stack.push_back(s);
        }
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_up(Vhello_uvm__Syms* __restrict vlSymsp, CData/*7:0*/ separator) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_up\n"); );
    // Body
    CData/*0:0*/ found;
    std::string s;
    found = 0U;
    s = ""s;
    while (((0U != this->__PVT__m_stack.size()) & (~ (IData)(found)))) {
        s = this->__PVT__m_stack.pop_back();
        if ((0x2eU == (IData)(separator))) {
            if (((""s == s) | (((0x5bU != VL_GETC_N(s,0U)) 
                                & (0x28U != VL_GETC_N(s,0U))) 
                               & (0x7bU != VL_GETC_N(s,0U))))) {
                found = 1U;
            }
        } else if (((""s != s) & (VL_GETC_N(s,0U) == (IData)(separator)))) {
            found = 1U;
        }
    }
    this->__PVT__m_arg = ""s;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set_arg(Vhello_uvm__Syms* __restrict vlSymsp, std::string arg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set_arg\n"); );
    // Body
    {
        if ((""s == arg)) {
            goto __Vlabel0;
        }
        this->__PVT__m_arg = arg;
        __Vlabel0: ;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set_arg_element(Vhello_uvm__Syms* __restrict vlSymsp, std::string arg, IData/*31:0*/ ele) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_set_arg_element\n"); );
    // Body
    std::string tmp_value_str;
    VL_SFORMAT_NX(tmp_value_str,"%0d",1, '~',32,ele);
    this->__PVT__m_arg = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                       VL_CONCATN_NNN(arg, "["s), tmp_value_str), "]"s);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_unset_arg(Vhello_uvm__Syms* __restrict vlSymsp, std::string arg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::__VnoInFunc_unset_arg\n"); );
    // Body
    if ((arg == this->__PVT__m_arg)) {
        this->__PVT__m_arg = ""s;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::init(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_scope_stack::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
