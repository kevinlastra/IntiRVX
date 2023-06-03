
__stack_size = 0x2000;


ENTRY (_start)


SECTIONS
{
    . = 0x10000;
    .text : 
    { 
      *(.text)
      KEEP(*(.stack))
    }
    . = 0x20000;
    .data : 
    { 
      *(.data*) 
    }
    .bss (NOLOAD) : 
    { 
      *(.bss*)
      *(COMMON) 
    }
    .stack (NOLOAD) : 
    {
      . = ALIGN(8);
      __stack_top = .;
      . = . + __stack_size;
      . = ALIGN(8);
    }
}