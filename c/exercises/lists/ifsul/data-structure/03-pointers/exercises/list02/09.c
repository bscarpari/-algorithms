/*
Declare um array de inteiros e inicialize-o. Declare um ponteiro para o primeiro 
elemento do array e um ponteiro para o último elemento do array. Imprima o 
primeiro e o último elemento do array usando esses ponteiros.
*/

#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int *vet_first_elem = &vet[0];
    int length = sizeof(vet) / sizeof(int);

    printf("\nFirst array element: %i", vet_first_elem[0]);
    printf("\nLast array element: %i", vet_first_elem[length]);

    return 0;
}