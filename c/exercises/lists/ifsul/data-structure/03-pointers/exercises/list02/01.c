#include <stdio.h>

int main() {
    int var = 1;
    int *ptr = &var;

    printf("\nVariavel");
    printf("\nValor da variavel (variavel): %i", var);
    printf("\nEndereco na memoria (variavel): %i", &var);
    printf("\n\nPonteiro");
    printf("\nValor da variavel (ponteiro): %i", *ptr);
    printf("\nEndereco da memoria (ponteiro): %i", &ptr);

    return 0;
}