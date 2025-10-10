/**
 * @file array2d.c
 * @author Pedro Fonseca (pf@ua.pt)
 * @brief 
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 * Demonstra a criação de um array bidimensional e o acesso aos dados aí guardados. 
 */

#include <stdio.h>


int main(){

 int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int i,j; 

  /* Acesso ao array */
  i=0; j=2;
  printf("m[%d][%d] = %d\n",i,j,m[i][j]);

  /* Primeiro elemento da segunda linha: i=1 (2.ª linha), j=0 (1.º elemento)*/
  i=1; j=0;
  printf("m[%d][%d] = %d\n",i,j,m[i][j]);

  /* Forma alternativa: possível mas não aconselhado */
  /* Primeira linha: i=0; uma posição *para lá* do limite do 1.º vector: j=3 ("4.º" elemento) */
  i=0; j=3;
  printf("m[%d][%d] = %d\n",i,j,m[i][j]);

  return 0; 

}