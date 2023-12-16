#include <locale.h>
#include <stdio.h>

/*  1) (1,0)

        Faça um programa que entre com a idade de uma pessoa e imprime o
        valor que ela deverá pagar por mês e a idade dela. O algoritmo deve
        terminar somente quando a idade da pessoa for igual a zero.

*/

int main() {
  setlocale(LC_ALL, "");

  int age;

  printf("\n- at� 10 anos - R$30,00");
  printf("\n- acima de 10 anos até 29 anos - R$60,00");
  printf("\n- acima de 29 anos até 45 anos - R$120,00");
  printf("\n- acima de 45 anos até 59 anos - R$150,00");
  printf("\n- acima de 59 anos até 65 anos - R$250,00");
  printf("\n- maior que 65 anos - R$400,00\n");

  do {
    printf("\nInforme a idade? ");
    scanf("%i", &age);

    // 0
    if (age <= 0) {
      printf("\nValor inv�lido");
    }

    // 1 ao 10
    if (age <= 10) {
      printf("\nVoc� ir� pagar R$30,00/mensal tendo %i ano(s)", age);
    }

    // 11 ao 29
    if (age > 10 && age <= 29) {
      printf("\nVoc� ir� pagar R$60,00/mensal tendo %i ano(s)", age);
    }

    // 30 ao 45
    if (age > 29 && age <= 45) {
      printf("\nVoc� ir� pagar R$120,00/mensal tendo %i ano(s)", age);
    }

    // 46 ao 59
    if (age > 45 && age <= 59) {
      printf("\nVoc� ir� pagar R$150,00/mensal tendo %i ano(s)", age);
    }

    // 60 ao 65
    if (age > 59 && age <= 65) {
      printf("\nVoc� ir� pagar R$250,00/mensal tendo %i ano(s)", age);
    }

    // acima de 65
    if (age > 65) {
      printf("\nVoc� ir� pagar R$400,00/mensal tendo %i ano(s)", age);
    }
  } while (age != 0);
}
