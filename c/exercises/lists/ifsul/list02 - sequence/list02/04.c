#include <stdio.h>

/*
    Escreva  um  algoritmo  para  calcular  o  consumo  médio  de
    combustível  de um  automóvel  em  Km/l.  Considere  como  dados
    de entrada:  quilometragem inicial, quilometragem final, volume de
    combustível consumido.
*/

int main() {
    float kmInicial, kmFinal, volume, consumo;

    printf("\nDigite a quilometragem inicial: ");
    scanf("%f", &kmInicial);

    printf("\nDigite a quilometragem final: ");
    scanf("%f", &kmFinal);

    printf("\nDigite o volume de combustível consumido: ");
    scanf("%f", &volume);

    consumo = (kmFinal - kmInicial) / volume;

    printf("\nO consumo médio de combustível: %.2f", consumo);

    return 0;
}