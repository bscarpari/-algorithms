#include <stdio.h>

/*
  Um operário que está construindo um muro,
  consegue erguer o muro 6 cm por dia.
  
  Calcule e escreva quantos dias serão
  necessários para que o muro atinja o tamanho
  desejado pelo proprietário.
*/

int main() {
  int altura, dias;

  printf("Digite a altura desejada do muro: ");
  scanf("%d", &altura);

  dias = altura / 6;

  printf("O muro levara %d dias para ficar pronto.\n", dias);

  return 0;
}