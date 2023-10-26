#include <stdio.h>

/*
  Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,
  o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número
  e o salário do funcionário, com duas casas decimais.
*/
 
int main() {
    int NUMBER, WORKED_HOURS;
    float HOUR_VALUE, SALARY;
    
    scanf("%i %i %f", &NUMBER, &WORKED_HOURS, &HOUR_VALUE);

    SALARY = WORKED_HOURS * HOUR_VALUE;

    printf("NUMBER = %i\nSALARY = U$ %.2f\n", NUMBER, SALARY);
    
    return 0;
}