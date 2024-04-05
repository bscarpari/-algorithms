#include <stdio.h>

//Declaração e implementação da função fatorial recursiva
int fat(int N){
	if(N == 0){
		return 1;
	}else{
		return N * fat(N-1);
	}
}

int main(){
	
	//Declaração de uma variável do tipo inteiro
	int num;						
	
	//Leitura de um número para o calculo do fatorial
	printf("Digite um número calcular o fatorial dele: ");
	scanf("%d", &num);
	
	//Chamada da função fatorial e impressão do resultado
	printf("Resultado do fatorial de %d é: %d\n", num, fat(num));		

}
