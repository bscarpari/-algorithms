#include <stdio.h>

/*
  Escrever um algoritmo que leia uma Matrix M(5,3).

  Descubra o menor valor desta matriz e escreva-o juntamente com o conteúdo da Matriz.
*/

#define rows 5
#define cols 3

int main() {
  double m[rows][cols];
  int smaller = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("m[%d][%d]: ", i, j);
      scanf("%lf", &m[i][j]);

      // setando o primeiro valor lido como menor
      if (i == 0 && j == 0)
        smaller = m[i][j];

      // valor estou lendo agora for menor do que já tenho salvo
      if (m[i][j] < smaller)
        smaller = m[i][j];
    }
  }

  printf("\nSmaller = %i", smaller);

  return 0;
}
