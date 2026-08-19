// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuvm_pkg.h for the primary calling header

#ifndef VERILATED_VUVM_PKG_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VUVM_PKG_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuvm_pkg_std__03a__03aprocess;


class Vuvm_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuvm_pkg_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vuvm_pkg__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuvm_pkg_std__03a__03aprocess__Vclpkg();
    ~Vuvm_pkg_std__03a__03aprocess__Vclpkg();
    void ctor(Vuvm_pkg__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vuvm_pkg_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vuvm_pkg__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuvm_pkg_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vuvm_pkg__Syms* __restrict vlSymsp, VlClassRef<Vuvm_pkg_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vuvm_pkg__Syms;

class Vuvm_pkg_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vuvm_pkg_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vuvm_pkg__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vuvm_pkg__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vuvm_pkg__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vuvm_pkg__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vuvm_pkg__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuvm_pkg__Syms* __restrict vlSymsp);
  public:
    Vuvm_pkg_std__03a__03aprocess() = default;
    void init(Vuvm_pkg__Syms* __restrict vlSymsp);
    ~Vuvm_pkg_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<Vuvm_pkg_std__03a__03aprocess>::operator==(const VlClassRef<Vuvm_pkg_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vuvm_pkg_std__03a__03aprocess>::operator!=(const VlClassRef<Vuvm_pkg_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vuvm_pkg_std__03a__03aprocess>::operator<(const VlClassRef<Vuvm_pkg_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
