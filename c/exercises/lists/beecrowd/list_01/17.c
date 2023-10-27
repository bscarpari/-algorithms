#include <stdio.h>

/*
  Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

  Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma
  situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio
  matemático simples.
*/

int main() {
  int age, years, months, days;

  scanf("%i", &age);

  years = age / 365; // 1 year = 365 days
  months = (age % 365) / 30; // 1 month = 30 days
  days = (age % 365) % 30;

  printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", years, months, days);

  return 0;
}