#include <stdio.h>
#include <math.h>

/*
    Escreva  um  algoritmo  para  ler  as  dimensões  de  uma  cozinha 
    retangular (comprimento,  largura  e  altura).  
    
    Calcular  e  escrever  a quantidade  de  caixas de azulejos para se
    colocar em todas as suas paredes (considere que não será descontada
    a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2
*/

int main() {
    float comprimento, largura, altura, area_total, caixas;

    printf("\nDigite o comprimento da cozinha: ");
    scanf("%f", &comprimento);

    printf("\nDigite a largura da cozinha: ");
    scanf("%f", &largura);

    printf("\nDigite a altura da cozinha: ");
    scanf("%f", &altura);

    // Para compreensão dimensional 
    // float piso = largura * comprimento;
    // float teto = piso;
    // float parede1 = largura * altura;
    // float parede2 = comprimento * altura;
    // float area_total = piso + teto + parede1 * 2 + parede2 * 2;

    area_total = comprimento * altura * 2 + largura * altura * 2;

    caixas = area_total / 1.5;

    printf("\nA quantidade de caixas de azulejos: %.2f", caixas);

    return 0;
}