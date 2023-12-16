#include <stdio.h>

/* 
  Faça um algoritmo que lê um número e verificar
  se ele é par ou é ímpar. (PERFORMÁTICO)
*/
char isOdd(int num) {
  if(num & 1)
    return printf("\nImpar");
  else
    return printf("\nPar");
}

int main() {
  int number;

  scanf("%i", &number);
  isOdd(number);

  return 0;
}