#include <stdio.h>

#define QUANTITY_NOTES 3

double calc_school_avg(int quantityNotes, char type) {
	double notes[quantityNotes], sum = 0;

	for(int i = 0; i < quantityNotes; i++) {
		printf("Digite a nota %i: ", i + 1);
		scanf("%lf", &notes[i]);
		sum += notes[i];	
	}
	
	if(type == 'A')
		return sum / quantityNotes; 			
	else if(type == 'P')
		return (notes[0] * 5 + notes[1] * 3 + notes[2] * 2) / 10;
		
	return 0;
}

int main() {
  double result = calc_school_avg(QUANTITY_NOTES, 'A'); 
  printf("Media Aritmetica: %.2lf\n", result);
  return 0;
}

