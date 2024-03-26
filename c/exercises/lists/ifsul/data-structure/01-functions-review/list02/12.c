#include <stdio.h>
#include <math.h>

int calc_pow(int base, int potencia) {
    // se todo expoente for n = 1, logo o resultado sempre igual a 1
    // qualquer base elevada a 1 é ela mesma
    if(potencia == 0) return 1;
    return base * calc_pow(base, potencia - 1); 
}

int main() {
    int result = calc_pow(3, 3); // Outputs: 2² = 4 | 3^3 = 27 | 4^4 = 256
    printf("%i", result);
    return 0;
}