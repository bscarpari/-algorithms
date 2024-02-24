#include <stdio.h>
#include <string.h>

int main() {
  int tam;
  char nome[15], sex;

  printf("Digite um nome:");
  gets(nome);

  printf("Digite o sexo (F/M):");
  scanf("%c", &sex);

  tam = strlen(nome);

  if (sex == 'F' || sex == 'f') printf("\n%s  - Mulher\n", nome);
  if (sex == 'M' || sex == 'm') printf("\n%s  - Homem\n", nome);

  printf("\nO total de letras do nome é: %i\n\n\n", tam);

  return 0;
}