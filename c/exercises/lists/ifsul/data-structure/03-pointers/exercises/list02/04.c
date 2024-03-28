#include <stdio.h>

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    int *p_first_element = &vet[0];
    int length = sizeof(vet) / sizeof(int);

    for(int i = 0; i < length; i++)
        // printf("%i\n", *p_first_element[i]);

    return 0;
}