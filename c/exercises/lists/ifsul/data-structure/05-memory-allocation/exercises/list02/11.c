#include <stdio.h>
#include <stdlib.h>

/*
Declare um ponteiro para um vetor de inteiros e aloque memória para
ele usando realloc() para aumentar o tamanho do vetor
*/

int main() {
  int i, *numbers, n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  numbers = (int *)realloc(NULL, n * sizeof(int));

  if (numbers == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  for (i = 0; i < n; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &numbers[i]);
  }

  printf("\nValores digitados:\n");
  for (i = 0; i < n; i++) {
    if (i == 0) {
      printf("[%d, ", numbers[i]);
    } else if (i == n - 1) {
      printf("%d]\n", numbers[i]);
    } else {
      printf("%d, ", numbers[i]);
    }
  }

  return 0;
}