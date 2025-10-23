#include <stdio.h>

int main()
{

  int a[] = {32, 7, 45};
  int *p;

  p = a;

  printf("a[i]:\t");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");

  printf("*p+...\t");
  printf("%d ", *p);
  printf("%d ", *(p + 1));
  printf("%d ", *(p + 2));
  printf("\n");

  /* Lado a lado */
  for (int i = 0; i < 3; i++)
  {
    printf("i: %d\t%2d | %2d\n", i, a[i], *(p + i));
  }
  printf("\n");
}