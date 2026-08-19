// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuvm_pkg.h for the primary calling header

#include "Vuvm_pkg__pch.h"
VlAssocArray<IData/*31:0*/, CData/*0:0*/> Vuvm_pkg___024unit::__Venumtab_enum_valid25;
VlAssocArray<IData/*31:0*/, std::string> Vuvm_pkg___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> Vuvm_pkg___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> Vuvm_pkg___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*31:0*/, std::string> Vuvm_pkg___024unit::__Venumtab_enum_name65;
VlUnpacked<CData/*1:0*/, 4> Vuvm_pkg___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 8> Vuvm_pkg___024unit::__Venumtab_enum_name35;
VlUnpacked<CData/*0:0*/, 2> Vuvm_pkg___024unit::__Venumtab_enum_valid19;
VlUnpacked<std::string, 2> Vuvm_pkg___024unit::__Venumtab_enum_name19;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name63;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name75;
VlUnpacked<std::string, 4> Vuvm_pkg___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 8> Vuvm_pkg___024unit::__Venumtab_enum_name79;
VlUnpacked<IData/*31:0*/, 4> Vuvm_pkg___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vuvm_pkg___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vuvm_pkg___024unit::__Venumvaltab_2;

void Vuvm_pkg___024unit___ctor_var_reset(Vuvm_pkg___024unit* vlSelf);

Vuvm_pkg___024unit::Vuvm_pkg___024unit() = default;
Vuvm_pkg___024unit::~Vuvm_pkg___024unit() = default;

void Vuvm_pkg___024unit::ctor(Vuvm_pkg__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vuvm_pkg___024unit___ctor_var_reset(this);
}

void Vuvm_pkg___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vuvm_pkg___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
