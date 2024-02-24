#include <stdio.h>
#include <locale.h>

/*
  Um posto está vendendo combustíveis com a seguinte tabela de
  descontos:

  TABELA;
    Álcool:
      a) até 20 litros, desconto  de 3% por litro
      b) acima de 20 litros, desconto de 5% por litro

    Gasolina:
      a) até 20 litros, desconto de 4% por litro
      b) acima de 20 litros, desconto de 6% por litro

  ENTRADA
    Número de litros vendidos
    Tipo de combustível (A - álcool,  G - gasolinePrice)

  PROCESSAMENTO
    Calcule e imprima o valor a ser pago pelo cliente sabendo-se
    que:

    I. Gasolina: R$6,50 por litro
    II. Álcool: R$6,00 por litro
*/

int main() {
  int liters;
  float gasolinePrice = 6.5, alcoolPrice = 6.0;
  char type;

  printf("\nInforme a quantia de litros vendida: ");
  scanf("%d", &liters);

  printf("\nInforme o tipo de combustivel (A - alcool, G - Gasolina): ");
  scanf(" %c", &type);

  if (type == 'A') {
    // printf("Valor pre-desconto: R$%.2f\n", alcoolPrice * liters);

    if (liters <= 20) 
      alcoolPrice = alcoolPrice - (alcoolPrice * 0.03);
    else 
      alcoolPrice = alcoolPrice - (alcoolPrice * 0.05);    
        
    return printf("\nO valor a ser pago é de R$%.2f\n", alcoolPrice * liters);
  } 
  
  if (type == 'G') {
    // printf("\nValor pré-desconto: R$%.2f\n", gasolinePrice * liters);

    if (liters <= 20) 
      gasolinePrice = gasolinePrice - (gasolinePrice * 0.04);
    else
      gasolinePrice = gasolinePrice - (gasolinePrice * 0.06);
    
    return printf("O valor a ser pago é de R$%.2f\n", gasolinePrice * liters);
  }

  printf("\nTipo de combustível inválido!\n");
  return 0;
}