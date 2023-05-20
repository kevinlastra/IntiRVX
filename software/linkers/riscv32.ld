
__stack_size = 0x2000;


ENTRY (__start)


SECTIONS
{
    . = 0x0;
    .text : 
    { 
      *(.text)
      KEEP(*(.stack))
    }
    . = 0x10000;
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