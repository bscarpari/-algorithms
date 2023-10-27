#include <stdio.h>

/*
  Um Banco concederá um crédito especial aos seus clientes, variável com o
  saldo médio no último ano.

  Faça um programa em C que leia o saldo médio de um cliente e calcule o valor
  do crédito de acordo com a tabela abaixo (exiba a tabela no programa).

  Mostre uma mensagem informando o saldo médio e o valor do crédito.

  Saldo médio        |  Percentual
  De 0 a 200         |  Nenhum crédito
  De 201 a 400       |  20% do valor do saldo médio
  De 401 a 600       |  30% do valor do saldo médio
  Acima de 601       |  40% do valor do saldo médio

*/
int main() {
  int saldo_medio;
  float credito;

  printf("Digite o saldo medio: ");
  scanf("%i", &saldo_medio);

  if (saldo_medio >= 0 && saldo_medio <= 200) {
    printf("Nenhum credito");
  } else if (saldo_medio >= 201 && saldo_medio <= 400) {
    credito = saldo_medio * 0.2;
    printf("Credito de 20%%: %.2f", credito);
  } else if (saldo_medio >= 401 && saldo_medio <= 600) {
    credito = saldo_medio * 0.3;
    printf("Credito de 30%%: %.2f", credito);
  } else {
    credito = saldo_medio * 0.4;
    printf("Credito de 40%%: %.2f", credito);
  }

  return 0;
}
