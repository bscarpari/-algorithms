/* 
 Implemente uma fun��o que receba quatro n�meros inteiros e retorne a soma dos tr�s maiores
 n�meros, dentre os quatro recebidos.
*/

#include <stdio.h>
#include <string.h>

int calc_sum_numbers(int n1, int n2, int n3, int n4) {
	int result = 0;

	result = n1 + n2 + n3 + n4;
	
	return result;
}

int main() {	
  int result = calc_sum_numbers(1, 2, 3, 4);
  printf("%i", result);
}

