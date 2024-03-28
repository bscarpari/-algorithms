#include <stdio.h>

int main() {
    // Variável / Ponteiros
    int v_int01 = 10, v_int02 = 20;
    int *p_int01, *p_int02;

    // Atribuindo o endereco de memoria
    p_int01 = &v_int01;
    p_int02 = &v_int02;

    printf("\nEnderecos de memoria:\n%i\n%i\n", p_int01, p_int02);
    
    if(p_int01 > p_int02)
        printf("\nEndereco de memoria: %i\nValor: %i", p_int01, *p_int01);
    if(p_int02 > p_int01)
        printf("\nEndereco de memoria: %i\nValor: %i", p_int02, *p_int02);

    return 0;
}