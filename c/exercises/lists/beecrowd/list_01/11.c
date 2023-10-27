#include <stdio.h>
#include <math.h>

/* 
  Faça um programa que leia três valores e apresente o 
  maior dos três valores lidos seguido da mensagem “eh o maior”. 
  
  Utilize a fórmula: MaiorAB = (a+b+abs(a-b))/2

  Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.
*/
int main() {
  int a, b, c, maiorAB;

  scanf("%i %i %i", &a, &b, &c);

  maiorAB = (a + b + abs(a - b)) / 2;

  printf("%i eh o maior\n", maiorAB > c ? maiorAB : c);

  return 0;
}