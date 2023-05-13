

int main();

extern unsigned __stack_top;


asm
(
  "__start:\n"
  "la sp, __stack_init\n"
  "j call_main\n"
);


asm
(
  "__exit:\n"
  "nop\n"
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
