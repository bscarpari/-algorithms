#include <stdio.h>

/*
  Escrever  um  algoritmo  que  leia  um  número  inteiro  e  uma  matriz  de  3X3  contendo números  inteiros. (X)

  Conte  quantos  elementos  são  iguais  ao  número  lido  na  matriz. (X)

  Escreva o total de números iguais (??)
*/

#define rows 3
#define cols 3

int main() {
  int m[rows][cols], num = 0, repeats = 0;

  printf("\nRead a integer num: ");
  scanf("%i", &num);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%i][%i]: ", i, j);
      scanf("%i", &m[i][j]);

      if (m[i][j] == num)
        repeats++;
    }
  }

  printf("\nThe %i repeats %i", num, repeats);

  return 0;
}
