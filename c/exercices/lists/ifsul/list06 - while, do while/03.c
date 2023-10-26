#include <stdio.h>

/*
  Faça  um  programa  que  peça  uma  nota,  entre  zero 
  e  dez.
  
  Mostre  uma mensagem  caso  o  valor  seja  inválido e
  continue pedindo até que o usuário informe um valor
  válido.
*/
int main() {
  int nota;

  do {
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 10)
      printf("Nota inválida!\n");
  } while (nota < 0 || nota > 10);

  return 0;
}