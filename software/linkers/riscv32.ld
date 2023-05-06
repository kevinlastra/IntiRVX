

ENTRY (main)
SECTIONS
{
    . = 0x10000;
    .text : 
    { 
        *(.text)
    }
    . = 0x20000000;
    .data : 
    { 
        *(.data) 
    }
    .bss : 
    { 
        *(.bss) 
    }
}