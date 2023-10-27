#include <stdio.h>

/*
    Ler um valor inteiro e escrever seu antecessor e seu sucessor.
*/

int main() {
    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nAntecessor: %d", numero - 1);
    printf("\nSucessor: %d", numero + 1);

    return 0;
}