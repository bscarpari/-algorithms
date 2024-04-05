#include <stdio.h>
#include <stdlib.h>

/*
Declare uma matriz de inteiros e aloque
memória para ela usando malloc()
*/

int main() {
  int i, j, **matrix;

  matrix = (int **)malloc(3 * sizeof(int *));

  if (matrix == NULL) {
    printf("Memoria insuficiente!\n");
    return 1;
  }

  for (i = 0; i < 3; i++) {
    matrix[i] = (int *)malloc(3 * sizeof(int));

    if (matrix[i] == NULL) {
      printf("Memoria insuficiente!\n");
      return 1;
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  // Motivo: liberar a memória alocada para a matriz
  for (i = 0; i < 3; i++) {
    free(matrix[i]);
  }

  free(matrix);
  return 0;
}