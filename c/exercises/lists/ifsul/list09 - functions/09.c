#include <stdio.h>

/*
  Faça  um  procedimento  que  receba  um  número  inteiro
  e  imprima  o  mês correspondente  ao  número.

  Por  exemplo,  2  corresponde  à  fevereiro.  O
  procedimento   deve   mostrar   uma   mensagem   de
  erro   caso   o   número recebido não faça sentido.

  Gere também um programa que leia um valor e chame o
  procedimento criado.
*/

void printMonth(int month) {
  /*
    Using object literals: https://stackoverflow.com/a/10966395/10904491
    https://www.tabnews.com.br/viniielopes/boas-praticas-no-js-que-utilizo-no-dia-a-dia

    [1] = "Janeiro" -> 1: "Janeiro"
  */
  char *months[] = {
      [1] = "Janeiro",
      [2] = "Fevereiro",
      [3] = "Marco",
      [4] = "Abril",
      [5] = "Maio",
      [6] = "Junho",
      [7] = "Julho",
      [8] = "Agosto",
      [9] = "Setembro",
      [10] = "Outubro",
      [11] = "Novembro",
      [12] = "Dezembro",
  };

  if (month < 1 || month > 12) {
    printf("Mes invalido.");
    return;
  }

  printf("%s", months[month]);
}

int main() {
  int value;

  scanf("%i", &value);
  printMonth(value);

  return 0;
}