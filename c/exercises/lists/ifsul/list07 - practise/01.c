#include <stdio.h>

/*
  Uma fábrica de camisetas produz os tamanhos P, M e G, cada uma sendo
  vendida  respectivamente  por  15,  18  e  22  Reais  cada. 
  
  Faça  um  algoritmo que  leia  o  código  do  tamanho  da  camiseta 
  (P, M  ou  G)  e  a  quantidade vendida. 
  
  Calcule o valor total da venda e escreva no final.
*/

int main() {
  char tamanho; 
  int quantidade;

  printf("Digite o tamanho da camiseta (P, M ou G): ");
  scanf(" %c", &tamanho);

  printf("Digite a quantidade de camisetas: ");
  scanf("%d", &quantidade);

  switch (tamanho) {
    case 'P':
      printf("Valor total da venda: R$ %.2f\n", quantidade * 15.0);
      break;
    
    case 'M':
      printf("Valor total da venda: R$ %.2f\n", quantidade * 18.0);
      break;

    case 'G':
      printf("Valor total da venda: R$ %.2f\n", quantidade * 22.0);
      break;

    default:
      printf("Tamanho inválido!\n");
      break;
  }

  return 0;
}