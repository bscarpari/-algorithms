#include <stdio.h>

/*
        Elaborar um algoritmo que l� uma matriz M(4,4) e um valor A.

        Ap�s, multiplique a matriz M pelo valor A e coloque os valores
        da matriz multiplicados por A em uma matriz N(4,4).

        Ao final, escreva a matriz N.
*/

#define rows 4
#define cols 4

int main() {
  int m[rows][cols], n[rows][cols], a = 0;

  printf("\nChoose the multiplicator: ");
  scanf("%d", &a);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      n[i][j] = m[i][j] * a;
    }
  }

  printf("\nThe result matrix N: \n");

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", n[i][j]);
    }
    printf("\n");
  }

  return 0;
}
