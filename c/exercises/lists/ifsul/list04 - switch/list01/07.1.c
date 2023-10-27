#include <stdio.h>

/*
  Faça um programa em C que leia o dia e o mês de nascimento de uma pessoa e o seu
  nome, após escreva o Nome e o signo dela de acordo com a tabela abaixo (a tabela
  não será exibida):

  Signo           |  Data
  Capricórnio     |  22/12 a 20/01
  Aquário         |  21/01 a 19/02
  Peixes          |  20/02 a 20/03
  Áries           |  21/03 a 20/04
  Touro           |  21/04 a 21/05
  Gêmeos          |  22/05 a 21/06
  Câncer          |  22/06 a 23/07
  Leão            |  24/07 a 23/08
  Virgem          |  24/08 a 23/09
  Libra           |  24/09 a 23/10
  Escorpião       |  24/10 a 22/11
  Sagitário       |  23/11 a 21/12
*/

int main() {
  int day, month;

  printf("\nDigite o dia e o mes de nascimento: ");
  scanf("%d %d", &day, &month);

  // A optimized logic 
  switch (month) {
  case 1:
    if (day >= 22) printf("\nAquario");
    else printf("\nCapricornio");
    break;

  case 2:
    if (day >= 20) printf("\nPeixes");
    else printf("\nAquario");
    break;

  case 3:
    if (day >= 21) printf("\nAries");
    else printf("\nPeixes");
    break;

  case 4:
    if (day >= 21) printf("\nTouro");
    else printf("\nAries");
    break;

  case 5:
    if (day >= 22) printf("\nGemeos");
    else printf("\nTouro");
    break;

  case 6:
    if (day >= 22) printf("\nCancer");
    else printf("\nGemeos");
    break;

  case 7:
    if (day >= 24) printf("\nLeao");
    else printf("\nCancer");
    break;

  case 8:
    if (day >= 24) printf("\nVirgem");
    else printf("\nLeao");
    break;

  case 9:
    if (day >= 24) printf("\nLibra");
    else printf("\nVirgem");
    break;

  case 10:
    if (day >= 24) printf("\nEscorpiao");
    else printf("\nLibra");
    break;

  case 11:
    if (day >= 24) printf("\nSagitario");
    else printf("\nEscorpiao");
    break;

  case 12:
    if (day >= 23) printf("\nCapricornio");
    else printf("\nSagitario");
    break;
  
  default:
    printf("\nMes invalido");
    break;
  }

  return 0;
}
