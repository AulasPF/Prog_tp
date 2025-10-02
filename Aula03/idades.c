#include <stdio.h>

int main() {

  int idade; 

  printf("Idade da pessoa: ");
  scanf("%d",&idade);

  printf("Uma pessoa com %d anos está ",idade); 
  if( /* condição */ ){
    printf("em idade activa.\n");
  } else {
    printf("fora da idade activa.\n");
  }

  return 0;
}