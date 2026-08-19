# Define your variables here so they are easy to change later
TOP = UVM_regblock
UVM_SRC = ../../uvm/distrib/src

# The massive list of Verilator flags
FLAGS = --binary --top-module $(TOP) --timing -Wno-lint -Wno-COVERIGN -Wno-style -Wno-SYMRSVDWORD -Wno-IGNOREDRETURN -j 0 +define+UVM_NO_DPI

# Default target: Compiles the code
compile:
	verilator $(FLAGS) +incdir+$(UVM_SRC) $(UVM_SRC)/uvm_pkg.sv $(TOP).sv

# Compiles the code, then immediately runs the executable
run: compile
	./obj_dir/V$(TOP)

# Deletes the compiled files to give you a clean slate
clean:
	rm -rf obj_dir