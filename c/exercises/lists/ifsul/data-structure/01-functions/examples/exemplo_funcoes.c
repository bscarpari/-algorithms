#include <stdio.h>

//Declaração de uma função
void print_OlaMundo();				

//Declaração e implementação de uma função
int cinco(){			
	return 5;
}

//Declaração de uma função
void print_numInteiro(int num);		

//Declaração e implementação de uma função
int incremento(int num){			
	return num+1;
}



int main(){
	
	//Declaração de uma variável do tipo inteiro
	int num, num1;						
					

	//Chamando a função print_OlaMundo
	print_OlaMundo();				

	//Chamando a função cinco
	num = cinco();	

	//Chamando a função print_numInteiro
	print_numInteiro(num);

	//Chamando a função incremento
	num1 = incremento(num);			

	//Chamando a função print_numInteiro
	print_numInteiro(num1);			

}

//Implementação da função print_numInteiro
void print_numInteiro(int num){					
	printf("O número inteiro é %d\n", num);
}

//Implementação da função print_OlaMundo
void print_OlaMundo(){							
	printf("Olá Mundo!\n");
}
