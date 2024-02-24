/* 
  Faça uma função que receba um valor inteiro e positivo e 
  calcula o seu fatorial. Ao final da função o resultado
  deve ser impresso na tela.
*/

#include <stdio.h>
#include <string.h>

int fatorial(int n) {
	if(n == 0) return 1;
	return fatorial(n - 1);
}

int main() {
  
}

