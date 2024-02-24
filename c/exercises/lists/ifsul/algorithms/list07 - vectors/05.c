#include <stdio.h>

/*
  Faça um programa que lê 10 números, calcula a média
  e ao final mostra quantos valores são maiores que a
  média e os números.
*/

#define LENGTH 10

int main() {
  int A[LENGTH], sum = 0, avg = 0, count = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &A[i]);
    sum += A[i];
  }

  avg = sum / LENGTH;
  printf("\nMedia = %i\n\n", avg);

  for (int i = 0; i < LENGTH; i++) {
    if (A[i] > avg) {
      printf("%i ", A[i]);
      count++;
    }

    if (i == (LENGTH - 1))
      printf("| (%i)", count);
  }

  return 0;
}