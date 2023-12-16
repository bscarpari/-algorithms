#include <stdio.h>
#include <string.h>

/*  
Faça um algoritmo que leia o nome, o estado_civil e o estado civil de uma pessoa.

Caso estado_civil seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos)
*/

int main() {
  char nome[50], estado_civil[10], sexo[2];
  int tempo_casada;

  printf("\nDigite seu nome: ");
  scanf("%s", &nome); // %s para string (vetor de char)

  printf("\nDigite seu sexo (M / F): ");
  scanf(" %c", &sexo); // %c para char (caractere)

  printf("\nDigite seu estado civil (SOLTEIRO / CASADO(A) ): ");
  scanf("%s", &estado_civil); // %s para string (vetor de char)

  if(sexo[0] == 'F' && strcmp(estado_civil, "CASADA") == 0) {
    printf("\nDigite o tempo de casada (anos): ");
    scanf("%d", &tempo_casada); // %d para int (inteiro)

    printf("\n%s, %d anos de casada", nome, tempo_casada);
  }

  return 0;
}