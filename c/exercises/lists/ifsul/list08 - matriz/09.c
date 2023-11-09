#include <stdio.h>

/*
  Escrever um algoritmo que leia uma matriz M(2,3) e divida todos
  os elementos de cada uma das 2 linhas de M pelo maior elemento
  daquela linha.

  Escrever a matriz lida e modificada.
*/

#define rows 2
#define cols 3

int main() {
  float m[rows][cols], greaters[rows] = {0.0};

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%1.f][%1.f]: ", i, j);
      scanf("%f", &m[i][j]);

      if (i == 0)
        greaters[i] = m[i][j];

      if (greaters[i] < m[i][j])
        greaters[i] = m[i][j];
    }
  }

  printf("\n\nMatriz resultante: \n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      m[i][j] /= greaters[i];
      printf("%.2f ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
