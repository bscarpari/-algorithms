#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

//3) (2,0) - Faça um programa que leia um vetor R com 10 posições char,
//que contém as respostas de um prova de concurso, contendo os valores
//de A até D correspondentes as respostas de cada questão. Ler a seguir,
//um cartão de respostas (P[10]), contendo as respostas de um aluno.
//Compare os dois vetores para verificar a quantidade de respostas iguais.
//Ao final mostrar o nº de acertos do aluno.

int main(){
	setlocale(LC_ALL, "Portuguese");
	char R[10], P[10];
	int i, acertos = 0;
	
	printf("OBS. AS QUESTÃO SÃO DE 'A' ATÉ 'D' APENAS.\n");
	for(i=0; i<10; i++){
	char resposta;
        printf("Insira o gabarito da questão %d: ", i);
        
        do {
            scanf(" %c", &resposta);
            resposta = toupper(resposta);
            
            if (resposta != 'A' && resposta != 'B' && resposta != 'C' && resposta != 'D') {
                printf("Resposta inválida, digite novamente: ");
            }
        } while (resposta != 'A' && resposta != 'B' && resposta != 'C' && resposta != 'D');
        
        R[i] = resposta;		
	}
	
	for(i=0; i<10; i++){
		char resposta;
        printf("Insira a resposta do aluno para a questão %d: ", i);
        
        do {
            scanf(" %c", &resposta);
            resposta = toupper(resposta);
            
            if (resposta != 'A' && resposta != 'B' && resposta != 'C' && resposta != 'D') {
                printf("Resposta inválida!, digite novamente: ");
            }
        } while (resposta != 'A' && resposta != 'B' && resposta != 'C' && resposta != 'D');
        
        P[i] = resposta;
	}
	
	for(i=0; i<10; i++){
		if(P[i] == R[i]){
			acertos++;
		}
	}

	printf("O aluno acertou %d questões!", acertos);

	printf("\n\n");

	system("pause");
	return 0;



}

