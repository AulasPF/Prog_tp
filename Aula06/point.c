#include <stdio.h>

int main(){

  int a=5;    /* Cria uma variável do tipo inteiro e dá-lhe o valor 5*/ 
  int *p;     /* Cria um ponteiro para inteiros */

  p = &a;     /* Armazena em p o endereço da a */

  int b=*p;   /* b recebe o valor apontado por p */
              /* Ou seja: recebe o valor de a */

  printf("a: %d\n",a); 
  printf("b: %d\n",b); 

  return 0; 
}