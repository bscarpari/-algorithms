#include <stdio.h>

int main()
{
  char nome[50], estado_civil[2], sexo[2];
  int tempo_casada;

  printf("\nDigite seu nome: ");
  scanf("%s", &nome); // %s para string (vetor de char)

  printf("\nDigite seu sexo (M / F): ");
  scanf(" %c", &sexo); // %c para char (caractere)

  printf("\nDigite seu estado civil (S / C): ");
  scanf(" %c", &estado_civil);
  // veja que antes de ler ele possui um espaço
  // em branco impedindo que leia o espaco em branco

  // Por isto, que aqui comparamos o estado_civil[0] = 'C'
  if (sexo[0] == 'F' && estado_civil[0] == 'C')
  {
    printf("\nDigite o tempo de casada (anos): ");
    scanf("%d", &tempo_casada);

    printf("\n%s, %d anos de casada", nome, tempo_casada);
  }

  return 0;
}