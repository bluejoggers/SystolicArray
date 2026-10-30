# Define your variables here so they are easy to change later
TOP = UVM_TPU
UVM_SRC = ../../uvm/distrib/src
RTL_SRC = ../RTL
MODULE ?= CSA
WAIVER_FILE = $(RTL_SRC)/lint_waivers.vlt

# The massive list of Verilator flags
FLAGS = --binary --top-module $(TOP) --timing --coverage-user -Wno-lint -Wno-COVERIGN -Wno-style -Wno-SYMRSVDWORD -Wno-IGNOREDRETURN -j 0 +define+UVM_NO_DPI -y $(RTL_SRC) +libext+.v+.sv

# Default target: Compiles the code
compile:
	verilator $(FLAGS) +incdir+$(UVM_SRC) $(UVM_SRC)/uvm_pkg.sv $(TOP).sv

# Compiles the code, then immediately runs the executable
run: compile
	./obj_dir/V$(TOP)

# Deletes the compiled files to give you a clean slate
clean:
	rm -rf obj_dir

#Linting

lint:
	verilator --lint-only -Wall $(WAIVER_FILE) -I$(RTL_SRC) -y $(RTL_SRC) +libext+.v -v $(RTL_SRC)/sram_acc_256x4_1rw1r.v -v $(RTL_SRC)/sram_ub_4096x8_1w1r.v $(RTL_SRC)/$(MODULE).v