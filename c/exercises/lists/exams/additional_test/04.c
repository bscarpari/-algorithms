#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int i = 1;
	int idade = 0, peso = 0, jejum = 0, sintomas = 0, doadores = 0, naoDoadores = 0;
	
	// a) Programa que pergunta para um número não determinado de doares (1,0)
	do {
		// c) Consistência na entrada de cada dado lido
		printf("\n====Doador %i====", i);
		
		printf("\nInforme sua idade: ");
		scanf("%i", &idade);
		
		if(idade < 0) {
			printf("\nIdade inválida");
			return 0;
		}
		
		printf("Qual é o seu peso? ");
		scanf("%i", &peso);
		
		if(peso < 0)  {
			printf("\nPeso inválido");
			return 0;
		}
		
		printf("Você está em jejum? [Digite 0 (FALSE) e 1 (TRUE)]: ");
		scanf("%i", &jejum);
		
		if(jejum < 0 && jejum > 1)  {
			printf("\nJejum inválido");
			return 0;
		}
		
		printf("Você está com sintomas gripais? [Digite 0 (FALSE) e 1 (TRUE)]: ");
		scanf("%i", &sintomas);
		
		if(sintomas < 0 && sintomas > 1) {
			printf("\nSintomas inválido");
			return 0;
		}
		
		if(idade > 18 && idade < 67 && peso > 50 && jejum == 0 && sintomas == 0) {
			printf("Doador %i, você PODE pode doar sangue", i);
			doadores++;
		} else {
			printf("Doador %i, você NÃO doar sangue", i);
			naoDoadores++;
		}
		
		printf("\n\n");
		
		i++;
	} while (idade != 0);
	
	// b) Indique quantos usuários são doadores e quantos nao são (1,0)
	printf("\nHá %i doadores de sangue\nHá %i não doadores de sangue\n", doadores, naoDoadores);

	system("pause");
	return 0;
}

