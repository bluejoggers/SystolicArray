// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VP10.h for the primary calling header

#include "VP10__pch.h"

void VP10_cover_tb__03a__03acg__Vclpkg___ctor_var_reset(VP10_cover_tb__03a__03acg__Vclpkg* vlSelf);

VP10_cover_tb__03a__03acg__Vclpkg::VP10_cover_tb__03a__03acg__Vclpkg() = default;
VP10_cover_tb__03a__03acg__Vclpkg::~VP10_cover_tb__03a__03acg__Vclpkg() = default;

void VP10_cover_tb__03a__03acg__Vclpkg::ctor(VP10__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    VP10_cover_tb__03a__03acg__Vclpkg___ctor_var_reset(this);
}

void VP10_cover_tb__03a__03acg__Vclpkg___configure_coverage(VP10_cover_tb__03a__03acg__Vclpkg* vlSelf, bool first);

void VP10_cover_tb__03a__03acg__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    VP10_cover_tb__03a__03acg__Vclpkg___configure_coverage(this, first);
}

void VP10_cover_tb__03a__03acg__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void VP10_cover_tb__03a__03acg__Vclpkg::__vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
    const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{vlNamep} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable && !localCounter) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier.c_str(),  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp,  (fsmVarp[0] ? "fsm_var" : ""), fsmVarp,  (fsmFromp[0] ? "fsm_from" : ""), fsmFromp,  (fsmTop[0] ? "fsm_to" : ""), fsmTop,  (fsmTagp[0] ? "fsm_tag" : ""), fsmTagp);
}

// Toggle Coverage
void VP10_cover_tb__03a__03acg__Vclpkg::__vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    int step = (end >= begin) ? 1 : -1;
    for (int i = begin; i != end + step; i += step) {
        for (int j = 0; j < 2; j++) {
            uint32_t* count32p = countp;
            static uint32_t fake_zero_count = 0;
            std::string fullhier = std::string{vlNamep} + hierp;
            if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
            std::string commentWithIndex = commentp;
            if (ranged) commentWithIndex += '[' + std::to_string(i) + ']';
            commentWithIndex += j ? ":0->1" : ":1->0";
            if (!enable && !localCounter) count32p = &fake_zero_count;
            *count32p = 0;
            VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
                "hier",fullhier.c_str(),  "page",pagep,  "comment",commentWithIndex.c_str(),  "", "");
            ++countp;
        }
    }
}
