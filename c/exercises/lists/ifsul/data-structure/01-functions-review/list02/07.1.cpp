#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, rest = 0;
  
  do {
  	printf("\nDigite um n�mero: ");
  	scanf("%d", &n);
  		
	for(int i = 0; i < n; i++) {
		if(n % i == 0) {
	  		rest += i;
		}
	}
	
  	if(rest == n)
	  printf("\n%d � um n�mero perfeito", n);
	else
		printf("\n%d n�o � perfeito", n);
		
	rest = 0;	
  }	while (n != 0);

  return 0;
}

