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

  // a) Read matrix A
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  // b) Find the biggest element in each row
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      // Se o elemento ATUAL é maior que o maior elemento da LINHA ATUAL
      if (A[i][j] > biggersRow[i]) {
        biggersRow[i] = A[i][j];
      }
    }
  }

  // c) Find the smallest element in each column
  for (int j = 0; j < cols; j++) {
    // Atribua o primeiro elemento da coluna como o menor
    smallersCol[j] = A[0][j];

    for (int i = 1; i < rows; i++) {
      // Se o elemento ATUAL é menor que o menor elemento da COLUNA ATUAL
      if (A[i][j] < smallersCol[j]) {
        smallersCol[j] = A[i][j];
      }
    }
  }

  // d) Print matrix A
  printf("Matrix A:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  // e) Print biggersRow
  printf("Biggest element in each row:\n");
  for (int i = 0; i < rows; i++) {
    printf("%d ", biggersRow[i]);
  }
  printf("\n");

  // f) Print smallersCol
  printf("Smallest element in each column:\n");
  for (int j = 0; j < cols; j++) {
    printf("%d ", smallersCol[j]);
  }
  printf("\n");

  return 0;
}
