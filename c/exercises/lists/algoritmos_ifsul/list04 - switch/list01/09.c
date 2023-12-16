#include <stdio.h>

/*
  Para doar sangue é necessário ter entre 18 e 67 anos.

  Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se
  ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int check_requirements(int age)
{
  return age >= 18 && age <= 67;
}

int main()
{
  int age;

  printf("Digite a idade: ");
  scanf("%i", &age);

  if (check_requirements(age))
  {
    printf("Pode doar sangue");
    return 0;
  }

  printf("Nao pode doar sangue");

  return 0;
}