#include <stdio.h>
#include <string.h>

/*
  Faça um algoritmo que leia o destino do
  passageiro, se a viagem incluir retorno (ida e volta), informar o valor da passagem de acordo com a tabela a seguir:

  Destino                 Ida            Ida e volta
  Região Norte            R$500,00       R$900,00
  Regiao Nordeste         R$350,00       R$650,00
  Região Centro-Oeste     R$350,00       R$600,00
  Região Sul              R$300,00       R$550,00

  OBSERVAÇÃO:
  Neste código eu pedi um dica para o senhor, de maneira que eu pudesse construir o algoritmo.
  Desta forma, no enunciado era para ser feito com if simples, mas foi utilizado switch case e
  sem o uso de "strings" estritamente iguais afim de facilitar o algoritmo.

*/

int main()
{
  int regionId, travelType;

  printf("\nRegioes:\n");
  printf("1 - Norte\n");
  printf("2 - Nordeste\n");
  printf("3 - Centro-Oeste\n");
  printf("4 - Sul\n");

  printf("\nTipos de viagem:\n");
  printf("1 - Ida\n");
  printf("2 - Ida e volta\n");

  printf("\nDigite o numero da regiao: ");
  scanf("%i", &regionId);

  printf("\nDigite o numero do tipo de viagem: ");
  scanf("%i", &travelType);

  switch (regionId)
  {
  case 1:
    if (travelType == 1)
      printf("\nSomente ida: R$500,00");
    else
      printf("\nIda e volta: R$900,00");
    break;
  case 2:
    if (travelType == 1)
      printf("\nSomente ida: R$350,00");
    else
      printf("\nIda e volta: R$650,00");
    break;
  case 3:
    if (travelType == 1)
      printf("\nSomente ida: R$350,00");
    else
      printf("\nIda e volta: R$600,00");
    break;
  case 4:
    if (travelType == 1)
      printf("\nSomente ida: R$300,00");
    else
      printf("\nIda e volta: R$550,00");
    break;

  default:
    printf("\nEntrada invalida");
    break;
  }

  return 0;
}