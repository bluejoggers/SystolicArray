// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm.h for the primary calling header

#include "Vhello_uvm__pch.h"

void Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_from_name(Vhello_uvm__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_from_name\n"); );
    // Body
    from_name__Vfuncrtn = 0U;
    if ((0U == this->__PVT__map.size())) {
        {
            // Inlined CFunc: __VnoInFunc_m_init_map
            this->__PVT__map.at("UVM_PASSIVE"s) = 0U;
            this->__PVT__map.at("UVM_ACTIVE"s) = 1U;
        }
    }
    if (this->__PVT__map.exists(name)) {
        value = this->__PVT__map.at(name);
        from_name__Vfuncrtn = 1U;
    } else {
        from_name__Vfuncrtn = 0U;
    }
}

void Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_m_init_map(Vhello_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vhello_uvm_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg::__VnoInFunc_m_init_map\n"); );
    // Body
    this->__PVT__map.at("UVM_PASSIVE"s) = 0U;
    this->__PVT__map.at("UVM_ACTIVE"s) = 1U;
}
