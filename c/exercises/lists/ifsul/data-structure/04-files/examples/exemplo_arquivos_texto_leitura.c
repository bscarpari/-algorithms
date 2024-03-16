#include <stdio.h>

#define MAX 101

int main(){

	//Declaração de uma string e de um ponteiro do arquivo
	char string[MAX];
	FILE *arq;

	//Abertura do arquivo somente para leitura
	arq = fopen("arquivo.txt", "r");

	//Teste para ver se o arquivo foi aberto
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}

	//Enquanto a leitura do arquivo for diferente de NULL, ou seja, enquanto tiver valores a serem lidos a condição será verdadeira
	while(fgets(string, sizeof(string), arq) != NULL){

		//Imprime o que foi lido do arquivo
		printf("%s", string);

	}

	//Fechamento do arquivo
	fclose(arq);
}