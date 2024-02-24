#include <stdio.h>

/*
  Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10
  ela possui.
*/

#define rows 2
#define cols 2

int main() {
  int m[rows][cols], greaterThanTen = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);

      if (m[i][j] > 10) {
        greaterThanTen++;
      }
    }
  }

  printf("\nHas %d elements greater than 10\n", greaterThanTen);

  return 0;
}
