/* 
 Implemente uma fun��o que receba quatro n�meros inteiros e retorne a soma dos tr�s maiores
 n�meros, dentre os quatro recebidos.
*/

#include <stdio.h>
#include <string.h>

int calc_sum_numbers(int quantity) {
	int result = 0, num = 0;
	
 	for(int i = 0; i < quantity; i++) {
 		printf("Digite o numero %i: ", i + 1);
 		scanf("%i", &num);
 		result += num;
	}
	
	return result;
}

int main() {	
  int result = calc_sum_numbers(4);
  printf("%i", result);
}

