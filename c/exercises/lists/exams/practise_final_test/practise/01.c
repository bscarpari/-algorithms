#include <stdio.h>

int main() {
  int i, j, mat[5][5];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        mat[i][j] = 1;
      } else {
        mat[i][j] = 0;
      }
    }
  }

  printf("\nDiagonal principal:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i + j == 4) {
        mat[i][j] = 1;
      } else {
        mat[i][j] = 0;
      }
    }
  }

  printf("\nDiagonal secundária:\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}