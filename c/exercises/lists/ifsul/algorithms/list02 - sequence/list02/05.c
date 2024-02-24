#include <stdio.h>
#include <math.h>

/*
    Escreva  um  algoritmo  que  leia  dois  valores  numéricos  do
    tipo  inteiro  e escreva  o  resultado  da  soma  dos  quadrados 
    destes  números  e  o  resultado  da divisão dos dois valores. 
*/

int main() {
    int num01, num02, soma, divisao;
    
    printf("\nDigite o primeiro numero: ");
    scanf("%i", &num01);

    printf("\nDigite o segundo numero: ");
    scanf("%i", &num02);

    soma = pow(num01, 2) + pow(num02, 2);

    printf("\nA soma dos quadrados dos numeros: %i", soma);

    divisao = num01 / num02;

    printf("\nA divisão dos numeros: %i", divisao);
    
    return 0;
}