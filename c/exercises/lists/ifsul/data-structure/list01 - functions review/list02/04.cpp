/* 
  Faça uma função que receba um valor inteiro e positivo e 
  calcula o seu fatorial. Ao final da função o resultado
  deve ser impresso na tela.
*/

#include <stdio.h>
#include <string.h>

int fatorial(int n) {
	if(n == 0) return 1;
	return n * fatorial(n - 1);
}

int main() {
  int input = 0;
  
  while(input != -1) {
  	printf("\nDigite um fatorial a ser calculado: ");
  	scanf("%i", &input);
  	
  	int result = fatorial(input);
  	
	printf("Output: %i", result);
	printf("\n\n");
  }
}


