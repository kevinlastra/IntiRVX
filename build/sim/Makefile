
TB=tb_cpu.sv
TB-CC=tb_cpu.cpp
VTB=Vtb_cpu

REMOVE_LINT=-Wno-STMTDLY -Wno-UNUSED
FLAGS= -Wall --trace --exe --build ${REMOVE_LINT} --cc
SRC= -y ../../rtl -y ../../rtl/clock -y ../../rtl/memory
PACKAGES= #-y ./system_config.sv -y ./CPU_config.sv

cpu:
	verilator ${PACKAGES} ${FLAGS} ${SRC}  ${TB-CC} ${TB}

run:
	./obj_dir/${VTB}

clean:
	rm -rf obj_dir