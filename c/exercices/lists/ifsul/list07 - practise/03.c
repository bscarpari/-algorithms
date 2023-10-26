#include <stdio.h>

/*
  Faça um algoritmo  que leia o ano de nascimento de uma pessoa. 
  
  Escreva todos  os  anos  na  tela  em  ordem  decrescente  a  partir 
  do  ano  atual  (2023*). 
  
  Conte a quantidade de anos que se passaram e ao final imprima o total
  de anos (que será a idade desta pessoa).
*/

int main() {
  int birthYear, yearsPassed = 0, currentYear = 2023;

  printf("Digite o ano de nascimento: ");
  scanf("%d", &birthYear);

  for (int i = currentYear; i >= birthYear; i--) {
    printf("%d\n", i);
    yearsPassed++;
  }

  printf("Total de anos: %d anos\n", yearsPassed - 1);

  return 0;
}