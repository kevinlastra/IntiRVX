
__stack_size = 0x2000;


ENTRY (_start)


SECTIONS
{
    . = 0x10000;
    .text : 
    { 
      . = ALIGN(4);
      KEEP(*(.stack))
      . = ALIGN(4);
      *(.text)
    }
    . = 0x20000;
    .data : 
    { 
      *(.data*)
    }
    .stack : 
    {
      . = ALIGN(4);
      __end_stack = .;
      . = . + __stack_size;
      . = ALIGN(4);
      __start_stack = .;
    }
}