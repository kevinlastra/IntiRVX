

PWD=$(shell pwd)

ELF=riscv64-unknown-elf-
GCC=${ELF}gcc
DUMP=${ELF}objdump
COPY=${ELF}objcopy

MARCH=rv32i
MABI=ilp32

TB=Vtb_cpu

FLAGS= -nostdlib -march=${MARCH} -mabi=${MABI} -T ../linkers/riscv32.ld -I/usr/include

TEXT_BASE_ADDRESSE=0x10000

%.riscv : %.o crt0.o
	$(MAKE) $*.dump
	@mv $< $@
	$(MAKE) $*.ihex
	@mv $*.ihex ihex 
	$(MAKE) $*.dhex
	@mv $*.dhex dhex
	../../build/sim/obj_dir/${TB}

crt0.o: 
	${GCC} -nostartfiles ${FLAGS} ../crt0/crt0.c -c

%.o : %.c
	${GCC} ${FLAGS} crt0.o $< -o $@

%.dump : %.o
	${DUMP} -d $< > $*.dump

%.ihex : %.riscv
	${COPY} -O verilog -j .text --change-section-address .text-${TEXT_BASE_ADDRESSE}  $< $@
%.dhex : %.riscv
	${COPY} -O verilog -j .data $< $@

clean:
	rm *.o *.riscv *.dump ihex dhex

