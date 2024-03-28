#include <stdio.h>

int main() {
    // Variáveis
    int v_int = 1;
    float v_float = 5.0;
    char v_char = 'a';
    
    // Ponteiros das variáveis
    int *p_int = &v_int;
    float *p_float = &v_float;
    char *p_char = &v_char;

    printf("\nAntes:\n%i %.2f %c\n", v_int, v_float, v_char);

    /* Modifique os valores de cada variável usando os ponteiros */    
    *p_int = 2;
    *p_float = 10.5;
    *p_char = 'b';

    /* Imprima os valores das variáveis antes e após a modificação */
    printf("\nDepois:\n%i %.2f %c", *p_int, *p_float, *p_char);

    return 0;
}