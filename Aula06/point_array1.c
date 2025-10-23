#include <stdio.h>

int main(){

  int v[] = {1,2,3};
  int *p1;
  int *p2;

  p1 = v;
  p2 = &v[0];

  printf("%p %p %p\n",v,p1,p2);
}