#include <stdio.h>
#include <string.h>

struct Date {
	int day;
	int month;
	int year;
};

int main() {
	struct Date date;
	struct Date *pdate = &date;

	// Estou dizendo qual é a "referência de memória" para a variável que representa o
	pdate = &date;

	// Armazenando os valores diretamente na variável data
	printf("Digite uma data completa (formato: DD MM YYYY): ");
	scanf("%i %i %i", &date.day, &date.month, &date.year);

	// Após isso troque a data para dois anos, três meses e 15 dias depois
	pdate->year += 2;
	pdate->month += 3;
	pdate->day += 15;

	if (pdate->month > 12) {
		pdate->year += pdate->month / 12; // adiciona +1 ano (1 ano = 12 meses)
		pdate->month %= 12; // atribuo o resto para os meses
	}

	if(pdate->day > 31) {
		pdate->month += 1;
		pdate->day = 1; 
	}

	printf("Data modificada:\n%i/%i/%i", date.day, date.month, date.year);

	return 0;
}
