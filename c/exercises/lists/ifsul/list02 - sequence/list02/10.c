#include <stdio.h>

/*
    Escreva  um  algoritmo  que  leia  a  distância  percorrida  por 
    um  automóvel (em  km)  e  o  intervalo  de  tempo  utilizado 
    para  percorrer  essa  distância  (em horas). Calcule e escreva a
    velocidade médiano percurso em km/h. 
*/

int main() {
    float distancia, tempo, velocidade;

    printf("\nDigite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("\nDigite o tempo utilizado (em horas): ");
    scanf("%f", &tempo);

    // Fórmula: Vm = d / t 
    velocidade = distancia / tempo;

    printf("\nA velocidade média no percurso: %.2f km/h", velocidade);

    return 0;
}