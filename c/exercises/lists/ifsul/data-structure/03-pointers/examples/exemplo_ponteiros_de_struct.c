#include <stdio.h>

//Declaração de uma struct 
struct data_t{
	int dia;
	int mes;
	int ano;
};


void main() {
	
	//Declaração de uma variável do tipo struct data_t
	struct data_t calendario;

	//Atribuindo valores aos campos da struct
	calendario.dia = 8;
	calendario.mes = 3;
	calendario.ano = 2024;

	//Declaração de um ponteiro do tipo struct data_t
	struct data_t *ptr;

	//Atribuindo o endereço da variável calendário para o ponteiro ptr
	ptr = &calendario;

	//Imprimindo o conteúdo dos campos da varíável struct por meio do ponteiro
	printf("O dia marcado no calendário é %d\n", ptr->dia);
	printf("O mês marcado no calendário é %d\n", ptr->mes);
	printf("O ano marcado no calendário é %d\n\n", ptr->ano);

	//Modificando os valores dos campos, por meio do ponteiro
	ptr->dia -= 2;
	ptr->mes++;

	//Imprimindo o conteúdo dos campos da varíável struct
	printf("O dia marcado no calendário é %d\n", calendario.dia);
	printf("O mês marcado no calendário é %d\n", calendario.mes);
	printf("O ano marcado no calendário é %d\n\n", calendario.ano);


}
