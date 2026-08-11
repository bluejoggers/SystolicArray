// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VP8.h for the primary calling header

#ifndef VERILATED_VP8_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VP8_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class VP8_std__03a__03aprocess;


class VP8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VP8_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    VP8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VP8_std__03a__03aprocess__Vclpkg();
    ~VP8_std__03a__03aprocess__Vclpkg();
    void ctor(VP8__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VP8_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(VP8__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VP8_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, VP8__Syms* __restrict vlSymsp, VlClassRef<VP8_std__03a__03aprocess> &self__Vfuncrtn);
};


class VP8__Syms;

class VP8_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new VP8_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VP8__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VP8__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VP8__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VP8__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VP8__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VP8__Syms* __restrict vlSymsp);
  public:
    VP8_std__03a__03aprocess() = default;
    void init(VP8__Syms* __restrict vlSymsp);
    ~VP8_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<VP8_std__03a__03aprocess>::operator==(const VlClassRef<VP8_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VP8_std__03a__03aprocess>::operator!=(const VlClassRef<VP8_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<VP8_std__03a__03aprocess>::operator<(const VlClassRef<VP8_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
