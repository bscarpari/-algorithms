#include <stdio.h>

/*
        Fa�a um algoritmo que leia uma matriz 5 x 5 de n�meros
        e encontre o maior e o menor valor da matriz.
*/

#define rows 5
#define cols 5

int main() {
  int m[rows][cols], greater = 0, smaller = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      if (i == 0 && j == 0) {
        greater = m[i][j];
        smaller = m[i][j];
      }

      if (m[i][j] < smaller)
        smaller = m[i][j];

      if (m[i][j] > greater)
        greater = m[i][j];
    }
  }

  printf("\nSmaller num = %d", smaller);
  printf("\nGreater num = %d", greater);

  return 0;
}
