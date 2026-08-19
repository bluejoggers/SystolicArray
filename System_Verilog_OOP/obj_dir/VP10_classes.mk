# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VP10.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  VP10 \
  VP10___024root__0 \
  VP10_cover_tb__0 \
  VP10_cover_tb__03a__03acg__Vclpkg__0 \
  VP10_std__03a__03asemaphore__Vclpkg__0 \
  VP10_std__03a__03aprocess__Vclpkg__0 \
  VP10__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  VP10___024root__Slow \
  VP10___024root__0__Slow \
  VP10_cover_tb__Slow \
  VP10_cover_tb__0__Slow \
  VP10_std__Slow \
  VP10_std__0__Slow \
  VP10_cover_tb__03a__03acg__Vclpkg__Slow \
  VP10_cover_tb__03a__03acg__Vclpkg__0__Slow \
  VP10_std__03a__03asemaphore__Vclpkg__Slow \
  VP10_std__03a__03asemaphore__Vclpkg__0__Slow \
  VP10_std__03a__03aprocess__Vclpkg__Slow \
  VP10_std__03a__03aprocess__Vclpkg__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  VP10__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  VP10__Syms__Slow \
  VP10__Trace__0__Slow \
  VP10__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_cov \
  verilated_covergroup \
  verilated_vcd_c \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
