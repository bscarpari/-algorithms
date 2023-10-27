#include <stdio.h>

/*
  Faça um programa que lê 10 valores e os armazena em um vetor X.

  Verifique os valores pares digitados, armazene-os em um vetor Y
  e mostre os valores pares digitados e a quantidade.
*/

#define LENGTH 10

int main() {
  int x[LENGTH];

  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &x[i]);

  for (int i = 0; i < LENGTH; i++)
    if (i % 2 == 0)
      printf("%d ", x[i]);

  return 0;
}