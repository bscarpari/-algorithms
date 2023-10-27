#include <stdio.h>

/*


*/

int main()
{
  int age;

  printf("\nDigite sua idade: ");
  scanf("%i", &age);

  if (age <= 10)
    printf("\nR$30,00");
  else if (age >= 10 && age <= 29)
    printf("\nR$60,00");
  else if (age > 29 && age <= 45)
    printf("\nR$120,00");
  else if (age > 45 && age <= 59)
    printf("\nR$150,00");
  else if (age > 59 && age <= 65)
    printf("\nR$250,00");
  else if (age > 65)
    printf("\nR$400,00");

  return 0;
}