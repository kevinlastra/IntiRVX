
TB=tb_cpu.sv
TB-CC=tb_cpu.cpp
VTB=Vtb_cpu

REMOVE_LINT=-Wno-STMTDLY -Wno-UNUSED -Wno-ASSIGNIN
FLAGS= -Wall --trace --exe --build ${REMOVE_LINT} --cc
SRC= -y ../../rtl/cpu \
	 -y ../../rtl/clock \
	 -y ../../rtl/memory \
	 -y ../../rtl/utils \
	 -y .

cpu:
	verilator ${FLAGS} ${SRC} ${TB-CC} ${TB}

run:
	./obj_dir/${VTB}

clean:
	rm -rf obj_dir *.vcd