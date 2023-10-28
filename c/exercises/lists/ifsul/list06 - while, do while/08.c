#include <stdio.h>

/*
  Faça  um  programa  que  imprima  na  tela  os  números  de  1
  a  20,  um abaixo  do  outro.

  Depois  modifique  o  programa  para  que  ele mostre  os
  números um ao lado do outro (usando WHILE).
*/

#define min 1
#define max 20

int main() {
  int i = min;

  while (i <= max) {
    printf("\n%i", i);
    i++;
  }

  i = 0;
  printf("\n");
  system("pause");

  while (i <= max) {
    printf("%i ", i);
    i++;
  }

  return 0;
}