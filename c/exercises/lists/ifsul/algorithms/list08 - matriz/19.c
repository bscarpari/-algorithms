#include <math.h>
#include <stdio.h>

/*
  Faça um programa para gerar automaticamente um número entre 0 e 99
  de uma cartela de bingo. Sabendo que cada cartela devera conter 5 linhas
  de 5 números, gere estes dados de modo a não ter números repetidos dentro
  das cartelas. O programa deve exibir na tela a cartela gerada.

  Exemplo de cartela gerada:
    07  11  18  24  39
    09  13  16  28  43
    01  17  21  30  31
    02  19  22  33  44
    05  12  27  35  40

*/

#define rows 5
#define cols 5

int main() {
  int bingo[rows][cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      // Gera um número aleatório entre 0 e 99
      bingo[i][j] = rand() % 100;

      //  Verifica se o número gerado já existe na cartela
      for (int k = 0; k < i; k++) {
        for (int l = 0; l < j; l++) {
          if (bingo[i][j] == bingo[k][l]) {
            // Se sim, gere outro número
            bingo[i][j] = rand() % 100;

            // Reinicie os contadores
            k = 0;
            l = 0;
          }
        }
      }
    }
  }

  printf("Bingo:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%02d ", bingo[i][j]);
    }
    printf("\n");
  }

  return 0;
}
