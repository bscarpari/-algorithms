#include <stdio.h>
#include <string>

/*
  Faça um programa em C que leia o dia e o mês de nascimento de uma pessoa e o seu
  nome, após escreva o Nome e o signo dela de acordo com a tabela abaixo (a tabela
  não será exibida):

  Signo           |  Data
  Capricórnio     |  22/12 a 20/01
  Aquário         |  21/01 a 19/02
  Peixes          |  20/02 a 20/03
  Áries           |  21/03 a 20/04
  Touro           |  21/04 a 20/05
  Gêmeos          |  21/05 a 20/06
  Câncer          |  21/06 a 22/07
  Leão            |  23/07 a 22/08
  Virgem          |  23/08 a 22/09
  Libra           |  23/09 a 22/10
  Escorpião       |  23/10 a 21/11
  Sagitário       |  22/11 a 21/12
*/

int main()
{
  int day, month;

  printf("\nDigite o dia e o mes de nascimento: ");
  scanf("%d %d", &day, &month);

  std::string sign = "";

  switch (month)
  {
  case 1:
    sign = (day >= 22) ? "Aquário" : "Capricórnio";
    break;
  case 2:
    sign = (day >= 20) ? "Peixes" : "Aquário";
    break;
  case 3:
    sign = (day >= 21) ? "Áries" : "Peixes";
    break;
  case 4:
    sign = (day >= 21) ? "Touro" : "Áries";
    break;
  case 5:
    sign = (day >= 22) ? "Gêmeos" : "Touro";
    break;
  case 6:
    sign = (day >= 22) ? "Câncer" : "Gêmeos";
    break;
  case 7:
    sign = (day >= 23) ? "Leão" : "Câncer";
    break;
  case 8:
    sign = (day >= 23) ? "Virgem" : "Leão";
    break;
  case 9:
    sign = (day >= 23) ? "Libra" : "Virgem";
    break;
  case 10:
    sign = (day >= 23) ? "Escorpião" : "Libra";
    break;
  case 11:
    sign = (day >= 22) ? "Sagitário" : "Escorpião";
    break;
  case 12:
    sign = (day >= 22) ? "Capricórnio" : "Sagitário";
    break;
  default:
    sign = "Mês inválido";
    break;
  }

  printf("\nSigno: %s", sign.c_str());

  return 0;
}