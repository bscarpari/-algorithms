#include <stdio.h>

/*
Faça um programa de criptografia de dados, ou seja, um programa 
capaz de ler um arquivo texto, codificar este arquivo através de 
alguma técnica de alteração docódigo ASCII (exemplo: somar 1 ao 
valor ASCII de cada caracter), e escrever emum arquivo texto codificado.
*/

int main() {
  FILE *file;
  FILE *file2;
  char filename[255], c;

  printf("Digite o nome do arquivo de texto: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo de leitura");
    return 1;
  }

  file2 = fopen("exemplo4.txt", "w");

  if (file2 == NULL) {
    printf("Erro ao abrir o arquivo de escrita");
    return 1;
  }

  while ((c = fgetc(file)) != EOF) {
    fputc(c + 1, file2);
  }

  fclose(file);
  fclose(file2);

  return 0;
}