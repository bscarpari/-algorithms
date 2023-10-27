#include <stdio.h>
 
int main() {
    int rest_y, years = 0, months = 0, days = 0;
    
    printf("Digite a idade em (dias): ");
    scanf("%i", &days);
    
    /* PROCESSAMENTO */
    // ano = days / 360;
    // meses = days / 30;
    // dias = o resto (menor que 30);
    years = days / 360; // 400 / 360 = 1,
	rest_y %= years %
	months = years % 30;
    days = months % days;
    
    printf("\n%i ano (s)\n%i mes (es)\n%i dia (s)", years, months, days);
    
    return 0;
}
