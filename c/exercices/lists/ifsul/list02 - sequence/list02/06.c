#include <stdio.h>
#include <locale.h>

/*
    Faça um algoritmo para calcular e escrever a tabuada até 10
    de um número lido. 
*/

int main() {
    int numero, i;

    printf("\nEscolha qual tabuada de 1 a 10: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", numero, i, numero * i);
    }

    return 0;
}