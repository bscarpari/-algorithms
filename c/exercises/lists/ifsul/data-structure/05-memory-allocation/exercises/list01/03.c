#include <stdio.h>
#include <string.h>

/*
Escreva um programa que tenha inicialmente um vetor de 10 posições,
onde o usuário pode inserir valores neste vetor quantas vezes ele
quiser e quando ele decidir parar, os valores armazenados no vetor
devem ser impressos.

Sempre que o vetor estiver com mais de 70% das posições
preenchidas, ele deve dobrar de tamanho.

Dica: Faça um menu para o usuário poder escolher seinseri um novo
elemento ou finaliza a computação.
*/

int main() {
  int i, n = 0;
  char op;
  int INITIAL_LENGTH = 10;
  int vet[INITIAL_LENGTH];

  do {
    float percent = 0;

    printf("Digite um valor: ");
    scanf("%d", &vet[n]);
    n++;

    percent = (float)n / INITIAL_LENGTH;

    if (percent > 0.7) {
      int new_vet[INITIAL_LENGTH * 2];

      memcpy(new_vet, vet, sizeof(vet));
      memcpy(vet, new_vet, sizeof(new_vet));
      printf("Dobrando o tamanho do vetor...\n");

      INITIAL_LENGTH *= 2;
    }

    printf("\nDeseja inserir um novo valor? (s/n): ");
    scanf(" %c", &op);
  } while (op == 's' || op == 'S');

  return 0;
}