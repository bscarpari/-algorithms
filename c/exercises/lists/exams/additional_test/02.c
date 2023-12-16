#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "");
  int matrizA[5][3], matrizCopia[5][3], lin = 0, col = 0, numRepetidos = 0,
                                        i = 0;

  for (lin = 0; lin < 5; lin++) {
    for (col = 0; col < 3; col++) {
      printf("\nDigite o valor [%i][%i]: ", lin, col);
      scanf("%i", &matrizA[lin][col]);
    }
  }

  // Faz uma c�pia dos valores digitados
  for (lin = 0; lin < 5; lin++) {
    for (col = 0; col < 3; col++) {
      matrizCopia[lin][col] = matrizA[lin][col];
    }
  }

  printf("\n\n");

  // a) leia a matriz e a escreva (0,5) [V]
  for (lin = 0; lin < 5; lin++) {
    for (col = 0; col < 3; col++) {
      printf("\n%i", matrizA[lin][col]);
    }
  }

  // Verifico antes quantas vezes os n�meros repetiram
  for (lin = 0; lin < 5; lin++) {
    for (col = 0; col < 3; col++) {
      if (matrizA[lin][col] == matrizCopia[lin][col]) {
        numRepetidos++;
      }
    }
  }

  // Cria uma matriz para estruturar os repetidos
  int repetidos[numRepetidos][2];

  for (lin = 0; lin < 5; lin++) {
    for (col = 0; col < 3; col++) {
      if (matrizA[lin][col] == matrizCopia[lin][col]) {
        for (int i = 0; i < numRepetidos; i++) {
          repetidos[i][0] = matrizA[lin][col];  // atribui o valor repetido
          repetidos[i][1] += 1;  // incrementa para cada vez que for repetir
        }
      }
    }
  }

  // c) Escrever cada elemento repetido com uma mensagem dizendo o elemento que
  // aparece X vezes em A (2,5) [X]
  printf("\nN�mero  |  Quantia de vezes repetido");
  for (i = 0; i < numRepetidos; i++) {
    printf("\n%i ocorreu %i vezes", repetidos[i][1], repetidos[i][2]);
  }

  system("pause");
  return 0;
}
