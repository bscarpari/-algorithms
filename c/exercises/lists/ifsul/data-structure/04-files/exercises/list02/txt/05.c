#include <stdio.h>

/*
Faça um programa que receba do usuário um arquivo texto. 

Crie outro arquivo texto contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.
*/

int main() {
  FILE *file;
  FILE *file2;
  char filename[255], c;

  printf("Digite o nome do arquivo de texto: ");
  scanf("%s", filename);

  file = fopen("exemplo.txt", "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo de leitura");
    return 1;
  }

  file2 = fopen("exemplo2.txt", "w");

  if (file2 == NULL) {
    printf("Erro ao abrir o arquivo de escrita");
    return 1;
  }

  while ((c = fgetc(file)) != EOF) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      fputc('*', file2);
    } else {
      fputc(c, file2);
    }
  }

  fclose(file);
  fclose(file2);

  return 0;
}