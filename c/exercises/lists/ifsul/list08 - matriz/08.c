#include <stdio.h>

/*
        Escrever um algoritmo que leia uma matriz M(5,5) e crie dois vetores,
        SL(5) e SC(5), que contenham, respectivamente as somas das linhas e
        das colunas de M.

        Escrever a matriz e os vetores criados

        // TESTE DE MESA
        // 	 0 1
        // 0 1 2
        // 1 3 4
        // sl[0] = 1 + 2 = 3
        // sl[1] = 3 + 4 = 7
        // sc[0] = 1 + 3 = 4
        // sc[1] = 2 + 4 = 6
*/

#define rows 5
#define cols 5

int main() {
  int sl[rows] = {0}, sc[rows] = {0}, m[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      sl[i] += m[i][j];
      sc[j] += m[i][j];
    }
  }

  printf("\n\nMatriz: \n");

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  printf("\nSoma das linhas: \n");
  for (int i = 0; i < rows; i++) {
    printf("%d ", sl[i]);
  }

  printf("\nSoma das colunas: \n");
  for (int i = 0; i < rows; i++) {
    printf("%d ", sc[i]);
  }

  return 0;
}
