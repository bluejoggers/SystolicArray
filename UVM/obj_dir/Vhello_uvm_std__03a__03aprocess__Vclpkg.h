// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_uvm.h for the primary calling header

#ifndef VERILATED_VHELLO_UVM_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VHELLO_UVM_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vhello_uvm_std__03a__03aprocess;


class Vhello_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_uvm_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vhello_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhello_uvm_std__03a__03aprocess__Vclpkg();
    ~Vhello_uvm_std__03a__03aprocess__Vclpkg();
    void ctor(Vhello_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vhello_uvm_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vhello_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vhello_uvm_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vhello_uvm__Syms* __restrict vlSymsp, VlClassRef<Vhello_uvm_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vhello_uvm__Syms;

class Vhello_uvm_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vhello_uvm_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vhello_uvm__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vhello_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vhello_uvm__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vhello_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vhello_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vhello_uvm__Syms* __restrict vlSymsp);
  public:
    Vhello_uvm_std__03a__03aprocess() = default;
    void init(Vhello_uvm__Syms* __restrict vlSymsp);
    ~Vhello_uvm_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:211:21

template<> template<>
inline bool VlClassRef<Vhello_uvm_std__03a__03aprocess>::operator==(const VlClassRef<Vhello_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vhello_uvm_std__03a__03aprocess>::operator!=(const VlClassRef<Vhello_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vhello_uvm_std__03a__03aprocess>::operator<(const VlClassRef<Vhello_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
