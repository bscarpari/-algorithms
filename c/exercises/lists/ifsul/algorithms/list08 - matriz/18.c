#include <stdio.h>

/*
  Gerar e imprimir uma matriz de tamanho 10 x 10,
  onde seus elementos são da forma:

  A[i][j] = 2i + 7j - 2 se i < j;
  A[i][j] = 3i² - 1 se i = j;
  A[i][j] = 4i³ - 5j² + 1 se i > j.
*/

#define rows 2
#define cols 2

int main() {
  int m[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);

      if (i < j) {
        m[i][j] = 2 * i + 7 * j - 2;
      } else if (i == j) {
        m[i][j] = 3 * i * i - 1;
      } else {
        m[i][j] = 4 * i * i * i - 5 * j * j + 1;
      }
    }
  }

  printf("\nResult: \n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
