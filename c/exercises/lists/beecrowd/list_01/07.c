#include <stdio.h>

/*
  Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas 
  por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas 
  efetuadas, informar o total a receber no final do mês, com duas casas decimais.
*/

int main() {
  char nome[100];
  double salario, vendas, total;

  scanf("%s %lf %lf", &nome, &salario, &vendas);

  total = salario + (vendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}