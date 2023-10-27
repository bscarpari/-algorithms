#include <stdio.h>
#include <string.h>

/*
  Faça um programa em que leia o nome e a idade de 4 alunos de uma 
  turma e escreva o nome e a idade do mais velho. 
  
  Utilize uma mensagem adequada
*/
int main() {
  int age, older = 0;
  char name[50], olderName[50];

  for (int i = 0; i < 4; i++) {
    printf("\nDigite nome e idade: ");
    scanf("%s %d", name, &age);

    if (age > older) {
      older = age;
      strcpy(olderName, name);
    }

    if(i == 3) printf("\nO aluno mais velho: %s com %d anos", olderName, older);
  }

  return 0;
}
