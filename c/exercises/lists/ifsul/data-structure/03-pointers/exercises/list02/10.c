/* 
Declare uma estrutura com alguns campos. Declare um ponteiro para essa 
estrutura e atribua a ele o endereço de uma variável dessa estrutura. 
Acesse os campos da estrutura usando o ponteiro e imprima seus valores.
*/

#include <stdio.h>

#include <stdio.h>
#include <string.h>

struct Car {
	char name[60];
	int year;
	int value;
};

int main() {
	struct Car car;
	struct Car *pdate = &car;

	pdate = &car;

	strcpy(car.name, "Fusca");
	car.year = 1970;
	car.value = 10000;

	printf("Car name: %s\n", pdate->name);
	printf("Car year: %d\n", pdate->year);
	printf("Car value: %d\n", pdate->value);

	return 0;
}