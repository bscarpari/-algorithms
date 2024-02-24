#include <stdio.h>

/*
  Construir um programa em C que converta um valor lido em reais para um valor em
  moeda estrangeira escrevendo o resultado utilizando a seguinte codificação:

  1 -libra esterlina  (R$ 3,80)
  2 -franco suiço (R$ 1,85)
  3 -dolar americano (R$ 2,43)
  4 -marco alemão (R$ 2,31)

  O Programa deverá exibir o menu acima e o resultado utilizando uma mensagem adequada.

  Use uma função para calcular a conversão da moeda.
*/

// Object literals: https://stackoverflow.com/a/4175732/10966376
float currency_convert(int cod, float value)
{
  const float CONVERSION_RATES[] = {3.80, 1.85, 2.43, 2.31};
  const char *CURRENCY_NAMES[] = {"libra esterlina", "franco suiço", "dolar americano", "marco alemão"};

  float converted_value = value / CONVERSION_RATES[cod - 1];
  printf("O valor em %s e: %.2f", CURRENCY_NAMES[cod - 1], converted_value);

  return converted_value;
}

int main() {
  int cod;
  float value;

  printf("Digite o codigo da moeda: ");
  scanf("%i", &cod);

  printf("Digite o valor em reais: ");
  scanf("%f", &value);

  currency_convert(cod, value);

  return 0;
}