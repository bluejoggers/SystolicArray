// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_uvm_v1.h for the primary calling header

#include "Vhello_uvm_v1__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vhello_uvm_v1___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> Vhello_uvm_v1___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> Vhello_uvm_v1___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> Vhello_uvm_v1___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*31:0*/, std::string> Vhello_uvm_v1___024unit::__Venumtab_enum_name65;
VlUnpacked<CData/*1:0*/, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> Vhello_uvm_v1___024unit::__Venumtab_enum_name35;
VlUnpacked<CData/*0:0*/, 2> Vhello_uvm_v1___024unit::__Venumtab_enum_valid19;
VlUnpacked<std::string, 2> Vhello_uvm_v1___024unit::__Venumtab_enum_name19;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name63;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name75;
VlUnpacked<std::string, 4> Vhello_uvm_v1___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 8> Vhello_uvm_v1___024unit::__Venumtab_enum_name79;
VlUnpacked<IData/*31:0*/, 4> Vhello_uvm_v1___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vhello_uvm_v1___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vhello_uvm_v1___024unit::__Venumvaltab_2;

void Vhello_uvm_v1___024unit___ctor_var_reset(Vhello_uvm_v1___024unit* vlSelf);

Vhello_uvm_v1___024unit::Vhello_uvm_v1___024unit() = default;
Vhello_uvm_v1___024unit::~Vhello_uvm_v1___024unit() = default;

void Vhello_uvm_v1___024unit::ctor(Vhello_uvm_v1__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vhello_uvm_v1___024unit___ctor_var_reset(this);
}

void Vhello_uvm_v1___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vhello_uvm_v1___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
