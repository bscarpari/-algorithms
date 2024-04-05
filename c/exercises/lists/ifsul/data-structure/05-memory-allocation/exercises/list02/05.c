#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que:

a) Aloque dinamicamente um vetor de 15 números inteiros;
b) Peça para o usuário digitar os 15 números no espaço alocado; 
c) Mostre na tela os 15 números; 
d) Libere a memória alocada.
*/

#define LENGTH 15

int main() {
  int *numbers;
  int i;

  numbers = (int *)malloc(LENGTH * sizeof(int));

  if (numbers == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  for (i = 0; i < LENGTH; i++) {
    printf("Digite o %do numero: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  printf("Numeros digitados: ");
  for (i = 0; i < LENGTH; i++) {
    printf("%d ", numbers[i]);
  }

  free(numbers);
  return 0;
}