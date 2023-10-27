#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//2) (2,0) Algum tempo atrás, foi realizada uma pesquisa em Porto Alegre,
//com um número desconhecido de pessoas. De cada entrevistado(a)
//foram colhidos os seguintes dados:
//a) clube de preferência (1-Grêmio; 2-Internacional; 3-Outros);
//b) cidade de origem (0-Porto Alegre; 1-Outras).
//Deseja-se saber:
//a) número de torcedores por clube;
//b) número de pessoas nascidas em Porto Alegre que não torcem
//por nenhum dos dois primeiros clubes;
//c) número de pessoas entrevistadas.
//Para encerrar a entrada de dados, o time fornecido deverá ser igual a
//zero (não esqueça de fazer a consistência dos dados de entrada).


int main(){
	setlocale(LC_ALL, "Portuguese");
	int clube, gremio = 0, internacional = 0, outros_clubes = 0;
	int cidade, poa = 0, outras_cidades = 0, alternativaB = 0;
	int contEntrevistados = 0;
	
	do{
		printf("Para qual clube você torce?\n");
		printf("1 - GRÊMIO\n2 - INTERNACIONAL\n3 - OUTROS\n");
		printf("Digite clube '0' para encerrar o programa!\n");

		scanf("%d", &clube);
				
			//fazendo a contagem das informações
			if(clube == 1){
				gremio++;
			}
			else if(clube == 2){
				internacional++;
			}
			else if(clube == 3){
				outros_clubes++;
			}
			else{
				printf("Clube inválido!");
				break;
			}
			
			printf("Qual é a sua cidade de origem?\n");
			printf("0 - PORTO ALEGRE\n1 - OUTRAS\n");
			scanf("%d", &cidade);
			if(cidade == 0){
				poa++;
			}
			else if(cidade == 1){
				outras_cidades++;
			}
			else{
				printf("Cidade inválida!");
				break;
			}
			
			//c) número de pessoas entrevistadas.
			contEntrevistados++;
			
			//b) número de pessoas nascidas em Porto Alegre que não torcem por nenhum dos dois primeiros clubes;
			if(cidade == 0 && clube != 1 && clube != 2){
				alternativaB++;
			}
			
		}while(clube != 0);
	
		printf("número de torcedores por clube:\n");
		printf("GRÊMIO = %d\n", gremio);
		printf("INTERNACIONAL = %d\n", internacional);
		printf("Outros clubes = %d\n", outros_clubes);
		printf("-----------------------------------\n");
		printf("Número de pessoas nascidas em Porto Alegre que não torcem por nenhum dos dois primeiros clubes = %d\n", alternativaB);
		printf("-----------------------------------\n");
		printf("Número de pessoas entrevistadas = %d\n", contEntrevistados);
	
	
	printf("\n\n");

	system("pause");
	return 0;
}

