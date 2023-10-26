#include <stdio.h>

/*
  Faça um programa que preenche um vetor A de 10 elementos
  com os valores 10, 20, 30, ..., 100.

  Após o preenchimento, mostre o vetor A
*/

#define LENGTH 10

int main() {
  int x[LENGTH] = {0};

  // x[0] = (0 + 1) * 10 = 1 * 10 = 10
  // x[1] = (1 + 1) * 10 = 2 * 10 = 20
  for (int i = 0; i < LENGTH; i++)
    x[i] = (i + 1) * 10;

  for (int i = 0; i < LENGTH; i++)
    printf("%d ", x[i]);

  return 0;
}