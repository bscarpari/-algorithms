#include <stdio.h>

/*
        Escreva um algoritmo que leia um n�mero inteiro A
        e uma matriz M(5,5) de n�meros.

        Conte quantos valores iguais a A est�o na matriz.
*/

#define rows 5
#define cols 5

int main() {
  int m[rows][cols], repeats = 0, num = 0;

  printf("\nChoose a number: ");
  scanf("%d", &num);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%d", &m[i][j]);

      if (m[i][j] == num)
        repeats++;
    }
  }

  printf("\n%d repeats %d", num, repeats);

  return 0;
}
