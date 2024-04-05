#include <stdio.h>

/*
Faça um programa que receba do usuário um arquivo texto e um caracter. 
Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo.
*/

int main() {
  FILE *file;
  char carac = 'a';
  char filename[255], c;
  int i, caracs = 0;

  printf("Digite o nome do arquivo texto que as vogais serão contadas: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  while ((c = fgetc(file)) != EOF) {
    if (c == carac) caracs++;
  }

  printf("O caractere '%c' aparece %d veze(s) no arquivo.\n", carac, caracs);

  return 0;
}