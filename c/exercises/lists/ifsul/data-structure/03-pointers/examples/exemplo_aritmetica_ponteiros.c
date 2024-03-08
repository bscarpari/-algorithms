#include <stdio.h>

void main(){

	//Declaração de um vetor inteio
	int x[5]= {10, 20, 30, 40, 50};

	//Declaração de quatro ponteiros do tipo inteiro
	int *p1, *p2, *p3, *p4;


	printf("\n\nImpressão dos Resultados\n\n ");
	
	//Atribuindo o endereço da primeira posição do vetor x para o ponteiro p1
	p1 = &x[0];
	printf("\n\nO endereço da primeira posição de x é %p o conteúdo da primeira posição de x é %d", p1, *p1);

	//Atribuindo o endereço da posição seguinte da que está armazena em p1, no caso a segunda posição, para o ponteiro p2
	p2 = p1 + 1;
	printf("\n\nO endereço de p2 = p1 + 1 é %p e o conteúdo armazenado é %d", p2, *p2);
	printf("\n\nA diferença entre p1 e p2 é de %ld ", p2-p1);
	
	//Atrinuindo o endereço de p2 mais 3 para o ponteiro p3
	p3 = p2 + 3;
	printf("\n\nO endereço de p3 = p2 + 3 é %p e o conteúdo armazenado é %d", p3, *p3);
	printf("\n\nA diferença entre p2 e p3 é de %ld ",p3-p2);
	printf("\n\nA diferença entre p1 e p3 é de %ld ",p3-p1);

	//Atribuindo o endereço de p3 menos 4 para o ponteiro p4
	p4 = p3 - 2;
	printf("\n\nO endereço de p4 = p3 - 4 é %p e o conteúdo armazenado é %d", p4, *p4);
	printf("\n\nA diferença entre p1 e p4 é de %ld ",p4-p1);

	//Comparando os ponteiros p1 e p4 em sua igualdade	
	if(p1 == p4){
		printf("\n\nOs valores são iguais ");
	}
	else{
		printf("\nOs valores não são iguais ");
	}

	printf("\n\n");
}