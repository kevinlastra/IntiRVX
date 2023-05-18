

int main();

extern unsigned __stack_top;


asm
(
  ".globl __start\n"
  "__start:\n"
  "la sp, __stack_init\n"
  "j call_main\n"
);


asm
(
  "__exit:\n"
  "nop\n"
  "nop\n"
  "sw x0, 0(x0)\n"
  "nop\n"
  "nop\n"
  "nop\n"
);

void call_main()
{
  int status = main();

  // exceptions handlers


  __exit(status);
}

__attribute__((section(".stack"), used)) unsigned* __stack_init = &__stack_top;
