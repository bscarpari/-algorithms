#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 10;
  int vetorX[length], vetorY[length], interseccao[length], i = 0;

  for (i = 0; i < length; i++) {
    printf("\nInsira o valor %i (VETOR X): ", i);
    scanf("%i", &vetorX[i]);
  }

  for (i = 0; i < length; i++) {
    printf("\nInsira o valor %i (VETOR Y): ", i);
    scanf("%i", &vetorY[i]);
  }

  // TAREFAS SOLICITADAS
  // a) Imprima o conte�dos do dois vetores (0,5) [V]
  printf("\n\nVETOR X:");
  for (i = 0; i < length; i++) {
    printf("%i ", vetorX[i]);
  }

  printf("\nVETOR Y:");
  for (i = 0; i < length; i++) {
    printf("%i ", vetorY[i]);
  }

  // b) Crie um terceiro vetor que seja a interse���o entre os 2 vetores (1,0)
  // [V]
  for (i = 0; i < length; i++) {
    if (vetorX[i] == vetorY[i]) {
      interseccao[i] = vetorX[i];
    } else {
      interseccao[i] = 0;  // OBS.: N�O � IGUAL
    }
  }

  printf("\nINTERSEC��O:");
  // c) Mostre o vetor criado (0,5) [V]
  for (i = 0; i < length; i++) {
    printf("%i ", interseccao[i]);
  }

  system("pause");
  return 0;
}


/* 
  Faça um programa que leia dois vetores de 10 posições e faça as seguintes
  tarefas:

  a) Imprima o conteúdos do dois vetores (0,5)
  b) Crie um terceiro vetor que seja a interseção entre os 2 vetores (1,0)
  c) Mostre o vetor criado (0,5)
*/