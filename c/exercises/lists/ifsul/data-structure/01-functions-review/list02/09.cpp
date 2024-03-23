#include <stdio.h>

/*
 Faça uma função que receba um vetor de inteiros e o número de elementos desse 
 vetor e calcule e retorne a soma de todos os elementos.
*/

int getSumFromVector(int *vet, int length) {
    int sum = 0;

    for(int i = 0; i < length; i++) {
        sum += vet[i];
    }

    return sum;
}

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(vet) / sizeof(int);

    int result = getSumFromVector(vet, length);
    printf("\nSoma: %i", result);

    return 0;
}