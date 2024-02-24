#include <stdio.h>

/*
  Faça um programa que mostra os números
  entre 200 e 100 em 5 em 5.
*/

int main() {
  for (int i = 200; i >= 100; i -= 5)
    printf("%d\n", i);

  return 0;
}