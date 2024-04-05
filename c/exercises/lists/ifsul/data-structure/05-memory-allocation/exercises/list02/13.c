#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para armazenar em memória um vetor de dados contendo 1500
valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:

- a) Faça um loop e verifique se o vetor contem realmente os 1500 valores]
inicializados com zero (conte os 1500 zeros do vetor)

- b) Atribua para cada elemento do vetor o valor do seu índice junto a este
vetor.

- c) Faça um loop e conte quantos dos 1500 valores são diferentes de zero no
vetor. Exiba na tela o valor final da contagem.

- d) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
*/

#define SIZE 1500

int main() {
  int *vector;
  int i, count = 0;

  vector = (int *)calloc(SIZE, sizeof(int));

  if (vector == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  for (i = 0; i < SIZE; i++) {
    if (vector[i] == 0) {
      count++;
    }
  }

  printf("O vetor contem %d valores inicializados com zero\n", count);

  for (i = 0; i < SIZE; i++) {
    vector[i] = i;
  }

  count = 0;

  for (i = 0; i < SIZE; i++) {
    if (vector[i] != 0) {
      count++;
    }
  }

  printf("O vetor contem %d valores diferentes de zero\n", count);

  printf("Os 10 primeiros elementos do vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("%d\n", vector[i]);
  }

  printf("Os 10 ultimos elementos do vetor:\n");
  for (i = SIZE - 10; i < SIZE; i++) {
    printf("%d\n", vector[i]);
  }

  free(vector);
  return 0;
}