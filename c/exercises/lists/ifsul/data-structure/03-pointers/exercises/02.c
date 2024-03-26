#include <stdio.h>
#include <string.h>

/* 
 Crie um programa que contenha um vetor de inteiros contendo 5 elementos.
 Utilizando apenas aritmética de ponteiros, leia esse vetor do
 teclado e imprima o dobro de cada valor lido
*/
int main() {
  int vet[5];
  int *ponteiro; // ponteiro
  
  ponteiro = &vet[0]; // primeira posição do 
  
  // Navegue pelo vetor atribuindo o endereço na memória
  for(int i = 0; i < 4; i++) {
  	scanf("%i", ponteiro + i);
  }
  
  // Ler os valores e dobrar pela referência na memória
  for (int i = 0; i < 4; i++) {
  	printf("\n%i", *(ponteiro + i) * 2);
  } 
	
  return 0;
}

