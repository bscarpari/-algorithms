#include <stdio.h>

/* 
Faça um programa que receba dois arquivos do usuário, e crie um 
terceiro arquivo com o conteúdo dos dois primeiros juntos 
(o conteúdo do primeiro seguido doconteúdo do segundo).
*/

int main() {
  FILE *file1;
  FILE *file2;
  FILE *file3;
  char filename1[255], filename2[255], c;

  printf("Digite o nome do primeiro arquivo de texto: ");
  scanf("%s", filename1);

  file1 = fopen(filename1, "r");

  if (file1 == NULL) {
    printf("Erro ao abrir o arquivo de leitura");
    return 1;
  }

  printf("Digite o nome do segundo arquivo de texto: ");
  scanf("%s", filename2);

  file2 = fopen(filename2, "r");

  if (file2 == NULL) {
    printf("Erro ao abrir o arquivo de leitura");
    return 1;
  }

  file3 = fopen("exemplo3.txt", "w");

  if (file3 == NULL) {
    printf("Erro ao abrir o arquivo de escrita");
    return 1;
  }

  while ((c = fgetc(file1)) != EOF) {
    fputc(c, file3);
  }

  while ((c = fgetc(file2)) != EOF) {
    fputc(c, file3);
  }

  fclose(file1);
  fclose(file2);
  fclose(file3);

  return 0;
}