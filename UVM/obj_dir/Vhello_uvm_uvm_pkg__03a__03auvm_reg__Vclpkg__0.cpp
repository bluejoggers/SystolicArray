// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_get_max_size\n"); );
    // Body
    get_max_size__Vfuncrtn = this->__PVT__m_max_size;
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage(Vhello_uvm__Syms* __restrict vlSymsp, std::string scope, IData/*31:0*/ models, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_reg__Vclpkg::__VnoInFunc_include_coverage\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg.__VnoInFunc_set(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, scope)), "include_coverage"s, models, accessor);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_watch\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_sample_values\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ data, QData/*63:0*/ byte_en, CData/*0:0*/ is_read, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XsampleX\n"); );
    // Body
    this->__VnoInFunc_sample(vlSymsp, data, byte_en, (IData)(is_read), map);
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_write\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_pre_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_post_read\n"); );
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::init(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ n_bits, IData/*31:0*/ has_coverage) {
    Vhello_uvm_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__7__verbosity;
    __Vtask_uvm_report_error__7__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__7__line;
    __Vtask_uvm_report_error__7__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__7__report_enabled_checked;
    __Vtask_uvm_report_error__7__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    /*super.new*/;
    if ((0U == n_bits)) {
        this->__Vfunc_uvm_report_enabled__2__id = "RegModel"s;
        __Vfunc_uvm_report_enabled__2__severity = 2U;
        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
            = __Vfunc_get__3__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
            = __Vtask_get_root__4__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), this->__Vfunc_uvm_report_enabled__2__id, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
            __Vtask_uvm_report_error__7__report_enabled_checked = 1U;
            this->__Vtask_uvm_report_error__7__context_name = ""s;
            __Vtask_uvm_report_error__7__line = 0x00000495U;
            this->__Vtask_uvm_report_error__7__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
            __Vtask_uvm_report_error__7__verbosity = 0U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__7__message
                          ,"Register \"%s\" cannot have 0 bits",1
                          , 'S',&(__VlefCall_1__get_name));
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
    this->__PVT__m_n_bits = n_bits;
    this->__PVT__m_has_cover = has_coverage;
    this->__PVT__m_atomic = VL_NEW(Vhello_uvm_std__03a__03asemaphore, vlSymsp, 1U);
    this->__PVT__m_n_used_bits = 0U;
    this->__PVT__m_locked = 0U;
    this->__PVT__m_is_busy = 0U;
    this->__PVT__m_is_locked_by_field = 0U;
    this->__PVT__m_hdl_paths_pool = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz48, vlProcess, vlSymsp, "hdl_paths"s);
    if ((n_bits > vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__PVT__m_max_size 
            = n_bits;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_configure\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_type_name;
    std::string __VlefCall_1__get_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        if ((VlNull{} == blk_parent)) {
            this->__Vfunc_uvm_report_enabled__13__id = "UVM/REG/CFG/NOBLK"s;
            __Vfunc_uvm_report_enabled__13__severity = 2U;
            __Vfunc_uvm_report_enabled__13__verbosity = 0U;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), this->__Vfunc_uvm_report_enabled__13__id, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_2__get_type_name);
                __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
                this->__Vtask_uvm_report_error__19__context_name = ""s;
                __Vtask_uvm_report_error__19__line = 0x000004adU;
                this->__Vtask_uvm_report_error__19__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                __Vtask_uvm_report_error__19__verbosity = 0U;
                this->__Vtask_uvm_report_error__19__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("uvm_reg::configure() called without a parent block for instance \""s, __VlefCall_1__get_name), "\" of register type \""s), __VlefCall_2__get_type_name), "\"."s));
                            this->__Vtask_uvm_report_error__19__id = "UVM/REG/CFG/NOBLK"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__20__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__20__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__21__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__19__id, this->__Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, this->__Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, this->__Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__PVT__m_parent = blk_parent;
                    VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1202)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this});
                    this->__PVT__m_regfile_parent = regfile_parent;
                    if ((""s != hdl_path)) {
                        this->__VnoInFunc_add_hdl_path_slice(vlSymsp, hdl_path, 0xffffffffU, 0xffffffffU, 0U, "RTL"s);
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> field) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_field\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
                __Vfunc_uvm_report_enabled__25__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
                __Vfunc_uvm_report_enabled__25__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__29__verbosity;
                __Vtask_uvm_report_error__29__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__29__line;
                __Vtask_uvm_report_error__29__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__29__report_enabled_checked;
                __Vtask_uvm_report_error__29__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
                __Vfunc_uvm_report_enabled__33__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
                __Vfunc_uvm_report_enabled__33__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__37__verbosity;
                __Vtask_uvm_report_fatal__37__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__37__line;
                __Vtask_uvm_report_fatal__37__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__37__report_enabled_checked;
                __Vtask_uvm_report_fatal__37__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
                IData/*31:0*/ __Vtask_get_lsb_pos__41__Vfuncout;
                __Vtask_get_lsb_pos__41__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
                __Vfunc_uvm_report_enabled__44__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
                __Vfunc_uvm_report_enabled__44__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
                __Vtask_uvm_report_error__49__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__49__line;
                __Vtask_uvm_report_error__49__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
                __Vtask_uvm_report_error__49__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__55__verbosity;
                __Vfunc_uvm_report_enabled__55__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__55__severity;
                __Vfunc_uvm_report_enabled__55__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__62__verbosity;
                __Vtask_uvm_report_error__62__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__62__line;
                __Vtask_uvm_report_error__62__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__62__report_enabled_checked;
                __Vtask_uvm_report_error__62__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__68__verbosity;
                __Vfunc_uvm_report_enabled__68__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__68__severity;
                __Vfunc_uvm_report_enabled__68__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__75__verbosity;
                __Vtask_uvm_report_error__75__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__75__line;
                __Vtask_uvm_report_error__75__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__75__report_enabled_checked;
                __Vtask_uvm_report_error__75__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_17__get_name;
                std::string __VlefCall_16__get_name;
                std::string __VlefCall_15__get_name;
                IData/*31:0*/ __VlefCall_14__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_13__get_lsb_pos;
                IData/*31:0*/ __VlefCall_12__get_n_bits;
                std::string __VlefCall_11__get_name;
                std::string __VlefCall_10__get_name;
                std::string __VlefCall_9__get_name;
                IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_7__get_n_bits;
                IData/*31:0*/ __VlefCall_6__get_lsb_pos;
                std::string __VlefCall_5__get_name;
                IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk304__DOT__i;
                unnamedblk304__DOT__i = 0;
                IData/*31:0*/ unnamedblk304__DOT__i__Vloopsize;
                unnamedblk304__DOT__i__Vloopsize = 0;
                IData/*31:0*/ unnamedblk304__DOT__unnamedblk305__DOT__j;
                IData/*31:0*/ offset;
                IData/*31:0*/ idx;
                {
                    offset = 0U;
                    idx = 0U;
                    if (this->__PVT__m_locked) {
                        this->__Vfunc_uvm_report_enabled__25__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__25__severity = 2U;
                        __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__26__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__26__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__27__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), this->__Vfunc_uvm_report_enabled__25__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__29__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__29__context_name = ""s;
                            __Vtask_uvm_report_error__29__line = 0x000004c0U;
                            this->__Vtask_uvm_report_error__29__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__29__verbosity = 0U;
                            this->__Vtask_uvm_report_error__29__message = "Cannot add field to locked register model"s;
                            this->__Vtask_uvm_report_error__29__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__29__id, this->__Vtask_uvm_report_error__29__message, __Vtask_uvm_report_error__29__verbosity, this->__Vtask_uvm_report_error__29__filename, __Vtask_uvm_report_error__29__line, this->__Vtask_uvm_report_error__29__context_name, (IData)(__Vtask_uvm_report_error__29__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    if ((VlNull{} == field)) {
                        this->__Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__33__severity = 3U;
                        __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__34__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__34__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__35__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), this->__Vfunc_uvm_report_enabled__33__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_fatal__37__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_fatal__37__context_name = ""s;
                            __Vtask_uvm_report_fatal__37__line = 0x000004c4U;
                            this->__Vtask_uvm_report_fatal__37__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_fatal__37__verbosity = 0U;
                            this->__Vtask_uvm_report_fatal__37__message = "Attempting to register NULL field"s;
                            this->__Vtask_uvm_report_fatal__37__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__38__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                = __Vfunc_get__38__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                = __Vtask_get_root__39__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__37__id, this->__Vtask_uvm_report_fatal__37__message, __Vtask_uvm_report_fatal__37__verbosity, this->__Vtask_uvm_report_fatal__37__filename, __Vtask_uvm_report_fatal__37__line, this->__Vtask_uvm_report_fatal__37__context_name, (IData)(__Vtask_uvm_report_fatal__37__report_enabled_checked));
                        }
                    }
                    VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_reg.svh", 1223)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__41__Vfuncout);
                    offset = __Vtask_get_lsb_pos__41__Vfuncout;
                    idx = 0xffffffffU;
                    {
                        unnamedblk304__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk304__DOT__i, this->__PVT__m_fields.size())) {
                            unnamedblk304__DOT__i__Vloopsize 
                                = this->__PVT__m_fields.size();
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk304__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1227)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                            if ((offset < __VlefCall_2__get_lsb_pos)) {
                                unnamedblk304__DOT__unnamedblk305__DOT__j 
                                    = unnamedblk304__DOT__i;
                                this->__PVT__m_fields.insert(unnamedblk304__DOT__unnamedblk305__DOT__j, field);
                                idx = unnamedblk304__DOT__i;
                                goto __Vlabel1;
                            }
                            if ((unnamedblk304__DOT__i__Vloopsize 
                                 <= this->__PVT__m_fields.size())) {
                                unnamedblk304__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk304__DOT__i);
                            }
                        }
                        __Vlabel1: ;
                    }
                    if (VL_GTS_III(32, 0U, idx)) {
                        this->__PVT__m_fields.push_back(field);
                        idx = (this->__PVT__m_fields.size() 
                               - (IData)(1U));
                    }
                    VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_reg.svh", 1239)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                    this->__PVT__m_n_used_bits = (this->__PVT__m_n_used_bits 
                                                  + __VlefCall_3__get_n_bits);
                    if ((this->__PVT__m_n_used_bits 
                         > this->__PVT__m_n_bits)) {
                        this->__Vfunc_uvm_report_enabled__44__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__44__severity = 2U;
                        __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__45__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__45__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__46__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), this->__Vfunc_uvm_report_enabled__44__id, __VlefCall_4__uvm_report_enabled);
                        if ((0U != __VlefCall_4__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
                            __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__49__context_name = ""s;
                            __Vtask_uvm_report_error__49__line = 0x000004ddU;
                            this->__Vtask_uvm_report_error__49__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__49__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__49__message
                                          ,"Fields use more bits (%0d) than available in register \"%s\" (%0d)",3
                                          , '#',32,this->__PVT__m_n_used_bits
                                          , 'S',&(__VlefCall_5__get_name)
                                          , '#',32,this->__PVT__m_n_bits);
                            this->__Vtask_uvm_report_error__49__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__50__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__50__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__51__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__49__id, this->__Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, this->__Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, this->__Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
                        }
                    }
                    if (VL_LTS_III(32, 0U, idx)) {
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               (idx 
                                                                - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_reg.svh", 1250)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               (idx 
                                                                - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_reg.svh", 1251)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                        if (((__VlefCall_6__get_lsb_pos 
                              + __VlefCall_7__get_n_bits) 
                             > offset)) {
                            this->__Vfunc_uvm_report_enabled__55__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__55__severity = 2U;
                            __Vfunc_uvm_report_enabled__55__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__56__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__56__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__57__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__55__verbosity, (IData)(__Vfunc_uvm_report_enabled__55__severity), this->__Vfunc_uvm_report_enabled__55__id, __VlefCall_8__uvm_report_enabled);
                            if ((0U != __VlefCall_8__uvm_report_enabled)) {
                                VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                       (idx 
                                                                        - (IData)(1U))), "../../uvm/distrib/src/reg/uvm_reg.svh", 1254)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                                VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_reg.svh", 1254)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                                __Vtask_uvm_report_error__62__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__62__context_name = ""s;
                                __Vtask_uvm_report_error__62__line = 0x000004e6U;
                                this->__Vtask_uvm_report_error__62__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__62__verbosity = 0U;
                                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__62__message
                                              ,"Field %s overlaps field %s in register \"%s\"",3
                                              , 'S',&(__VlefCall_9__get_name)
                                              , 'S',&(__VlefCall_10__get_name)
                                              , 'S',&(__VlefCall_11__get_name));
                                this->__Vtask_uvm_report_error__62__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__63__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__63__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__64__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__62__id, this->__Vtask_uvm_report_error__62__message, __Vtask_uvm_report_error__62__verbosity, this->__Vtask_uvm_report_error__62__filename, __Vtask_uvm_report_error__62__line, this->__Vtask_uvm_report_error__62__context_name, (IData)(__Vtask_uvm_report_error__62__report_enabled_checked));
                            }
                        }
                    }
                    if (VL_LTS_III(32, idx, (this->__PVT__m_fields.size() 
                                             - (IData)(1U)))) {
                        VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_reg.svh", 1258)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_12__get_n_bits);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                               ((IData)(1U) 
                                                                + idx)), "../../uvm/distrib/src/reg/uvm_reg.svh", 1259)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_13__get_lsb_pos);
                        if (((offset + __VlefCall_12__get_n_bits) 
                             > __VlefCall_13__get_lsb_pos)) {
                            this->__Vfunc_uvm_report_enabled__68__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__68__severity = 2U;
                            __Vfunc_uvm_report_enabled__68__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__69__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__69__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__70__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__68__verbosity, (IData)(__Vfunc_uvm_report_enabled__68__severity), this->__Vfunc_uvm_report_enabled__68__id, __VlefCall_14__uvm_report_enabled);
                            if ((0U != __VlefCall_14__uvm_report_enabled)) {
                                VL_NULL_CHECK(field, "../../uvm/distrib/src/reg/uvm_reg.svh", 1263)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_15__get_name);
                                VL_NULL_CHECK(this->__PVT__m_fields.at(
                                                                       ((IData)(1U) 
                                                                        + idx)), "../../uvm/distrib/src/reg/uvm_reg.svh", 1263)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_16__get_name);
                                this->__VnoInFunc_get_name(vlSymsp, __VlefCall_17__get_name);
                                __Vtask_uvm_report_error__75__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__75__context_name = ""s;
                                __Vtask_uvm_report_error__75__line = 0x000004efU;
                                this->__Vtask_uvm_report_error__75__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__75__verbosity = 0U;
                                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__75__message
                                              ,"Field %s overlaps field %s in register \"%s\"",3
                                              , 'S',&(__VlefCall_15__get_name)
                                              , 'S',&(__VlefCall_16__get_name)
                                              , 'S',&(__VlefCall_17__get_name));
                                this->__Vtask_uvm_report_error__75__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__76__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__76__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__77__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__75__id, this->__Vtask_uvm_report_error__75__message, __Vtask_uvm_report_error__75__verbosity, this->__Vtask_uvm_report_error__75__filename, __Vtask_uvm_report_error__75__line, this->__Vtask_uvm_report_error__75__context_name, (IData)(__Vtask_uvm_report_error__75__report_enabled_checked));
                            }
                        }
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX(Vhello_uvm__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xlock_modelX\n"); );
                // Body
                {
                    if (this->__PVT__m_locked) {
                        goto __Vlabel0;
                    }
                    this->__PVT__m_locked = 1U;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> ftdr, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_frontdoor\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    VL_NULL_CHECK(ftdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 1289)
                                                        ->__PVT__fname 
                        = this->__PVT__m_fname;
                    VL_NULL_CHECK(ftdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 1290)
                                                        ->__PVT__lineno 
                        = this->__PVT__m_lineno;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_frontdoor()"s, map);
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1294)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if ((VlNull{} == map_info)) {
                        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1296)
                                                        ->__VnoInFunc_add_reg(vlSymsp, 
                                                                              VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 0xffffffffffffffffULL, "RW"s, 1U, ftdr);
                    } else {
                        VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1298)
                                                        ->__PVT__frontdoor 
                            = ftdr;
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> &get_frontdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_frontdoor\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                {
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_frontdoor()"s, map);
                    if ((VlNull{} == map)) {
                        get_frontdoor__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1310)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    get_frontdoor__Vfuncrtn = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1311)
                        ->__PVT__frontdoor;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_backdoor\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
                __Vfunc_uvm_report_enabled__85__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
                __Vfunc_uvm_report_enabled__85__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__89__verbosity;
                __Vtask_uvm_report_warning__89__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__89__line;
                __Vtask_uvm_report_warning__89__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__89__report_enabled_checked;
                __Vtask_uvm_report_warning__89__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_update_threads;
                VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 1320)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 1321)
                                                        ->__PVT__lineno 
                    = lineno;
                __VlefCall_0__has_update_threads = 
                    (VlNull{} != this->__PVT__m_backdoor);
                if (__VlefCall_0__has_update_threads) {
                    VL_NULL_CHECK(this->__PVT__m_backdoor, "../../uvm/distrib/src/reg/uvm_reg.svh", 1323)
                                                        ->__VnoInFunc_has_update_threads(vlSymsp, __VlefCall_0__has_update_threads);
                }
                if (__VlefCall_0__has_update_threads) {
                    this->__Vfunc_uvm_report_enabled__85__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__85__severity = 1U;
                    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__86__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__86__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__87__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), this->__Vfunc_uvm_report_enabled__85__id, __VlefCall_1__uvm_report_enabled);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        __Vtask_uvm_report_warning__89__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__89__context_name = ""s;
                        __Vtask_uvm_report_warning__89__line = 0x0000052cU;
                        this->__Vtask_uvm_report_warning__89__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__89__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__89__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                        this->__Vtask_uvm_report_warning__89__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__89__id, this->__Vtask_uvm_report_warning__89__message, __Vtask_uvm_report_warning__89__verbosity, this->__Vtask_uvm_report_warning__89__filename, __Vtask_uvm_report_warning__89__line, this->__Vtask_uvm_report_warning__89__context_name, (IData)(__Vtask_uvm_report_warning__89__report_enabled_checked));
                    }
                }
                this->__PVT__m_backdoor = bkdr;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_backdoor\n"); );
                // Body
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk306__DOT__blk;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk306__DOT__bkdr;
                if (inherited) {
                    this->__VnoInFunc_get_parent(vlSymsp, unnamedblk306__DOT__blk);
                    {
                        while ((VlNull{} != unnamedblk306__DOT__blk)) {
                            VL_NULL_CHECK(unnamedblk306__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg.svh", 1338)
                                                        ->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk306__DOT__bkdr);
                            if ((VlNull{} != unnamedblk306__DOT__bkdr)) {
                                this->__PVT__m_backdoor 
                                    = unnamedblk306__DOT__bkdr;
                                goto __Vlabel0;
                            }
                            VL_NULL_CHECK(unnamedblk306__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg.svh", 1343)
                                                        ->__VnoInFunc_get_parent(vlSymsp, unnamedblk306__DOT__blk);
                        }
                        __Vlabel0: ;
                    }
                }
                get_backdoor__Vfuncrtn = this->__PVT__m_backdoor;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clear_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
                __Vfunc_uvm_report_enabled__100__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
                __Vfunc_uvm_report_enabled__100__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__104__verbosity;
                __Vtask_uvm_report_warning__104__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__104__line;
                __Vtask_uvm_report_warning__104__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__104__report_enabled_checked;
                __Vtask_uvm_report_warning__104__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_0__exists;
                {
                    if (("ALL"s == kind)) {
                        this->__PVT__m_hdl_paths_pool 
                            = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_object_string_pool__Tz48, vlProcess, vlSymsp, "hdl_paths"s);
                        goto __Vlabel0;
                    }
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1361)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1363)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        }
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1366)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                    if ((1U & (~ (0U != __VlefCall_0__exists)))) {
                        this->__Vfunc_uvm_report_enabled__100__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__100__severity = 1U;
                        __Vfunc_uvm_report_enabled__100__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__101__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__101__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__102__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), this->__Vfunc_uvm_report_enabled__100__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_warning__104__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__104__context_name = ""s;
                            __Vtask_uvm_report_warning__104__line = 0x00000557U;
                            this->__Vtask_uvm_report_warning__104__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__104__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__104__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_warning__104__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__105__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__105__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__106__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__104__id, this->__Vtask_uvm_report_warning__104__message, __Vtask_uvm_report_warning__104__verbosity, this->__Vtask_uvm_report_warning__104__filename, __Vtask_uvm_report_warning__104__line, this->__Vtask_uvm_report_warning__104__context_name, (IData)(__Vtask_uvm_report_warning__104__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1371)
                                                        ->__VnoInFunc_delete(vlSymsp, kind);
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<Vhello_uvm_uvm_hdl_path_slice__struct__0> slices, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz47> paths;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1379)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                concat = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                VL_NULL_CHECK(concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1382)
                                                        ->__VnoInFunc_set(vlSymsp, slices);
                VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1383)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ offset, IData/*31:0*/ size, CData/*0:0*/ first, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_hdl_path_slice\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_2__size;
                CData/*0:0*/ __VlefLogOr_1;
                IData/*31:0*/ __VlefCall_0__size;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz47> paths;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> concat;
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1394)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, paths);
                __VlefLogOr_1 = first;
                if ((1U & (~ (IData)(__VlefLogOr_1)))) {
                    VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1397)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
                    __VlefLogOr_1 = (0U == __VlefCall_0__size);
                }
                if (__VlefLogOr_1) {
                    concat = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                    VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1399)
                                                        ->__VnoInFunc_push_back(vlSymsp, concat);
                } else {
                    VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1402)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                    VL_NULL_CHECK(paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1402)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                          (__VlefCall_2__size 
                                                                           - (IData)(1U)), concat);
                }
                VL_NULL_CHECK(concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1404)
                                                        ->__VnoInFunc_add_path(vlSymsp, name, offset, size);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_hdl_path\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__exists;
                has_hdl_path__Vfuncrtn = 0U;
                if ((""s == kind)) {
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1413)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1415)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                    }
                }
                VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1418)
                                                        ->__VnoInFunc_exists(vlSymsp, kind, __VlefCall_0__exists);
                has_hdl_path__Vfuncrtn = (1U & __VlefCall_0__exists);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<std::string> &kinds) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path_kinds\n"); );
                // Locals
                IData/*31:0*/ __Vtask_first__123__Vfuncout;
                __Vtask_first__123__Vfuncout = 0;
                IData/*31:0*/ __Vtask_next__124__Vfuncout;
                __Vtask_next__124__Vfuncout = 0;
                // Body
                IData/*31:0*/ __VlefCall_1__next;
                IData/*31:0*/ __VlefCall_0__first;
                std::string kind;
                {
                    kind = ""s;
                    kinds.clear();
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1427)
                                                        ->__VnoInFunc_first(vlSymsp, kind, __Vtask_first__123__Vfuncout);
                    __VlefCall_0__first = __Vtask_first__123__Vfuncout;
                    if ((1U & (~ (0U != __VlefCall_0__first)))) {
                        goto __Vlabel0;
                    }
                    do {
                        kinds.push_back(kind);
                        VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1431)
                                                        ->__VnoInFunc_next(vlSymsp, kind, __Vtask_next__124__Vfuncout);
                        __VlefCall_1__next = __Vtask_next__124__Vfuncout;
                    } while ((0U != __VlefCall_1__next));
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__128__verbosity;
                __Vfunc_uvm_report_enabled__128__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__128__severity;
                __Vfunc_uvm_report_enabled__128__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__132__verbosity;
                __Vtask_uvm_report_error__132__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__132__line;
                __Vtask_uvm_report_error__132__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__132__report_enabled_checked;
                __Vtask_uvm_report_error__132__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __VlefCall_3__get;
                IData/*31:0*/ __VlefCall_2__size;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                IData/*31:0*/ unnamedblk307__DOT__i;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz47> hdl_paths;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1444)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1446)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        }
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
                    if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                        this->__Vfunc_uvm_report_enabled__128__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__128__severity = 2U;
                        __Vfunc_uvm_report_enabled__128__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__129__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__129__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__130__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__128__verbosity, (IData)(__Vfunc_uvm_report_enabled__128__severity), this->__Vfunc_uvm_report_enabled__128__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            __Vtask_uvm_report_error__132__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__132__context_name = ""s;
                            __Vtask_uvm_report_error__132__line = 0x000005abU;
                            this->__Vtask_uvm_report_error__132__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__132__verbosity = 0U;
                            this->__Vtask_uvm_report_error__132__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Register does not have hdl path defined for abstraction '"s, kind), "'"s));
                            this->__Vtask_uvm_report_error__132__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__133__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__133__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__134__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__132__id, this->__Vtask_uvm_report_error__132__message, __Vtask_uvm_report_error__132__verbosity, this->__Vtask_uvm_report_error__132__filename, __Vtask_uvm_report_error__132__line, this->__Vtask_uvm_report_error__132__context_name, (IData)(__Vtask_uvm_report_error__132__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1455)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, hdl_paths);
                    unnamedblk307__DOT__i = 0U;
                    unnamedblk307__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1457)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_2__size);
                        if (!(VL_LTS_III(32, unnamedblk307__DOT__i, __VlefCall_2__size))) break;
                        VL_NULL_CHECK(hdl_paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1458)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk307__DOT__i, __VlefCall_3__get);
                        paths.push_back(__VlefCall_3__get);
                        unnamedblk307__DOT__i = ((IData)(1U) 
                                                 + unnamedblk307__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> &paths, std::string kind, std::string separator) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_hdl_path\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__142__verbosity;
                __Vfunc_uvm_report_enabled__142__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__142__severity;
                __Vfunc_uvm_report_enabled__142__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__143__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__144__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__147__verbosity;
                __Vtask_uvm_report_error__147__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__147__line;
                __Vtask_uvm_report_error__147__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__147__report_enabled_checked;
                __Vtask_uvm_report_error__147__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__148__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__149__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_3__size;
                std::string __VlefCall_2__get_full_name;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_queue__Tz47> unnamedblk308__DOT__hdl_paths;
                VlQueue<std::string> unnamedblk308__DOT__parent_paths;
                IData/*31:0*/ unnamedblk308__DOT__unnamedblk309__DOT__i;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j;
                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j = 0;
                IData/*31:0*/ unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j__Vloopsize;
                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__t;
                IData/*31:0*/ unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k;
                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k = 0;
                IData/*31:0*/ unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k__Vloopsize;
                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k__Vloopsize = 0;
                {
                    if ((""s == kind)) {
                        if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                            VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1472)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        } else {
                            VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1474)
                                                        ->__VnoInFunc_get_default_hdl_path(vlSymsp, kind);
                        }
                    }
                    this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __VlefCall_0__has_hdl_path);
                    if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                        this->__Vfunc_uvm_report_enabled__142__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__142__severity = 2U;
                        __Vfunc_uvm_report_enabled__142__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__143__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__143__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__144__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__144__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__142__verbosity, (IData)(__Vfunc_uvm_report_enabled__142__severity), this->__Vfunc_uvm_report_enabled__142__id, __VlefCall_1__uvm_report_enabled);
                        if ((0U != __VlefCall_1__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            __Vtask_uvm_report_error__147__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__147__context_name = ""s;
                            __Vtask_uvm_report_error__147__line = 0x000005c7U;
                            this->__Vtask_uvm_report_error__147__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__147__verbosity = 0U;
                            this->__Vtask_uvm_report_error__147__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register "s, __VlefCall_2__get_full_name), " does not have hdl path defined for abstraction '"s), kind), "'"s));
                            this->__Vtask_uvm_report_error__147__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__148__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__148__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__149__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__149__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__147__id, this->__Vtask_uvm_report_error__147__message, __Vtask_uvm_report_error__147__verbosity, this->__Vtask_uvm_report_error__147__filename, __Vtask_uvm_report_error__147__line, this->__Vtask_uvm_report_error__147__context_name, (IData)(__Vtask_uvm_report_error__147__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(this->__PVT__m_hdl_paths_pool, "../../uvm/distrib/src/reg/uvm_reg.svh", 1484)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, kind, unnamedblk308__DOT__hdl_paths);
                    unnamedblk308__DOT__parent_paths.clear();
                    unnamedblk308__DOT__parent_paths.atDefault().clear();
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1488)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk308__DOT__parent_paths, kind, separator);
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1490)
                                                        ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk308__DOT__parent_paths, kind, separator);
                    }
                    unnamedblk308__DOT__unnamedblk309__DOT__i = 0U;
                    unnamedblk308__DOT__unnamedblk309__DOT__i = 0U;
                    while (true) {
                        VL_NULL_CHECK(unnamedblk308__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1492)
                                                        ->__VnoInFunc_size(vlSymsp, __VlefCall_3__size);
                        if (!(VL_LTS_III(32, unnamedblk308__DOT__unnamedblk309__DOT__i, __VlefCall_3__size))) break;
                        VL_NULL_CHECK(unnamedblk308__DOT__hdl_paths, "../../uvm/distrib/src/reg/uvm_reg.svh", 1493)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk308__DOT__unnamedblk309__DOT__i, unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat);
                        unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j, unnamedblk308__DOT__parent_paths.size())) {
                            unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j__Vloopsize 
                                = unnamedblk308__DOT__parent_paths.size();
                            unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__t 
                                = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat, vlSymsp);
                            unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k = 0U;
                            while (VL_LTS_III(32, unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k, VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1498)
                                              ->__PVT__slices.size())) {
                                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k__Vloopsize 
                                    = VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1498)
                                    ->__PVT__slices.size();
                                if ((""s == VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1499)
                                     ->__PVT__slices.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k)
                                     .__PVT__path)) {
                                    VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__t, "../../uvm/distrib/src/reg/uvm_reg.svh", 1500)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(unnamedblk308__DOT__parent_paths.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j)), 0xffffffffU, 0xffffffffU);
                                } else {
                                    VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__t, "../../uvm/distrib/src/reg/uvm_reg.svh", 1502)
                                                        ->__VnoInFunc_add_path(vlSymsp, 
                                                                               VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(unnamedblk308__DOT__parent_paths.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j), separator), VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1502)
                                                                                ->__PVT__slices.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k)
                                                                                .__PVT__path)), VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1503)
                                                                               ->__PVT__slices.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k)
                                                                               .__PVT__offset, VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1504)
                                                                               ->__PVT__slices.at(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k)
                                                                               .__PVT__size);
                                }
                                if ((unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k__Vloopsize 
                                     <= VL_NULL_CHECK(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 1498)
                                     ->__PVT__slices.size())) {
                                    unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k 
                                        = ((IData)(1U) 
                                           + unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__unnamedblk313__DOT__k);
                                }
                            }
                            paths.push_back(unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__unnamedblk312__DOT__t);
                            if ((unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j__Vloopsize 
                                 <= unnamedblk308__DOT__parent_paths.size())) {
                                unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j 
                                    = ((IData)(1U) 
                                       + unnamedblk308__DOT__unnamedblk309__DOT__unnamedblk310__DOT__unnamedblk311__DOT__j);
                            }
                        }
                        unnamedblk308__DOT__unnamedblk309__DOT__i 
                            = ((IData)(1U) + unnamedblk308__DOT__unnamedblk309__DOT__i);
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_offset\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__159__verbosity;
                __Vfunc_uvm_report_enabled__159__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__159__severity;
                __Vfunc_uvm_report_enabled__159__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__164__verbosity;
                __Vtask_uvm_report_error__164__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__164__line;
                __Vtask_uvm_report_error__164__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__164__report_enabled_checked;
                __Vtask_uvm_report_error__164__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__165__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__166__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                {
                    if ((VL_LTS_III(32, 1U, this->__PVT__m_maps.size()) 
                         & (VlNull{} == map))) {
                        this->__Vfunc_uvm_report_enabled__159__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__159__severity = 2U;
                        __Vfunc_uvm_report_enabled__159__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__160__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__160__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__161__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__159__verbosity, (IData)(__Vfunc_uvm_report_enabled__159__severity), this->__Vfunc_uvm_report_enabled__159__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_error__164__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__164__context_name = ""s;
                            __Vtask_uvm_report_error__164__line = 0x000005f3U;
                            this->__Vtask_uvm_report_error__164__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__164__verbosity = 0U;
                            this->__Vtask_uvm_report_error__164__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("set_offset requires a non-null map when register '"s, __VlefCall_1__get_full_name), "' belongs to more than one map."s));
                            this->__Vtask_uvm_report_error__164__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__165__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__165__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__166__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__166__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__164__id, this->__Vtask_uvm_report_error__164__message, __Vtask_uvm_report_error__164__verbosity, this->__Vtask_uvm_report_error__164__filename, __Vtask_uvm_report_error__164__line, this->__Vtask_uvm_report_error__164__context_name, (IData)(__Vtask_uvm_report_error__164__report_enabled_checked));
                        }
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "set_offset()"s, map);
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1532)
                                                        ->__VnoInFunc_m_set_reg_offset(vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, offset, (IData)(unmapped));
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_file> regfile_parent) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_parent\n"); );
                // Body
                this->__PVT__m_parent = blk_parent;
                this->__PVT__m_regfile_parent = regfile_parent;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_parent\n"); );
                // Body
                this->__VnoInFunc_get_block(vlSymsp, get_parent__Vfuncrtn);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_regfile\n"); );
                // Body
                get_regfile__Vfuncrtn = this->__PVT__m_regfile_parent;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_full_name\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_3__get_name;
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_name;
                std::string __VlefCall_0__get_full_name;
                {
                    get_full_name__Vfuncrtn = ""s;
                    if ((VlNull{} != this->__PVT__m_regfile_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_regfile_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1567)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_0__get_full_name, "."s), __VlefCall_1__get_name);
                        goto __Vlabel0;
                    }
                    if ((VlNull{} != this->__PVT__m_parent)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 1570)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_3__get_name);
                        get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(__VlefCall_2__get_full_name, "."s), __VlefCall_3__get_name);
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_get_name(vlSymsp, get_full_name__Vfuncrtn);
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_map\n"); );
                // Body
                this->__PVT__m_maps.at(map) = 1U;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map>> &maps) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_maps\n"); );
                // Body
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk314__DOT__map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk314__DOT__map__Vnext;
                CData/*0:0*/ unnamedblk314__DOT__map__Vmore;
                unnamedblk314__DOT__map__Vmore = 0;
                unnamedblk314__DOT__map__Vmore = (0U 
                                                  != this->__PVT__m_maps.first(unnamedblk314__DOT__map__Vnext));
                while (unnamedblk314__DOT__map__Vmore) {
                    unnamedblk314__DOT__map = unnamedblk314__DOT__map__Vnext;
                    unnamedblk314__DOT__map__Vmore 
                        = (0U != this->__PVT__m_maps.next(unnamedblk314__DOT__map__Vnext));
                    maps.push_back(unnamedblk314__DOT__map);
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_maps__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_maps\n"); );
                // Body
                get_n_maps__Vfuncrtn = this->__PVT__m_maps.size();
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &is_in_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_in_map\n"); );
                // Body
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__l;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__l__Vnext;
                CData/*0:0*/ unnamedblk315__DOT__l__Vmore;
                unnamedblk315__DOT__l__Vmore = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__local_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk315__DOT__unnamedblk316__DOT__parent_map;
                {
                    is_in_map__Vfuncrtn = 0U;
                    if (this->__PVT__m_maps.exists(map)) {
                        is_in_map__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    unnamedblk315__DOT__l__Vmore = 
                        (0U != this->__PVT__m_maps.first(unnamedblk315__DOT__l__Vnext));
                    while (unnamedblk315__DOT__l__Vmore) {
                        unnamedblk315__DOT__l = unnamedblk315__DOT__l__Vnext;
                        unnamedblk315__DOT__l__Vmore 
                            = (0U != this->__PVT__m_maps.next(unnamedblk315__DOT__l__Vnext));
                        unnamedblk315__DOT__unnamedblk316__DOT__local_map 
                            = unnamedblk315__DOT__l;
                        VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1605)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__parent_map);
                        while ((VlNull{} != unnamedblk315__DOT__unnamedblk316__DOT__parent_map)) {
                            if ((unnamedblk315__DOT__unnamedblk316__DOT__parent_map 
                                 == map)) {
                                is_in_map__Vfuncrtn = 1U;
                                goto __Vlabel0;
                            }
                            VL_NULL_CHECK(unnamedblk315__DOT__unnamedblk316__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1610)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk315__DOT__unnamedblk316__DOT__parent_map);
                        }
                    }
                    is_in_map__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string caller, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &get_local_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_local_map\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__181__verbosity;
                __Vfunc_uvm_report_enabled__181__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__181__severity;
                __Vfunc_uvm_report_enabled__181__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__182__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__183__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__187__verbosity;
                __Vtask_uvm_report_warning__187__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__187__line;
                __Vtask_uvm_report_warning__187__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__187__report_enabled_checked;
                __Vtask_uvm_report_warning__187__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__188__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__189__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk317__DOT__l;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk317__DOT__l__Vnext;
                CData/*0:0*/ unnamedblk317__DOT__l__Vmore;
                unnamedblk317__DOT__l__Vmore = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk317__DOT__unnamedblk318__DOT__local_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk317__DOT__unnamedblk318__DOT__parent_map;
                {
                    if ((VlNull{} == map)) {
                        this->__VnoInFunc_get_default_map(vlProcess, vlSymsp, ""s, get_local_map__Vfuncrtn);
                        goto __Vlabel0;
                    }
                    if (this->__PVT__m_maps.exists(map)) {
                        get_local_map__Vfuncrtn = map;
                        goto __Vlabel0;
                    }
                    unnamedblk317__DOT__l__Vmore = 
                        (0U != this->__PVT__m_maps.first(unnamedblk317__DOT__l__Vnext));
                    while (unnamedblk317__DOT__l__Vmore) {
                        unnamedblk317__DOT__l = unnamedblk317__DOT__l__Vnext;
                        unnamedblk317__DOT__l__Vmore 
                            = (0U != this->__PVT__m_maps.next(unnamedblk317__DOT__l__Vnext));
                        unnamedblk317__DOT__unnamedblk318__DOT__local_map 
                            = unnamedblk317__DOT__l;
                        VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1627)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk317__DOT__unnamedblk318__DOT__parent_map);
                        while ((VlNull{} != unnamedblk317__DOT__unnamedblk318__DOT__parent_map)) {
                            if ((unnamedblk317__DOT__unnamedblk318__DOT__parent_map 
                                 == map)) {
                                get_local_map__Vfuncrtn 
                                    = unnamedblk317__DOT__unnamedblk318__DOT__local_map;
                                goto __Vlabel0;
                            }
                            VL_NULL_CHECK(unnamedblk317__DOT__unnamedblk318__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1632)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk317__DOT__unnamedblk318__DOT__parent_map);
                        }
                    }
                    this->__Vfunc_uvm_report_enabled__181__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__181__severity = 1U;
                    __Vfunc_uvm_report_enabled__181__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__182__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__182__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__183__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__183__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__181__verbosity, (IData)(__Vfunc_uvm_report_enabled__181__severity), this->__Vfunc_uvm_report_enabled__181__id, __VlefCall_0__uvm_report_enabled);
                    if ((0U != __VlefCall_0__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                        VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1637)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                        __Vtask_uvm_report_warning__187__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__187__context_name = ""s;
                        __Vtask_uvm_report_warning__187__line = 0x00000665U;
                        this->__Vtask_uvm_report_warning__187__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__187__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__187__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_full_name), "' is not contained within map '"s), __VlefCall_2__get_full_name), "'"s), 
                                                                ((""s 
                                                                  == caller)
                                                                  ? ""s
                                                                  : 
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
                        this->__Vtask_uvm_report_warning__187__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__188__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__188__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__189__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__189__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__187__id, this->__Vtask_uvm_report_warning__187__message, __Vtask_uvm_report_warning__187__verbosity, this->__Vtask_uvm_report_warning__187__filename, __Vtask_uvm_report_warning__187__line, this->__Vtask_uvm_report_warning__187__context_name, (IData)(__Vtask_uvm_report_warning__187__report_enabled_checked));
                    }
                    get_local_map__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string caller, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_default_map\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__191__verbosity;
                __Vfunc_uvm_report_enabled__191__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__191__severity;
                __Vfunc_uvm_report_enabled__191__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__192__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__193__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__196__verbosity;
                __Vtask_uvm_report_warning__196__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__196__line;
                __Vtask_uvm_report_warning__196__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__196__report_enabled_checked;
                __Vtask_uvm_report_warning__196__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__197__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__198__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk319__DOT__map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk320__DOT__l;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk320__DOT__l__Vnext;
                CData/*0:0*/ unnamedblk320__DOT__l__Vmore;
                unnamedblk320__DOT__l__Vmore = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk320__DOT__unnamedblk321__DOT__map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> unnamedblk320__DOT__unnamedblk321__DOT__blk;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk320__DOT__unnamedblk321__DOT__default_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk320__DOT__unnamedblk321__DOT__unnamedblk322__DOT__local_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk323__DOT__map;
                {
                    if ((0U == this->__PVT__m_maps.size())) {
                        this->__Vfunc_uvm_report_enabled__191__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__191__severity = 1U;
                        __Vfunc_uvm_report_enabled__191__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__192__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__192__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__193__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__193__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__191__verbosity, (IData)(__Vfunc_uvm_report_enabled__191__severity), this->__Vfunc_uvm_report_enabled__191__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_warning__196__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__196__context_name = ""s;
                            __Vtask_uvm_report_warning__196__line = 0x00000673U;
                            this->__Vtask_uvm_report_warning__196__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__196__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__196__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_full_name), "' is not registered with any map"s), 
                                                                    ((""s 
                                                                      == caller)
                                                                      ? ""s
                                                                      : 
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(" (called from "s, caller), ")"s))));
                            this->__Vtask_uvm_report_warning__196__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__197__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__197__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__198__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__198__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__196__id, this->__Vtask_uvm_report_warning__196__message, __Vtask_uvm_report_warning__196__verbosity, this->__Vtask_uvm_report_warning__196__filename, __Vtask_uvm_report_warning__196__line, this->__Vtask_uvm_report_warning__196__context_name, (IData)(__Vtask_uvm_report_warning__196__report_enabled_checked));
                        }
                        get_default_map__Vfuncrtn = VlNull{};
                        goto __Vlabel0;
                    }
                    if ((1U == this->__PVT__m_maps.size())) {
                        std::ignore = this->__PVT__m_maps.first(unnamedblk319__DOT__map);
                        get_default_map__Vfuncrtn = unnamedblk319__DOT__map;
                        goto __Vlabel0;
                    }
                    unnamedblk320__DOT__l__Vmore = 
                        (0U != this->__PVT__m_maps.first(unnamedblk320__DOT__l__Vnext));
                    while (unnamedblk320__DOT__l__Vmore) {
                        unnamedblk320__DOT__l = unnamedblk320__DOT__l__Vnext;
                        unnamedblk320__DOT__l__Vmore 
                            = (0U != this->__PVT__m_maps.next(unnamedblk320__DOT__l__Vnext));
                        unnamedblk320__DOT__unnamedblk321__DOT__map 
                            = unnamedblk320__DOT__l;
                        VL_NULL_CHECK(unnamedblk320__DOT__unnamedblk321__DOT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1665)
                                                        ->__VnoInFunc_get_parent(vlSymsp, unnamedblk320__DOT__unnamedblk321__DOT__blk);
                        VL_NULL_CHECK(unnamedblk320__DOT__unnamedblk321__DOT__blk, "../../uvm/distrib/src/reg/uvm_reg.svh", 1666)
                                                        ->__VnoInFunc_get_default_map(vlSymsp, unnamedblk320__DOT__unnamedblk321__DOT__default_map);
                        if ((VlNull{} != unnamedblk320__DOT__unnamedblk321__DOT__default_map)) {
                            this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, unnamedblk320__DOT__unnamedblk321__DOT__default_map, "get_default_map()"s, unnamedblk320__DOT__unnamedblk321__DOT__unnamedblk322__DOT__local_map);
                            if ((VlNull{} != unnamedblk320__DOT__unnamedblk321__DOT__unnamedblk322__DOT__local_map)) {
                                get_default_map__Vfuncrtn 
                                    = unnamedblk320__DOT__unnamedblk321__DOT__unnamedblk322__DOT__local_map;
                                goto __Vlabel0;
                            }
                        }
                    }
                    std::ignore = this->__PVT__m_maps.first(unnamedblk323__DOT__map);
                    get_default_map__Vfuncrtn = unnamedblk323__DOT__map;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &get_rights__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_rights\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> info;
                {
                    get_rights__Vfuncrtn = ""s;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_rights()"s, map);
                    if ((VlNull{} == map)) {
                        get_rights__Vfuncrtn = "RW"s;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1696)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, info);
                    get_rights__Vfuncrtn = VL_NULL_CHECK(info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1697)
                        ->__PVT__rights;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_block\n"); );
                // Body
                get_block__Vfuncrtn = this->__PVT__m_parent;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_offset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_offset\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__207__verbosity;
                __Vfunc_uvm_report_enabled__207__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__207__severity;
                __Vfunc_uvm_report_enabled__207__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__208__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__209__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__214__verbosity;
                __Vtask_uvm_report_warning__214__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__214__line;
                __Vtask_uvm_report_warning__214__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__214__report_enabled_checked;
                __Vtask_uvm_report_warning__214__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__215__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__216__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    get_offset__Vfuncrtn = 0ULL;
                    orig_map = map;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_offset()"s, map);
                    if ((VlNull{} == map)) {
                        get_offset__Vfuncrtn = 0xffffffffffffffffULL;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1722)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1724)
                        ->__PVT__unmapped) {
                        this->__Vfunc_uvm_report_enabled__207__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__207__severity = 1U;
                        __Vfunc_uvm_report_enabled__207__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__208__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__208__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__209__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__209__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__207__verbosity, (IData)(__Vfunc_uvm_report_enabled__207__severity), this->__Vfunc_uvm_report_enabled__207__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                            if ((VlNull{} == orig_map)) {
                                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1727)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            } else {
                                VL_NULL_CHECK(orig_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1727)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            }
                            __Vtask_uvm_report_warning__214__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__214__context_name = ""s;
                            __Vtask_uvm_report_warning__214__line = 0x000006bfU;
                            this->__Vtask_uvm_report_warning__214__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__214__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__214__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                            this->__Vtask_uvm_report_warning__214__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__215__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__215__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__216__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__216__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__214__id, this->__Vtask_uvm_report_warning__214__message, __Vtask_uvm_report_warning__214__verbosity, this->__Vtask_uvm_report_warning__214__filename, __Vtask_uvm_report_warning__214__line, this->__Vtask_uvm_report_warning__214__context_name, (IData)(__Vtask_uvm_report_warning__214__report_enabled_checked));
                        }
                        get_offset__Vfuncrtn = 0xffffffffffffffffULL;
                        goto __Vlabel0;
                    }
                    get_offset__Vfuncrtn = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1731)
                        ->__PVT__offset;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_addresses__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_addresses\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__220__verbosity;
                __Vfunc_uvm_report_enabled__220__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__220__severity;
                __Vfunc_uvm_report_enabled__220__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__221__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__222__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__227__verbosity;
                __Vtask_uvm_report_warning__227__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__227__line;
                __Vtask_uvm_report_warning__227__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__227__report_enabled_checked;
                __Vtask_uvm_report_warning__227__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__228__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__229__Vfuncout;
                IData/*31:0*/ __Vtask_get_n_bytes__232__Vfuncout;
                __Vtask_get_n_bytes__232__Vfuncout = 0;
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_2__get_full_name;
                std::string __VlefCall_1__get_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> system_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> orig_map;
                {
                    get_addresses__Vfuncrtn = 0U;
                    orig_map = map;
                    this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "get_addresses()"s, map);
                    if ((VlNull{} == map)) {
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1749)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                    if (VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1751)
                        ->__PVT__unmapped) {
                        this->__Vfunc_uvm_report_enabled__220__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__220__severity = 1U;
                        __Vfunc_uvm_report_enabled__220__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__221__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__221__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__222__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__222__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__220__verbosity, (IData)(__Vfunc_uvm_report_enabled__220__severity), this->__Vfunc_uvm_report_enabled__220__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
                            if ((VlNull{} == orig_map)) {
                                VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1754)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            } else {
                                VL_NULL_CHECK(orig_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1754)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
                            }
                            __Vtask_uvm_report_warning__227__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__227__context_name = ""s;
                            __Vtask_uvm_report_warning__227__line = 0x000006daU;
                            this->__Vtask_uvm_report_warning__227__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__227__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__227__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_1__get_name), "' is unmapped in map '"s), __VlefCall_2__get_full_name), "'"s));
                            this->__Vtask_uvm_report_warning__227__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__228__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__228__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__229__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__229__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__227__id, this->__Vtask_uvm_report_warning__227__message, __Vtask_uvm_report_warning__227__verbosity, this->__Vtask_uvm_report_warning__227__filename, __Vtask_uvm_report_warning__227__line, this->__Vtask_uvm_report_warning__227__context_name, (IData)(__Vtask_uvm_report_warning__227__report_enabled_checked));
                        }
                        get_addresses__Vfuncrtn = 0xffffffffU;
                        goto __Vlabel0;
                    }
                    addr = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 1758)
                        ->__PVT__addr;
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1759)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, system_map);
                    VL_NULL_CHECK(map, "../../uvm/distrib/src/reg/uvm_reg.svh", 1760)
                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vtask_get_n_bytes__232__Vfuncout);
                    get_addresses__Vfuncrtn = __Vtask_get_n_bytes__232__Vfuncout;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, QData/*63:0*/ &get_address__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_address\n"); );
                // Locals
                IData/*31:0*/ __Vtask_get_addresses__233__Vfuncout;
                __Vtask_get_addresses__233__Vfuncout = 0;
                // Body
                VlProcess::currentp(vlProcess.get());
                VlQueue<QData/*63:0*/> addr;
                get_address__Vfuncrtn = 0ULL;
                addr.clear();
                addr.atDefault() = 0;
                this->__VnoInFunc_get_addresses(vlProcess, vlSymsp, map, addr, __Vtask_get_addresses__233__Vfuncout);
                get_address__Vfuncrtn = addr.at(0U);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bits__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bits\n"); );
                // Body
                get_n_bits__Vfuncrtn = this->__PVT__m_n_bits;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_n_bytes\n"); );
                // Body
                get_n_bytes__Vfuncrtn = ((IData)(1U) 
                                         + ((this->__PVT__m_n_bits 
                                             - (IData)(1U)) 
                                            >> 3U));
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> &fields) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_fields\n"); );
                // Body
                IData/*31:0*/ unnamedblk324__DOT__i;
                unnamedblk324__DOT__i = 0;
                unnamedblk324__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk324__DOT__i, this->__PVT__m_fields.size())) {
                    fields.push_back(this->__PVT__m_fields.at(unnamedblk324__DOT__i));
                    unnamedblk324__DOT__i = ((IData)(1U) 
                                             + unnamedblk324__DOT__i);
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_field_by_name\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
                __Vfunc_uvm_report_enabled__235__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
                __Vfunc_uvm_report_enabled__235__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__240__verbosity;
                __Vtask_uvm_report_warning__240__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__240__line;
                __Vtask_uvm_report_warning__240__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__240__report_enabled_checked;
                __Vtask_uvm_report_warning__240__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__241__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__242__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_2__get_name;
                IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
                std::string __VlefCall_0__get_name;
                IData/*31:0*/ unnamedblk325__DOT__i;
                unnamedblk325__DOT__i = 0;
                IData/*31:0*/ unnamedblk325__DOT__i__Vloopsize;
                unnamedblk325__DOT__i__Vloopsize = 0;
                {
                    unnamedblk325__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk325__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk325__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk325__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1807)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                        if ((__VlefCall_0__get_name 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = this->__PVT__m_fields.at(unnamedblk325__DOT__i);
                            goto __Vlabel0;
                        }
                        if ((unnamedblk325__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk325__DOT__i = 
                                ((IData)(1U) + unnamedblk325__DOT__i);
                        }
                    }
                    this->__Vfunc_uvm_report_enabled__235__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__235__severity = 1U;
                    __Vfunc_uvm_report_enabled__235__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__236__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__236__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__237__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), this->__Vfunc_uvm_report_enabled__235__id, __VlefCall_1__uvm_report_enabled);
                    if ((0U != __VlefCall_1__uvm_report_enabled)) {
                        this->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
                        __Vtask_uvm_report_warning__240__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_warning__240__context_name = ""s;
                        __Vtask_uvm_report_warning__240__line = 0x00000712U;
                        this->__Vtask_uvm_report_warning__240__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_warning__240__verbosity = 0U;
                        this->__Vtask_uvm_report_warning__240__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in register '"s), __VlefCall_2__get_name), "'"s));
                        this->__Vtask_uvm_report_warning__240__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__241__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__241__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__242__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__242__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__240__id, this->__Vtask_uvm_report_warning__240__message, __Vtask_uvm_report_warning__240__verbosity, this->__Vtask_uvm_report_warning__240__filename, __Vtask_uvm_report_warning__240__line, this->__Vtask_uvm_report_warning__240__context_name, (IData)(__Vtask_uvm_report_warning__240__report_enabled_checked));
                    }
                    get_field_by_name__Vfuncrtn = VlNull{};
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string &Xget_fields_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xget_fields_accessX\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_0__get_access;
                IData/*31:0*/ unnamedblk326__DOT__i;
                unnamedblk326__DOT__i = 0;
                IData/*31:0*/ unnamedblk326__DOT__i__Vloopsize;
                unnamedblk326__DOT__i__Vloopsize = 0;
                CData/*0:0*/ is_R;
                CData/*0:0*/ is_W;
                {
                    Xget_fields_accessX__Vfuncrtn = ""s;
                    is_R = 0U;
                    is_W = 0U;
                    unnamedblk326__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk326__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk326__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk326__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1826)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, __VlefCall_0__get_access);
                        if (((("RO"s == __VlefCall_0__get_access) 
                              || ("RC"s == __VlefCall_0__get_access)) 
                             || ("RS"s == __VlefCall_0__get_access))) {
                            is_R = 1U;
                        } else if ((((("WO"s == __VlefCall_0__get_access) 
                                      || ("WOC"s == __VlefCall_0__get_access)) 
                                     || ("WOS"s == __VlefCall_0__get_access)) 
                                    || ("WO1"s == __VlefCall_0__get_access))) {
                            is_W = 1U;
                        } else {
                            Xget_fields_accessX__Vfuncrtn = "RW"s;
                            goto __Vlabel0;
                        }
                        if (((IData)(is_R) & (IData)(is_W))) {
                            Xget_fields_accessX__Vfuncrtn = "RW"s;
                            goto __Vlabel0;
                        }
                        if ((unnamedblk326__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk326__DOT__i = 
                                ((IData)(1U) + unnamedblk326__DOT__i);
                        }
                    }
                    if ((1U == (((IData)(is_R) << 1U) 
                                | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "WO"s;
                        goto __Vlabel0;
                    } else if ((2U == (((IData)(is_R) 
                                        << 1U) | (IData)(is_W)))) {
                        Xget_fields_accessX__Vfuncrtn = "RO"s;
                        goto __Vlabel0;
                    }
                    Xget_fields_accessX__Vfuncrtn = "RW"s;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_build_coverage\n"); );
                // Locals
                CData/*0:0*/ __Vtask_read_by_name__246__Vfuncout;
                __Vtask_read_by_name__246__Vfuncout = 0;
                IData/*31:0*/ __Vtask_read_by_name__246__val;
                __Vtask_read_by_name__246__val = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_0__get_full_name;
                build_coverage__Vfuncrtn = 0U;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                __Vtask_read_by_name__246__val = build_coverage__Vfuncrtn;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz17__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, __VlefCall_0__get_full_name)), "include_coverage"s, __Vtask_read_by_name__246__val, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, __Vtask_read_by_name__246__Vfuncout);
                build_coverage__Vfuncrtn = __Vtask_read_by_name__246__val;
                build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                            & models);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_add_coverage\n"); );
                // Body
                this->__PVT__m_has_cover = (this->__PVT__m_has_cover 
                                            | models);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_coverage\n"); );
                // Body
                has_coverage__Vfuncrtn = ((this->__PVT__m_has_cover 
                                           & models) 
                                          == models);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_coverage\n"); );
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

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_coverage\n"); );
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
                                               & is_on) 
                                              == is_on);
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                IData/*31:0*/ __VlefCall_0__get_lsb_pos;
                IData/*31:0*/ unnamedblk327__DOT__i;
                unnamedblk327__DOT__i = 0;
                IData/*31:0*/ unnamedblk327__DOT__i__Vloopsize;
                unnamedblk327__DOT__i__Vloopsize = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                unnamedblk327__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk327__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk327__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1933)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1934)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk327__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1933)
                                                        ->__VnoInFunc_set(vlProcess, vlSymsp, 
                                                                          (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos) 
                                                                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                                              - 1ULL)), ""s, 0U);
                    if ((unnamedblk327__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk327__DOT__i = ((IData)(1U) 
                                                 + unnamedblk327__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, CData/*7:0*/ be, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, std::string fname, IData/*31:0*/ lineno, CData/*0:0*/ &predict__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_predict\n"); );
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                predict__Vfuncrtn = 0U;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
                rw = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, ""s);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1948)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1949)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1950)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1951)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1952)
                                                        ->__PVT__lineno 
                    = lineno;
                this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, (IData)(be));
                predict__Vfuncrtn = ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1954)
                                      ->__PVT__status)
                                      ? 0U : 1U);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_predict\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__253__verbosity;
                __Vfunc_uvm_report_enabled__253__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__253__severity;
                __Vfunc_uvm_report_enabled__253__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__254__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__255__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__258__verbosity;
                __Vtask_uvm_report_warning__258__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__258__line;
                __Vtask_uvm_report_warning__258__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__258__report_enabled_checked;
                __Vtask_uvm_report_warning__258__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__259__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__260__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_4__get_lsb_pos;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                std::string __VlefCall_1__get_full_name;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk328__DOT__i;
                unnamedblk328__DOT__i = 0;
                IData/*31:0*/ unnamedblk328__DOT__i__Vloopsize;
                unnamedblk328__DOT__i__Vloopsize = 0;
                QData/*63:0*/ reg_value;
                {
                    reg_value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1964)
                        ->__PVT__value.at(0U);
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1965)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1966)
                        ->__PVT__lineno;
                    if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1968)
                         ->__PVT__status)) {
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1969)
                                                        ->__PVT__status = 0U;
                    }
                    if (((IData)(this->__PVT__m_is_busy) 
                         & (0U == kind))) {
                        this->__Vfunc_uvm_report_enabled__253__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__253__severity = 1U;
                        __Vfunc_uvm_report_enabled__253__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__254__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__254__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__255__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__255__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__253__verbosity, (IData)(__Vfunc_uvm_report_enabled__253__severity), this->__Vfunc_uvm_report_enabled__253__id, __VlefCall_0__uvm_report_enabled);
                        if ((0U != __VlefCall_0__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
                            __Vtask_uvm_report_warning__258__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_warning__258__context_name = ""s;
                            __Vtask_uvm_report_warning__258__line = 0x000007b5U;
                            this->__Vtask_uvm_report_warning__258__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_warning__258__verbosity = 0U;
                            this->__Vtask_uvm_report_warning__258__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("Trying to predict value of register '"s, __VlefCall_1__get_full_name), "' while it is being accessed"s));
                            this->__Vtask_uvm_report_warning__258__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__259__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__259__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__260__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__260__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__258__id, this->__Vtask_uvm_report_warning__258__message, __Vtask_uvm_report_warning__258__verbosity, this->__Vtask_uvm_report_warning__258__filename, __Vtask_uvm_report_warning__258__line, this->__Vtask_uvm_report_warning__258__context_name, (IData)(__Vtask_uvm_report_warning__258__report_enabled_checked));
                        }
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1974)
                                                        ->__PVT__status = 1U;
                        goto __Vlabel0;
                    }
                    unnamedblk328__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk328__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk328__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1979)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1980)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1979)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, reg_value, __VlefCall_2__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1981)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk328__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 1981)
                                                        ->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, kind, 
                                                                                VL_SHIFTR_III(8,8,32, (IData)(be), 
                                                                                (__VlefCall_4__get_lsb_pos 
                                                                                >> 3U)));
                        if ((unnamedblk328__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk328__DOT__i = 
                                ((IData)(1U) + unnamedblk328__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 1984)
                                                        ->__PVT__value.atWrite(0U) 
                        = reg_value;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get;
                IData/*31:0*/ unnamedblk329__DOT__i;
                unnamedblk329__DOT__i = 0;
                IData/*31:0*/ unnamedblk329__DOT__i__Vloopsize;
                unnamedblk329__DOT__i__Vloopsize = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get__Vfuncrtn = 0ULL;
                unnamedblk329__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk329__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk329__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2001)
                                                        ->__VnoInFunc_get(vlSymsp, ""s, 0U, __VlefCall_0__get);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk329__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2001)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get__Vfuncrtn = (get__Vfuncrtn 
                                     | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get, __VlefCall_1__get_lsb_pos));
                    if ((unnamedblk329__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk329__DOT__i = ((IData)(1U) 
                                                 + unnamedblk329__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value(Vhello_uvm__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get_mirrored_value__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_mirrored_value\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get_mirrored_value;
                IData/*31:0*/ unnamedblk330__DOT__i;
                unnamedblk330__DOT__i = 0;
                IData/*31:0*/ unnamedblk330__DOT__i__Vloopsize;
                unnamedblk330__DOT__i__Vloopsize = 0;
                this->__PVT__m_fname = fname;
                this->__PVT__m_lineno = lineno;
                get_mirrored_value__Vfuncrtn = 0ULL;
                unnamedblk330__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk330__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk330__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk330__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2017)
                                                        ->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, __VlefCall_0__get_mirrored_value);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk330__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2017)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get_mirrored_value__Vfuncrtn = 
                        (get_mirrored_value__Vfuncrtn 
                         | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_mirrored_value, __VlefCall_1__get_lsb_pos));
                    if ((unnamedblk330__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk330__DOT__i = ((IData)(1U) 
                                                 + unnamedblk330__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_reset\n"); );
                // Locals
                IData/*31:0*/ __Vtask_try_get__271__Vfuncout;
                __Vtask_try_get__271__Vfuncout = 0;
                // Body
                IData/*31:0*/ unnamedblk331__DOT__i;
                unnamedblk331__DOT__i = 0;
                IData/*31:0*/ unnamedblk331__DOT__i__Vloopsize;
                unnamedblk331__DOT__i__Vloopsize = 0;
                unnamedblk331__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk331__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk331__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk331__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2025)
                                                        ->__VnoInFunc_reset(vlSymsp, kind);
                    if ((unnamedblk331__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk331__DOT__i = ((IData)(1U) 
                                                 + unnamedblk331__DOT__i);
                    }
                }
                VL_NULL_CHECK(this->__PVT__m_atomic, "../../uvm/distrib/src/reg/uvm_reg.svh", 2028)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__271__Vfuncout);
                VL_NULL_CHECK(this->__PVT__m_atomic, "../../uvm/distrib/src/reg/uvm_reg.svh", 2029)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                this->__PVT__m_process = VlNull{};
                this->__VnoInFunc_Xset_busyX(vlSymsp, 0U);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind, QData/*63:0*/ &get_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_get_reset\n"); );
                // Body
                IData/*31:0*/ __VlefCall_1__get_lsb_pos;
                QData/*63:0*/ __VlefCall_0__get_reset;
                IData/*31:0*/ unnamedblk332__DOT__i;
                unnamedblk332__DOT__i = 0;
                IData/*31:0*/ unnamedblk332__DOT__i__Vloopsize;
                unnamedblk332__DOT__i__Vloopsize = 0;
                get_reset__Vfuncrtn = 0ULL;
                unnamedblk332__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk332__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk332__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk332__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2043)
                                                        ->__VnoInFunc_get_reset(vlSymsp, kind, __VlefCall_0__get_reset);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk332__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2043)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_1__get_lsb_pos);
                    get_reset__Vfuncrtn = (get_reset__Vfuncrtn 
                                           | VL_SHIFTL_QQI(64,64,32, __VlefCall_0__get_reset, __VlefCall_1__get_lsb_pos));
                    if ((unnamedblk332__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk332__DOT__i = ((IData)(1U) 
                                                 + unnamedblk332__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset(Vhello_uvm__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ __SYM__delete, CData/*0:0*/ &has_reset__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_has_reset\n"); );
                // Body
                CData/*0:0*/ __VlefCall_0__has_reset;
                IData/*31:0*/ unnamedblk333__DOT__i;
                unnamedblk333__DOT__i = 0;
                IData/*31:0*/ unnamedblk333__DOT__i__Vloopsize;
                unnamedblk333__DOT__i__Vloopsize = 0;
                {
                    has_reset__Vfuncrtn = 0U;
                    has_reset__Vfuncrtn = 0U;
                    unnamedblk333__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk333__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk333__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk333__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2054)
                                                        ->__VnoInFunc_has_reset(vlSymsp, kind, (IData)(__SYM__delete), __VlefCall_0__has_reset);
                        has_reset__Vfuncrtn = ((IData)(has_reset__Vfuncrtn) 
                                               | (IData)(__VlefCall_0__has_reset));
                        if (((~ (IData)(__SYM__delete)) 
                             & (IData)(has_reset__Vfuncrtn))) {
                            has_reset__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        if ((unnamedblk333__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk333__DOT__i = 
                                ((IData)(1U) + unnamedblk333__DOT__i);
                        }
                    }
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset(Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string kind) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_set_reset\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0__get_lsb_pos;
                IData/*31:0*/ unnamedblk334__DOT__i;
                unnamedblk334__DOT__i = 0;
                IData/*31:0*/ unnamedblk334__DOT__i__Vloopsize;
                unnamedblk334__DOT__i__Vloopsize = 0;
                unnamedblk334__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk334__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk334__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk334__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2066)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_0__get_lsb_pos);
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk334__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2066)
                                                        ->__VnoInFunc_set_reset(vlSymsp, 
                                                                                VL_SHIFTR_QQI(64,64,32, value, __VlefCall_0__get_lsb_pos), kind);
                    if ((unnamedblk334__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk334__DOT__i = ((IData)(1U) 
                                                 + unnamedblk334__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_needs_update\n"); );
                // Body
                CData/*0:0*/ __VlefCall_0__needs_update;
                IData/*31:0*/ unnamedblk335__DOT__i;
                unnamedblk335__DOT__i = 0;
                IData/*31:0*/ unnamedblk335__DOT__i__Vloopsize;
                unnamedblk335__DOT__i__Vloopsize = 0;
                {
                    needs_update__Vfuncrtn = 0U;
                    needs_update__Vfuncrtn = 0U;
                    unnamedblk335__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk335__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk335__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk335__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2080)
                                                        ->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
                        if (__VlefCall_0__needs_update) {
                            needs_update__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        if ((unnamedblk335__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk335__DOT__i = 
                                ((IData)(1U) + unnamedblk335__DOT__i);
                        }
                    }
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_update\n"); );
                // Locals
                IData/*31:0*/ __Vtask_write__283__status;
                __Vtask_write__283__status = 0;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                QData/*63:0*/ __VlefCall_1__XupdateX;
                CData/*0:0*/ __VlefCall_0__needs_update;
                IData/*31:0*/ unnamedblk336__DOT__i;
                unnamedblk336__DOT__i = 0;
                IData/*31:0*/ unnamedblk336__DOT__i__Vloopsize;
                unnamedblk336__DOT__i__Vloopsize = 0;
                QData/*63:0*/ upd;
                {
                    status = 0U;
                    upd = 0ULL;
                    status = 0U;
                    this->__VnoInFunc_needs_update(vlSymsp, __VlefCall_0__needs_update);
                    if ((1U & (~ (IData)(__VlefCall_0__needs_update)))) {
                        goto __Vlabel0;
                    }
                    upd = 0ULL;
                    unnamedblk336__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk336__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk336__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2107)
                                                        ->__VnoInFunc_XupdateX(vlSymsp, __VlefCall_1__XupdateX);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk336__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2107)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                        upd = (upd | VL_SHIFTL_QQI(64,64,32, __VlefCall_1__XupdateX, __VlefCall_2__get_lsb_pos));
                        if ((unnamedblk336__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk336__DOT__i = 
                                ((IData)(1U) + unnamedblk336__DOT__i);
                        }
                    }
                    co_await this->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__283__status, upd, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_write__283__status;
                    __Vlabel0: ;
                }
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_write\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
                status = 0U;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                this->__VnoInFunc_set(vlProcess, vlSymsp, value, ""s, 0U);
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "write_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2134)
                                                        ->__PVT__element 
                    = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2135)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2136)
                                                        ->__PVT__kind = 1U;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2137)
                                                        ->__PVT__value.atWrite(0U) 
                    = value;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2138)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2139)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2140)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2141)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2142)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2143)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2144)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2148)
                    ->__PVT__status;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_write\n"); );
                // Locals
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__291__map_info;
                IData/*31:0*/ __Vtask_get_lsb_pos__294__Vfuncout;
                __Vtask_get_lsb_pos__294__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_lsb_pos__308__Vfuncout;
                __Vtask_get_lsb_pos__308__Vfuncout = 0;
                IData/*31:0*/ __Vtask_get_n_bits__309__Vfuncout;
                __Vtask_get_n_bits__309__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__333__verbosity;
                __Vfunc_uvm_report_enabled__333__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__333__severity;
                __Vfunc_uvm_report_enabled__333__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__334__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__335__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__340__verbosity;
                __Vtask_uvm_report_info__340__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__340__line;
                __Vtask_uvm_report_info__340__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__340__report_enabled_checked;
                __Vtask_uvm_report_info__340__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__341__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__342__Vfuncout;
                VlWide<4>/*127:0*/ __Vtemp_2;
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_10__get_full_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_9__get_backdoor;
                std::string __VlefCond_8;
                std::string __VlefCall_7__get_full_name;
                IData/*31:0*/ __VlefCall_6__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_5__get_n_bits;
                IData/*31:0*/ __VlefCall_4__get_lsb_pos;
                CData/*0:0*/ __VlefCall_3__get_auto_predict;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_2__get_sequencer;
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
                QData/*63:0*/ pre_write_callbacks__DOT__msk;
                IData/*31:0*/ pre_write_callbacks__DOT__lsb;
                IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk337__DOT__i;
                pre_write_callbacks__DOT__unnamedblk337__DOT__i = 0;
                IData/*31:0*/ pre_write_callbacks__DOT__unnamedblk337__DOT__i__Vloopsize;
                pre_write_callbacks__DOT__unnamedblk337__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__cb;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk340__DOT__cb;
                QData/*63:0*/ unnamedblk341__DOT__final_val;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk341__DOT__bkdr;
                IData/*31:0*/ unnamedblk341__DOT__unnamedblk342__DOT__i;
                unnamedblk341__DOT__unnamedblk342__DOT__i = 0;
                IData/*31:0*/ unnamedblk341__DOT__unnamedblk342__DOT__i__Vloopsize;
                unnamedblk341__DOT__unnamedblk342__DOT__i__Vloopsize = 0;
                QData/*63:0*/ unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__field_val;
                IData/*31:0*/ unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__lsb;
                IData/*31:0*/ unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__sz;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk344__DOT__system_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk344__DOT__unnamedblk345__DOT__fd;
                IData/*31:0*/ unnamedblk344__DOT__unnamedblk346__DOT__status;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk347__DOT__cb;
                IData/*31:0*/ unnamedblk348__DOT__i;
                unnamedblk348__DOT__i = 0;
                IData/*31:0*/ unnamedblk348__DOT__i__Vloopsize;
                unnamedblk348__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk348__DOT__unnamedblk349__DOT__cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> unnamedblk348__DOT__unnamedblk349__DOT__f;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk348__DOT__unnamedblk349__DOT__unnamedblk350__DOT__cb;
                std::string unnamedblk351__DOT__path_s;
                std::string unnamedblk351__DOT__value_s;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz18_TBz19> cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                {
                    cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz18_TBz19, vlSymsp, 
                                 VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this});
                    value = 0ULL;
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2163)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2164)
                        ->__PVT__lineno;
                    this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__291__map_info, "write()"s, __VlefCall_0__Xcheck_accessX);
                    map_info = __Vfunc_Xcheck_accessX__291__map_info;
                    if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
                        goto __Vlabel0;
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_write_in_progress = 1U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2173)
                                                        ->__PVT__value.atWrite(0U) 
                        = (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2173)
                           ->__PVT__value.at(0U) & 
                           (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                            - 1ULL));
                    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2174)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2176)
                                                        ->__PVT__status = 0U;
                    pre_write_callbacks__DOT__msk = 0ULL;
                    pre_write_callbacks__DOT__lsb = 0U;
                    pre_write_callbacks__DOT__unnamedblk337__DOT__i = 0U;
                    while (VL_LTS_III(32, pre_write_callbacks__DOT__unnamedblk337__DOT__i, this->__PVT__m_fields.size())) {
                        pre_write_callbacks__DOT__unnamedblk337__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__cbs 
                            = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk337__DOT__i));
                        pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f 
                            = this->__PVT__m_fields.at(pre_write_callbacks__DOT__unnamedblk337__DOT__i);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2186)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__294__Vfuncout);
                        pre_write_callbacks__DOT__lsb 
                            = __Vtask_get_lsb_pos__294__Vfuncout;
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2187)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                        pre_write_callbacks__DOT__msk 
                            = VL_SHIFTL_QQI(64,64,32, 
                                            (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                             - 1ULL), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2188)
                                                        ->__PVT__value.atWrite(0U) 
                            = VL_SHIFTR_QQI(64,64,32, 
                                            (value 
                                             & pre_write_callbacks__DOT__msk), pre_write_callbacks__DOT__lsb);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2189)
                                                        ->__VnoInFunc_pre_write(vlSymsp, rw);
                        VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2190)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__cb);
                        while ((VlNull{} != pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__cb)) {
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2191)
                                                        ->__PVT__element 
                                = pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__f;
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2192)
                                                        ->__PVT__element_kind = 1U;
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2193)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2190)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, pre_write_callbacks__DOT__unnamedblk337__DOT__unnamedblk338__DOT__unnamedblk339__DOT__cb);
                        }
                        value = ((value & (~ pre_write_callbacks__DOT__msk)) 
                                 | VL_SHIFTL_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2196)
                                                 ->__PVT__value.at(0U), pre_write_callbacks__DOT__lsb));
                        if ((pre_write_callbacks__DOT__unnamedblk337__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            pre_write_callbacks__DOT__unnamedblk337__DOT__i 
                                = ((IData)(1U) + pre_write_callbacks__DOT__unnamedblk337__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2199)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2200)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2201)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    this->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2205)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk340__DOT__cb);
                    while ((VlNull{} != unnamedblk340__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk340__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2206)
                                                        ->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2205)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk340__DOT__cb);
                    }
                    if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2208)
                         ->__PVT__status)) {
                        this->__PVT__m_write_in_progress = 0U;
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2217)
                         ->__PVT__path)) {
                        unnamedblk341__DOT__final_val = 0ULL;
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk341__DOT__bkdr);
                        value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2224)
                            ->__PVT__value.at(0U);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2227)
                                                        ->__PVT__kind = 0U;
                        if ((VlNull{} != unnamedblk341__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk341__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2229)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                        } else {
                            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                        }
                        if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2233)
                             ->__PVT__status)) {
                            this->__PVT__m_write_in_progress = 0U;
                            goto __Vlabel0;
                        }
                        unnamedblk341__DOT__unnamedblk342__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk341__DOT__unnamedblk342__DOT__i, this->__PVT__m_fields.size())) {
                            unnamedblk341__DOT__unnamedblk342__DOT__i__Vloopsize 
                                = this->__PVT__m_fields.size();
                            unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__field_val = 0ULL;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk341__DOT__unnamedblk342__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2241)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__308__Vfuncout);
                            unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__lsb 
                                = __Vtask_get_lsb_pos__308__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk341__DOT__unnamedblk342__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2242)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__309__Vfuncout);
                            unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__sz 
                                = __Vtask_get_n_bits__309__Vfuncout;
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk341__DOT__unnamedblk342__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2243)
                                                        ->__VnoInFunc_XpredictX(vlProcess, vlSymsp, 
                                                                                (VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2243)
                                                                                ->__PVT__value.at(0U), unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__sz) 
                                                                                - 1ULL)), 
                                                                                (VL_SHIFTR_QQI(64,64,32, value, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__lsb) 
                                                                                & (VL_SHIFTL_QQI(64,64,32, 1ULL, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__sz) 
                                                                                - 1ULL)), VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2245)
                                                                                ->__PVT__local_map, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__field_val);
                            unnamedblk341__DOT__final_val 
                                = (unnamedblk341__DOT__final_val 
                                   | VL_SHIFTL_QQI(64,64,32, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__field_val, unnamedblk341__DOT__unnamedblk342__DOT__unnamedblk343__DOT__lsb));
                            if ((unnamedblk341__DOT__unnamedblk342__DOT__i__Vloopsize 
                                 <= this->__PVT__m_fields.size())) {
                                unnamedblk341__DOT__unnamedblk342__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk341__DOT__unnamedblk342__DOT__i);
                            }
                        }
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2249)
                                                        ->__PVT__kind = 1U;
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2250)
                                                        ->__PVT__value.atWrite(0U) 
                            = unnamedblk341__DOT__final_val;
                        if ((VlNull{} != unnamedblk341__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk341__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2253)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                        } else {
                            this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                        }
                        this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                    } else if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2217)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2262)
                                      ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2262)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, unnamedblk344__DOT__system_map);
                        this->__PVT__m_is_busy = 1U;
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2267)
                             ->__PVT__frontdoor)) {
                            unnamedblk344__DOT__unnamedblk345__DOT__fd 
                                = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2268)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk344__DOT__unnamedblk345__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2269)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk344__DOT__unnamedblk345__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2270)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk344__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2271)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_2__get_sequencer);
                                VL_NULL_CHECK(unnamedblk344__DOT__unnamedblk345__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2271)
                                                        ->__PVT__sequencer 
                                    = __VlefCall_2__get_sequencer;
                            }
                            co_await VL_NULL_CHECK(unnamedblk344__DOT__unnamedblk345__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2272)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk344__DOT__unnamedblk345__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2272)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2272)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2278)
                                                   ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2278)
                                                        ->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
                        }
                        this->__PVT__m_is_busy = 0U;
                        VL_NULL_CHECK(unnamedblk344__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2284)
                                                        ->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_3__get_auto_predict);
                        if (__VlefCall_3__get_auto_predict) {
                            unnamedblk344__DOT__unnamedblk346__DOT__status = 0U;
                            if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2286)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, value, 0xffffffffffffffffULL, 0U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2287)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 2288)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2288)
                                                                               ->__PVT__offset, 0U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2288)
                                                                               ->__PVT__map);
                            }
                            unnamedblk344__DOT__unnamedblk346__DOT__status 
                                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2291)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2293)
                                                        ->__PVT__status 
                                = unnamedblk344__DOT__unnamedblk346__DOT__status;
                        }
                    }
                    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2299)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2302)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk347__DOT__cb);
                    while ((VlNull{} != unnamedblk347__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk347__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2303)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2302)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk347__DOT__cb);
                    }
                    this->__VnoInFunc_post_write(vlSymsp, rw);
                    unnamedblk348__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk348__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk348__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        unnamedblk348__DOT__unnamedblk349__DOT__cbs 
                            = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, this->__PVT__m_fields.at(unnamedblk348__DOT__i));
                        unnamedblk348__DOT__unnamedblk349__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk348__DOT__i);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2311)
                                                        ->__PVT__element 
                            = unnamedblk348__DOT__unnamedblk349__DOT__f;
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2312)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2313)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                        VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2313)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2313)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_4__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2315)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk348__DOT__unnamedblk349__DOT__unnamedblk350__DOT__cb);
                        while ((VlNull{} != unnamedblk348__DOT__unnamedblk349__DOT__unnamedblk350__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__unnamedblk350__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2316)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2315)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk348__DOT__unnamedblk349__DOT__unnamedblk350__DOT__cb);
                        }
                        VL_NULL_CHECK(unnamedblk348__DOT__unnamedblk349__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2317)
                                                        ->__VnoInFunc_post_write(vlSymsp, rw);
                        if ((unnamedblk348__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk348__DOT__i = 
                                ((IData)(1U) + unnamedblk348__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2320)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2321)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2322)
                                                        ->__PVT__element_kind = 0U;
                    this->__Vfunc_uvm_report_enabled__333__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__333__severity = 0U;
                    __Vfunc_uvm_report_enabled__333__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__334__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__334__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__335__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__335__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__333__verbosity, (IData)(__Vfunc_uvm_report_enabled__333__severity), this->__Vfunc_uvm_report_enabled__333__id, __VlefCall_6__uvm_report_enabled);
                    if ((0U != __VlefCall_6__uvm_report_enabled)) {
                        unnamedblk351__DOT__path_s = ""s;
                        unnamedblk351__DOT__value_s = ""s;
                        if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2327)
                             ->__PVT__path)) {
                            if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2328)
                                 ->__PVT__frontdoor)) {
                                __VlefCond_8 = "user frontdoor"s;
                            } else {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2329)
                                              ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2329)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_7__get_full_name);
                                __VlefCond_8 = VL_CONCATN_NNN("map "s, __VlefCall_7__get_full_name);
                            }
                            unnamedblk351__DOT__path_s 
                                = __VlefCond_8;
                        } else {
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_9__get_backdoor);
                            if ((VlNull{} != __VlefCall_9__get_backdoor)) {
                                __Vtemp_2[0U] = 0x646f6f72U;
                                __Vtemp_2[1U] = 0x6261636bU;
                                __Vtemp_2[2U] = 0x73657220U;
                                __Vtemp_2[3U] = 0x00000075U;
                            } else {
                                __Vtemp_2[0U] = 0x646f6f72U;
                                __Vtemp_2[1U] = 0x6261636bU;
                                __Vtemp_2[2U] = 0x44504920U;
                                __Vtemp_2[3U] = 0U;
                            }
                            unnamedblk351__DOT__path_s 
                                = VL_CVT_PACK_STR_NW(4, __Vtemp_2);
                        }
                        VL_SFORMAT_NX(unnamedblk351__DOT__value_s
                                      ,"=0x%0h",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2333)
                                      ->__PVT__value.at(0U));
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        __Vtask_uvm_report_info__340__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__340__context_name = ""s;
                        __Vtask_uvm_report_info__340__line = 0U;
                        this->__Vtask_uvm_report_info__340__filename = ""s;
                        __Vtask_uvm_report_info__340__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__340__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Wrote register via "s, unnamedblk351__DOT__path_s), ": "s), __VlefCall_10__get_full_name), unnamedblk351__DOT__value_s));
                        this->__Vtask_uvm_report_info__340__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__341__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__341__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__342__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__342__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__340__id, this->__Vtask_uvm_report_info__340__message, __Vtask_uvm_report_info__340__verbosity, this->__Vtask_uvm_report_info__340__filename, __Vtask_uvm_report_info__340__line, this->__Vtask_uvm_report_info__340__context_name, (IData)(__Vtask_uvm_report_info__340__report_enabled_checked));
                    }
                    this->__PVT__m_write_in_progress = 0U;
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_read\n"); );
                // Locals
                IData/*31:0*/ __Vtask_XreadX__346__status;
                __Vtask_XreadX__346__status = 0;
                QData/*63:0*/ __Vtask_XreadX__346__value;
                __Vtask_XreadX__346__value = 0;
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                status = 0U;
                value = 0ULL;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__346__status, __Vtask_XreadX__346__value, path, map, parent, prior, extension, fname, lineno);
                status = __Vtask_XreadX__346__status;
                value = __Vtask_XreadX__346__value;
                co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XreadX\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
                status = 0U;
                value = 0ULL;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "read_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_full_name), rw);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2377)
                                                        ->__PVT__element 
                    = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2378)
                                                        ->__PVT__element_kind = 0U;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2379)
                                                        ->__PVT__kind = 0U;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2380)
                                                        ->__PVT__value.atWrite(0U) = 0ULL;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2381)
                                                        ->__PVT__path 
                    = path;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2382)
                                                        ->__PVT__map 
                    = map;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2383)
                                                        ->__PVT__parent 
                    = parent;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2384)
                                                        ->__PVT__prior 
                    = prior;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2385)
                                                        ->__PVT__extension 
                    = extension;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2386)
                                                        ->__PVT__fname 
                    = fname;
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2387)
                                                        ->__PVT__lineno 
                    = lineno;
                co_await this->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2391)
                    ->__PVT__status;
                value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2392)
                    ->__PVT__value.at(0U);
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_read\n"); );
                // Locals
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_Xcheck_accessX__352__map_info;
                CData/*0:0*/ __Vtask_do_check__379__Vfuncout;
                __Vtask_do_check__379__Vfuncout = 0;
                CData/*0:0*/ __Vtask_do_check__389__Vfuncout;
                __Vtask_do_check__389__Vfuncout = 0;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__404__verbosity;
                __Vfunc_uvm_report_enabled__404__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__404__severity;
                __Vfunc_uvm_report_enabled__404__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__411__verbosity;
                __Vtask_uvm_report_info__411__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__411__line;
                __Vtask_uvm_report_info__411__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__411__report_enabled_checked;
                __Vtask_uvm_report_info__411__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__412__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__413__Vfuncout;
                VlWide<4>/*127:0*/ __Vtemp_2;
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_20__get_full_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_19__get_backdoor;
                std::string __VlefCond_18;
                std::string __VlefCall_17__get_full_name;
                IData/*31:0*/ __VlefCall_16__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_15__get_n_bits;
                IData/*31:0*/ __VlefCall_14__get_lsb_pos;
                CData/*0:0*/ __VlefCall_13__get_check_on_read;
                CData/*0:0*/ __VlefCall_12__get_auto_predict;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequencer_base> __VlefCall_11__get_sequencer;
                CData/*0:0*/ __VlefCall_10__get_check_on_read;
                CData/*0:0*/ __VlefCall_9__get_check_on_read;
                IData/*31:0*/ __VlefCall_8__get_lsb_pos;
                IData/*31:0*/ __VlefCall_7__get_n_bits;
                IData/*31:0*/ __VlefCall_6__get_lsb_pos;
                IData/*31:0*/ __VlefCall_5__get_n_bits;
                IData/*31:0*/ __VlefCall_4__get_lsb_pos;
                IData/*31:0*/ __VlefCall_3__get_n_bits;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_2__backdoor;
                CData/*0:0*/ __VlefCall_1__get_check_on_read;
                CData/*0:0*/ __VlefCall_0__Xcheck_accessX;
                IData/*31:0*/ unnamedblk352__DOT__i;
                unnamedblk352__DOT__i = 0;
                IData/*31:0*/ unnamedblk352__DOT__i__Vloopsize;
                unnamedblk352__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk352__DOT__unnamedblk353__DOT__cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> unnamedblk352__DOT__unnamedblk353__DOT__f;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__cb;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk355__DOT__cb;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk356__DOT__bkdr;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk356__DOT__map;
                QData/*63:0*/ unnamedblk356__DOT__unnamedblk357__DOT__wo_mask;
                IData/*31:0*/ unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i;
                unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i = 0;
                IData/*31:0*/ unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i__Vloopsize;
                unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i__Vloopsize = 0;
                std::string unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc;
                QData/*63:0*/ unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk360__DOT__saved;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk361__DOT__system_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_frontdoor> unnamedblk361__DOT__unnamedblk362__DOT__fd;
                IData/*31:0*/ unnamedblk361__DOT__unnamedblk363__DOT__status;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk364__DOT__cb;
                IData/*31:0*/ unnamedblk365__DOT__i;
                unnamedblk365__DOT__i = 0;
                IData/*31:0*/ unnamedblk365__DOT__i__Vloopsize;
                unnamedblk365__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19> unnamedblk365__DOT__unnamedblk366__DOT__cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field> unnamedblk365__DOT__unnamedblk366__DOT__f;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__cb;
                std::string unnamedblk368__DOT__path_s;
                std::string unnamedblk368__DOT__value_s;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz18_TBz19> cbs;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> map_info;
                QData/*63:0*/ value;
                QData/*63:0*/ exp;
                {
                    cbs = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz18_TBz19, vlSymsp, 
                                 VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this});
                    value = 0ULL;
                    exp = 0ULL;
                    this->__PVT__m_fname = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2406)
                        ->__PVT__fname;
                    this->__PVT__m_lineno = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2407)
                        ->__PVT__lineno;
                    this->__VnoInFunc_Xcheck_accessX(vlProcess, vlSymsp, rw, __Vfunc_Xcheck_accessX__352__map_info, "read()"s, __VlefCall_0__Xcheck_accessX);
                    map_info = __Vfunc_Xcheck_accessX__352__map_info;
                    if ((1U & (~ (IData)(__VlefCall_0__Xcheck_accessX)))) {
                        goto __Vlabel0;
                    }
                    this->__PVT__m_read_in_progress = 1U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2414)
                                                        ->__PVT__status = 0U;
                    unnamedblk352__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk352__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk352__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        unnamedblk352__DOT__unnamedblk353__DOT__cbs 
                            = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, this->__PVT__m_fields.at(unnamedblk352__DOT__i));
                        unnamedblk352__DOT__unnamedblk353__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk352__DOT__i);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2420)
                                                        ->__PVT__element 
                            = unnamedblk352__DOT__unnamedblk353__DOT__f;
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2421)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk352__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2422)
                                                        ->__VnoInFunc_pre_read(vlSymsp, rw);
                        VL_NULL_CHECK(unnamedblk352__DOT__unnamedblk353__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2423)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__cb);
                        while ((VlNull{} != unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2424)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk352__DOT__unnamedblk353__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2423)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk352__DOT__unnamedblk353__DOT__unnamedblk354__DOT__cb);
                        }
                        if ((unnamedblk352__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk352__DOT__i = 
                                ((IData)(1U) + unnamedblk352__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2427)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2428)
                                                        ->__PVT__element_kind = 0U;
                    this->__VnoInFunc_pre_read(vlSymsp, rw);
                    VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2432)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk355__DOT__cb);
                    while ((VlNull{} != unnamedblk355__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk355__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2433)
                                                        ->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2432)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk355__DOT__cb);
                    }
                    if ((0U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2435)
                         ->__PVT__status)) {
                        this->__PVT__m_read_in_progress = 0U;
                        goto __Vlabel0;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2442)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, unnamedblk356__DOT__bkdr);
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, unnamedblk356__DOT__map);
                        VL_NULL_CHECK(unnamedblk356__DOT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2449)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_1__get_check_on_read);
                        if (__VlefCall_1__get_check_on_read) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
                        }
                        if ((VlNull{} != unnamedblk356__DOT__bkdr)) {
                            VL_NULL_CHECK(unnamedblk356__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2452)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                        } else {
                            this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                        }
                        value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2456)
                            ->__PVT__value.at(0U);
                        if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2459)
                             ->__PVT__status)) {
                            unnamedblk356__DOT__unnamedblk357__DOT__wo_mask = 0ULL;
                            unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i, this->__PVT__m_fields.size())) {
                                unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i__Vloopsize 
                                    = this->__PVT__m_fields.size();
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_2__backdoor);
                                VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2464)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, __VlefCall_2__backdoor, unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc);
                                if (((((("RC"s == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc) 
                                        | ("WRC"s == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                       | ("WSRC"s == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                      | ("W1SRC"s == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                     | ("W0SRC"s == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc))) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2470)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_3__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2471)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_4__get_lsb_pos);
                                    value = (value 
                                             & (~ VL_SHIFTL_QQI(64,64,32, 
                                                                (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_3__get_n_bits) 
                                                                 - 1ULL), __VlefCall_4__get_lsb_pos)));
                                } else if (((((("RS"s 
                                                == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc) 
                                               | ("WRS"s 
                                                  == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                              | ("WCRS"s 
                                                 == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                             | ("W1CRS"s 
                                                == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                            | ("W0CRS"s 
                                               == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc))) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2478)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_5__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2479)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_6__get_lsb_pos);
                                    value = (value 
                                             | VL_SHIFTL_QQI(64,64,32, 
                                                             (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_5__get_n_bits) 
                                                              - 1ULL), __VlefCall_6__get_lsb_pos));
                                } else if ((((("WO"s 
                                               == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc) 
                                              | ("WOC"s 
                                                 == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                             | ("WOS"s 
                                                == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc)) 
                                            | ("WO1"s 
                                               == unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__unnamedblk359__DOT__acc))) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2485)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_7__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2486)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                                    unnamedblk356__DOT__unnamedblk357__DOT__wo_mask 
                                        = (unnamedblk356__DOT__unnamedblk357__DOT__wo_mask 
                                           | VL_SHIFTL_QQI(64,64,32, 
                                                           (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_7__get_n_bits) 
                                                            - 1ULL), __VlefCall_8__get_lsb_pos));
                                }
                                if ((unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i__Vloopsize 
                                     <= this->__PVT__m_fields.size())) {
                                    unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i 
                                        = ((IData)(1U) 
                                           + unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk358__DOT__i);
                                }
                            }
                            if ((value != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2490)
                                 ->__PVT__value.at(0U))) {
                                unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk360__DOT__saved = 0ULL;
                                unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk360__DOT__saved 
                                    = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2492)
                                    ->__PVT__value.at(0U);
                                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2493)
                                                        ->__PVT__value.atWrite(0U) 
                                    = value;
                                if ((VlNull{} != unnamedblk356__DOT__bkdr)) {
                                    VL_NULL_CHECK(unnamedblk356__DOT__bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2495)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                                } else {
                                    this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                                }
                                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2498)
                                                        ->__PVT__value.atWrite(0U) 
                                    = unnamedblk356__DOT__unnamedblk357__DOT__unnamedblk360__DOT__saved;
                            }
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2501)
                                                        ->__PVT__value.atWrite(0U) 
                                = (VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2501)
                                   ->__PVT__value.at(0U) 
                                   & (~ unnamedblk356__DOT__unnamedblk357__DOT__wo_mask));
                            VL_NULL_CHECK(unnamedblk356__DOT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2503)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_9__get_check_on_read);
                            if (((IData)(__VlefCall_9__get_check_on_read) 
                                 && (1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2504)
                                     ->__PVT__status))) {
                                this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2505)
                                                           ->__PVT__value.at(0U), unnamedblk356__DOT__map, __Vtask_do_check__379__Vfuncout);
                            }
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                        }
                    } else if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2442)
                                ->__PVT__path)) {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2515)
                                      ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2515)
                                                        ->__VnoInFunc_get_root_map(vlSymsp, unnamedblk361__DOT__system_map);
                        this->__PVT__m_is_busy = 1U;
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2519)
                                      ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2519)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_10__get_check_on_read);
                        if (__VlefCall_10__get_check_on_read) {
                            this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, exp);
                        }
                        if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2522)
                             ->__PVT__frontdoor)) {
                            unnamedblk361__DOT__unnamedblk362__DOT__fd 
                                = VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2523)
                                ->__PVT__frontdoor;
                            VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2524)
                                                        ->__PVT__rw_info 
                                = rw;
                            if ((VlNull{} == VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2525)
                                 ->__PVT__sequencer)) {
                                VL_NULL_CHECK(unnamedblk361__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2526)
                                                        ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __VlefCall_11__get_sequencer);
                                VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2526)
                                                        ->__PVT__sequencer 
                                    = __VlefCall_11__get_sequencer;
                            }
                            co_await VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2527)
                                                        ->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(unnamedblk361__DOT__unnamedblk362__DOT__fd, "../../uvm/distrib/src/reg/uvm_reg.svh", 2527)
                                                                            ->__PVT__sequencer, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2527)
                                                                            ->__PVT__parent, 0xffffffffU, 1U);
                        } else {
                            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2532)
                                                   ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2532)
                                                        ->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
                        }
                        this->__PVT__m_is_busy = 0U;
                        VL_NULL_CHECK(unnamedblk361__DOT__system_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2537)
                                                        ->__VnoInFunc_get_auto_predict(vlSymsp, __VlefCall_12__get_auto_predict);
                        if (__VlefCall_12__get_auto_predict) {
                            unnamedblk361__DOT__unnamedblk363__DOT__status = 0U;
                            VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2539)
                                          ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2539)
                                                        ->__VnoInFunc_get_check_on_read(vlSymsp, __VlefCall_13__get_check_on_read);
                            if (((IData)(__VlefCall_13__get_check_on_read) 
                                 && (1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2540)
                                     ->__PVT__status))) {
                                this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2541)
                                                           ->__PVT__value.at(0U), unnamedblk361__DOT__system_map, __Vtask_do_check__389__Vfuncout);
                            }
                            if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2544)
                                 ->__PVT__status)) {
                                this->__VnoInFunc_sample(vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2545)
                                                         ->__PVT__value.at(0U), 0xffffffffffffffffULL, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2545)
                                                         ->__PVT__map);
                                VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 2546)
                                                        ->__VnoInFunc_XsampleX(vlSymsp, VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2546)
                                                                               ->__PVT__offset, 1U, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2546)
                                                                               ->__PVT__map);
                            }
                            unnamedblk361__DOT__unnamedblk363__DOT__status 
                                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2549)
                                ->__PVT__status;
                            this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2551)
                                                        ->__PVT__status 
                                = unnamedblk361__DOT__unnamedblk363__DOT__status;
                        }
                    }
                    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2557)
                        ->__PVT__value.at(0U);
                    VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2560)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk364__DOT__cb);
                    while ((VlNull{} != unnamedblk364__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk364__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2561)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        VL_NULL_CHECK(cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2560)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk364__DOT__cb);
                    }
                    this->__VnoInFunc_post_read(vlSymsp, rw);
                    unnamedblk365__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk365__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk365__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        unnamedblk365__DOT__unnamedblk366__DOT__cbs 
                            = VL_NEW(Vhello_uvm_uvm_pkg__03a__03auvm_callback_iter__Tz22_TBz19, vlSymsp, this->__PVT__m_fields.at(unnamedblk365__DOT__i));
                        unnamedblk365__DOT__unnamedblk366__DOT__f 
                            = this->__PVT__m_fields.at(unnamedblk365__DOT__i);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2569)
                                                        ->__PVT__element 
                            = unnamedblk365__DOT__unnamedblk366__DOT__f;
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2570)
                                                        ->__PVT__element_kind = 1U;
                        VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2571)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
                        VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2571)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2571)
                                                        ->__PVT__value.atWrite(0U) 
                            = (VL_SHIFTR_QQI(64,64,32, value, __VlefCall_14__get_lsb_pos) 
                               & (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_15__get_n_bits) 
                                  - 1ULL));
                        VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2573)
                                                        ->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__cb);
                        while ((VlNull{} != unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__cb)) {
                            VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__cb, "../../uvm/distrib/src/reg/uvm_reg.svh", 2574)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                            VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__cbs, "../../uvm/distrib/src/reg/uvm_reg.svh", 2573)
                                                        ->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk365__DOT__unnamedblk366__DOT__unnamedblk367__DOT__cb);
                        }
                        VL_NULL_CHECK(unnamedblk365__DOT__unnamedblk366__DOT__f, "../../uvm/distrib/src/reg/uvm_reg.svh", 2575)
                                                        ->__VnoInFunc_post_read(vlSymsp, rw);
                        if ((unnamedblk365__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk365__DOT__i = 
                                ((IData)(1U) + unnamedblk365__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2578)
                                                        ->__PVT__value.atWrite(0U) 
                        = value;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2579)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2580)
                                                        ->__PVT__element_kind = 0U;
                    this->__Vfunc_uvm_report_enabled__404__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__404__severity = 0U;
                    __Vfunc_uvm_report_enabled__404__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__405__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__405__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__406__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__404__verbosity, (IData)(__Vfunc_uvm_report_enabled__404__severity), this->__Vfunc_uvm_report_enabled__404__id, __VlefCall_16__uvm_report_enabled);
                    if ((0U != __VlefCall_16__uvm_report_enabled)) {
                        unnamedblk368__DOT__path_s = ""s;
                        unnamedblk368__DOT__value_s = ""s;
                        if ((0U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2585)
                             ->__PVT__path)) {
                            if ((VlNull{} != VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2586)
                                 ->__PVT__frontdoor)) {
                                __VlefCond_18 = "user frontdoor"s;
                            } else {
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2587)
                                              ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2587)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_17__get_full_name);
                                __VlefCond_18 = VL_CONCATN_NNN("map "s, __VlefCall_17__get_full_name);
                            }
                            unnamedblk368__DOT__path_s 
                                = __VlefCond_18;
                        } else {
                            this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_19__get_backdoor);
                            if ((VlNull{} != __VlefCall_19__get_backdoor)) {
                                __Vtemp_2[0U] = 0x646f6f72U;
                                __Vtemp_2[1U] = 0x6261636bU;
                                __Vtemp_2[2U] = 0x73657220U;
                                __Vtemp_2[3U] = 0x00000075U;
                            } else {
                                __Vtemp_2[0U] = 0x646f6f72U;
                                __Vtemp_2[1U] = 0x6261636bU;
                                __Vtemp_2[2U] = 0x44504920U;
                                __Vtemp_2[3U] = 0U;
                            }
                            unnamedblk368__DOT__path_s 
                                = VL_CVT_PACK_STR_NW(4, __Vtemp_2);
                        }
                        VL_SFORMAT_NX(unnamedblk368__DOT__value_s
                                      ,"=%0h",1, '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2591)
                                      ->__PVT__value.at(0U));
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_20__get_full_name);
                        __Vtask_uvm_report_info__411__report_enabled_checked = 0U;
                        this->__Vtask_uvm_report_info__411__context_name = ""s;
                        __Vtask_uvm_report_info__411__line = 0U;
                        this->__Vtask_uvm_report_info__411__filename = ""s;
                        __Vtask_uvm_report_info__411__verbosity = 0x0000012cU;
                        this->__Vtask_uvm_report_info__411__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Read  register via "s, unnamedblk368__DOT__path_s), ": "s), __VlefCall_20__get_full_name), unnamedblk368__DOT__value_s));
                        this->__Vtask_uvm_report_info__411__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__412__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__412__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__413__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__413__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__411__id, this->__Vtask_uvm_report_info__411__message, __Vtask_uvm_report_info__411__verbosity, this->__Vtask_uvm_report_info__411__filename, __Vtask_uvm_report_info__411__line, this->__Vtask_uvm_report_info__411__context_name, (IData)(__Vtask_uvm_report_info__411__report_enabled_checked));
                    }
                    this->__PVT__m_read_in_progress = 0U;
                    __Vlabel0: ;
                }
                co_return;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map_info> &map_info, std::string caller, CData/*0:0*/ &Xcheck_accessX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xcheck_accessX\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__418__verbosity;
                __Vfunc_uvm_report_enabled__418__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__418__severity;
                __Vfunc_uvm_report_enabled__418__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__423__verbosity;
                __Vtask_uvm_report_warning__423__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__423__line;
                __Vtask_uvm_report_warning__423__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__423__report_enabled_checked;
                __Vtask_uvm_report_warning__423__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__430__verbosity;
                __Vfunc_uvm_report_enabled__430__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__430__severity;
                __Vfunc_uvm_report_enabled__430__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__431__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__432__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__436__verbosity;
                __Vtask_uvm_report_error__436__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__436__line;
                __Vtask_uvm_report_error__436__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__436__report_enabled_checked;
                __Vtask_uvm_report_error__436__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__437__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__438__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__441__verbosity;
                __Vfunc_uvm_report_enabled__441__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__441__severity;
                __Vfunc_uvm_report_enabled__441__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__442__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__443__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__448__verbosity;
                __Vtask_uvm_report_error__448__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__448__line;
                __Vtask_uvm_report_error__448__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__448__report_enabled_checked;
                __Vtask_uvm_report_error__448__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__449__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__450__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_14__get_full_name;
                std::string __VlefCall_13__get_full_name;
                IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
                std::string __VlefCall_11__get_full_name;
                std::string __VlefCall_10__get_type_name;
                IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
                std::string __VlefCall_8__get_type_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_7__get_local_map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> __VlefCall_6__backdoor;
                std::string __VlefCall_5__get_full_name;
                IData/*31:0*/ __VlefCall_4__uvm_report_enabled;
                CData/*0:0*/ __VlefLogAnd_3;
                CData/*0:0*/ __VlefCall_2__has_hdl_path;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> __VlefCall_1__get_backdoor;
                IData/*31:0*/ __VlefCall_0__get_default_path;
                {
                    Xcheck_accessX__Vfuncrtn = 0U;
                    if ((3U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2609)
                         ->__PVT__path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 2610)
                                                        ->__VnoInFunc_get_default_path(vlSymsp, __VlefCall_0__get_default_path);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2610)
                                                        ->__PVT__path 
                            = __VlefCall_0__get_default_path;
                    }
                    if ((1U == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2612)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_backdoor(vlSymsp, 1U, __VlefCall_1__get_backdoor);
                        __VlefLogAnd_3 = (VlNull{} 
                                          == __VlefCall_1__get_backdoor);
                        if (__VlefLogAnd_3) {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_2__has_hdl_path);
                            __VlefLogAnd_3 = (1U & 
                                              (~ (IData)(__VlefCall_2__has_hdl_path)));
                        }
                        if (__VlefLogAnd_3) {
                            this->__Vfunc_uvm_report_enabled__418__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__418__severity = 1U;
                            __Vfunc_uvm_report_enabled__418__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__419__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__419__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__420__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__418__verbosity, (IData)(__Vfunc_uvm_report_enabled__418__severity), this->__Vfunc_uvm_report_enabled__418__id, __VlefCall_4__uvm_report_enabled);
                            if ((0U != __VlefCall_4__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                                __Vtask_uvm_report_warning__423__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_warning__423__context_name = ""s;
                                __Vtask_uvm_report_warning__423__line = 0x00000a38U;
                                this->__Vtask_uvm_report_warning__423__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_warning__423__verbosity = 0U;
                                this->__Vtask_uvm_report_warning__423__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN("No backdoor access available for register '"s, __VlefCall_5__get_full_name), "' . Using frontdoor instead."s));
                                this->__Vtask_uvm_report_warning__423__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__424__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__424__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__425__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__423__id, this->__Vtask_uvm_report_warning__423__message, __Vtask_uvm_report_warning__423__verbosity, this->__Vtask_uvm_report_warning__423__filename, __Vtask_uvm_report_warning__423__line, this->__Vtask_uvm_report_warning__423__context_name, (IData)(__Vtask_uvm_report_warning__423__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2617)
                                                        ->__PVT__path = 0U;
                        } else {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, __VlefCall_6__backdoor);
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2620)
                                                        ->__PVT__map 
                                = __VlefCall_6__backdoor;
                        }
                    }
                    if ((1U != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2624)
                         ->__PVT__path)) {
                        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2626)
                                                        ->__PVT__map, caller, __VlefCall_7__get_local_map);
                        VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2626)
                                                        ->__PVT__local_map 
                            = __VlefCall_7__get_local_map;
                        if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2628)
                             ->__PVT__local_map)) {
                            this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_8__get_type_name);
                            this->__Vfunc_uvm_report_enabled__430__id 
                                = VL_CVT_PACK_STR_NN(__VlefCall_8__get_type_name);
                            __Vfunc_uvm_report_enabled__430__severity = 2U;
                            __Vfunc_uvm_report_enabled__430__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__431__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__431__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__432__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__432__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__430__verbosity, (IData)(__Vfunc_uvm_report_enabled__430__severity), this->__Vfunc_uvm_report_enabled__430__id, __VlefCall_9__uvm_report_enabled);
                            if ((0U != __VlefCall_9__uvm_report_enabled)) {
                                this->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_10__get_type_name);
                                VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2631)
                                              ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2631)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                                __Vtask_uvm_report_error__436__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__436__context_name = ""s;
                                __Vtask_uvm_report_error__436__line = 0x00000a47U;
                                this->__Vtask_uvm_report_error__436__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__436__verbosity = 0U;
                                this->__Vtask_uvm_report_error__436__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN("No transactor available to physically access register on map '"s, __VlefCall_11__get_full_name), "'"s));
                                this->__Vtask_uvm_report_error__436__id 
                                    = VL_CVT_PACK_STR_NN(__VlefCall_10__get_type_name);
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__437__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__437__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__438__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__438__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__436__id, this->__Vtask_uvm_report_error__436__message, __Vtask_uvm_report_error__436__verbosity, this->__Vtask_uvm_report_error__436__filename, __Vtask_uvm_report_error__436__line, this->__Vtask_uvm_report_error__436__context_name, (IData)(__Vtask_uvm_report_error__436__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2632)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        }
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2636)
                                      ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2636)
                                                        ->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this}, 1U, map_info);
                        if (((VlNull{} == VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2638)
                              ->__PVT__frontdoor) && VL_NULL_CHECK(map_info, "../../uvm/distrib/src/reg/uvm_reg.svh", 2638)
                             ->__PVT__unmapped)) {
                            this->__Vfunc_uvm_report_enabled__441__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__441__severity = 2U;
                            __Vfunc_uvm_report_enabled__441__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__442__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__442__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__443__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__443__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__441__verbosity, (IData)(__Vfunc_uvm_report_enabled__441__severity), this->__Vfunc_uvm_report_enabled__441__id, __VlefCall_12__uvm_report_enabled);
                            if ((0U != __VlefCall_12__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_13__get_full_name);
                                if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2642)
                                     ->__PVT__map)) {
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2642)
                                                  ->__PVT__local_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2642)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                                } else {
                                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2642)
                                                  ->__PVT__map, "../../uvm/distrib/src/reg/uvm_reg.svh", 2642)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_14__get_full_name);
                                }
                                __Vtask_uvm_report_error__448__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__448__context_name = ""s;
                                __Vtask_uvm_report_error__448__line = 0x00000a52U;
                                this->__Vtask_uvm_report_error__448__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__448__verbosity = 0U;
                                this->__Vtask_uvm_report_error__448__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, __VlefCall_13__get_full_name), "' unmapped in map '"s), __VlefCall_14__get_full_name), "' and does not have a user-defined frontdoor"s));
                                this->__Vtask_uvm_report_error__448__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__449__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__449__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__450__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__450__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__448__id, this->__Vtask_uvm_report_error__448__message, __Vtask_uvm_report_error__448__verbosity, this->__Vtask_uvm_report_error__448__filename, __Vtask_uvm_report_error__448__line, this->__Vtask_uvm_report_error__448__context_name, (IData)(__Vtask_uvm_report_error__448__report_enabled_checked));
                            }
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2643)
                                                        ->__PVT__status = 1U;
                            Xcheck_accessX__Vfuncrtn = 0U;
                            goto __Vlabel0;
                        }
                        if ((VlNull{} == VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2647)
                             ->__PVT__map)) {
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2648)
                                                        ->__PVT__map 
                                = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2648)
                                ->__PVT__local_map;
                        }
                    }
                    Xcheck_accessX__Vfuncrtn = 1U;
                    __Vlabel0: ;
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_busy__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_is_busy\n"); );
                // Body
                is_busy__Vfuncrtn = this->__PVT__m_is_busy;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ busy) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xset_busyX\n"); );
                // Body
                this->__PVT__m_is_busy = busy;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX(Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &Xis_locked_by_fieldX__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_Xis_locked_by_fieldX\n"); );
                // Body
                Xis_locked_by_fieldX__Vfuncrtn = this->__PVT__m_is_locked_by_field;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_write\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__453__verbosity;
                __Vfunc_uvm_report_enabled__453__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__453__severity;
                __Vfunc_uvm_report_enabled__453__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__454__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__455__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__457__verbosity;
                __Vtask_uvm_report_info__457__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__457__line;
                __Vtask_uvm_report_info__457__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__457__report_enabled_checked;
                __Vtask_uvm_report_info__457__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__458__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__459__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__462__verbosity;
                __Vtask_uvm_report_fatal__462__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__462__line;
                __Vtask_uvm_report_fatal__462__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__462__report_enabled_checked;
                __Vtask_uvm_report_fatal__462__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__463__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__464__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__467__verbosity;
                __Vtask_uvm_report_fatal__467__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__467__line;
                __Vtask_uvm_report_fatal__467__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__467__report_enabled_checked;
                __Vtask_uvm_report_fatal__467__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__468__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__469__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_2__uvm_hdl_deposit;
                IData/*31:0*/ __VlefCall_1__uvm_hdl_deposit;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk369__DOT__i;
                unnamedblk369__DOT__i = 0;
                IData/*31:0*/ unnamedblk369__DOT__i__Vloopsize;
                unnamedblk369__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0;
                IData/*31:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j__Vloopsize;
                unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j__Vloopsize = 0;
                QData/*63:0*/ unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice;
                VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                CData/*0:0*/ ok;
                paths.clear();
                ok = 1U;
                this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                    VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2680)
                                                                       ->__PVT__bd_kind), "."s);
                unnamedblk369__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk369__DOT__i, paths.size())) {
                    unnamedblk369__DOT__i__Vloopsize 
                        = paths.size();
                    unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat 
                        = paths.at(unnamedblk369__DOT__i);
                    unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2683)
                                      ->__PVT__slices.size())) {
                        unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j__Vloopsize 
                            = VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2683)
                            ->__PVT__slices.size();
                        {
                            this->__Vfunc_uvm_report_enabled__453__id = "RegMem"s;
                            __Vfunc_uvm_report_enabled__453__severity = 0U;
                            __Vfunc_uvm_report_enabled__453__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__454__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__454__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__455__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__455__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__453__verbosity, (IData)(__Vfunc_uvm_report_enabled__453__severity), this->__Vfunc_uvm_report_enabled__453__id, __VlefCall_0__uvm_report_enabled);
                            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                __Vtask_uvm_report_info__457__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_info__457__context_name = ""s;
                                __Vtask_uvm_report_info__457__line = 0x00000a7dU;
                                this->__Vtask_uvm_report_info__457__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_info__457__verbosity = 0x000001f4U;
                                this->__Vtask_uvm_report_info__457__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN("backdoor_write to "s, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2685)
                                                                        ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                                                        .__PVT__path));
                                this->__Vtask_uvm_report_info__457__id = "RegMem"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__458__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__458__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__459__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__459__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__457__id, this->__Vtask_uvm_report_info__457__message, __Vtask_uvm_report_info__457__verbosity, this->__Vtask_uvm_report_info__457__filename, __Vtask_uvm_report_info__457__line, this->__Vtask_uvm_report_info__457__context_name, (IData)(__Vtask_uvm_report_info__457__report_enabled_checked));
                            }
                            if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2687)
                                           ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                           .__PVT__offset)) {
                                __Vtask_uvm_report_fatal__462__report_enabled_checked = 0U;
                                this->__Vtask_uvm_report_fatal__462__context_name = ""s;
                                __Vtask_uvm_report_fatal__462__line = 0U;
                                this->__Vtask_uvm_report_fatal__462__filename = ""s;
                                __Vtask_uvm_report_fatal__462__verbosity = 0U;
                                this->__Vtask_uvm_report_fatal__462__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                                this->__Vtask_uvm_report_fatal__462__id = "UVM_HDL_DEPOSIT"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__463__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                    = __Vfunc_get__463__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__464__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                    = __Vtask_get_root__464__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__462__id, this->__Vtask_uvm_report_fatal__462__message, __Vtask_uvm_report_fatal__462__verbosity, this->__Vtask_uvm_report_fatal__462__filename, __Vtask_uvm_report_fatal__462__line, this->__Vtask_uvm_report_fatal__462__context_name, (IData)(__Vtask_uvm_report_fatal__462__report_enabled_checked));
                                __VlefCall_1__uvm_hdl_deposit = 0U;
                                ok = ((IData)(ok) & __VlefCall_1__uvm_hdl_deposit);
                                goto __Vlabel0;
                            }
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice = 0ULL;
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                = VL_SHIFTR_QQI(64,64,32, VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2693)
                                                ->__PVT__value.at(0U), VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2693)
                                                ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                                .__PVT__offset);
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                = (unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__unnamedblk372__DOT__slice 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2694)
                                                    ->__PVT__slices.at(unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j)
                                                    .__PVT__size) 
                                      - 1ULL));
                            __Vtask_uvm_report_fatal__467__report_enabled_checked = 0U;
                            this->__Vtask_uvm_report_fatal__467__context_name = ""s;
                            __Vtask_uvm_report_fatal__467__line = 0U;
                            this->__Vtask_uvm_report_fatal__467__filename = ""s;
                            __Vtask_uvm_report_fatal__467__verbosity = 0U;
                            this->__Vtask_uvm_report_fatal__467__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                            this->__Vtask_uvm_report_fatal__467__id = "UVM_HDL_DEPOSIT"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__468__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                = __Vfunc_get__468__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__469__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                = __Vtask_get_root__469__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__467__id, this->__Vtask_uvm_report_fatal__467__message, __Vtask_uvm_report_fatal__467__verbosity, this->__Vtask_uvm_report_fatal__467__filename, __Vtask_uvm_report_fatal__467__line, this->__Vtask_uvm_report_fatal__467__context_name, (IData)(__Vtask_uvm_report_fatal__467__report_enabled_checked));
                            __VlefCall_2__uvm_hdl_deposit = 0U;
                            ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_deposit);
                            __Vlabel0: ;
                        }
                        if ((unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j__Vloopsize 
                             <= VL_NULL_CHECK(unnamedblk369__DOT__unnamedblk370__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2683)
                             ->__PVT__slices.size())) {
                            unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j 
                                = ((IData)(1U) + unnamedblk369__DOT__unnamedblk370__DOT__unnamedblk371__DOT__j);
                        }
                    }
                    if ((unnamedblk369__DOT__i__Vloopsize 
                         <= paths.size())) {
                        unnamedblk369__DOT__i = ((IData)(1U) 
                                                 + unnamedblk369__DOT__i);
                    }
                }
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2699)
                                                        ->__PVT__status 
                    = ((IData)(ok) ? 0U : 1U);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__backdoor_read_func;
                this->__VnoInFunc_backdoor_read_func(vlProcess, vlSymsp, rw, __VlefCall_0__backdoor_read_func);
                VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2706)
                                                        ->__PVT__status 
                    = __VlefCall_0__backdoor_read_func;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ &backdoor_read_func__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_backdoor_read_func\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__473__verbosity;
                __Vfunc_uvm_report_enabled__473__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__473__severity;
                __Vfunc_uvm_report_enabled__473__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__474__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__475__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__477__verbosity;
                __Vtask_uvm_report_info__477__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__477__line;
                __Vtask_uvm_report_info__477__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__477__report_enabled_checked;
                __Vtask_uvm_report_info__477__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__478__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__479__Vfuncout;
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__481__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__481__value);
                IData/*31:0*/ __Vtask_uvm_report_fatal__482__verbosity;
                __Vtask_uvm_report_fatal__482__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__482__line;
                __Vtask_uvm_report_fatal__482__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__482__report_enabled_checked;
                __Vtask_uvm_report_fatal__482__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__483__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__484__Vfuncout;
                VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__486__value;
                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__486__value);
                IData/*31:0*/ __Vtask_uvm_report_fatal__487__verbosity;
                __Vtask_uvm_report_fatal__487__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__487__line;
                __Vtask_uvm_report_fatal__487__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__487__report_enabled_checked;
                __Vtask_uvm_report_fatal__487__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__488__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__489__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__491__verbosity;
                __Vfunc_uvm_report_enabled__491__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__491__severity;
                __Vfunc_uvm_report_enabled__491__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__492__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__493__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__496__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i;
                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i = 0;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i__Vloopsize;
                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i__Vloopsize = 0;
                Vhello_uvm_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__size = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> __Vfunc_uvm_hdl_concat2string__497__concat;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i;
                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i = 0;
                IData/*31:0*/ __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i__Vloopsize;
                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i__Vloopsize = 0;
                Vhello_uvm_uvm_hdl_path_slice__struct__0 __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice;
                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__offset = 0;
                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice.__PVT__size = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__498__verbosity;
                __Vtask_uvm_report_error__498__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__498__line;
                __Vtask_uvm_report_error__498__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__498__report_enabled_checked;
                __Vtask_uvm_report_error__498__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__499__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__500__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__502__verbosity;
                __Vfunc_uvm_report_enabled__502__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__502__severity;
                __Vfunc_uvm_report_enabled__502__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__503__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__504__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__506__verbosity;
                __Vtask_uvm_report_info__506__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__506__line;
                __Vtask_uvm_report_info__506__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__506__report_enabled_checked;
                __Vtask_uvm_report_info__506__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__507__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__508__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
                std::string __VlefCall_6__uvm_hdl_concat2string;
                std::string __VlefCall_5__uvm_hdl_concat2string;
                std::string __VlefCall_4__get_full_name;
                IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_2__uvm_hdl_read;
                IData/*31:0*/ __VlefCall_1__uvm_hdl_read;
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                IData/*31:0*/ unnamedblk373__DOT__i;
                unnamedblk373__DOT__i = 0;
                IData/*31:0*/ unnamedblk373__DOT__i__Vloopsize;
                unnamedblk373__DOT__i__Vloopsize = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat;
                IData/*31:0*/ unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j;
                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j = 0;
                IData/*31:0*/ unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j__Vloopsize;
                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j__Vloopsize = 0;
                QData/*63:0*/ unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice;
                IData/*31:0*/ unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__k;
                IData/*31:0*/ unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0;
                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
                IData/*31:0*/ __Vincrement1;
                __Vincrement1 = 0;
                VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
                QData/*63:0*/ val;
                CData/*0:0*/ ok;
                {
                    backdoor_read_func__Vfuncrtn = 0U;
                    paths.clear();
                    val = 0ULL;
                    ok = 1U;
                    this->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, 
                                                        VL_CVT_PACK_STR_NN(VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2716)
                                                                           ->__PVT__bd_kind), "."s);
                    unnamedblk373__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk373__DOT__i, paths.size())) {
                        unnamedblk373__DOT__i__Vloopsize 
                            = paths.size();
                        unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat 
                            = paths.at(unnamedblk373__DOT__i);
                        val = 0ULL;
                        unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j = 0U;
                        while (VL_LTS_III(32, unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j, VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2720)
                                          ->__PVT__slices.size())) {
                            unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j__Vloopsize 
                                = VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2720)
                                ->__PVT__slices.size();
                            {
                                this->__Vfunc_uvm_report_enabled__473__id = "RegMem"s;
                                __Vfunc_uvm_report_enabled__473__severity = 0U;
                                __Vfunc_uvm_report_enabled__473__verbosity = 0x000001f4U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__474__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__474__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__475__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__475__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__473__verbosity, (IData)(__Vfunc_uvm_report_enabled__473__severity), this->__Vfunc_uvm_report_enabled__473__id, __VlefCall_0__uvm_report_enabled);
                                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                                    __Vtask_uvm_report_info__477__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_info__477__context_name = ""s;
                                    __Vtask_uvm_report_info__477__line = 0x00000aa2U;
                                    this->__Vtask_uvm_report_info__477__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__477__verbosity = 0x000001f4U;
                                    this->__Vtask_uvm_report_info__477__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("backdoor_read from %s "s, VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2722)
                                                                            ->__PVT__slices.at(unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j)
                                                                            .__PVT__path));
                                    this->__Vtask_uvm_report_info__477__id = "RegMem"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__478__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__478__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__479__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__479__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__477__id, this->__Vtask_uvm_report_info__477__message, __Vtask_uvm_report_info__477__verbosity, this->__Vtask_uvm_report_info__477__filename, __Vtask_uvm_report_info__477__line, this->__Vtask_uvm_report_info__477__context_name, (IData)(__Vtask_uvm_report_info__477__report_enabled_checked));
                                }
                                if (VL_GTS_III(32, 0U, VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2724)
                                               ->__PVT__slices.at(unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j)
                                               .__PVT__offset)) {
                                    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__481__value);
                                    __Vtask_uvm_report_fatal__482__report_enabled_checked = 0U;
                                    this->__Vtask_uvm_report_fatal__482__context_name = ""s;
                                    __Vtask_uvm_report_fatal__482__line = 0U;
                                    this->__Vtask_uvm_report_fatal__482__filename = ""s;
                                    __Vtask_uvm_report_fatal__482__verbosity = 0U;
                                    this->__Vtask_uvm_report_fatal__482__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                                    this->__Vtask_uvm_report_fatal__482__id = "UVM_HDL_READ"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__483__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                        = __Vfunc_get__483__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__484__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                        = __Vtask_get_root__484__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__482__id, this->__Vtask_uvm_report_fatal__482__message, __Vtask_uvm_report_fatal__482__verbosity, this->__Vtask_uvm_report_fatal__482__filename, __Vtask_uvm_report_fatal__482__line, this->__Vtask_uvm_report_fatal__482__context_name, (IData)(__Vtask_uvm_report_fatal__482__report_enabled_checked));
                                    __VlefCall_1__uvm_hdl_read = 0U;
                                    val = (((QData)((IData)(__Vfunc_uvm_hdl_read__481__value[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(__Vfunc_uvm_hdl_read__481__value[0U])));
                                    ok = ((IData)(ok) 
                                          & __VlefCall_1__uvm_hdl_read);
                                    goto __Vlabel1;
                                }
                                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice = 0ULL;
                                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__k 
                                    = VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2730)
                                    ->__PVT__slices.at(unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j)
                                    .__PVT__offset;
                                VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__486__value);
                                __Vtask_uvm_report_fatal__487__report_enabled_checked = 0U;
                                this->__Vtask_uvm_report_fatal__487__context_name = ""s;
                                __Vtask_uvm_report_fatal__487__line = 0U;
                                this->__Vtask_uvm_report_fatal__487__filename = ""s;
                                __Vtask_uvm_report_fatal__487__verbosity = 0U;
                                this->__Vtask_uvm_report_fatal__487__message = "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s;
                                this->__Vtask_uvm_report_fatal__487__id = "UVM_HDL_READ"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__488__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                                    = __Vfunc_get__488__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__489__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                                    = __Vtask_get_root__489__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__487__id, this->__Vtask_uvm_report_fatal__487__message, __Vtask_uvm_report_fatal__487__verbosity, this->__Vtask_uvm_report_fatal__487__filename, __Vtask_uvm_report_fatal__487__line, this->__Vtask_uvm_report_fatal__487__context_name, (IData)(__Vtask_uvm_report_fatal__487__report_enabled_checked));
                                __VlefCall_2__uvm_hdl_read = 0U;
                                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice 
                                    = (((QData)((IData)(__Vfunc_uvm_hdl_read__486__value[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(__Vfunc_uvm_hdl_read__486__value[0U])));
                                ok = ((IData)(ok) & __VlefCall_2__uvm_hdl_read);
                                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                    = VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2734)
                                    ->__PVT__slices.at(unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j)
                                    .__PVT__size;
                                while (VL_LTS_III(32, 0U, unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                                    __Vincrement1 = unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__k;
                                    unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__k 
                                        = ((IData)(1U) 
                                           + unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__k);
                                    val = (((~ (1ULL 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1))) 
                                            & val) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (IData)(unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice)))) 
                                              << (0x0000003fU 
                                                  & __Vincrement1)));
                                    unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice 
                                        = (unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__slice 
                                           >> 1U);
                                    unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                        = (unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__unnamedblk376__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                           - (IData)(1U));
                                }
                                __Vlabel1: ;
                            }
                            if ((unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j__Vloopsize 
                                 <= VL_NULL_CHECK(unnamedblk373__DOT__unnamedblk374__DOT__hdl_concat, "../../uvm/distrib/src/reg/uvm_reg.svh", 2720)
                                 ->__PVT__slices.size())) {
                                unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j 
                                    = ((IData)(1U) 
                                       + unnamedblk373__DOT__unnamedblk374__DOT__unnamedblk375__DOT__j);
                            }
                        }
                        val = (val & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                      - 1ULL));
                        if ((0U == unnamedblk373__DOT__i)) {
                            VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2744)
                                                        ->__PVT__value.atWrite(0U) 
                                = val;
                        }
                        if ((val != VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2746)
                             ->__PVT__value.at(0U))) {
                            this->__Vfunc_uvm_report_enabled__491__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__491__severity = 2U;
                            __Vfunc_uvm_report_enabled__491__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__492__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__492__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__493__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__493__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__491__verbosity, (IData)(__Vfunc_uvm_report_enabled__491__severity), this->__Vfunc_uvm_report_enabled__491__id, __VlefCall_3__uvm_report_enabled);
                            if ((0U != __VlefCall_3__uvm_report_enabled)) {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                                __Vfunc_uvm_hdl_concat2string__496__concat 
                                    = paths.at(0U);
                                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i = 0U;
                                __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i__Vloopsize = 0;
                                {
                                    __VlefCall_5__uvm_hdl_concat2string = ""s;
                                    this->__Vfunc_uvm_hdl_concat2string__496__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 390)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 391)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 392)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __VlefCall_5__uvm_hdl_concat2string 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 393)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel2;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i__Vloopsize 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                            ->__PVT__slices.size();
                                        __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 396)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i);
                                        this->__Vfunc_uvm_hdl_concat2string__496__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__496__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                        .__PVT__offset)) {
                                            this->__Vfunc_uvm_hdl_concat2string__496__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__496__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        if ((__Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i__Vloopsize 
                                             <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__496__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                             ->__PVT__slices.size())) {
                                            __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i 
                                                = ((IData)(1U) 
                                                   + __Vfunc_uvm_hdl_concat2string__496__unnamedblk271__DOT__i);
                                        }
                                    }
                                    this->__Vfunc_uvm_hdl_concat2string__496__image 
                                        = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__496__image, "}"s);
                                    __VlefCall_5__uvm_hdl_concat2string 
                                        = this->__Vfunc_uvm_hdl_concat2string__496__image;
                                    __Vlabel2: ;
                                }
                                __Vfunc_uvm_hdl_concat2string__497__concat 
                                    = paths.at(unnamedblk373__DOT__i);
                                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i = 0U;
                                __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i__Vloopsize = 0;
                                {
                                    __VlefCall_6__uvm_hdl_concat2string = ""s;
                                    this->__Vfunc_uvm_hdl_concat2string__497__image = "{"s;
                                    if ((((1U == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 390)
                                           ->__PVT__slices.size()) 
                                          && (0xffffffffU 
                                              == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 391)
                                              ->__PVT__slices.at(0U)
                                              .__PVT__offset)) 
                                         && (0xffffffffU 
                                             == VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 392)
                                             ->__PVT__slices.at(0U)
                                             .__PVT__size))) {
                                        __VlefCall_6__uvm_hdl_concat2string 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 393)
                                            ->__PVT__slices.at(0U)
                                            .__PVT__path;
                                        goto __Vlabel3;
                                    }
                                    __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i = 0U;
                                    while (VL_LTS_III(32, __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i, VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                                      ->__PVT__slices.size())) {
                                        __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i__Vloopsize 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                            ->__PVT__slices.size();
                                        __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice 
                                            = VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 396)
                                            ->__PVT__slices.at(__Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i);
                                        this->__Vfunc_uvm_hdl_concat2string__497__image 
                                            = VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__497__image, 
                                                                            VL_CVT_PACK_STR_NI(
                                                                                ((0U 
                                                                                == __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i)
                                                                                 ? 0U
                                                                                 : 0x2c20U))), __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                             .__PVT__path);
                                        if (VL_LTES_III(32, 0U, __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                        .__PVT__offset)) {
                                            this->__Vfunc_uvm_hdl_concat2string__497__image 
                                                = VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__497__image, "@"s), VL_SFORMATF_N_NX("[%0d +: %0d]",2
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__offset
                                                                                , '~',32,__Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__unnamedblk272__DOT__slice
                                                                                .__PVT__size) );
                                        }
                                        if ((__Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i__Vloopsize 
                                             <= VL_NULL_CHECK(__Vfunc_uvm_hdl_concat2string__497__concat, "../../uvm/distrib/src/reg/uvm_reg_model.svh", 395)
                                             ->__PVT__slices.size())) {
                                            __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i 
                                                = ((IData)(1U) 
                                                   + __Vfunc_uvm_hdl_concat2string__497__unnamedblk271__DOT__i);
                                        }
                                    }
                                    this->__Vfunc_uvm_hdl_concat2string__497__image 
                                        = VL_CONCATN_NNN(this->__Vfunc_uvm_hdl_concat2string__497__image, "}"s);
                                    __VlefCall_6__uvm_hdl_concat2string 
                                        = this->__Vfunc_uvm_hdl_concat2string__497__image;
                                    __Vlabel3: ;
                                }
                                __Vtask_uvm_report_error__498__report_enabled_checked = 1U;
                                this->__Vtask_uvm_report_error__498__context_name = ""s;
                                __Vtask_uvm_report_error__498__line = 0x00000abeU;
                                this->__Vtask_uvm_report_error__498__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                __Vtask_uvm_report_error__498__verbosity = 0U;
                                VL_SFORMAT_NX(this->__Vtask_uvm_report_error__498__message
                                              ,"Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",5
                                              , 'S',&(__VlefCall_4__get_full_name)
                                              , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2750)
                                              ->__PVT__value.at(0U)
                                              , 'S',&(__VlefCall_5__uvm_hdl_concat2string)
                                              , '#',64,val
                                              , 'S',&(__VlefCall_6__uvm_hdl_concat2string));
                                this->__Vtask_uvm_report_error__498__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__499__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__499__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__500__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__500__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__498__id, this->__Vtask_uvm_report_error__498__message, __Vtask_uvm_report_error__498__verbosity, this->__Vtask_uvm_report_error__498__filename, __Vtask_uvm_report_error__498__line, this->__Vtask_uvm_report_error__498__context_name, (IData)(__Vtask_uvm_report_error__498__report_enabled_checked));
                            }
                            backdoor_read_func__Vfuncrtn = 1U;
                            goto __Vlabel0;
                        }
                        this->__Vfunc_uvm_report_enabled__502__id = "RegMem"s;
                        __Vfunc_uvm_report_enabled__502__severity = 0U;
                        __Vfunc_uvm_report_enabled__502__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__503__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__503__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__504__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__504__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__502__verbosity, (IData)(__Vfunc_uvm_report_enabled__502__severity), this->__Vfunc_uvm_report_enabled__502__id, __VlefCall_7__uvm_report_enabled);
                        if ((0U != __VlefCall_7__uvm_report_enabled)) {
                            __Vtask_uvm_report_info__506__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_info__506__context_name = ""s;
                            __Vtask_uvm_report_info__506__line = 0x00000ac2U;
                            this->__Vtask_uvm_report_info__506__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_info__506__verbosity = 0x000001f4U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_info__506__message
                                          ,"returned backdoor value 0x%0x",1
                                          , '#',64,VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2754)
                                          ->__PVT__value.at(0U));
                            this->__Vtask_uvm_report_info__506__id = "RegMem"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__507__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__507__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__508__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__508__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__506__id, this->__Vtask_uvm_report_info__506__message, __Vtask_uvm_report_info__506__verbosity, this->__Vtask_uvm_report_info__506__filename, __Vtask_uvm_report_info__506__line, this->__Vtask_uvm_report_info__506__context_name, (IData)(__Vtask_uvm_report_info__506__report_enabled_checked));
                        }
                        if ((unnamedblk373__DOT__i__Vloopsize 
                             <= paths.size())) {
                            unnamedblk373__DOT__i = 
                                ((IData)(1U) + unnamedblk373__DOT__i);
                        }
                    }
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2758)
                                                        ->__PVT__status 
                        = ((IData)(ok) ? 0U : 1U);
                    backdoor_read_func__Vfuncrtn = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2759)
                        ->__PVT__status;
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_poke\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__512__verbosity;
                __Vfunc_uvm_report_enabled__512__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__512__severity;
                __Vfunc_uvm_report_enabled__512__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__513__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__514__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__517__verbosity;
                __Vtask_uvm_report_error__517__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__517__line;
                __Vtask_uvm_report_error__517__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__517__report_enabled_checked;
                __Vtask_uvm_report_error__517__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__518__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__519__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__526__verbosity;
                __Vfunc_uvm_report_enabled__526__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__526__severity;
                __Vfunc_uvm_report_enabled__526__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__527__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__528__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__531__verbosity;
                __Vtask_uvm_report_info__531__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__531__line;
                __Vtask_uvm_report_info__531__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__531__report_enabled_checked;
                __Vtask_uvm_report_info__531__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__532__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__533__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_6__get_full_name;
                IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
                std::string __VlefCall_4__get_full_name;
                std::string __VlefCall_3__get_full_name;
                IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
                CData/*0:0*/ __VlefLogAnd_1;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
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
                        this->__Vfunc_uvm_report_enabled__512__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__512__severity = 2U;
                        __Vfunc_uvm_report_enabled__512__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__513__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__513__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__514__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__514__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__512__verbosity, (IData)(__Vfunc_uvm_report_enabled__512__severity), this->__Vfunc_uvm_report_enabled__512__id, __VlefCall_2__uvm_report_enabled);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            __Vtask_uvm_report_error__517__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__517__context_name = ""s;
                            __Vtask_uvm_report_error__517__line = 0x00000adeU;
                            this->__Vtask_uvm_report_error__517__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__517__verbosity = 0U;
                            this->__Vtask_uvm_report_error__517__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(
                                                                    VL_CONCATN_NNN("No backdoor access available to poke register '"s, __VlefCall_3__get_full_name), "'"s));
                            this->__Vtask_uvm_report_error__517__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__518__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__518__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__519__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__519__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__517__id, this->__Vtask_uvm_report_error__517__message, __Vtask_uvm_report_error__517__verbosity, this->__Vtask_uvm_report_error__517__filename, __Vtask_uvm_report_error__517__line, this->__Vtask_uvm_report_error__517__context_name, (IData)(__Vtask_uvm_report_error__517__report_enabled_checked));
                        }
                        status = 1U;
                        goto __Vlabel0;
                    }
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "reg_poke_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2792)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2793)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2794)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2795)
                                                        ->__PVT__kind = 1U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2796)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2797)
                                                        ->__PVT__value.atWrite(0U) 
                        = (value & (VL_SHIFTL_QQI(64,64,32, 1ULL, this->__PVT__m_n_bits) 
                                    - 1ULL));
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2798)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2799)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2800)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2801)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2804)
                                                        ->__VnoInFunc_write(vlProcess, vlSymsp, rw);
                    } else {
                        this->__VnoInFunc_backdoor_write(vlProcess, vlSymsp, rw);
                    }
                    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2808)
                        ->__PVT__status;
                    this->__Vfunc_uvm_report_enabled__526__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__526__severity = 0U;
                    __Vfunc_uvm_report_enabled__526__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__527__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__527__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__528__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__528__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__526__verbosity, (IData)(__Vfunc_uvm_report_enabled__526__severity), this->__Vfunc_uvm_report_enabled__526__id, __VlefCall_5__uvm_report_enabled);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_info__531__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__531__context_name = ""s;
                        __Vtask_uvm_report_info__531__line = 0x00000afbU;
                        this->__Vtask_uvm_report_info__531__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__531__verbosity = 0x0000012cU;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__531__message
                                      ,"Poked register \"%s\": 'h%h",2
                                      , 'S',&(__VlefCall_6__get_full_name)
                                      , '#',64,value);
                        this->__Vtask_uvm_report_info__531__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__532__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__532__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__533__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__533__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__531__id, this->__Vtask_uvm_report_info__531__message, __Vtask_uvm_report_info__531__verbosity, this->__Vtask_uvm_report_info__531__filename, __Vtask_uvm_report_info__531__line, this->__Vtask_uvm_report_info__531__context_name, (IData)(__Vtask_uvm_report_info__531__report_enabled_checked));
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 2U, 0xffU);
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    }
                    __Vlabel0: ;
                }
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_peek\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__539__verbosity;
                __Vfunc_uvm_report_enabled__539__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__539__severity;
                __Vfunc_uvm_report_enabled__539__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__540__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__541__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__544__verbosity;
                __Vtask_uvm_report_error__544__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__544__line;
                __Vtask_uvm_report_error__544__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__544__report_enabled_checked;
                __Vtask_uvm_report_error__544__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__545__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__546__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__553__verbosity;
                __Vfunc_uvm_report_enabled__553__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__553__severity;
                __Vfunc_uvm_report_enabled__553__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__554__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__555__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__558__verbosity;
                __Vtask_uvm_report_info__558__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__558__line;
                __Vtask_uvm_report_info__558__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__558__report_enabled_checked;
                __Vtask_uvm_report_info__558__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__559__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__560__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                std::string __VlefCall_6__get_full_name;
                IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
                std::string __VlefCall_4__get_full_name;
                std::string __VlefCall_3__get_full_name;
                IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
                CData/*0:0*/ __VlefLogAnd_1;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_item> rw;
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
                        this->__Vfunc_uvm_report_enabled__539__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__539__severity = 2U;
                        __Vfunc_uvm_report_enabled__539__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__540__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__540__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__541__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__541__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__539__verbosity, (IData)(__Vfunc_uvm_report_enabled__539__severity), this->__Vfunc_uvm_report_enabled__539__id, __VlefCall_2__uvm_report_enabled);
                        if ((0U != __VlefCall_2__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                            __Vtask_uvm_report_error__544__report_enabled_checked = 1U;
                            this->__Vtask_uvm_report_error__544__context_name = ""s;
                            __Vtask_uvm_report_error__544__line = 0x00000b17U;
                            this->__Vtask_uvm_report_error__544__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                            __Vtask_uvm_report_error__544__verbosity = 0U;
                            VL_SFORMAT_NX(this->__Vtask_uvm_report_error__544__message
                                          ,"No backdoor access available to peek register \"%s\"",1
                                          , 'S',&(__VlefCall_3__get_full_name));
                            this->__Vtask_uvm_report_error__544__id = "RegModel"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__545__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__545__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__546__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__546__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__544__id, this->__Vtask_uvm_report_error__544__message, __Vtask_uvm_report_error__544__verbosity, this->__Vtask_uvm_report_error__544__filename, __Vtask_uvm_report_error__544__line, this->__Vtask_uvm_report_error__544__context_name, (IData)(__Vtask_uvm_report_error__544__report_enabled_checked));
                        }
                        status = 1U;
                        goto __Vlabel0;
                    }
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    }
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi15__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "mem_peek_item"s, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), rw);
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2849)
                                                        ->__PVT__element 
                        = VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg>{this};
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2850)
                                                        ->__PVT__path = 1U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2851)
                                                        ->__PVT__element_kind = 0U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2852)
                                                        ->__PVT__kind = 0U;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2853)
                                                        ->__PVT__bd_kind 
                        = kind;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2854)
                                                        ->__PVT__parent 
                        = parent;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2855)
                                                        ->__PVT__extension 
                        = extension;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2856)
                                                        ->__PVT__fname 
                        = fname;
                    VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2857)
                                                        ->__PVT__lineno 
                        = lineno;
                    if ((VlNull{} != bkdr)) {
                        VL_NULL_CHECK(bkdr, "../../uvm/distrib/src/reg/uvm_reg.svh", 2860)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, rw);
                    } else {
                        this->__VnoInFunc_backdoor_read(vlProcess, vlSymsp, rw);
                    }
                    status = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2864)
                        ->__PVT__status;
                    value = VL_NULL_CHECK(rw, "../../uvm/distrib/src/reg/uvm_reg.svh", 2865)
                        ->__PVT__value.at(0U);
                    this->__Vfunc_uvm_report_enabled__553__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__553__severity = 0U;
                    __Vfunc_uvm_report_enabled__553__verbosity = 0x0000012cU;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__554__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__554__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__555__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__555__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__553__verbosity, (IData)(__Vfunc_uvm_report_enabled__553__severity), this->__Vfunc_uvm_report_enabled__553__id, __VlefCall_5__uvm_report_enabled);
                    if ((0U != __VlefCall_5__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_6__get_full_name);
                        __Vtask_uvm_report_info__558__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_info__558__context_name = ""s;
                        __Vtask_uvm_report_info__558__line = 0x00000b34U;
                        this->__Vtask_uvm_report_info__558__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_info__558__verbosity = 0x0000012cU;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_info__558__message
                                      ,"Peeked register \"%s\": 'h%h",2
                                      , 'S',&(__VlefCall_6__get_full_name)
                                      , '#',64,value);
                        this->__Vtask_uvm_report_info__558__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__559__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__559__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__560__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__560__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__558__id, this->__Vtask_uvm_report_info__558__message, __Vtask_uvm_report_info__558__verbosity, this->__Vtask_uvm_report_info__558__filename, __Vtask_uvm_report_info__558__line, this->__Vtask_uvm_report_info__558__context_name, (IData)(__Vtask_uvm_report_info__558__report_enabled_checked));
                    }
                    this->__VnoInFunc_do_predict(vlProcess, vlSymsp, rw, 1U, 0xffU);
                    if ((1U & (~ (IData)(this->__PVT__m_is_locked_by_field)))) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    }
                    __Vlabel0: ;
                }
                co_return;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, QData/*63:0*/ expected, QData/*63:0*/ actual, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, CData/*0:0*/ &do_check__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_check\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__568__verbosity;
                __Vfunc_uvm_report_enabled__568__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__568__severity;
                __Vfunc_uvm_report_enabled__568__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__569__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__570__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_error__573__verbosity;
                __Vtask_uvm_report_error__573__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_error__573__line;
                __Vtask_uvm_report_error__573__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_error__573__report_enabled_checked;
                __Vtask_uvm_report_error__573__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__574__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__575__Vfuncout;
                IData/*31:0*/ __Vfunc_uvm_report_enabled__582__verbosity;
                __Vfunc_uvm_report_enabled__582__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__582__severity;
                __Vfunc_uvm_report_enabled__582__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__583__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__584__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_info__593__verbosity;
                __Vtask_uvm_report_info__593__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_info__593__line;
                __Vtask_uvm_report_info__593__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_info__593__report_enabled_checked;
                __Vtask_uvm_report_info__593__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__594__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__595__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_16__get_n_bits;
                IData/*31:0*/ __VlefCall_15__get_n_bits;
                IData/*31:0*/ __VlefCall_14__get_lsb_pos;
                IData/*31:0*/ __VlefCall_13__get_n_bits;
                IData/*31:0*/ __VlefCall_12__get_lsb_pos;
                std::string __VlefCall_11__get_full_name;
                std::string __VlefCall_10__get_name;
                IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_8__get_lsb_pos;
                IData/*31:0*/ __VlefCall_7__get_lsb_pos;
                IData/*31:0*/ __VlefCall_6__get_n_bits;
                IData/*31:0*/ __VlefCall_5__get_compare;
                std::string __VlefCall_4__get_full_name;
                IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
                IData/*31:0*/ __VlefCall_2__get_lsb_pos;
                IData/*31:0*/ __VlefCall_1__get_n_bits;
                IData/*31:0*/ __VlefCall_0__get_compare;
                IData/*31:0*/ unnamedblk377__DOT__i;
                unnamedblk377__DOT__i = 0;
                IData/*31:0*/ unnamedblk377__DOT__i__Vloopsize;
                unnamedblk377__DOT__i__Vloopsize = 0;
                std::string unnamedblk377__DOT__unnamedblk378__DOT__acc;
                IData/*31:0*/ unnamedblk379__DOT__i;
                unnamedblk379__DOT__i = 0;
                IData/*31:0*/ unnamedblk379__DOT__i__Vloopsize;
                unnamedblk379__DOT__i__Vloopsize = 0;
                std::string unnamedblk379__DOT__unnamedblk380__DOT__acc;
                QData/*63:0*/ unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__mask;
                QData/*63:0*/ unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__val;
                QData/*63:0*/ unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__exp;
                QData/*63:0*/ dc;
                {
                    do_check__Vfuncrtn = 0U;
                    dc = 0ULL;
                    unnamedblk377__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk377__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk377__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk377__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2885)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk377__DOT__unnamedblk378__DOT__acc);
                        unnamedblk377__DOT__unnamedblk378__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk377__DOT__unnamedblk378__DOT__acc,0U,1U);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk377__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2887)
                                                        ->__VnoInFunc_get_compare(vlSymsp, __VlefCall_0__get_compare);
                        if (((0U == __VlefCall_0__get_compare) 
                             || ("WO"s == unnamedblk377__DOT__unnamedblk378__DOT__acc))) {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk377__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2889)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_1__get_n_bits);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk377__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2890)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_2__get_lsb_pos);
                            dc = (dc | VL_SHIFTL_QQI(64,64,32, 
                                                     (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_1__get_n_bits) 
                                                      - 1ULL), __VlefCall_2__get_lsb_pos));
                        }
                        if ((unnamedblk377__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk377__DOT__i = 
                                ((IData)(1U) + unnamedblk377__DOT__i);
                        }
                    }
                    if (((actual | dc) == (expected 
                                           | dc))) {
                        do_check__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                    this->__Vfunc_uvm_report_enabled__568__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__568__severity = 2U;
                    __Vfunc_uvm_report_enabled__568__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__569__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__569__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__570__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__570__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__568__verbosity, (IData)(__Vfunc_uvm_report_enabled__568__severity), this->__Vfunc_uvm_report_enabled__568__id, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        __Vtask_uvm_report_error__573__report_enabled_checked = 1U;
                        this->__Vtask_uvm_report_error__573__context_name = ""s;
                        __Vtask_uvm_report_error__573__line = 0x00000b51U;
                        this->__Vtask_uvm_report_error__573__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                        __Vtask_uvm_report_error__573__verbosity = 0U;
                        VL_SFORMAT_NX(this->__Vtask_uvm_report_error__573__message
                                      ,"Register \"%s\" value read from DUT (0x%h) does not match mirrored value (0x%h)",3
                                      , 'S',&(__VlefCall_4__get_full_name)
                                      , '#',64,actual
                                      , '#',64,expected);
                        this->__Vtask_uvm_report_error__573__id = "RegModel"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__574__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__574__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 219)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__575__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__575__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 220)
                                                        ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, this->__Vtask_uvm_report_error__573__id, this->__Vtask_uvm_report_error__573__message, __Vtask_uvm_report_error__573__verbosity, this->__Vtask_uvm_report_error__573__filename, __Vtask_uvm_report_error__573__line, this->__Vtask_uvm_report_error__573__context_name, (IData)(__Vtask_uvm_report_error__573__report_enabled_checked));
                    }
                    unnamedblk379__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk379__DOT__i, this->__PVT__m_fields.size())) {
                        unnamedblk379__DOT__i__Vloopsize 
                            = this->__PVT__m_fields.size();
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2900)
                                                        ->__VnoInFunc_get_access(vlProcess, vlSymsp, map, unnamedblk379__DOT__unnamedblk380__DOT__acc);
                        unnamedblk379__DOT__unnamedblk380__DOT__acc 
                            = VL_SUBSTR_N(unnamedblk379__DOT__unnamedblk380__DOT__acc,0U,1U);
                        VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2902)
                                                        ->__VnoInFunc_get_compare(vlSymsp, __VlefCall_5__get_compare);
                        if ((1U & (~ ((0U == __VlefCall_5__get_compare) 
                                      || ("WO"s == unnamedblk379__DOT__unnamedblk380__DOT__acc))))) {
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2904)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_6__get_n_bits);
                            unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__mask 
                                = (VL_SHIFTL_QQI(64,64,32, 1ULL, __VlefCall_6__get_n_bits) 
                                   - 1ULL);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2905)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_7__get_lsb_pos);
                            unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__val 
                                = (VL_SHIFTR_QQI(64,64,32, actual, __VlefCall_7__get_lsb_pos) 
                                   & unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__mask);
                            VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2906)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_8__get_lsb_pos);
                            unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__exp 
                                = (VL_SHIFTR_QQI(64,64,32, expected, __VlefCall_8__get_lsb_pos) 
                                   & unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__mask);
                            if ((unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__val 
                                 != unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__exp)) {
                                this->__Vfunc_uvm_report_enabled__582__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__582__severity = 0U;
                                __Vfunc_uvm_report_enabled__582__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__583__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__583__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__584__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__584__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__582__verbosity, (IData)(__Vfunc_uvm_report_enabled__582__severity), this->__Vfunc_uvm_report_enabled__582__id, __VlefCall_9__uvm_report_enabled);
                                if ((0U != __VlefCall_9__uvm_report_enabled)) {
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_10__get_name);
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_12__get_lsb_pos);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_13__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_lsb_pos(vlSymsp, __VlefCall_14__get_lsb_pos);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_15__get_n_bits);
                                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk379__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 2916)
                                                        ->__VnoInFunc_get_n_bits(vlSymsp, __VlefCall_16__get_n_bits);
                                    __Vtask_uvm_report_info__593__report_enabled_checked = 1U;
                                    this->__Vtask_uvm_report_info__593__context_name = ""s;
                                    __Vtask_uvm_report_info__593__line = 0x00000b64U;
                                    this->__Vtask_uvm_report_info__593__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                                    __Vtask_uvm_report_info__593__verbosity = 0U;
                                    VL_SFORMAT_NX(this->__Vtask_uvm_report_info__593__message
                                                  ,"Field %s (%s[%0d:%0d]) mismatch read=%0d'h%0h mirrored=%0d'h%0h ",8
                                                  , 'S',&(__VlefCall_10__get_name)
                                                  , 'S',&(__VlefCall_11__get_full_name)
                                                  , '#',32,
                                                  ((__VlefCall_12__get_lsb_pos 
                                                    + __VlefCall_13__get_n_bits) 
                                                   - (IData)(1U))
                                                  , '#',32,__VlefCall_14__get_lsb_pos
                                                  , '#',32,__VlefCall_15__get_n_bits
                                                  , '#',64,unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__val
                                                  , '#',32,__VlefCall_16__get_n_bits
                                                  , '#',64,unnamedblk379__DOT__unnamedblk380__DOT__unnamedblk381__DOT__exp);
                                    this->__Vtask_uvm_report_info__593__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__594__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs 
                                        = __Vfunc_get__594__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 183)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__595__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top 
                                        = __Vtask_get_root__595__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_info__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 184)
                                                        ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, this->__Vtask_uvm_report_info__593__id, this->__Vtask_uvm_report_info__593__message, __Vtask_uvm_report_info__593__verbosity, this->__Vtask_uvm_report_info__593__filename, __Vtask_uvm_report_info__593__line, this->__Vtask_uvm_report_info__593__context_name, (IData)(__Vtask_uvm_report_info__593__report_enabled_checked));
                                }
                            }
                        }
                        if ((unnamedblk379__DOT__i__Vloopsize 
                             <= this->__PVT__m_fields.size())) {
                            unnamedblk379__DOT__i = 
                                ((IData)(1U) + unnamedblk379__DOT__i);
                        }
                    }
                    do_check__Vfuncrtn = 0U;
                    __Vlabel0: ;
                }
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_mirror\n"); );
                // Locals
                IData/*31:0*/ __Vtask_XreadX__604__status;
                __Vtask_XreadX__604__status = 0;
                QData/*63:0*/ __Vtask_XreadX__604__value;
                __Vtask_XreadX__604__value = 0;
                CData/*0:0*/ __Vtask_do_check__606__Vfuncout;
                __Vtask_do_check__606__Vfuncout = 0;
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                CData/*0:0*/ __VlefCall_0__has_hdl_path;
                QData/*63:0*/ v;
                QData/*63:0*/ exp;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_backdoor> bkdr;
                {
                    status = 0U;
                    v = 0ULL;
                    exp = 0ULL;
                    this->__VnoInFunc_get_backdoor(vlSymsp, 1U, bkdr);
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
                    this->__PVT__m_fname = fname;
                    this->__PVT__m_lineno = lineno;
                    if ((3U == path)) {
                        VL_NULL_CHECK(this->__PVT__m_parent, "../../uvm/distrib/src/reg/uvm_reg.svh", 2946)
                                                        ->__VnoInFunc_get_default_path(vlSymsp, path);
                    }
                    __VlefCall_0__has_hdl_path = (1U 
                                                  == path);
                    if (__VlefCall_0__has_hdl_path) {
                        __VlefCall_0__has_hdl_path 
                            = (VlNull{} != bkdr);
                        if ((1U & (~ (IData)(__VlefCall_0__has_hdl_path)))) {
                            this->__VnoInFunc_has_hdl_path(vlSymsp, ""s, __VlefCall_0__has_hdl_path);
                        }
                    }
                    if (__VlefCall_0__has_hdl_path) {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_map__Vclpkg.__VnoInFunc_backdoor(vlProcess, vlSymsp, map);
                    } else {
                        this->__VnoInFunc_get_local_map(vlProcess, vlSymsp, map, "read()"s, map);
                    }
                    if ((VlNull{} == map)) {
                        goto __Vlabel0;
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_get_mirrored_value(vlSymsp, ""s, 0U, exp);
                    }
                    co_await this->__VnoInFunc_XreadX(vlProcess, vlSymsp, __Vtask_XreadX__604__status, __Vtask_XreadX__604__value, path, map, parent, prior, extension, fname, lineno);
                    status = __Vtask_XreadX__604__status;
                    v = __Vtask_XreadX__604__value;
                    if ((1U == status)) {
                        co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                        goto __Vlabel0;
                    }
                    if ((1U == check)) {
                        this->__VnoInFunc_do_check(vlProcess, vlSymsp, exp, v, map, __Vtask_do_check__606__Vfuncout);
                    }
                    co_await this->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
                    __Vlabel0: ;
                }
                co_return;
            }

            VlCoroutine Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_XatomicX\n"); );
                // Locals
                IData/*31:0*/ __Vtask_try_get__610__Vfuncout;
                __Vtask_try_get__610__Vfuncout = 0;
                // Body
                VlProcess::currentp(vlProcess.get());
                VL_KEEP_THIS;
                VlClassRef<Vhello_uvm_std__03a__03aprocess> m_reg_process;
                {
                    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, m_reg_process);
                    if (on) {
                        if ((m_reg_process == this->__PVT__m_process)) {
                            goto __Vlabel0;
                        }
                        co_await VL_NULL_CHECK(this->__PVT__m_atomic, "../../uvm/distrib/src/reg/uvm_reg.svh", 2982)
                                                        ->__VnoInFunc_get(vlProcess, vlSymsp, 1U);
                        this->__PVT__m_process = m_reg_process;
                    } else {
                        VL_NULL_CHECK(this->__PVT__m_atomic, "../../uvm/distrib/src/reg/uvm_reg.svh", 2987)
                                                        ->__VnoInFunc_try_get(vlSymsp, 1U, __Vtask_try_get__610__Vfuncout);
                        VL_NULL_CHECK(this->__PVT__m_atomic, "../../uvm/distrib/src/reg/uvm_reg.svh", 2988)
                                                        ->__VnoInFunc_put(vlSymsp, 1U);
                        this->__PVT__m_process = VlNull{};
                    }
                    __Vlabel0: ;
                }
                co_return;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_convert2string\n"); );
                // Locals
                std::string __Vtemp_1;
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_6__convert2string;
                IData/*31:0*/ __VlefCall_5__get_n_bytes;
                std::string __VlefCall_4__get_full_name;
                QData/*63:0*/ __VlefCall_3__get_base_addr;
                QData/*63:0*/ __VlefCall_2__get;
                IData/*31:0*/ __VlefCall_1__get_n_bytes;
                std::string __VlefCall_0__get_full_name;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk382__DOT__map;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk382__DOT__map__Vnext;
                CData/*0:0*/ unnamedblk382__DOT__map__Vmore;
                unnamedblk382__DOT__map__Vmore = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk382__DOT__unnamedblk383__DOT__parent_map;
                IData/*31:0*/ unnamedblk382__DOT__unnamedblk383__DOT__offset;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_map> unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map;
                IData/*31:0*/ unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__unnamedblk385__DOT__e;
                IData/*31:0*/ unnamedblk386__DOT__i;
                unnamedblk386__DOT__i = 0;
                IData/*31:0*/ unnamedblk386__DOT__i__Vloopsize;
                unnamedblk386__DOT__i__Vloopsize = 0;
                convert2string__Vfuncrtn = ""s;
                std::string res_str;
                std::string prefix;
                res_str = ""s;
                prefix = ""s;
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_get_n_bytes(vlSymsp, __VlefCall_1__get_n_bytes);
                this->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __VlefCall_2__get);
                VL_SFORMAT_NX(convert2string__Vfuncrtn
                              ,"Register %s -- %0d bytes, mirror value:'h%h",3
                              , 'S',&(__VlefCall_0__get_full_name)
                              , '#',32,__VlefCall_1__get_n_bytes
                              , '#',64,__VlefCall_2__get);
                convert2string__Vfuncrtn = ((0U == this->__PVT__m_maps.size())
                                             ? VL_CONCATN_NNN(convert2string__Vfuncrtn, "  (unmapped)\n"s)
                                             : VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s));
                unnamedblk382__DOT__map__Vmore = (0U 
                                                  != this->__PVT__m_maps.first(unnamedblk382__DOT__map__Vnext));
                while (unnamedblk382__DOT__map__Vmore) {
                    unnamedblk382__DOT__map = unnamedblk382__DOT__map__Vnext;
                    unnamedblk382__DOT__map__Vmore 
                        = (0U != this->__PVT__m_maps.next(unnamedblk382__DOT__map__Vnext));
                    unnamedblk382__DOT__unnamedblk383__DOT__parent_map 
                        = unnamedblk382__DOT__map;
                    unnamedblk382__DOT__unnamedblk383__DOT__offset = 0U;
                    while ((VlNull{} != unnamedblk382__DOT__unnamedblk383__DOT__parent_map)) {
                        unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map 
                            = unnamedblk382__DOT__unnamedblk383__DOT__parent_map;
                        VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3019)
                                                        ->__VnoInFunc_get_parent_map(vlSymsp, unnamedblk382__DOT__unnamedblk383__DOT__parent_map);
                        if ((VlNull{} == unnamedblk382__DOT__unnamedblk383__DOT__parent_map)) {
                            VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3020)
                                                        ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __VlefCall_3__get_base_addr);
                        } else {
                            VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__parent_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3021)
                                                        ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, __VlefCall_3__get_base_addr);
                        }
                        unnamedblk382__DOT__unnamedblk383__DOT__offset 
                            = (IData)(__VlefCall_3__get_base_addr);
                        prefix = VL_CONCATN_NNN(prefix, "  "s);
                        VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3024)
                                                        ->__VnoInFunc_get_endian(vlSymsp, 1U, unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__unnamedblk385__DOT__e);
                        VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3027)
                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        VL_NULL_CHECK(unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__this_map, "../../uvm/distrib/src/reg/uvm_reg.svh", 3027)
                                                        ->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __VlefCall_5__get_n_bytes);
                        __Vtemp_1 = Vhello_uvm___024unit::__Venumtab_enum_name79
                            [(7U & unnamedblk382__DOT__unnamedblk383__DOT__unnamedblk384__DOT__unnamedblk385__DOT__e)];
                        VL_SFORMAT_NX(convert2string__Vfuncrtn
                                      ,"%sMapped in '%s' -- %d bytes, %s, offset 'h%0h\n",5
                                      , 'S',&(prefix)
                                      , 'S',&(__VlefCall_4__get_full_name)
                                      , '#',32,__VlefCall_5__get_n_bytes
                                      , 'S',&(__Vtemp_1)
                                      , '#',32,unnamedblk382__DOT__unnamedblk383__DOT__offset);
                    }
                }
                prefix = "  "s;
                unnamedblk386__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk386__DOT__i, this->__PVT__m_fields.size())) {
                    unnamedblk386__DOT__i__Vloopsize 
                        = this->__PVT__m_fields.size();
                    VL_NULL_CHECK(this->__PVT__m_fields.at(unnamedblk386__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 3035)
                                                        ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_6__convert2string);
                    VL_SFORMAT_NX(convert2string__Vfuncrtn
                                  ,"%s\n%s",2, 'S',&(convert2string__Vfuncrtn)
                                  , 'S',&(__VlefCall_6__convert2string));
                    if ((unnamedblk386__DOT__i__Vloopsize 
                         <= this->__PVT__m_fields.size())) {
                        unnamedblk386__DOT__i = ((IData)(1U) 
                                                 + unnamedblk386__DOT__i);
                    }
                }
                if (this->__PVT__m_read_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(res_str,"%s:%0d ",2
                                      , 'S',&(this->__PVT__m_fname)
                                      , '~',32,this->__PVT__m_lineno);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing read method"s);
                }
                if (this->__PVT__m_write_in_progress) {
                    if (((""s != this->__PVT__m_fname) 
                         & (0U != this->__PVT__m_lineno))) {
                        VL_SFORMAT_NX(res_str,"%s:%0d ",2
                                      , 'S',&(this->__PVT__m_fname)
                                      , '~',32,this->__PVT__m_lineno);
                    }
                    convert2string__Vfuncrtn = VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN(convert2string__Vfuncrtn, "\n"s), res_str), "currently executing write method"s);
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_printer> printer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_print\n"); );
                // Body
                VlProcess::currentp(vlProcess.get());
                std::string __VlefCall_2__convert2string;
                std::string __VlefCall_1__get_type_name;
                std::string __VlefCall_0__get_name;
                IData/*31:0*/ unnamedblk387__DOT__i;
                unnamedblk387__DOT__i = 0;
                IData/*31:0*/ unnamedblk387__DOT__i__Vloopsize;
                unnamedblk387__DOT__i__Vloopsize = 0;
                VlQueue<VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_reg_field>> f;
                f.clear();
                Vhello_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
                this->__VnoInFunc_get_fields(vlSymsp, f);
                unnamedblk387__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk387__DOT__i, f.size())) {
                    unnamedblk387__DOT__i__Vloopsize 
                        = f.size();
                    VL_NULL_CHECK(f.at(unnamedblk387__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 3060)
                                                        ->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
                    VL_NULL_CHECK(f.at(unnamedblk387__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 3060)
                                                        ->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                    VL_NULL_CHECK(f.at(unnamedblk387__DOT__i), "../../uvm/distrib/src/reg/uvm_reg.svh", 3060)
                                                        ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
                    VL_NULL_CHECK(printer, "../../uvm/distrib/src/reg/uvm_reg.svh", 3060)
                                                        ->__VnoInFunc_print_generic(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_0__get_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_type_name), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_2__convert2string), 0x2eU);
                    if ((unnamedblk387__DOT__i__Vloopsize 
                         <= f.size())) {
                        unnamedblk387__DOT__i = ((IData)(1U) 
                                                 + unnamedblk387__DOT__i);
                    }
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_clone\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__628__verbosity;
                __Vfunc_uvm_report_enabled__628__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__628__severity;
                __Vfunc_uvm_report_enabled__628__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__629__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__630__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__632__verbosity;
                __Vtask_uvm_report_fatal__632__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__632__line;
                __Vtask_uvm_report_fatal__632__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__632__report_enabled_checked;
                __Vtask_uvm_report_fatal__632__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__633__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__634__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__628__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__628__severity = 3U;
                __Vfunc_uvm_report_enabled__628__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__629__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__629__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__630__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__630__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__628__verbosity, (IData)(__Vfunc_uvm_report_enabled__628__severity), this->__Vfunc_uvm_report_enabled__628__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__632__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__632__context_name = ""s;
                    __Vtask_uvm_report_fatal__632__line = 0x00000bfcU;
                    this->__Vtask_uvm_report_fatal__632__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_fatal__632__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__632__message = "RegModel registers cannot be cloned"s;
                    this->__Vtask_uvm_report_fatal__632__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__633__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__633__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__634__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__634__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__632__id, this->__Vtask_uvm_report_fatal__632__message, __Vtask_uvm_report_fatal__632__verbosity, this->__Vtask_uvm_report_fatal__632__filename, __Vtask_uvm_report_fatal__632__line, this->__Vtask_uvm_report_fatal__632__context_name, (IData)(__Vtask_uvm_report_fatal__632__report_enabled_checked));
                }
                clone__Vfuncrtn = VlNull{};
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_copy\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__636__verbosity;
                __Vfunc_uvm_report_enabled__636__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__636__severity;
                __Vfunc_uvm_report_enabled__636__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__637__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__638__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_fatal__640__verbosity;
                __Vtask_uvm_report_fatal__640__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_fatal__640__line;
                __Vtask_uvm_report_fatal__640__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_fatal__640__report_enabled_checked;
                __Vtask_uvm_report_fatal__640__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__641__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__642__Vfuncout;
                // Body
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__636__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__636__severity = 3U;
                __Vfunc_uvm_report_enabled__636__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__637__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__637__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__638__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__638__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__636__verbosity, (IData)(__Vfunc_uvm_report_enabled__636__severity), this->__Vfunc_uvm_report_enabled__636__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_fatal__640__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_fatal__640__context_name = ""s;
                    __Vtask_uvm_report_fatal__640__line = 0x00000c03U;
                    this->__Vtask_uvm_report_fatal__640__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_fatal__640__verbosity = 0U;
                    this->__Vtask_uvm_report_fatal__640__message = "RegModel registers cannot be copied"s;
                    this->__Vtask_uvm_report_fatal__640__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__641__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs 
                        = __Vfunc_get__641__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 246)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__642__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top 
                        = __Vtask_get_root__642__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_fatal__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 247)
                                                        ->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, this->__Vtask_uvm_report_fatal__640__id, this->__Vtask_uvm_report_fatal__640__message, __Vtask_uvm_report_fatal__640__verbosity, this->__Vtask_uvm_report_fatal__640__filename, __Vtask_uvm_report_fatal__640__line, this->__Vtask_uvm_report_fatal__640__context_name, (IData)(__Vtask_uvm_report_fatal__640__report_enabled_checked));
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_compare\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__644__verbosity;
                __Vfunc_uvm_report_enabled__644__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__644__severity;
                __Vfunc_uvm_report_enabled__644__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__645__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__646__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__648__verbosity;
                __Vtask_uvm_report_warning__648__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__648__line;
                __Vtask_uvm_report_warning__648__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__648__report_enabled_checked;
                __Vtask_uvm_report_warning__648__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__649__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__650__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                do_compare__Vfuncrtn = 0U;
                this->__Vfunc_uvm_report_enabled__644__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__644__severity = 1U;
                __Vfunc_uvm_report_enabled__644__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__645__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__645__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__646__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__646__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__644__verbosity, (IData)(__Vfunc_uvm_report_enabled__644__severity), this->__Vfunc_uvm_report_enabled__644__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__648__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__648__context_name = ""s;
                    __Vtask_uvm_report_warning__648__line = 0x00000c0bU;
                    this->__Vtask_uvm_report_warning__648__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__648__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__648__message = "RegModel registers cannot be compared"s;
                    this->__Vtask_uvm_report_warning__648__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__649__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__649__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__650__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__650__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__648__id, this->__Vtask_uvm_report_warning__648__message, __Vtask_uvm_report_warning__648__verbosity, this->__Vtask_uvm_report_warning__648__filename, __Vtask_uvm_report_warning__648__line, this->__Vtask_uvm_report_warning__648__context_name, (IData)(__Vtask_uvm_report_warning__648__report_enabled_checked));
                }
                do_compare__Vfuncrtn = 0U;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_pack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__652__verbosity;
                __Vfunc_uvm_report_enabled__652__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__652__severity;
                __Vfunc_uvm_report_enabled__652__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__653__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__654__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__656__verbosity;
                __Vtask_uvm_report_warning__656__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__656__line;
                __Vtask_uvm_report_warning__656__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__656__report_enabled_checked;
                __Vtask_uvm_report_warning__656__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__657__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__658__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__652__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__652__severity = 1U;
                __Vfunc_uvm_report_enabled__652__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__653__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__653__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__654__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__654__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__652__verbosity, (IData)(__Vfunc_uvm_report_enabled__652__severity), this->__Vfunc_uvm_report_enabled__652__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__656__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__656__context_name = ""s;
                    __Vtask_uvm_report_warning__656__line = 0x00000c13U;
                    this->__Vtask_uvm_report_warning__656__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__656__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__656__message = "RegModel registers cannot be packed"s;
                    this->__Vtask_uvm_report_warning__656__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__657__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__657__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__658__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__658__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__656__id, this->__Vtask_uvm_report_warning__656__message, __Vtask_uvm_report_warning__656__verbosity, this->__Vtask_uvm_report_warning__656__filename, __Vtask_uvm_report_warning__656__line, this->__Vtask_uvm_report_warning__656__context_name, (IData)(__Vtask_uvm_report_warning__656__report_enabled_checked));
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack(Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_packer> packer) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_do_unpack\n"); );
                // Locals
                IData/*31:0*/ __Vfunc_uvm_report_enabled__660__verbosity;
                __Vfunc_uvm_report_enabled__660__verbosity = 0;
                CData/*1:0*/ __Vfunc_uvm_report_enabled__660__severity;
                __Vfunc_uvm_report_enabled__660__severity = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__661__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__662__Vfuncout;
                IData/*31:0*/ __Vtask_uvm_report_warning__664__verbosity;
                __Vtask_uvm_report_warning__664__verbosity = 0;
                IData/*31:0*/ __Vtask_uvm_report_warning__664__line;
                __Vtask_uvm_report_warning__664__line = 0;
                CData/*0:0*/ __Vtask_uvm_report_warning__664__report_enabled_checked;
                __Vtask_uvm_report_warning__664__report_enabled_checked = 0;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__665__Vfuncout;
                VlClassRef<Vhello_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__666__Vfuncout;
                // Body
                VlProcessRef vlProcess = std::make_shared<VlProcess>();
                VlProcess::currentp(vlProcess.get());
                IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
                this->__Vfunc_uvm_report_enabled__660__id = "RegModel"s;
                __Vfunc_uvm_report_enabled__660__severity = 1U;
                __Vfunc_uvm_report_enabled__660__verbosity = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__661__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs 
                    = __Vfunc_get__661__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 138)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__662__Vfuncout);
                vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top 
                    = __Vtask_get_root__662__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.uvm_report_enabled__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 139)
                                                        ->__VnoInFunc_uvm_report_enabled(vlSymsp, __Vfunc_uvm_report_enabled__660__verbosity, (IData)(__Vfunc_uvm_report_enabled__660__severity), this->__Vfunc_uvm_report_enabled__660__id, __VlefCall_0__uvm_report_enabled);
                if ((0U != __VlefCall_0__uvm_report_enabled)) {
                    __Vtask_uvm_report_warning__664__report_enabled_checked = 1U;
                    this->__Vtask_uvm_report_warning__664__context_name = ""s;
                    __Vtask_uvm_report_warning__664__line = 0x00000c1aU;
                    this->__Vtask_uvm_report_warning__664__filename = "../../uvm/distrib/src/reg/uvm_reg.svh"s;
                    __Vtask_uvm_report_warning__664__verbosity = 0U;
                    this->__Vtask_uvm_report_warning__664__message = "RegModel registers cannot be unpacked"s;
                    this->__Vtask_uvm_report_warning__664__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__665__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__665__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "../../uvm/distrib/src/base/uvm_globals.svh", 201)
                                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__666__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__666__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "../../uvm/distrib/src/base/uvm_globals.svh", 202)
                                                        ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__664__id, this->__Vtask_uvm_report_warning__664__message, __Vtask_uvm_report_warning__664__verbosity, this->__Vtask_uvm_report_warning__664__filename, __Vtask_uvm_report_warning__664__line, this->__Vtask_uvm_report_warning__664__context_name, (IData)(__Vtask_uvm_report_warning__664__report_enabled_checked));
                }
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc_randomize\n"); );
                // Body
                IData/*31:0*/ __VlefCall_0____VBasicRand;
                Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
                this->__VnoInFunc___Vsetup_constraints(vlSymsp);
                randomize__Vfuncrtn = Vhello_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
                this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
                randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                       & __VlefCall_0____VBasicRand);
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints(Vhello_uvm__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc___Vsetup_constraints\n"); );
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::__VnoInFunc___VBasicRand\n"); );
                // Body
                __VBasicRand__Vfuncrtn = 1U;
            }

            void Vhello_uvm_uvm_pkg__03a__03auvm_reg::_ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp) {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::_ctor_var_reset\n"); );
                // Body
                (void)vlSymsp;  // Prevent unused variable warning
                __PVT__m_locked = 0;
                __PVT__m_n_bits = 0;
                __PVT__m_n_used_bits = 0;
                __PVT__m_maps.atDefault() = 0;
                __PVT__m_has_cover = 0;
                __PVT__m_cover_on = 0;
                __PVT__m_lineno = 0;
                __PVT__m_read_in_progress = 0;
                __PVT__m_write_in_progress = 0;
                __PVT__m_update_in_progress = 0;
                __PVT__m_is_busy = 0;
                __PVT__m_is_locked_by_field = 0;
            }

            Vhello_uvm_uvm_pkg__03a__03auvm_reg::~Vhello_uvm_uvm_pkg__03a__03auvm_reg() {
                VL_DEBUG_IF(VL_DBG_MSGF("+            Vhello_uvm_uvm_pkg__03a__03auvm_reg::~\n"); );
            }
