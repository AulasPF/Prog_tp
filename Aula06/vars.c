/*
  Para compilar (a opção -Wno-format evita os avisos por causa do printf() não estar totalmente correto): 
  $ gcc -Wno-format -o vars vars.c
*/
#include <stdio.h>

int main()
{
  int m = 8;
  int n = 9;

  printf("m: %d\n", m);
  printf("&m: %u\n", &m);

  printf("n: %d\n", n);
  printf("&n: %u\n", &n);

  printf("sizeof m: %ld\n", sizeof(m));
  printf("sizeof n: %ld\n", sizeof(n));

  return 0; 
}
