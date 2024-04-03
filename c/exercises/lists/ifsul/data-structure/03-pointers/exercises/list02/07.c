/* 
Declare uma variável de tipo char e inicialize-a com um caractere. Em seguida, 
declare um ponteiro para essa variável e imprima o valor do caractere usando o 
ponteiro
*/

#include <stdio.h>

int main() {
    char carac = 'a';
    char *carac_ptr = &carac;

    printf("\nValue from ptr: '%c'\n", *carac_ptr);

    return 0;
}