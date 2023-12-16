#include <stdio.h>

/*
    Escreva  um algoritmo  para  calcular  e  informar  o  valor  de 
    conversão  para graus  centígrados  de  uma  temperatura  em  graus 
    Fahrenheit,  sabendo  que C=(5*(F-32))/9.
*/

int main() {
    float f, c;

    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5 * (f - 32)) / 9;

    printf("\nA temperatura em Celsius: %.2f", c);

    return 0;
}