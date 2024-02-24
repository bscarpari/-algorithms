#include <stdio.h>

/*
  Faca um algoritmo que leia uma matriz 5 x 5 de numeros.
  Calcule e mostre a soma das linhas pares da matriz.
*/

#define rows 5
#define cols 5

int main() {
  int m[rows][cols], sum = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      if (i % 2 == 0)
        sum += m[i][j];
    }
  }

  printf("\nSum = %d", sum);

  return 0;
}
