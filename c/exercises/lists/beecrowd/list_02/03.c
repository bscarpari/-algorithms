#include <stdio.h>

/*
  Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o
  valor da conta a pagar.

  CODIGO      ESPECIFICACAO           PRECO
  1           Cachorro Quente         R$ 4.00
  2           X-Salada                R$ 4.50
  3           X-Bacon                 R$ 5.00
  4           Torrada Simples         R$ 2.00
  5           Refrigerante            R$ 1.50

  Entrada
  O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

  Saída
  O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

int main() {
  int code, quantity;

  scanf("%d %d", &code, &quantity);

  switch (code) {
    case 1:
      printf("Total: R$ %.2f\n", quantity * 4.00);
      break;
    case 2:
      printf("Total: R$ %.2f\n", quantity * 4.50);
      break;
    case 3:
      printf("Total: R$ %.2f\n", quantity * 5.00);
      break;
    case 4:
      printf("Total: R$ %.2f\n", quantity * 2.00);
      break;
    case 5:
      printf("Total: R$ %.2f\n", quantity * 1.50);
      break;
  }

  return 0;
}