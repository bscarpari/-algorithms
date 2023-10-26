#include <stdio.h>

/*
  Faça um programa que lê 10 valores e os armazena em um vetor X.

  Verifique os valores pares digitados, armazene-os em um vetor Y
  e mostre os valores pares digitados e a quantidade.
*/

#define LENGTH 10

int main() {
  int x[LENGTH], y[LENGTH] = {0}, count = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &x[i]);

    if (x[i] % 2 == 0) {
      y[i] = x[i];
      count++;
    }
  }

  printf("\nHá %i pares\n", count);

  for (int i = 0; i < LENGTH; i++) {
    if (y[i] != 0) {
      printf("%d ", y[i]);
    }
  }

  return 0;
}