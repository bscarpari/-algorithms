#include <stdio.h>

/*
Faça um programa que receba do usuário um arquivo texto
e mostre na tela quantas letras são vogais.
*/

int main() {
  FILE *file;
  char vowel[] = "aeiou";
  char filename[255], c;
  int i, vowels = 0;

  printf("Digite o arquivo texto que as vogais serão contadas: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  while ((c = fgetc(file)) != EOF) {
    for (i = 0; i < sizeof(vowel); i++) {
      if (c == vowel[i]) vowels++;
    }
  }

  printf("O arquivo possui %d vogais.\n", vowels);

  return 0;
}