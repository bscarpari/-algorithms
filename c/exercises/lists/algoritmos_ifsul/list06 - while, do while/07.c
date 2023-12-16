#include <stdio.h>

/*
  Altere o programa anterior permitindo ao usuário
  informar as populações e  as  taxas  de  crescimento
  iniciais.

  Valide  a  entrada  e  permita  repetir  a operação
*/

int validate_input(char* message, int min_value) {
  int value = 0;

  do {
    printf("%s", message);
    scanf("%d", &value);
  } while (value < min_value);

  return value;
}

float validate_growth_rate(char* message, float min_value) {
  float value = 0;

  do {
    printf("%s", message);
    scanf("%f", &value);
  } while (value < min_value);

  return value;
}

int main() {
  char option = 'n';
  int years = 0, popA = 0, popB = 0;
  float crescA = 0, crescB = 0;

  do {
    popA = validate_input("\nInforme a popA: ", 1);
    crescA = validate_growth_rate("Informe a taxa de crescimento (Ex.: 0.03): ", 0.01);
    popB = validate_input("\nInforme a popB: ", 1);
    crescB = validate_growth_rate("Informe a taxa de crescimento (Ex.: 0.03): ", 0.01);

    while (popA <= popB) {
      popA += popA * crescA;
      popB += popB * crescB;
      years++;
    }

    printf("\nSerá necessário %i anos para igualar ou superar (A >= B)", years);
    years = 0;

    printf("\n\nDeseja encerrar? (y/n) ");
    scanf(" %c", &option);
  } while (option != 'y');

  return 0;
}