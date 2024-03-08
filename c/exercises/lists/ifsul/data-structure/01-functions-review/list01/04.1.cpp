/* 
  Implemente uma fun��o recursiva que recebe um n�mero �n� e retorna n-�simo numero da
  sequencia de fibonacci.

  A sequencia de fibonacci funciona da seguinte forma:
	se n = 1 ent�o fibonacci(n) = 0
	se n = 2 ent�o fibonacci(n) = 1
	se n > 2 ent�o fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
*/

#include <stdio.h>
#include <string.h>

double fibonacci(double n) {
	if(n == 1) return 1;
	if(n == 2) return 1;
	if(n > 2) return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int option = 0;
	
	do {
		printf("\nDigite o e-nesimo numero a ser exibido: ");
		scanf("%i", &option);
		
		double result = fibonacci(option);
		
		printf("%.2lf", result);
	} while(option != -1);
}

