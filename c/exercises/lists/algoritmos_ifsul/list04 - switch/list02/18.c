#include <stdio.h>

/*

  Para doar sangue é necessário ter entre 18 e 67 anos.

  Faça um aplicativo na linguagem C que pergunte a idade
  de uma pessoa e diga se ela pode doar sangue ou não.

  Use alguns dos operadores lógicos OU (||) e E (&&)
*/

int main()
{
  int age;

  scanf("%i", &age);

  if (age < 18 || age > 67)
    printf("\nVoce nao pode doar sangue");
  else
    printf("\nVoce pode doar sangue");

  return 0;
}