#include <stdio.h>

/*
  Faça uma função que recebe um valor inteiro e verifica se o valor é
  positivo, negativo  ou  zero.

  A  função  deve  retornar  1  para  valores  positivos, -1  para
  negativos e 0 para o valor 0.
*/

int check_number(int number) {
  if (number > 0)
    return 1;
  else if (number < 0)
    return -1;
  else
    return 0;
}

int main() {
  int n;

  scanf("%i", &n);

  printf("Output: %i", check_number(n));

  return 0;
}
