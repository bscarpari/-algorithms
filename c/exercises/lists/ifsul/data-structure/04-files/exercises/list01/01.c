#include <stdio.h>
#include <string.h>

#define MAX 255

int main(){
	FILE *arq;
	char string[MAX];
    int num_lines = 0, length = 0;

	arq = fopen("arq_01.txt", "w");

	if(arq == NULL){
		printf("Erro ao abrir o arquivo\n");
		return 0;
	}

	printf("Digite uma linha de até 255 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
	scanf("%[^\n]", string);

	while(strcmp(string, "FIM")){
        length = strlen(string);
        string[length] = '\n';
        string[length + 1] = '\0';
		fputs(string, arq);
		fputc('\n', arq);

		printf("Digite uma linha de até 255 caracteres para ser armazenada em um arquivo, caso queira terminar digite ...\n");
		scanf(" %[^\n]", string);

        if(strcmp(string, "\n")) num_lines++; 
	}

    printf("\nNum de linhas: %i", num_lines);

	fclose(arq);
}