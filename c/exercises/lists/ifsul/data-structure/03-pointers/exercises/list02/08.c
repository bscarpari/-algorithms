/* 
Declare duas variáveis inteiras e atribua valores a elas. Declare dois ponteiros para 
inteiros e atribua os endereços das variáveis aos ponteiros. Em seguida, imprima 
os valores das variáveis usando os ponteiros.
*/

#include <stdio.h>

int main() {
    // Variáveis
    int f_var_int = 0, s_var_int = 1;
    
    // Ponteiros
    int *f_var_ptr, *s_var_ptr;

    // Atribuindo endereço de memória aos ponteiros
    f_var_ptr = &f_var_int;
    s_var_ptr = &s_var_int;

    printf("\nf_var_int = %i\ns_var_int = %i", *f_var_ptr, *s_var_ptr);

    return 0;
}