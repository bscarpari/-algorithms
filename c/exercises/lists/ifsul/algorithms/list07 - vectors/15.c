#include <stdio.h>

/*
  Escreva um programa que lê 10 valores inteiros e os
  armazena em um vetor.

  O programa deve trocar valores no vetor conforme as
  duas posições especificadas pelo números digitados
  pelo usuário.

  As posições especificadas pelo usuário correspondem
  aos índices do vetor.
*/

#define LENGTH 10

int main() {
  int x[LENGTH] = {0}, aux = 0, pos1 = 0, pos2 = 0;

  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &x[i]);
  }

  printf("\nAgora escolha as posicoes que deseja trocar:");
  printf("\nPosicao de origem | Posicao de destino\n");
  scanf("%d %d", &pos1, &pos2);

  aux = x[pos1];
  x[pos1] = x[pos2];
  x[pos2] = aux;

  printf("\nVetor com as posições trocadas:\n");
  for (int i = 0; i < LENGTH; i++) {
    printf("%d ", x[i]);
  }

  return 0;
}