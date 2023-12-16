#include <stdio.h>
#include <stdlib.h>

/*
  1) (1,0) Depois da liberacao do governo para as mensalidades dos planos
  de saude, as pessoas comecaram a fazer pesquisas para descobrir um
  bom plano, nao muito caro. Um vendedor de um plano de saude
  apresentou a tabela a seguir:

    - ate 10 anos - R$30,00
    - acima de 10 anos ate 29 anos - R$60,00
    - acima de 29 anos ate 45 anos - R$120,00
    - acima de 45 anos ate 59 anos - R$150,00
    - acima de 59 anos ate 65 anos - R$250,00
    - maior que 65 anos - R$400,00

  Faca um programa que entre com a idade de uma pessoa e imprime o
  valor que ela devera pagar por mes e a idade dela. O algoritmo deve
  terminar somente quando a idade da pessoa for igual a zero.
*/

int main() {
  int idade;

  printf("TABELA DE PRECOS - PLANOS DE SAUDE\n");
  printf("-----------------------------------\n");
  printf("ate 10 anos - R$30,00\n");
  printf("acima de 10 anos ate 29 anos - R$60,00\n");
  printf("acima de 29 anos ate 45 anos - R$120,00\n");
  printf("acima de 45 anos ate 59 anos - R$150,00\n");
  printf("acima de 59 anos ate 65 anos - R$250,00\n");
  printf("maior que 65 anos - R$400,00\n");
  printf("Digite '0' para encerrar o programa!\n");
  printf("-----------------------------------\n");

  do {
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 10 && idade != 0) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$30,00 mensalmente!\n");
    } else if (idade > 10 && idade <= 29) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$60,00 mensalmente!\n");
    } else if (idade > 29 && idade <= 45) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$120,00 mensalmente!\n");
    } else if (idade > 45 && idade <= 59) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$150,00 mensalmente!\n");
    } else if (idade > 59 && idade <= 65) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$250,00 mensalmente!\n");
    } else if (idade > 65) {
      printf("Voce tem %d anos\n", idade);
      printf("Voce devera pagar R$400,00 mensalmente!\n");
    }
  } while (idade != 0);

  printf("\n\n");

  system("pause");
  return 0;
}
