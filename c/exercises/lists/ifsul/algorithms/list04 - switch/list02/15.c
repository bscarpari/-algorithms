#include <stdio.h>

/*
Um Banco concederá um crédito especial aos seus clientes, variável como saldo
  médio no último ano. 

  ENTRADA
  Faça um programa em C que leia o saldo médio de um cliente 

  PROCESSAMENTO
  calcule o valor do crédito de acordo com a tabela abaixo 
  (exiba a tabela no programa). 

  Saldo médio               Percentual
  de 0 a 200,00             nenhum crédito (crédito = 0)
  de 201,00 a 400,00        20% do valor do saldo médio
  de 401,00 a 600,00        30% do valor do saldo média
  acima de 600,00           40% do valor do saldo médio

  SAÍDA
  Mostre uma mensagem informando o saldo médio e o valor do crédito.
*/

int main() {
  double mediumSalary;

  printf("\nSaldo medio               Percentual");
  printf("\nde 0 a 200,00             nenhum credito (credito = 0)");
  printf("\nde 201,00 a 400,00        20%% do valor do saldo medio");
  printf("\nde 401,00 a 600,00        30%% do valor do saldo medio");
  printf("\nacima de 600,00           40%% do valor do saldo medio");

  printf("\n\nSaldo medio do cliente: ");
  scanf("%lf", &mediumSalary);

  if(mediumSalary >= 0 && mediumSalary <= 200)
    return printf("\nR$ %.2lf (Nenhum credito)", mediumSalary);
  if(mediumSalary >= 201.00 && mediumSalary <= 400)
    return printf("\nR$ %.2lf (20%% = R$ %.2lf)", mediumSalary + (mediumSalary * 0.2), mediumSalary * 0.2);
  if(mediumSalary >= 401.00 && mediumSalary <= 600.00)
    return printf("\nR$ %.2lf (30%% = R$ %.2lf)", mediumSalary + (mediumSalary * 0.3), mediumSalary * 0.3);
  if(mediumSalary > 600)
    return printf("\nR$ %.2lf (20%% = R$ %.2lf)", mediumSalary + (mediumSalary * 0.4), mediumSalary * 0.4);

  return 0;
}