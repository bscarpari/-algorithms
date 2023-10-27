#include <stdio.h>

/*
  Faça um programa que lê 10 valores e os armazena
  em um vetor.

  Mostre os valores que são maiores que 50.
*/

#define LENGTH 10

int main() {
  int vet[LENGTH], aux[LENGTH];

  printf("0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9\n");
  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &vet[i]);

    if (vet[i] > 50)
      aux[i] = vet[i];
    else
      aux[i] = 0;
  }

  printf("\nValores maiores que 50:\n");
  for (int i = 0; i < LENGTH; i++) {
    if (aux[i] != 0)
      printf("%d ", aux[i]);
  }

  return 0;
}