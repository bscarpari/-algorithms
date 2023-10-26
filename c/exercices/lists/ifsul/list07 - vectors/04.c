#include <stdio.h>

/*
  Faça um programa que lê 10 valores e os armazena no vetor A.
  Após, mostre a soma dos valores.
*/

#define LENGTH 10

int main() {
  int A[LENGTH], sum = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &A[i]);
    sum += A[i];
  }

  printf("\nSoma = %i", sum);

  return 0;
}