#include <stdio.h>

/*
  Faça  um  programa que gere uma matriz 8X8 preenchendo
  com ‘X’ as células da área hachurada da matriz abaixo.
*/

#define rows 8
#define cols 8

int main() {
  char m[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i < j)
        m[i][j] = 88;
      else
        m[i][j] = 255;
    }
  }

  for (int i = 0; i < rows + 1; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%c ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
