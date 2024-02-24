#include <stdio.h>

/*
  Desenvolva um algoritmo que leia 3 números e escreve o maior
*/

int main() {
  int a, b, c;

  scanf("%i %i %i", &a, &b, &c);

  if(a > b && a > c)
    printf("\n%i", a);
  if(b > a && b > c)
    printf("\n%i", b);
  if(c > a && c > b)
    printf("\n%i", c);

  return 0;
}