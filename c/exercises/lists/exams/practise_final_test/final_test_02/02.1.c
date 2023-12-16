#include <stdio.h>

/*
  Faça um programa que leia uma matriz A de 5 linhas e 3 colunas e faça as
  seguintes tarefas: a) leia a matriz e a escreva (0,5); b) crie uma matriz B
  que seja uma cópia de A (1,0); c) Escrever cada elemento repetido com uma
  mensagem dizendo o elemento que aparece X vezes em A (2,5)
*/
int main() {
  int i, j, matA[5][3], matB[5][3];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      printf("Matriz A[%i][%i]: ", i + 1, j + 1);
      scanf("%i", &matA[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      matB[i][j] = matA[i][j];
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 3; j++) {
      int cont = 0;

      for (int k = 0; k < 5; k++) {
        for (int l = 0; l < 3; l++) {
          if (matA[i][j] == matA[k][l]) cont++;
        }
      }

      if (cont > 1) {
        printf("\n%i aparece %i vezes\n", matA[i][j], cont);
        break;
      }
    }
  }

  return 0;
}