#include <stdio.h>

/*
  Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

  Entrada
  A entrada contem três números inteiros.

  Saída
  Imprima a saída conforme foi especificado.
*/

int main() {
  int a, b, c, aux, array[3] = {0};

  scanf("%i %i %i", &a, &b, &c);

  array[0] = a;
  array[1] = b;
  array[2] = c;
  
  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }
  
  if (b > c) {
    aux = b;
    b = c;
    c = aux;
  }

  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  }

  printf("%d\n%d\n%d\n\n", a, b, c);
  printf("%d\n%d\n%d\n", array[0], array[1], array[2]);

  return 0;
}