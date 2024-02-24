#include <stdio.h>

/*
  Faça um programa que mostra na tela os
  números de 50 até 5 e mostra os valores
  ímpares.
*/

#define length 50

int main() {
  for (int i = length; i >= 5; i--)
    printf("%d\n", i);

  for (int i = 0; i < length; i++)
    if(i % 2 != 0)
      printf("%d\n", i);

  return 0;
}