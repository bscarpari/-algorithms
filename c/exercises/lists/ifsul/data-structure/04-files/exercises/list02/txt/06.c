#include <stdio.h>

/* 
Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando onome, nota1, nota2. 

Calcule a média aritmética simples dos 10 alunos e depoisescreva em um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média.

Lembre-se de que as notas e média deverão ser apresentadas como valores quepossuem até 2 casas após a vírgula.
*/

#define LENGTH 2

int main() {
  FILE *file;
  char filename[255], name[255];
  float grade1, grade2, average;
  int i;

  file = fopen("students.txt", "w");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo de escrita");
    return 1;
  }

  for (i = 0; i < LENGTH; i++) {
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", name);

    printf("Digite a nota 1 do aluno %d: ", i + 1);
    scanf("%f", &grade1);

    printf("Digite a nota 2 do aluno %d: ", i + 1);
    scanf("%f", &grade2);

    printf("\n");

    average = (grade1 + grade2) / 2;

    fprintf(file, "Aluno(a): %s\nNota 1: %.2f\nNota 2: %.2f\nMédia: %.2f\n\n", name, grade1, grade2, average);
  }

  fclose(file);
  return 0;
}