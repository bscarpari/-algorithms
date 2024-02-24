#include <stdio.h>
#include <locale.h>

// Refatorar, sum/result ficam "0".
int calculate(int n_grade_notes) {
	float grade_notes[n_grade_notes], sum, result;
	int grade_length = sizeof(grade_notes) / sizeof(int); // 3 

	for(int i = 0; i < grade_length; i++) {
		printf("Digite a sua nota %i: ", i+1);
		scanf("%f", &grade_notes[i]);
	} 
	
	for(int i = 0; i < grade_length; i++) {
		sum += grade_notes[grade_length];
	}
	
	/* Debug */
	printf("\ngrade_lenth: %i", grade_length);	
	printf("\nsum: %f", sum);
	printf("\nresult: %f", result);
	
	result = sum / grade_length;

	return result;
}

int main() {
	setlocale(LC_ALL, "");
	float result;
	
	int n_grade_notes = 3;	
	result = calculate(n_grade_notes);
	
	printf("\nA média do aluno é: %2.f", result);
	
	return 0;
}

