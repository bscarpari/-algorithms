#include <stdio.h>

/*
  Faça um programa que lê 7 valores e armazena no vetor X.

  Ao final, mostre quantos valores pares, quantos valores ímpares e quantos negativos foram digitados.
*/

#define LENGTH 7

int main() {
  int X[LENGTH] = {0}, even = 0, odd = 0, negative = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &X[i]);

    if (X[i] % 2 == 0 && X[i] != 0)
      even++;

    if (X[i] % 2 != 0)
      odd++;

    if (X[i] < 0)
      negative++;
  }

  printf("\nPares: %i\nÍmpares: %i\nNegativos: %i", even, odd, negative);

  return 0;
}