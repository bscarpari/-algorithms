#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
   4) (1,0)- Escreva um programa em C que solicite o nome completo de um
   aluno. Apos escreva na tela escreva o total de letras do nome e o nome
   invertido.

   A inverso deve ser feita em uma funcao separada, retornando
   o nome invertido.
*/

int main() {
  char nome[50];
  int i, tamanho;

  printf("Digite seu nome completo: ");
  gets(nome);

  tamanho = strlen(nome);

  printf("O seu nome possui %d letras!\n", tamanho);

  for (i = tamanho; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  printf("\n\n");

  return 0;
}
