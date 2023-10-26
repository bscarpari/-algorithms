#include <stdio.h>

/*
  Faça um programa que lê 10 valores e os armazena
  em um vetor.

  Mostre o 1o valor e o 5o valor digitado.
*/

#define LENGTH 10

int main() {
  int vet[LENGTH];

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &vet[i]);
  }

  printf("1o valor: %d\n", vet[0]);
  printf("5o valor: %d\n", vet[4]);

  return 0;
}