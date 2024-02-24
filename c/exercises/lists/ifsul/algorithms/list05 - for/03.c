#include <stdio.h>

/*
  Faça um programa que mostra na tela
  os números de 100 até 1.
*/

#define length 100

int main() {
  for (int i = length; i > 0; i--)
    printf("%d\n", i);

  return 0;
}