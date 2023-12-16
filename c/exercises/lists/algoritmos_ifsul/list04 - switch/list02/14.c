#include <stdio.h>
#include <math.h>

/*
  O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. 

  A fórmula é IMC = peso / ( altura ) ².
  
  Elabore um programa que leia o pesoe a altura de um adulto e mostre sua condição de acordo com a tabela abaixo:
  
  - Abaixo de 18,5 (Abaixo do peso)
  - Entre 18,5 e 25 (Peso normal)
  - Entre 25 e 30 (Acima do peso)
  - Acima de 30 (Obeso)
*/

int main() {
  double peso, altura, IMC;

  printf("\nDigite seu peso (70.3 kg): ");
  scanf("%lf", &peso);

  printf("\nDigite sua altura (1.72 m): ");
  scanf("%lf", &altura);

  IMC = peso / pow(altura, 2);

  if(IMC < 18.5)
    return printf("\nAbaixo do peso");

  if(IMC >= 18.5 && IMC <= 25)
    return printf("\nPeso normal");

  if(IMC > 25 && IMC <= 30)
    return printf("\nAcima do peso");

  if(IMC > 30)
    return printf("\nObeso");

  return 0;
}