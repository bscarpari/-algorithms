#include <stdio.h>

//Declaração de uma struct que armazena datas
struct data{
	int dia;
	int mes;
	int ano;
};

int main(){

	//Declaração de uma variável do tipo struct data
	struct data calendario;

	//Imprimindo os valores dos campos dia, mes e ano, sem ter feito nenhuma atribuição
	printf("Dia %d, Mês %d, Ano %d\n\n", calendario.dia, calendario.mes, calendario.ano);

	//Atribuindo valores aos campos dia, mes e ano
	calendario.dia = 1;
	calendario.mes = 03;
	calendario.ano = 2024;

	//IMprimindo os valores dos campos dia, mes e ano, após atribuir valores a eles
	printf("Dia %d, Mês %d, Ano %d\n\n", calendario.dia, calendario.mes, calendario.ano);

}
