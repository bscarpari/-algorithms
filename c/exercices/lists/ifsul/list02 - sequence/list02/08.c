#include <stdio.h>
#include <math.h>

/*
    Escreva  um  algoritmo  para  ler  o  raio  de  um  círculo,  
    calcular  e  escrever  a sua área.
*/
float circleArea(float radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    float raio, area;

    printf("\nDigite o raio do círculo: ");
    scanf("%f", &raio);

    area = circleArea(raio);

    printf("\nA área do círculo: %.2f", area);

    return 0;
}