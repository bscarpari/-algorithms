#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// 1) (1,0) Depois da libera��o do governo para as mensalidades dos planos
// de sa�de, as pessoas come�aram a fazer pesquisas para descobrir um
// bom plano, n�o muito caro. Um vendedor de um plano de sa�de
// apresentou a tabela a seguir:
//- at� 10 anos - R$30,00
//- acima de 10 anos at� 29 anos - R$60,00
//- acima de 29 anos at� 45 anos - R$120,00
//- acima de 45 anos at� 59 anos - R$150,00
//- acima de 59 anos at� 65 anos - R$250,00
//- maior que 65 anos - R$400,00
// Fa�a um programa que entre com a idade de uma pessoa e imprime o
// valor que ela dever� pagar por m�s e a idade dela. O algoritmo deve
// terminar somente quando a idade da pessoa for igual a zero.

int main() {
  setlocale(LC_ALL, "Portuguese");
  int idade;

  printf("TABELA DE PRE�OS - PLANOS DE SA�DE\n");
  printf("-----------------------------------\n");
  printf("at� 10 anos - R$30,00\n");
  printf("acima de 10 anos at� 29 anos - R$60,00\n");
  printf("acima de 29 anos at� 45 anos - R$120,00\n");
  printf("acima de 45 anos at� 59 anos - R$150,00\n");
  printf("acima de 59 anos at� 65 anos - R$250,00\n");
  printf("maior que 65 anos - R$400,00\n");
  printf("Digite '0' para encerrar o programa!\n");
  printf("-----------------------------------\n");

  do {
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 10 && idade != 0) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$30,00 mensalmente!\n");
    } else if (idade > 10 && idade <= 29) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$60,00 mensalmente!\n");
    } else if (idade > 29 && idade <= 45) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$120,00 mensalmente!\n");
    } else if (idade > 45 && idade <= 59) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$150,00 mensalmente!\n");
    } else if (idade > 59 && idade <= 65) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$250,00 mensalmente!\n");
    } else if (idade > 65) {
      printf("Voc� tem %d anos\n", idade);
      printf("Voc� dever� pagar R$400,00 mensalmente!\n");
    }
  } while (idade != 0);

  printf("\n\n");

  system("pause");
  return 0;
}
