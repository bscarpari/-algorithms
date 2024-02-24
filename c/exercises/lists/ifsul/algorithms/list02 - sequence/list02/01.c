#include <stdio.h>
#include <locale.h>

/*
  Escreva um algoritmo que tenha como entrada o número de horas que um 
  funcionário trabalhou e o valor da hora trabalhada. O algoritmo deverá 
  calcular e escrever o salário que este funcionário irá receber.
*/

int main() {
    setlocale(LC_ALL, "");
    
    float horas, valorHora, salario;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("O salário do funcionário é: R$ %.2f", salario);

    return 0;
}