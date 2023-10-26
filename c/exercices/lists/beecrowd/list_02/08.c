#include <stdio.h>

/*
  A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
  
  Salário	Percentual de Reajuste
  0 - 400.00              | 15%
  400.01 - 800.00         | 12%
  800.01 - 1200.00        | 10%
  1200.01 - 2000.00       | 7%
  Acima de 2000.00        | 4%

  Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.
  
  Entrada
  A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

  Saída
  Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho conforme exemplo abaixo.
*/

int main() {
  double salary, newSalary, reajust, percentual;

  scanf("%lf", &salary);

  if (salary >= 0 && salary <= 400) {
    percentual = 15;
  } else if (salary >= 400.01 && salary <= 800) {
    percentual = 12;
  } else if (salary >= 800.01 && salary <= 1200) {
    percentual = 10;
  } else if (salary >= 1200.01 && salary <= 2000) {
    percentual = 7;
  } else if (salary > 2000) {
    percentual = 4;
  }

  newSalary = salary + (salary * (percentual / 100));

  reajust = newSalary - salary;

  printf("Novo salario: %.2lf\n", newSalary);
  printf("Reajuste ganho: %.2lf\n", reajust);
  printf("Em percentual: %.0lf %%\n", percentual);

  return 0;
}