#include <stdio.h>

/*
  Depois da liberação do governo para as mensalidades dos planos de
  saúde, as pessoas começaram a fazer pesquisas para descobrir um bom
  plano, não muito caro.

  Um vendedor de um plano de saúde apresentou a tabela a seguir.

  Faça um programa que entre com aidade de uma pessoa e imprime o valor que ela deverá pagar:

  - até 10 anos - R$30,00
  - acima de 10 anos até 29 anos - R$60,00
  - acima de 29 anos até 45 anos - R$120,00
  - acima de 45 anos até 59 anos - R$150,00
  - acima de 59 anos até 65 anos - R$250,00
  - maior que 65 anos - R$400,00
*/

int main()
{
  int age;

  printf("Digite a idade: ");
  scanf("%i", &age);

  if (age <= 10)
    printf("R$30,00");

  if (age > 10 && age <= 29)
    printf("R$60,00");

  if (age > 29 && age <= 45)
    printf("R$120,00");

  if (age > 45 && age <= 59)
    printf("R$150,00");

  if (age > 59 && age <= 65)
    printf("R$250,00");

  if (age > 65)
    printf("R$400,00");

  return 0;
}