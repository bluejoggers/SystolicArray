// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUVM_Register8b.h for the primary calling header

#include "VUVM_Register8b__pch.h"

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, VlClassRef<VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor, vlProcess, vlSymsp, "uvm_cmdline_proc"s);
    }
    get_inst__Vfuncrtn = this->__PVT__m_inst;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args\n"); );
    // Body
    args = this->__PVT__m_argv;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs\n"); );
    // Body
    args = this->__PVT__m_plus_argv;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args(VUVM_Register8b__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args\n"); );
    // Body
    args = this->__PVT__m_uvm_argv;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches(VUVM_Register8b__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches\n"); );
    // Body
    get_arg_matches__Vfuncrtn = args.size();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value(VUVM_Register8b__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    get_arg_value__Vfuncrtn = 0U;
    unnamedblk1__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                get_arg_value__Vfuncrtn = ((IData)(1U) 
                                           + get_arg_value__Vfuncrtn);
                if ((1U == get_arg_value__Vfuncrtn)) {
                    value = VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),chars,
                                        (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)) 
                                         - (IData)(1U)));
                }
            }
        }
        unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values(VUVM_Register8b__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    values.clear();
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                values.push_back(VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),chars,
                                             (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)) 
                                              - (IData)(1U))));
            }
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
    get_arg_values__Vfuncrtn = values.size();
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name\n"); );
    // Body
    get_tool_name__Vfuncrtn = "?"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version(VUVM_Register8b__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version\n"); );
    // Body
    get_tool_version__Vfuncrtn = "?"s;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::init(VlProcessRef vlProcess, VUVM_Register8b__Syms* __restrict vlSymsp, std::string name) {
    VUVM_Register8b_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb(VUVM_Register8b__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb\n"); );
    // Body
    m_convert_verb__Vfuncrtn = 0U;
    verb_enum = 0U;
    if ((((((((("NONE"s == verb_str) | ("UVM_NONE"s 
                                        == verb_str)) 
              | ("LOW"s == verb_str)) | ("UVM_LOW"s 
                                         == verb_str)) 
            | ("MEDIUM"s == verb_str)) | ("UVM_MEDIUM"s 
                                          == verb_str)) 
          | ("HIGH"s == verb_str)) | ("UVM_HIGH"s == verb_str))) {
        verb_enum = (("NONE"s == verb_str) ? 0U : (
                                                   ("UVM_NONE"s 
                                                    == verb_str)
                                                    ? 0U
                                                    : 
                                                   (("LOW"s 
                                                     == verb_str)
                                                     ? 0x00000064U
                                                     : 
                                                    (("UVM_LOW"s 
                                                      == verb_str)
                                                      ? 0x00000064U
                                                      : 
                                                     (("MEDIUM"s 
                                                       == verb_str)
                                                       ? 0x000000c8U
                                                       : 
                                                      (("UVM_MEDIUM"s 
                                                        == verb_str)
                                                        ? 0x000000c8U
                                                        : 0x0000012cU))))));
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else {
        m_convert_verb__Vfuncrtn = 0U;
    }
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = VUVM_Register8b_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints\n"); );
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand(VUVM_Register8b__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset(VUVM_Register8b__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::~VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VUVM_Register8b_uvm_pkg__03a__03auvm_cmdline_processor::~\n"); );
}
