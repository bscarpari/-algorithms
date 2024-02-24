#include <stdio.h>

/*
        Fa�a um programa que leia uma matriz 4x4
        e calcule a soma dos elementos da matriz.
*/

#define rows 4
#define cols 4

int main() {
  int m[rows][cols], sum = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);
      sum += m[i][j];
    }
  }

  printf("\nSum = %d", sum);

  return 0;
}
