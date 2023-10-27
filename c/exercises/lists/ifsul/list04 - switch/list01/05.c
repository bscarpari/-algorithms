#include <stdio.h>

/*
 Uma empresa concedera um aumento de salario aos seus funcionarios, variavel
 de acordo com o cargo, conforme a tabela abaixo a ser exibida no programa. 
 
 Faca um programa que leia o salario e o cargo de um funcionario e calcule
 o novo salario. 
 
 Se o cargo do funcionario nao estiver na tabela, ele devera entao receber 40% de aumento. 
 
 Mostre o salario antigo, o novo salario e a diferenca (utilize uma mensagem adequada)

  Cargo             |  Percentual
  1 - Gerente       |  10%
  2 - Engenheiro    | 20%
  3 - Tecnico       | 30%
  4 - Outros        | 40%

*/

int main() {
  int position;
  float salary;

  printf("Cargo             |  Percentual\n");
  printf("1 - Gerente       |  10%%\n");
  printf("2 - Engenheiro    |  20%%\n");
  printf("3 - Tecnico       |  30%%\n");
  printf("4 - Outros        |  40%%\n");

  printf("\nDigite a sua posicao: ");
  scanf("%d", &position);

  printf("\nDigite seu salario (R$): ");
  scanf("%f", &salary);

  switch (position) {
  case 1:
    printf("\nSalario antigo: R$ %.2f", salary);
    printf("\nNovo salario: R$ %.2f", salary + (salary * 0.1));
    printf("\nDiferenca: R$ %.2f", (salary + (salary * 0.1)) - salary);
    break;

  case 2:
    printf("\nSalario antigo: R$ %.2f", salary);
    printf("\nNovo salario: R$ %.2f", salary + (salary * 0.2));
    printf("\nDiferenca: R$ %.2f", (salary + (salary * 0.2)) - salary);

  case 3:
    printf("\nSalario antigo: R$ %.2f", salary);
    printf("\nNovo salario: R$ %.2f", salary + (salary * 0.3));
    printf("\nDiferenca: R$ %.2f", (salary + (salary * 0.3)) - salary);
  
  default:
    printf("\nSalario antigo: R$ %.2f", salary);
    printf("\nNovo salario: R$ %.2f", salary + (salary * 0.4));
    printf("\nDiferenca: R$ %.2f", (salary + (salary * 0.4)) - salary);
    break;
  }

  return 0;
}
