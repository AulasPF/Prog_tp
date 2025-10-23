/**
 * @file point_aritm.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief
 * @version 0.1
 * @date 2025-10-23
 *
 * @copyright Copyright (c) 2025
 *
 * Demonstração da aritmética de ponteiros
 * 
 * Código deve ser compilado com a opção -Wno-format para evitar os avisos 
 * sobre a formatação incorrecta da impressão do ponteiro
 * $ gcc -Wno-format -Wall -Wextra -o point_aritm point_aritm.c 
 */

#include <stdio.h>

int main()
{
  int a=5;      /* Uma variável inteira */
  int *p=NULL;  /* Um ponteiro para inteiros */

  p = &a; 

  printf("Valor de p:   %u\n",p);
  printf("Valor de p+1: %u\n",p+1);

  printf("Tamanho dos tipos de dados apontados por p: %u\n",sizeof(*p));
}