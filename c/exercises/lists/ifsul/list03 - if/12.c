#include <stdio.h>

int main() {
  double salary;

  scanf("%lf", &salary);

  if(salary <= 600.00)
    return printf("\nIsento");

  if(salary > 601.00 && salary <= 1200.00)
    return printf("\nDesconto de R$ %.2lf (20%%) sobre R$ %.2lf", salary * 0.2, salary);
    
  if(salary > 1201.00 && salary <= 2000.00)
    return printf("\nDesconto de R$ %.2lf (20%%) sobre R$ %.2lf", salary * 0.25, salary);

  if(salary > 2001.00)
    return printf("\nDesconto de R$ %.2lf (20%%) sobre R$ %.2lf", salary * 0.30, salary);

  return 0;
}