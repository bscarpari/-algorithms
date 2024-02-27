#include <stdio.h>
#include <stdlib.h>

void isPerfectNumber(int n) {
	int rest = 0; // resto
	
	/* 
	 	FLUXO DE TESTE DE CAIXA:
		1 de 6 
		6 % 1 == 0 => 1 (TRUE)
		  rest = 0 + 1 = 1
		
		2 de 6
		6 % 2 == 0 => 3 (TRUE)
		  rest = 1 + 2 = 3
		
		3 de 6
		6 % 3 == 0 => 2 (TRUE)
		  rest = 3 + 3 = 6
	*/
	for(int i = 0; i < n; i++) {
		if(n % i == 0) {
			rest += i;
			printf("\nResto %i: %i", i + 1, rest);
		}
	}
	
	printf("Soma do resto: %i", rest);
	
	if(rest == n) printf("\nO número é perfeito");
	else printf("\nO número não é perfeito");
}

int main() {
  isPerfectNumber(5); // Output = 6 = 1 + 2 + 3
  return 0;
}

