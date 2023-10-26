#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1) (1,0) Depois da liberação do governo para as mensalidades dos planos
//de saúde, as pessoas começaram a fazer pesquisas para descobrir um
//bom plano, não muito caro. Um vendedor de um plano de saúde
//apresentou a tabela a seguir:
//- até 10 anos - R$30,00
//- acima de 10 anos até 29 anos - R$60,00
//- acima de 29 anos até 45 anos - R$120,00
//- acima de 45 anos até 59 anos - R$150,00
//- acima de 59 anos até 65 anos - R$250,00
//- maior que 65 anos - R$400,00
//Faça um programa que entre com a idade de uma pessoa e imprime o
//valor que ela deverá pagar por mês e a idade dela. O algoritmo deve
//terminar somente quando a idade da pessoa for igual a zero.

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("TABELA DE PREÇOS - PLANOS DE SAÚDE\n");
	printf("-----------------------------------\n");
	printf("até 10 anos - R$30,00\n");
	printf("acima de 10 anos até 29 anos - R$60,00\n");
	printf("acima de 29 anos até 45 anos - R$120,00\n");
	printf("acima de 45 anos até 59 anos - R$150,00\n");
	printf("acima de 59 anos até 65 anos - R$250,00\n");
	printf("maior que 65 anos - R$400,00\n");
	printf("Digite '0' para encerrar o programa!\n");
	printf("-----------------------------------\n");


	do{
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		
		if(idade <= 10 && idade != 0){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$30,00 mensalmente!\n");
		}
		else if(idade > 10 && idade <=29){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$60,00 mensalmente!\n");
		}
		else if(idade > 29 && idade <=45){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$120,00 mensalmente!\n");
		}
		else if(idade > 45 && idade <=59){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$150,00 mensalmente!\n");
		}
		else if(idade > 59 && idade <=65){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$250,00 mensalmente!\n");
		}
		else if(idade > 65){
			printf("Você tem %d anos\n", idade);
			printf("Você deverá pagar R$400,00 mensalmente!\n");
		}
	} while(idade != 0);
	
	printf("\n\n");

	system("pause");
	return 0;



}

