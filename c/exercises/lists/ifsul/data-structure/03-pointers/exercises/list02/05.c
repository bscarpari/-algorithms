#include <stdio.h>

int main() {
    char strArray[5] = {'a', 'b', 'c', 'd', 'e'};
    char *p_first_element = &strArray[0];

    int i;

    for(i = 0; i < 5; i++) 
        printf("%c\n", p_first_element[i]);

    return 0;
}