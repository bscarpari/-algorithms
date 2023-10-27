#include <stdio.h>

/*
  Faça um programa que mostra os valores partir
  de um intervalo informado pelo usuário
*/
void personalFor(int initial, int final) {
  if(initial == final) {
    printf("\nInforme um intervalo permitido");
    return;
  }

  if(initial > final) {
    for (int i = initial; i >= final; i--)
      printf("%d ", i);
  }
  
  if(final > initial) {
    for(int i = initial; i <= final; i++)
      printf("%d ", i);
  }
}

int main() {
  int initial = 0, final = 0;

  scanf("%d %d", &initial, &final);
  personalFor(initial, final);
  
  return 0;
}