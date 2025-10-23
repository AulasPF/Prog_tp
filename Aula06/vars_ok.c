#include <stdio.h>

int main()
{
  int m = 8;
  int n = 9;

  printf("m: %d\n", m);
  printf("&m: %p\n", &m);

  printf("n: %d\n", n);
  printf("&n: %p\n", &n);

  printf("sizeof m: %ld\n", sizeof(m));
  printf("sizeof n: %ld\n", sizeof(n));

  return 0; 
}