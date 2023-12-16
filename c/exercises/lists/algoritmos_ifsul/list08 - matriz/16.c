#include <stdio.h>

/*
  Faça um programa que leia uma matriz A (5,5) de números inteiros e
  cria 2 vetores MaiorL(5) e  MenorC(5), que contenham,
  respectivamente,  o maior elemento de cada uma das linhas e o
  menor elemento de cada uma das colunas.

  Escrever a matriz A e os vetores MaiorL e MenorC
*/

#define rows 5
#define cols 5

int main() {
  int A[rows][cols], biggersRow[rows] = {0}, smallersCol[cols] = {0};

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (A[i][j] > biggersRow[i]) {
        biggersRow[i] = A[i][j];
      }
    }
  }

  for (int j = 0; j < cols; j++) {
    smallersCol[j] = A[0][j];

    for (int i = 1; i < rows; i++) {
      if (A[i][j] < smallersCol[j]) {
        smallersCol[j] = A[i][j];
      }
    }
  }

  // Printar os resultados

  return 0;
}
