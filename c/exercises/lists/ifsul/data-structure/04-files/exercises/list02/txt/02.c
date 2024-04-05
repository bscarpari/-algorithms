#include <stdio.h>

/*
Faça um programa que receba do usuário um arquivo texto e mostre
na tela quantas linhas esse arquivo possui.
*/

int main() {
  FILE *file;
  char filename[255], c;
  int lines = 0;

  printf("Digite o nome do arquivo: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  // EOF = End Of File = (-1) = é o valor retornado quando o arquivo acaba 
  while ((c = fgetc(file)) != EOF) {
    if (c == '\n') lines++; 
  }
  
  printf("O arquivo possui %d linhas.\n", lines);

  fclose(file);
  return 0;
}