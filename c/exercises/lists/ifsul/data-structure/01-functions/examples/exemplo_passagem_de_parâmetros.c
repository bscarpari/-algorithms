#include <stdio.h>

//Declaração e implementação de uma função
void soma(int num1, int num2, int *soma){			
	
	//Soma dos dois números recebidos como parâmetros
	*soma =  num1 + num2;								

}

//Declaração de uma função, sem a implementação
void print_numInteiro(int num);				



int main(){
	
	//Declaração de três variáveis do tipo inteiro
	int num1, num2, resultado;							

	printf("Digite um número: ");
	scanf("%d", &num1);

	printf("Digite um número: ");
	scanf("%d", &num2);

	//Chamando a função soma
	soma(num1, num2, &resultado);	

	//Chamando a função print_numInteiro passando a variável num1 como parâmetro
	print_numInteiro(num1);

	//Chamando a função print_numInteiro passando a variável num2 como parâmetro
	print_numInteiro(num2);

	//Chamando a função print_numInteiro passando a variável resultado como parâmetro
	print_numInteiro(resultado);

}


//Implementação da função print_numInteiro
void print_numInteiro(int num){					
	printf("O número inteiro é %d\n", num);
}