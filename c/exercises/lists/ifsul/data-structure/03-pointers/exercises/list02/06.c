/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. 
Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o 
dobro de cada valor lido
*/

#include <stdio.h>

int main() {
    int i;
    int vet[5];
    int *vet_firstElem = &vet[0];
    int length = sizeof(vet) / sizeof(int);

    printf("\nType the values: ");

    for(i = 0; i < length; i++) {
        scanf("%i", &vet[i]);
        vet[i] = vet_firstElem[i] * 2;
    }

    printf("\nResult: \n");

    for(i = 0; i < length; i++) {
        printf("%i ", vet[i]);
    }

    return 0;
}