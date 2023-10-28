#include <stdio.h>

/*
  Elabore um algoritmo que pede  ao  usuários  números  até que seja digitado  um  valor  negativo,  ao  final  do programa  mostre  os  seguintes resultados:

  a) o maior valor
  b) o menor valor
  c) a soma dos valores pares
  d) a média dos valores ímpares
  e) quantos números maiores a 50
  f) a percentagem de valores maiores que 20
  g) a média dos valores pares que estão entre 50 e 150
  h) o total de valores digitados
*/

int main() {
  int i = 0, n, max, min, sum_even = 0, sum_odd = 0, count_greater_than_50 = 0, count_greater_than_20 = 0, count_between_50_and_150 = 0, count_total = 0;

  float average_odd, average_even_between_50_and_150;

  do {
    printf("Informe o numero (%i): ", i + 1);
    scanf("%i", &n);

    if (i == 0) {
      max = n;
      min = n;
    }

    if (n > max) {
      max = n;
    }

    if (n < min) {
      min = n;
    }

    if (n % 2 == 0) {
      sum_even += n;
    } else {
      sum_odd += n;
    }

    if (n > 50) {
      count_greater_than_50++;
    }

    if (n > 20) {
      count_greater_than_20++;
    }

    if (n >= 50 && n <= 150) {
      count_between_50_and_150++;
    }

    count_total++;

    i++;
  } while (n >= 0);

  average_odd = (float)sum_odd / (count_total - count_greater_than_50);

  average_even_between_50_and_150 = (float)sum_even / count_between_50_and_150;

  printf("\n");

  printf("Maior valor: %i\n", max);
  printf("Menor valor: %i\n", min);
  printf("Soma dos valores pares: %i\n", sum_even);
  printf("Media dos valores impares: %.2f\n", average_odd);
  printf("Quantidade de numeros maiores que 50: %i\n", count_greater_than_50);
  printf("Porcentagem de valores maiores que 20: %.2f%%\n", (float)count_greater_than_20 / count_total * 100);
  printf("Media dos valores pares que estao entre 50 e 150: %.2f\n", average_even_between_50_and_150);
  printf("Total de valores digitados: %i\n", count_total);

  return 0;
}