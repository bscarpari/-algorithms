#include <stdio.h>

/*
  Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3
  número inteiros. Em seguida, gere um array unidimensional pela soma
  dos números de cada coluna da matriz e mostrar na tela esse array.

  Por exemplo, a matriz:
  5   -8    10
  1   2    15
  25  10   7
*/

#define rows 3
#define cols 3

int main() {
  int m[rows][cols], sum[cols] = {0};

  // a) Read matrix m
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  // b) Sum each column
  for (int j = 0; j < cols; j++) {
    for (int i = 0; i < rows; i++) {
      sum[j] += m[i][j];
    }
  }

  // c) Print sum
  printf("Sum of each column:\n");
  for (int j = 0; j < cols; j++) {
    printf("%d ", sum[j]);
  }

  return 0;
}
