#include <stdio.h>

int main() {
    int var = 1;
    int *ptr = &var;

    // Variável
    printf("\nValue: %i", var);
    printf("\nMemory address: %i", &var);
    
    // Ponteiro
    printf("\nValue from memory (pointer): %i", *ptr);
    printf("\nMemory address (pointer): %i", &ptr);

    return 0;
}