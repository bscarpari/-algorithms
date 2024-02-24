#include <stdio.h>

/*
  Faça um programa que escreva 10 vezes
  na tela o seu nome.
*/

#define name "Bruno"

int main() {
  for (int i = 0; i < 10; i++)
    printf("%s\n", name);

  return 0;
}