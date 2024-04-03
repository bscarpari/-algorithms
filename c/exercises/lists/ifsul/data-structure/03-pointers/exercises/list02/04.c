#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int *p_first_element = &vet[0];
    int length = sizeof(vet) / sizeof(int);

    int i;

    for(i = 0; i < length; i++) 
    // TODO: revisar se estou printando os valores por meio do ponteiro
        printf("%d\n", p_first_element[i]);

    return 0;
}