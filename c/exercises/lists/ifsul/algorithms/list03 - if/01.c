#include <stdio.h>

/* 
  Faça um algoritmo que lê um número e verificar
  se ele é par ou é ímpar.
*/

int main() {
  int number;

  scanf("%i", &number);

  if(number % 2 == 0) {
  printf("\nPar");
  } else {
    printf("\nImpar");
  }

  return 0;
}