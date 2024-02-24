#include <stdio.h>

/*

*/

int main()
{
  int day, month;
  char name[50];

  printf("\nDigite seu nome: ");
  scanf("%s", &name);

  do
  {
    printf("\nDigite o day de nascimento (0 a 31): ");
    scanf("%i", &day);
  } while (day < 1 || day > 31);

  do
  {
    printf("\nDigite o mes de nascimento (0 a 12): ");
    scanf("%i", &month);
  } while (month < 0 || month > 12);

  // Classificar de acordo
  switch (month)
  {
  case 1:
    if (day <= 20)
      printf("\nCapricórnio");
    else
      printf("\nAquário");
    break;

  case 2:
    if (day <= 20)
      printf("\nCapricórnio");
    else
      printf("\nAquário");
    break;

  case 3:
    if (day <= 20)
      printf("\nCapricórnio");
    else
      printf("\nAquário");
    break;

  case 4:
    if (day <= 20)
      printf("\nÁries");
    else
      printf("\nTouro");
    break;

  case 5:
    if (day <= 20)
      printf("\nTouro");
    else
      printf("\nGêmeos");
    break;

  case 6:
    if (day <= 20)
      printf("\nGêmeos");
    else
      printf("\nCâncer");
    break;

  case 7:
    if (day <= 21)
      printf("\nCâncer");
    else
      printf("\nLeão");
    break;

  case 8:
    if (day <= 22)
      printf("\nLeão");
    else
      printf("\nVirgem");
    break;

  case 9:
    if (day <= 22)
      printf("\nVirgem");
    else
      printf("\nLibra");
    break;

  case 10:
    if (day <= 22)
      printf("\nLibra");
    else
      printf("\nEscorpião");
    break;

  case 11:
    if (day <= 21)
      printf("\nEscorpião");
    else
      printf("\nSagitário");
    break;

  case 12:
    if (day <= 21)
      printf("\nSagitário");
    else
      printf("\nCapricórnio");
    break;

  default:
    printf("\nSigno incorreto");
    break;
  }

  return 0;
}