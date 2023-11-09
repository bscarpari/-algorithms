#include <stdio.h>

/*
        Escreva um algoritmo que l� uma matriz M(5,5).
        Substitua, a seguir, todos os valores negativos
        da matriz por zero.

        Ap�s, escreva a matriz modificada.
*/

#define rows 5
#define cols 5

int main() {
  int m[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      if (m[i][j] < 0)
        m[i][j] = 0;
    }
  }

  printf("\nThe result matrix: \n");

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
