#include <stdio.h>

/*
  Um vendedor necessita de um programa em C que calcule o preço total
  devido por um cliente. 
  
  O programa deve receber o código de um produto e a quantidade comprada e 
  calcular o preço total, usando a tabela abaixo que deverá ser exibida no
  programa. Mostrar uma mensagem no caso de código inválido

  Código Produto  |  Preço Unitário
  1001            |  R$ 5,32
  1324            |  R$ 6,45
  6548            |  R$ 2,37
  0987            |  R$ 5,32
  7623            |  R$ 6,45

*/
int main() {
  int cod, quantity;

  printf("Digite o código do produto: ");
  scanf("%d", &cod);

  printf("Digite a quantidade comprada: ");
  scanf("%d", &quantity);

  switch (cod) {
    case 1001:
      printf("Valor total: R$ %.2f\n", quantity * 5.32);
      break;
    case 1324:
      printf("Valor total: R$ %.2f\n", quantity * 6.45);
      break;
    case 6548:
      printf("Valor total: R$ %.2f\n", quantity * 2.37);
      break;
    case 987:
      printf("Valor total: R$ %.2f\n", quantity * 5.32);
      break;
    case 7623:
      printf("Valor total: R$ %.2f\n", quantity * 6.45);
      break;
    default:
      printf("Código inválido\n");
  }

  return 0;
}
