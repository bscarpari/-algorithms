#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 4) (1,0)- Escreva um programa em C que solicite o nome completo de um
// aluno. Ap�s escreva na tela escreva o total de letras do nome e o nome
// invertido. A invers�o deve ser feita em uma fun��o separada, retornando
// o nome invertido.

int main() {
  setlocale(LC_ALL, "Portuguese");
  char nome[50];
  int i, tamanho;

  printf("Digite seu nome completo: ");
  gets(nome);

  tamanho = strlen(nome);

  printf("O seu nome possui %d letras!\n", tamanho);

  // nome invertido:
  for (i = tamanho; i >= 0; i--) {
    printf("%c", nome[i]);
  }

  printf("\n\n");

  system("pause");
  return 0;
}
