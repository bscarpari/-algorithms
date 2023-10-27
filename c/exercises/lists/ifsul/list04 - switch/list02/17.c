#include <stdio.h>

/*

  Faça um programa que receba a idade de uma pessoa e mostre
  na saída em qual categoria ela se encontra:

  - 10-14 infantil
  - 15-17 juvenil
  - 18-25 adulto;
*/

int main()
{
  int age;

  scanf("%i", &age);

  if (age >= 10 && age <= 14)
    printf("\nInfantil");
  else if (age >= 15 && age <= 17)
    printf("\nJuvenil");
  else if (age >= 18 && age <= 25)
    printf("\nAdulto");

  return 0;
}