#include <stdio.h>

#define QUANTITY_NOTES 3

// TODO: finalizar
double calc_school_avg(int quantityNotes, char type) {
	double notes[quantityNotes], sum = 0;
	
	for(int i = 0; i < quantityNotes; i++) {
		printf("Digite a nota %i: ", i + 1);
		scanf("%lf", &notes[i]);
		sum += notes[i];	
	}
	
	if(type == 'A') {
		return (sum / quantityNotes; 			
	}
		
	return 
}

int main() {
  calc_school_avg(QUANTITY_NOTES); 
  return 0;
}

