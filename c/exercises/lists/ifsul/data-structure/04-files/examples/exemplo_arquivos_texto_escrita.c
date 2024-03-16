#include <stdio.h>
#include <string.h>

#define MAX 101

int main(){

	//Declaração de uma string e de um ponteiro do arquivo
	char string[MAX];
	FILE *arq;

	//Abertura do arquivo somente para escrita
	arq = fopen("arquivo.txt", "w");

	//Teste para ver se o arquivo foi aberto
	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}

	//Leitura do teclado
	printf("Digite uma linha de até 100 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
	scanf("%[^\n]", string);

	//Enquanto o usuário não digitar "..." o laço de repetição continuará escrevendo no arquivo 
	while(strcmp(string, "...")){

		//Escrita no arquivo
		fputs(string, arq);
		//Escrevendo um \n após a frase para delimitar o fim de linha no arquivo
		fputc('\n', arq);

		//Leitura do teclado
		printf("Digite uma linha de até 100 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
		scanf(" %[^\n]", string);
	}

	//Fechamento do arquivo
	fclose(arq);
}