#include <stdio.h>

/*
  Faça um programa que preenche um vetor A de 10
  elementos com o valor 30.

  Após o preenchimento mostre o vetor A.
*/

#define LENGTH 10

int main() {
  int A[LENGTH];

  for (int i = 0; i < LENGTH; i++)
    A[i] = 30;

  for (int i = 0; i < LENGTH; i++)
    printf("%i ", A[i]);

  return 0;
}