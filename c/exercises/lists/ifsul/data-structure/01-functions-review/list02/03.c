/* 
  Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e
  retorna essa idade expressa em dias.
*/

#include <stdio.h>
#include <string.h>

void convert_age_to_days(int years, int months, int days) {
  int result = 0;
  
  result = (years * 365) + (months * 30) + days;
  
  printf("%i", result);
}

int main() {
  int years, months, days;
  
  printf("\nDigite em sequência sua idade em anos, meses e dias: ");
  scanf("%i %i %i", &years, &months, &days);	
	
  convert_age_to_days(years, months, days);
}

