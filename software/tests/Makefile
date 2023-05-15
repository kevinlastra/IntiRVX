

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

COMPLIANCE_RV32I_SRC=\
										I-ADD-01.elf.ihex \
										I-ADDI-01.elf.ihex \
										I-AND-01.elf.ihex \
										I-ADD-01.elf.ihex \
										I-AUIPC-01.elf.ihex \
										I-BEQ-01.elf.ihex \
										I-BGE-01.elf.ihex \
										I-BGEU-01.elf.ihex \
										I-BLT-01.elf.ihex \
										I-BLTU-01.elf.ihex \
										I-BNE-01.elf.ihex \
										I-DELAY_SLOTS-01.elf.ihex \
										I-EBREAK-01.elf.ihex \
										I-ECALL-01.elf.ihex \
										I-ENDIANESS-01.elf.ihex \
										I-IO-01.elf.ihex \
										I-JAL-01.elf.ihex \
										I-JALR-01.elf.ihex \
										I-LB-01.elf.ihex \
										I-LBU-01.elf.ihex \
										I-LH-01.elf.ihex \
										I-LHU-01.elf.ihex \
										I-LUI-01.elf.ihex \
										I-LW-01.elf.ihex \
										I-MISALIGN_JMP-01.elf.ihex \
										I-MISALIGN_LDST-01.elf.ihex \
										I-NOP-01.elf.ihex \
										I-OR-01.elf.ihex \
										I-ORI-01.elf.ihex \
										I-RF_size-01.elf.ihex \
										I-RF_width-01.elf.ihex \
										I-RF_x0-01.elf.ihex \
										I-SB-01.elf.ihex \
										I-SH-01.elf.ihex \
										I-SLL-01.elf.ihex \
										I-SLLI-01.elf.ihex \
										I-SLT-01.elf.ihex \
										I-SLTI-01.elf.ihex \
										I-SLTIU-01.elf.ihex \
										I-SLTU-01.elf.ihex \
										I-SRA-01.elf.ihex \
										I-SRAI-01.elf.ihex \
										I-SRL-01.elf.ihex \
										I-SRLI-01.elf.ihex \
										I-SUB-01.elf.ihex \
										I-SW-01.elf.ihex \
										I-XOR-01.elf.ihex \
										I-XORI-01.elf.ihex 


setup_compliance:
	cd compliance && make all_variant

run_compliance:
	for i in $(COMPLIANCE_RV32I_SRC) ; do \
		../../build/sim/obj_dir/${TB}
	done


clean:
	rm -f *.o *.riscv *.dump ihex dhex *.vcd; \
	cd ./compliance; \
	make clean