#include <stdio.h>

/*
  Faça um programa que leia uma matriz de 3 colunas e 4 linhas.

  Depois de lê-la, some as colunas individualmente e acumule a soma na 5ª linha da matriz.

  Mostrar a matriz já  com  a  5ª  linha preenchida.

  (Lembre-se:  para  guardar o resultado é necessário declarar uma matriz de 3X5)
*/

// 1. Declare o tamanho da matriz
#define rows 4
#define cols 3

int main() {
  int m[rows][cols], aux[rows + 1][cols];

  // 2. Leia os elementos
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%i", &m[i][j]);
    }
  }

  // 3. Declarar sum = 0
  int sum = 0;

  // 4. Percorrer cada coluna (0, 1, 2) = 3
  for (int j = 0; j < cols; j++) {
    sum = 0;

    // 5. Percorrer cada linha (0, 1, 2, 3) = 4
    for (int i = 0; i < rows; i++) {
      sum += m[i][j];

      // 6. Inserindo na matriz auxiliar os valores da matriz base
      aux[i][j] = m[i][j];
    }

    // 7. Exibe no fim de cada linha a soma das colunas
    aux[rows][j] = sum;
  }

  for (int i = 0; i < rows + 1; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%i ", aux[i][j]);
    }
    printf("\n");
  }

  return 0;
}
