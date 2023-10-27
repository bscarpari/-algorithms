#include <stdio.h>

int main() {
    float raio, area;

    printf("\nDigite o raio do círculo: ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);

    printf("\nA area do círculo: %.2f", area);

    return 0;
}