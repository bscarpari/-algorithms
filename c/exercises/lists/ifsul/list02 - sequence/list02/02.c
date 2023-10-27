#include <stdio.h>
#include <locale.h>
#include <iostream>

/*
    Escreva   um   algoritmo   que   leia   dois   valores   numéricos   inteiros, 
    armazenando-os em duas variáveis (a e b). O algoritmo deverá trocar o valor das
    duas  variáveis,  de  tal  forma  que  em a fique  armazenado  no  valor  de b 
    e vice-versa. Ao final, o algoritmo deverá escrever os valores de a e b 
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, aux;

    printf("\nDigite o valor de a: ");
    scanf("%i", &a);

    printf("\nDigite o valor de b: ");
    scanf("%i", &b);

    printf("\nO valor de a: %i", a);
    printf("\nO valor de b: %i", b);

    aux = a;
    a = b;
    b = aux;

    printf("\nValores trocados");
    printf("\nO valor de a: %i", a);
    printf("\nO valor de b: %i", b);

    return 0;
}